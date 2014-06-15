#include "cirrlicht.h"

int main()
{
    irr_dimension2du dim = {800, 600};
    irr_IrrlichtDevice* device = irr_createDevice(EDT_OPENGL, dim, 16, false, false, false);

    irr_IrrlichtDevice_setWindowCaption(device, L"Hello World!");
    irr_IrrlichtDevice_setResizable(device, true);

    irr_IVideoDriver* driver = irr_IrrlichtDevice_getVideoDriver(device);

    irr_IGUIEnvironment* gui = irr_IrrlichtDevice_getGUIEnvironment(device);
    irr_ISceneManager* smgr = irr_IrrlichtDevice_getSceneManager(device);

    irr_recti pos = { 10,10,260,22 };
    irr_IGUIEnvironment_addStaticText(gui, L"Hello World!", pos, true);

    irr_IAnimatedMesh* mesh = irr_ISceneManager_getMesh(smgr, "../../media/sydney.md2");
    irr_IAnimatedMeshSceneNode* node = irr_ISceneManager_addAnimatedMeshSceneNode(smgr, mesh);

    irr_IAnimatedMeshSceneNode_setMaterialFlag(node, EMF_LIGHTING, false);
    irr_IAnimatedMeshSceneNode_setMD2Animation(node, EMAT_STAND);
    irr_IAnimatedMeshSceneNode_setMaterialTexture(node, 0,  irr_IVideoDriver_getTexture(driver, "../../media/sydney.bmp"));

    irr_vector3df camPos = {0,30,-40};
    irr_vector3df camLookAt = {0,5,0};
    irr_ISceneManager_addCameraSceneNode(smgr, 0, camPos, camLookAt);

    irr_SColor col = {255,100,101,140};

    while(irr_IrrlichtDevice_run(device))
    {
        irr_IVideoDriver_beginScene(driver, true, true, col);
        irr_ISceneManager_drawAll(smgr);
        irr_IGUIEnvironment_drawAll(gui);
        irr_IVideoDriver_endScene(driver);
    }
}
