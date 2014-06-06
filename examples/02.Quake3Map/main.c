#include "cirrlicht.h"
#include <stdio.h>
#include <string.h>

int main()
{
    dimension2du dim = {800, 600};
    irr_IrrlichtDevice* device = irr_createDevice(EDT_OPENGL, dim, 16, false, false, false);

    irr_IrrlichtDevice_setWindowCaption(device, L"Hello World!");
    irr_IrrlichtDevice_setResizable(device, true);

    irr_IVideoDriver* driver = irr_IrrlichtDevice_getVideoDriver(device);
    irr_ISceneManager* smgr = irr_IrrlichtDevice_getSceneManager(device);

    irr_IFileSystem* filesystem = irr_IrrlichtDevice_getFileSystem(device);
    irr_IFileSystem_addFileArchive(filesystem, "../media/map-20kdm2.pk3");

    irr_IAnimatedMesh* mesh = irr_ISceneManager_getMesh(smgr, "20kdm2.bsp");
    irr_IAnimatedMeshSceneNode* node = irr_ISceneManager_addAnimatedMeshSceneNode(smgr, mesh);

    vector3df pos = {-1300,-144,-1249};
    irr_ISceneNode_setPosition(node, pos);

    irr_ISceneNode_setMaterialFlag(node, EMF_LIGHTING, false);
    irr_ISceneManager_addCameraSceneNodeFPS(smgr);

    irr_ICursorControl* cursor = irr_IrrlichtDevice_getCursorControl(device);
    irr_ICursorControl_setVisible(cursor, false);

    irr_SColor col = {255,100,101,140};

    int lastFPS = -1;

    while(irr_IrrlichtDevice_run(device))
    {
        if (irr_IrrlichtDevice_isWindowActive(device))
        {
            irr_IVideoDriver_beginScene(driver, true, true, col);
            irr_ISceneManager_drawAll(smgr);
            irr_IVideoDriver_endScene(driver);

            int fps = irr_IVideoDriver_getFPS(driver);
            if (lastFPS != fps)
            {
                const wchar_t* str = L"CIrrlicht - Quake 3 Map example [";

                // Ugly hack to concatenating wchar_t :/
                wchar_t result[300];

                wcscpy(result, str);

                str = irr_IVideoDriver_getName(driver);
                wcscat(result, str);
                str = L"] FPS:";
                wcscat(result, str);

                wchar_t fpsTemp[300];
                swprintf(fpsTemp, L"%d", fps);
                wcscat(result, fpsTemp);

                irr_IrrlichtDevice_setWindowCaption(device, result);
                lastFPS = fps;
            }
        }
        else
            irr_IrrlichtDevice_yield(device);
    }
}
