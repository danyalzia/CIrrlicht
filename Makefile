VERSION_MAJOR = 1
VERSION_MINOR = 9
VERSION_RELEASE = 0

CIRRLICHT =  src/core.o  src/IAnimatedMesh.o src/IAnimatedMeshMD2.o src/IMeshSceneNode.o src/IAnimatedMeshSceneNode.o  src/ICursorControl.o  src/IFileSystem.o  src/IGUIEnvironment.o  src/IGUIFont.o  src/IGUIImage.o  src/IGUIStaticText.o  src/IMesh.o  src/IrrlichtDevice.o   src/ISceneManager.o   src/ISceneNode.o   src/IVideoDriver.o   
EXTRAOBJ =
LINKOBJ = $(CIRRLICHT)

IrrlichtHome = $(HOME)/irrlicht
CXXINCS = -I $(IrrlichtHome)/ -Iinclude
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
CFLAGS := -std=c++11 -O3 -fexpensive-optimizations

sharedlib sharedlib_osx: CXXFLAGS += -fPIC
sharedlib sharedlib_osx: CFLAGS += -fPIC

#multilib handling
ifeq ($(HOSTTYPE), x86_64)
LIBSELECT=64
endif

#Linux specific options
staticlib sharedlib install: SYSTEM = Linux
STATIC_LIB = libCIrrlicht.a
LIB_PATH = lib/$(SYSTEM)
INSTALL_DIR = /usr/local/lib
sharedlib install: SHARED_LIB = libCIrrlicht.so
sharedlib: LDFLAGS += -L/usr/X11R6/lib$(LIBSELECT) -lGL -lXxf86vm
sharedlib: LDFLAGS += -L/home/danyalzia/irrlicht/lib/Linux -lIrrlicht
staticlib sharedlib: CXXINCS += -I/usr/X11R6/include

VERSION = $(VERSION_MAJOR).$(VERSION_MINOR).$(VERSION_RELEASE)
SHARED_FULLNAME = $(SHARED_LIB).$(VERSION)
SONAME = $(SHARED_LIB).$(VERSION_MAJOR).$(VERSION_MINOR)

all linux: staticlib

sharedlib: $(LINKOBJ)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -shared -Wl,-soname,$(SONAME) -o $(SHARED_FULLNAME) $^ $(LDFLAGS)
	mkdir -p $(LIB_PATH)
	mv $(SHARED_FULLNAME) $(LIB_PATH)

$(STATIC_LIB): $(LINKOBJ)
	$(AR) rs $@ $^

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

# Create object files from objective-c code
%.o:%.mm
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

ifneq ($(MAKECMDGOALS),clean)
-include $(LINKOBJ:.o=.d)
endif

help:
	@echo "Available targets for Irrlicht"
	@echo " sharedlib: Build shared library Irrlicht.so for Linux"
	@echo " staticlib: Build static library Irrlicht.a for Linux"
	@echo " install: Copy shared library to /usr/local/lib"
	@echo ""
	@echo " sharedlib_win32: Build shared library Irrlicht.dll for Windows"
	@echo " staticlib_win32: Build static library Irrlicht.a for Windows"
	@echo ""
	@echo " clean: Clean up directory"

# Cleans all temporary files and compilation results.
clean:
	$(RM) $(LINKOBJ) $(SHARED_FULLNAME) $(STATIC_LIB) $(LINKOBJ:.o=.d)

.PHONY: all sharedlib staticlib sharedlib_win32 staticlib_win32 help install clean

