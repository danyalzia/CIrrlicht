VERSION_MAJOR = 1
VERSION_MINOR = 9
VERSION_RELEASE = 0

#List of object files, separated based on engine architecture
CIRROBJ = irrlicht.o core.o video.o scene.o gui.o io.o

# Next variable is for additional scene nodes etc. of customized Irrlicht versions
LINKOBJ = $(CIRROBJ)

###############
#Compiler flags
CXXINCS = -I../include -I/home/danyalzia/irrlicht/include  -IIrrlicht
CPPFLAGS += $(CXXINCS)
CXXFLAGS += -Wall -pipe -fno-exceptions -fno-rtti -fstrict-aliasing
ifndef NDEBUG
CXXFLAGS += -g -D_DEBUG
else
CXXFLAGS += -fexpensive-optimizations -O3
endif
ifdef PROFILE
CXXFLAGS += -pg
endif
CFLAGS := -O3 -fexpensive-optimizations -DPNG_THREAD_UNSAFE_OK -DPNG_NO_MMX_CODE -DPNG_NO_MNG_FEATURES

sharedlib sharedlib_osx: CXXFLAGS += -fPIC
sharedlib sharedlib_osx: CFLAGS += -fPIC

#multilib handling
ifeq ($(HOSTTYPE), x86_64)
LIBSELECT=64
endif

#Linux specific options
staticlib sharedlib install: SYSTEM = Linux
STATIC_LIB = libCIrrlicht.a
LIB_PATH = ../../lib/$(SYSTEM)
INSTALL_DIR = /usr/local/lib
sharedlib install: SHARED_LIB = libCIrrlicht.so
sharedlib: LDFLAGS += -L/usr/X11R6/lib$(LIBSELECT) -lGL -lXxf86vm
staticlib sharedlib: CXXINCS += -I/usr/X11R6/include

VERSION = $(VERSION_MAJOR).$(VERSION_MINOR).$(VERSION_RELEASE)
SHARED_FULLNAME = $(SHARED_LIB).$(VERSION)
SONAME = $(SHARED_LIB).$(VERSION_MAJOR).$(VERSION_MINOR)

####################
# All target, builds Irrlicht as static lib (libICrrlicht.a) and copies it into lib/Linux
all linux: staticlib

# Builds Irrlicht as shared lib (libCIrrlicht.so.versionNumber) and copies it into lib/Linux
sharedlib: $(LINKOBJ)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -shared -Wl,-soname,$(SONAME) -o $(SHARED_FULLNAME) $^ $(LDFLAGS)
	mkdir -p $(LIB_PATH)
	cp $(SHARED_FULLNAME) $(LIB_PATH)

# Builds Irrlicht as static lib (libCIrrlicht.a)
$(STATIC_LIB): $(LINKOBJ)
	$(AR) rs $@ $^

# Copies static lib into lib/Linux
staticlib staticlib_osx: $(STATIC_LIB)
	mkdir -p $(LIB_PATH)
	cp $^ $(LIB_PATH)

# Builds Irrlicht as dll (Irrlicht.dll) into ../../bin/Win32-gcc
all_win32 win32: sharedlib_win32
sharedlib_win32: $(IRRLICHT_DLL)
../../bin/Win32-gcc/Irrlicht.dll: $(LINKOBJ)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -shared -o $@ $^ $(LDFLAGS) -Wl,--out-implib,../../lib/Win32-gcc/$(STATIC_LIB)
# Copies static lib into /lib/Win32-gcc
staticlib_win32: $(STATIC_LIB)
	cp $^ $(LIB_PATH)

# Builds Irrlicht as shared lib (libIrrlicht.so.versionNumber) and copies it into /lib/MacOSX
sharedlib_osx: $(LINKOBJ)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -dynamiclib -Wl,-install_name,$(SONAME) -o $(SHARED_FULLNAME) $^ $(LDFLAGS)
	cp $(SHARED_FULLNAME) $(LIB_PATH)

# Installs Irrlicht if it was created as shared lib
install install_osx:
	$(RM) -r $(INSTALL_DIR)/../include/irrlicht
	mkdir -p $(INSTALL_DIR)/../include/irrlicht
	cp ../../include/*.h $(INSTALL_DIR)/../include/irrlicht/
	cp $(LIB_PATH)/$(SHARED_FULLNAME) $(INSTALL_DIR)
	cd $(INSTALL_DIR) && ln -s -f $(SHARED_FULLNAME) $(SONAME)
	cd $(INSTALL_DIR) && ln -s -f $(SONAME) $(SHARED_LIB)
#	ldconfig -n $(INSTALL_DIR)

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

