[![Stories in Ready](https://badge.waffle.io/Artistic-Games/CIrrlicht.png?label=ready&title=Ready)](https://waffle.io/Artistic-Games/CIrrlicht)
[![Build Status](https://travis-ci.org/Artistic-Games/CIrrlicht.png?branch=master)](https://travis-ci.org/Artistic-Games/CIrrlicht)

CIrrlicht - C Bindings for Irrlicht Engine
==========================================

Details
-------

CIrrlicht is the C Bindings for Irrlicht Engine which makes it possible to use Irrlicht Engine from C. The original intention of this software is to make Irrlicht cross-language by making it easy to bind Irrlicht Engine for those languages that directly support C but not C++ such as D, Haskell, Swift, Lua, Python etc.

It is used as a backend for [DIrrlicht](https://github.com/Artistic-Games/DIrrlicht)

Status
------

It's in very early beta stage. Several functions still aren't wrapped. It is subject to API changes.

Installation
------------

On Windows open `Dependencies_Path.bat` in directory and change environment variable of `IRRLICHT_ROOT` to the directory of Irrlicht and run it, then in `src/` open the project file (Code::Blocks is only supported) and compile. You will then find the compiled library in `lib/Win32-gcc`.

On Linux, open Makefile and set `IrrlichtHome` to the root directory of Irrlicht and then use `make sharedlib` to create a shared library.

License
-------

It is released under permissive zlib license same as Irrlicht Engine.
