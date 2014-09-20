#include <cirrlicht.h>
#include <stdio.h>
  
bool KeyIsDown[KEY_KEY_CODES_COUNT];

bool IsKeyDown(EKEY_CODE keyCode) {
	return KeyIsDown[keyCode];
}

bool OnEvent(const irr_SEvent& event) {
	if (event.EventType == EET_KEY_INPUT_EVENT) {
		KeyIsDown[event.KeyInput.Key] = event.KeyInput.PressedDown;
            
        return false;
	}
}

int main() {
    irr_IrrlichtDevice* device = irr_createDevice(EDT_OPENGL, 640, 480, 16, false, false, false);
	
	for (unsigned int i = 0; i < KEY_KEY_CODES_COUNT; ++i)
		KeyIsDown[i] = false;
            
	irr_IrrlichtDevice_setEventReceiver(device, &OnEvent);
    irr_IrrlichtDevice_setWindowCaption(device, L"Hello World!");
    irr_IrrlichtDevice_setResizable(device, true);

    irr_IVideoDriver* driver = irr_IrrlichtDevice_getVideoDriver(device);
    irr_IGUIEnvironment* gui = irr_IrrlichtDevice_getGUIEnvironment(device);
    irr_ISceneManager* smgr = irr_IrrlichtDevice_getSceneManager(device);

    irr_IMeshSceneNode* node = irr_ISceneManager_addSphereSceneNode(smgr);
    if (node) {
		irr_vector3df pos = {0,0,30};
		irr_ISceneNode_setPosition((irr_ISceneNode*)(node), pos);
		irr_ISceneNode_setMaterialTexture((irr_ISceneNode*)(node), 0, irr_IVideoDriver_getTexture(driver, "../../media/wall.bmp"));
		irr_ISceneNode_setMaterialFlag((irr_ISceneNode*)(node), EMF_LIGHTING, false);
	}
	
	irr_IMeshSceneNode* n = irr_ISceneManager_addCubeSceneNode(smgr);
	if (n) {
		irr_ISceneNode_setMaterialTexture((irr_ISceneNode*)(n), 0, irr_IVideoDriver_getTexture(driver, "../../media/t351sml.jpg"));
		irr_ISceneNode_setMaterialFlag((irr_ISceneNode*)(n), EMF_LIGHTING, false);
		irr_vector3df pos = {0,0,30};
		irr_ISceneNodeAnimator* anim = irr_ISceneManager_createFlyCircleAnimator(smgr, pos, 20.f);
		if (anim) {
			irr_ISceneNode_addAnimator((irr_ISceneNode*)(n), anim);
		}
	}
	
	irr_IAnimatedMeshSceneNode* anms = irr_ISceneManager_addAnimatedMeshSceneNode(smgr, irr_ISceneManager_getMesh(smgr, "../../media/ninja.b3d"));
	
	if (anms) {
		irr_vector3df vec1 = {100,0,60};
		irr_vector3df vec2 = {-100,0,60};
		irr_ISceneNodeAnimator* anim = irr_ISceneManager_createFlyStraightAnimator(smgr, vec1, vec2, 3500, true);
		if (anim) {
			irr_IAnimatedMeshSceneNode_addAnimator(anms, anim);
		}
		
		irr_IAnimatedMeshSceneNode_setMaterialFlag(anms, EMF_LIGHTING, false);
		irr_IAnimatedMeshSceneNode_setFrameLoop(anms, 0, 13);
		irr_IAnimatedMeshSceneNode_setAnimationSpeed(anms, 15);
		irr_vector3df scale = {2.f,2.f,2.f};
		irr_vector3df rot = {0,-90,0};
		irr_IAnimatedMeshSceneNode_setScale(anms, scale);
		irr_IAnimatedMeshSceneNode_setRotation(anms, rot);
	}
	
	irr_ISceneManager_addCameraSceneNodeFPS(smgr);
	irr_ICursorControl* cursorctl = irr_IrrlichtDevice_getCursorControl(device);
	irr_ICursorControl_setVisible(cursorctl, false);
	
	irr_vector2di imagepos = {10, 20};
	irr_IGUIEnvironment_addImage(gui, irr_IVideoDriver_getTexture(driver, "../../media/irrlichtlogoalpha2.tga"), imagepos);
	
	irr_recti textpos = {10, 10, 400, 20};
	irr_IGUIStaticText* diagnostics = irr_IGUIEnvironment_addStaticText(gui, L"", textpos);
	irr_SColor textcol = {255, 255, 255, 0};
	irr_IGUIStaticText_setOverrideColor(diagnostics, textcol);
	
	int lastFPS = -1;
	irr_ITimer* timer = irr_IrrlichtDevice_getTimer(device);
	unsigned int then = irr_ITimer_getTime(timer);
	
	const float MOVEMENT_SPEED = 5.f;
	irr_SColor col = {255,113,113,133};
    while(irr_IrrlichtDevice_run(device)) {
		const unsigned int now = irr_ITimer_getTime(timer);
		const float frameDeltaTime = (float)(now - then) / 1000.f;
		then = now;
		
		irr_vector3df nodePosition = irr_ISceneNode_getPosition((irr_ISceneNode*)(node));
		
		if (IsKeyDown(KEY_KEY_W)) {
			nodePosition.y += MOVEMENT_SPEED * frameDeltaTime;
		}
		
		else if (IsKeyDown(KEY_KEY_S)) {
			nodePosition.y -= MOVEMENT_SPEED * frameDeltaTime;
		}
		
		if (IsKeyDown(KEY_KEY_A)) {
			nodePosition.x -= MOVEMENT_SPEED * frameDeltaTime;
		}
		
		else if (IsKeyDown(KEY_KEY_D)) {
			nodePosition.x += MOVEMENT_SPEED * frameDeltaTime;
		}
		
		irr_ISceneNode_setPosition((irr_ISceneNode*)(node), nodePosition);
		
        irr_IVideoDriver_beginScene(driver, true, true, col);
        irr_ISceneManager_drawAll(smgr);
        irr_IGUIEnvironment_drawAll(gui);
        irr_IVideoDriver_endScene(driver);
        
        int fps = irr_IVideoDriver_getFPS(driver);
		if (lastFPS != fps) {
			const wchar_t* str = L"CIrrlicht - Movement example [";

			// Ugly hack for concatenating wchar_t :/
			wchar_t result[300];

			wcscpy(result, str);

			str = irr_IVideoDriver_getName(driver);
			wcscat(result, str);
			str = L"] FPS:";
			wcscat(result, str);

			wchar_t fpsTemp[300];
			swprintf(fpsTemp, 300, L"%d", fps);
			wcscat(result, fpsTemp);
			
			irr_IrrlichtDevice_setWindowCaption(device, result);
			lastFPS = fps;
		}
    }

    irr_IrrlichtDevice_drop(device);
}
