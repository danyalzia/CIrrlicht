CIrrlicht - C Bindings for Irrlicht Engine
==========================================

Details
-------

CIrrlicht is the C Bindings for Irrlicht Engine which makes it possible to use Irrlicht Engine from C. The original intention of this software is to make Irrlicht cross-language by making it easy to make bindings for those languages that directly support C but not C++ such as D, Haskell, Swift, Lua, Python etc.

Installation
------------

On Windows open Dependencies_Path.bat in directory and change environment variable of IRRLICHT_ROOT to the directory of Irrlicht and run it, then in "src/" open the project file (Code::Blocks is only supported) and compile. You will then find the compiled library in "lib/".

On Linux, open Makefile in src/ and set IrrlichtHome to the root directory of Irrlicht and then use ```make``` in directory to compile.

License
-------

It is released under permissive zlib license same as Irrlicht Engine.