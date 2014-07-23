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

On Windows open `Dependencies_Path.bat` in directory and change environment variable of `IRRLICHT_ROOT` to the directory of Irrlicht and run it, then in use `make` or `make sharelib` to create static/dynamic library.

On Linux, open Makefile and set `IrrlichtHome` to the root directory of Irrlicht and then use ``make` or `make sharelib` to create static/dynamic library.

The compiled library will be available in `lib/`.

Usage
-----

CIrrlicht is based on Irrlicht which separates the interface from implementation, which means every method of base class must be implementated as separate functions instead of casting pointer to base class. Following is the short example that can be used to test CIrrlicht, it shows the simple window with a black background that can be minimized, resized and closed:

--------------------------------------------
```C
#include <cirrlicht.h>

int main() {
    irr_dimension2du dim = {800, 600};
    irr_IrrlichtDevice* device = irr_createDevice(EDT_OPENGL, dim);
    
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

CIrrlicht is currently being used as a backend for DIrrlicht, that means the quality of DIrrlicht is highly dependent on it. The priority is to make the library stable enough that don't break DIrrlicht. Feel free to open issues or send pull requests.

Before making a commit, please try to adhere to the [coding style](https://github.com/Artistic-Games/DIrrlicht/blob/master/CONTRIBUTING.md) of DIrrlicht.

License
-------

It is released under permissive zlib license same as Irrlicht Engine.
