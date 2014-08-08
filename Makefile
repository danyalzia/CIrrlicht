# CIrrlicht follows Irrlicht version numbering
VERSION_MAJOR = 1
VERSION_MINOR = 9
VERSION_RELEASE = 0

CIRRLICHT =  src/core.o  src/animatedmesh.o src/animatedmeshmd2.o src/meshscenenode.o src/animatedmeshscenenode.o  src/cursorcontrol.o  src/filesystem.o src/readfile.o src/guienvironment.o  src/guifont.o  src/guiimage.o  src/guistatictext.o  src/imagewriter.o src/imageloader.o src/mesh.o  src/irrlichtdevice.o   src/scenemanager.o   src/scenenode.o src/videodriver.o src/eventreceiver.o src/timer.o src/randomizer.o src/osoperator.o src/logger.o src/convertevent.o src/writefile.o src/xmlwriter.o src/filelist.o
EXTRAOBJ =
LINKOBJ = $(CIRRLICHT)

IrrlichtHome = irrlicht
CXXINCS = -I $(IrrlichtHome)/include -Iinclude
CPPFLAGS += $(CXXINCS)
CXXFLAGS += -std=c++11 -Wall -pipe -fno-exceptions -fno-rtti -fstrict-aliasing
ifndef NDEBUG
CXXFLAGS += -g -D_DEBUG
else
CXXFLAGS += -fexpensive-optimizations -O3
endif
ifdef PROFILE
CXXFLAGS += -pg
endif
CFLAGS := -std=c++11

MACHINE := $(shell uname -m)

# multilib handling
ifeq ($(MACHINE), x86_64)
LIBSELECT=64
endif

# Linux specific options
staticlib sharedlib install: SYSTEM = Linux
STATIC_LIB = libCIrrlicht.a
LIB_PATH = lib
INSTALL_DIR = /usr/local/lib
sharedlib install: SHARED_LIB = libCIrrlicht.so
sharedlib: LDFLAGS += -L/usr/X11R6/lib$(LIBSELECT) -lGL -lXxf86vm
sharedlib: LDFLAGS += -L$(IrrlichtHome)/lib/Linux -lIrrlicht
staticlib sharedlib: CXXINCS += -I/usr/X11R6/include

ifeq ($(MACHINE), x86_64)
sharedlib: CPPFLAGS += -fPIC
endif

VERSION = $(VERSION_MAJOR).$(VERSION_MINOR).$(VERSION_RELEASE)
SHARED_FULLNAME = $(SHARED_LIB).$(VERSION)
SONAME = $(SHARED_LIB).$(VERSION_MAJOR).$(VERSION_MINOR)

all: sharedlib

sharedlib: $(LINKOBJ)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -shared -Wl,-soname,$(SONAME) -o $(SHARED_FULLNAME) $^ $(LDFLAGS)
	mkdir -p $(LIB_PATH)
	mv $(SHARED_FULLNAME) $(LIB_PATH)

$(STATIC_LIB): $(LINKOBJ)
	$(AR) rs $@ $^

install:
	cp $(LIB_PATH)/$(SHARED_FULLNAME) $(INSTALL_DIR)
	cd $(INSTALL_DIR) && ln -s -f $(SHARED_FULLNAME) $(SONAME)
	cd $(INSTALL_DIR) && ln -s -f $(SONAME) $(SHARED_LIB)

staticlib staticlib_osx: $(STATIC_LIB)
	mkdir -p $(LIB_PATH)
	mv $^ $(LIB_PATH)

TAGS:
	ctags *.cpp ../../include/*.h *.h

# Create dependency files for automatic recompilation
%.d:%.cpp
	$(CXX) $(CPPFLAGS) -MM -MF $@ $<

# Create dependency files for automatic recompilation
%.d:%.c
	$(CC) $(CPPFLAGS) -MM -MF $@ $<

ifneq ($(MAKECMDGOALS),clean)
-include $(LINKOBJ:.o=.d)
endif

help:
	@echo "Available targets for DIrrlicht"
	@echo " sharedlib: Build shared library DIrrlicht.so for Linux"
	@echo " staticlib: Build static library DIrrlicht.a for Linux"
	@echo " install: Copy shared library to /usr/local/lib"
	@echo ""
	@echo " sharedlib_win32: Build shared library DIrrlicht.dll for Windows"
	@echo " staticlib_win32: Build static library DIrrlicht.a for Windows"
	@echo ""
	@echo " clean: Clean up directory"

# Cleans all temporary files and compilation results.
clean:
	$(RM) $(LINKOBJ) $(SHARED_FULLNAME) $(STATIC_LIB) $(LINKOBJ:.o=.d)

.PHONY: all sharedlib staticlib help install clean

