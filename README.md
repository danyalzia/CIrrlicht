[![Build Status](https://travis-ci.org/danyalzia/CIrrlicht.png?branch=master)](https://travis-ci.org/danyalzia/CIrrlicht)

CIrrlicht - C Bindings for Irrlicht Engine
==========================================

Details
-------

CIrrlicht is the C Bindings for Irrlicht Engine which makes it possible to use Irrlicht Engine from C. The original intention of this software is to make Irrlicht cross-language by making it easy to bind Irrlicht Engine for those languages that directly support C but not C++ such as D, Haskell, Swift, Lua, Python etc.

It is used as a backend for [DIrrlicht](https://github.com/danyalzia/DIrrlicht)

Installation
------------

On Windows open `Dependencies_Path.bat` in directory and change environment variable of `IRRLICHT_ROOT` to the directory of Irrlicht and run it, then in `src/` open the project file (Code::Blocks is only supported) and compile. You will then find the compiled library in `lib/Win32-gcc`.

On Linux, open Makefile and set `IrrlichtHome` to the root directory of Irrlicht and then use `make` to compile.

License
-------

It is released under permissive zlib license same as Irrlicht Engine.