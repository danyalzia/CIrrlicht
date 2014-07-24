# Contributing
CIrrlicht wraps the C++ classes of Irrlicht Engine, so we need to make sure to follow the proper naming convention and rules for things like namespaces, class methods etc to make things consistent. Before making a commit, please try to adhere to the following guidelines:

## Coding Style

### Identation/Whitespace
CIrrlicht follows the rule of identing the blocks with tab of 4 spaces. Do not use spaces!

### Opening braces
Braces should be open on the same line on declaration

```cpp
void irr_IrrlichtDevice_drop(irr_IrrlichtDevice* device) {
    reinterpret_cast<irr::IrrlichtDevice*>(device)->drop();
}
```
### Enum members
Enums are represented with whole CAPITALS to emphasizing constant.

```cpp
enum Color {
    RED,
    BLUE,
    GREEN
};
```
### CIrrlicht specific
We use prefix `irr_` to indicate that they are the part of Irrlicht. Use `_` to separate the method from class name.

```cppp
bool irr_IrrlichtDevice_run(irr_IrrlichtDevice* device) {
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->run();
}
```
