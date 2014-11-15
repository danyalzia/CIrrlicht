Only for the "unforked" repositry:

[![Build Status](https://travis-ci.org/Artistic-Games/CIrrlicht.png?branch=master)](https://travis-ci.org/Artistic-Games/CIrrlicht)
[![Stories in Ready](https://badge.waffle.io/Artistic-Games/CIrrlicht.png?label=ready&title=Ready)](https://waffle.io/Artistic-Games/CIrrlicht)

CIrrlicht - C Bindings of Irrlicht Engine
==========================================

Details
-------

CIrrlicht is the C Bindings/Interface of Irrlicht Engine which makes it possible to use Irrlicht Engine from C. The original intention of this software is to make Irrlicht cross-language by making it easy to bind Irrlicht Engine for those languages that directly support C but not C++ such as D, Haskell, Swift etc.

It is used as a backend for [DIrrlicht](https://github.com/Artistic-Games/DIrrlicht)

Status
------

It's in very early beta stage. Several functions still aren't wrapped. It is subject to API changes.

Checkout the [Road Map](https://github.com/Artistic-Games/CIrrlicht/wiki/Roadmap) for the list of things that still needs to be done.

Installation
------------
###Linux
Open Makefile and set `IrrlichtHome` to the root directory of Irrlicht. If you don't have Irrlicht installed already then you can simply get it through `svn checkout svn://svn.code.sf.net/p/irrlicht/code/trunk irrlicht` in the same directory as CIrrlicht, that way you won't have to set `IrrlichtHome` yourself. Please note that you need to compile Irrlicht as a static library.

To compile and install dynamic library on Linux:
```
$ make sharedlib
$ sudo make install
```

###Windows with Visual Studio
Get the lastest Irrlicht Sourcecode from `svn://svn.code.sf.net/p/irrlicht/code/trunk` using e.g. [TortoiseSVN](http://tortoisesvn.net) or with git from https://github.com/zaki/irrlicht into the CIrrlicht directory. Then you must compile it. Simply open the Visual Studio Solution in [CIrrlicht folder]/irrlicht/source/ for your VS version and compile it. I only tried it with the Release Configuration which compiles an Dynamic Library, but an the Release Static configuration should also work. 

Now you must open the Visual Studio Solution in the windows folder and compile it. When it's compiling done, you will your find .dll and .lib files in the bin folder

Usage
-----

CIrrlicht is based on Irrlicht which separates the interface from implementation, which means every method of base class must be implementated as separate functions instead of casting pointer to base class. Following is the short example that can be used to test CIrrlicht, it shows the simple window with a black background that can be minimized, resized and closed:

--------------------------------------------
```C
#include <cirrlicht.h>

int main() {
    irr_IrrlichtDevice* device = irr_createDevice(EDT_OPENGL, 800, 600);
    
    irr_IrrlichtDevice_setWindowCaption(device, L"CIrrlicht Test!");
    irr_IrrlichtDevice_setResizable(device, true);
    
    irr_IVideoDriver* driver = irr_IrrlichtDevice_getVideoDriver(device);
    while(irr_IrrlichtDevice_run(device)) {
        irr_IVideoDriver_beginScene(driver);
        irr_IVideoDriver_endScene(driver);
    }
    
    irr_IrrlichtDevice_drop(device);
}
```

See [wiki](https://github.com/Artistic-Games/CIrrlicht/wiki/) for more usage and tutorials

Contributing
------------

CIrrlicht is currently being used as a backend for DIrrlicht, that means the quality of DIrrlicht is highly dependent on it. The priority is to make the library stable enough that doesn't break DIrrlicht. Feel free to open issues or send pull requests.

Before making a commit, please try to adhere to the [coding style](https://github.com/Artistic-Games/CIrrlicht/blob/master/CONTRIBUTING.md) of CIrrlicht.

License
-------

It is released under permissive zlib license same as Irrlicht Engine.
