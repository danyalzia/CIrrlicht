/*
    CIrrlicht - C Bindings for Irrlicht Engine

    Copyright (C) 2014- Danyal Zia (catofdanyal@yahoo.com)

    This software is provided 'as-is', without any express or
    implied warranty. In no event will the authors be held
    liable for any damages arising from the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute
    it freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented;
       you must not claim that you wrote the original software.
       If you use this software in a product, an acknowledgment
       in the product documentation would be appreciated but
       is not required.

    2. Altered source versions must be plainly marked as such,
       and must not be misrepresented as being the original software.

    3. This notice may not be removed or altered from any
       source distribution.
*/

#pragma once

#include "compileconfig.h"
#include "core.h"
#include "color.h"
#include "cirrlicht.h"

//! Enumeration for render passes.
/** A parameter passed to the registerNodeForRendering() method of the ISceneManager,
specifying when the node wants to be drawn in relation to the other nodes. */
enum E_SCENE_NODE_RENDER_PASS
{
    //! No pass currently active
    ESNRP_NONE =0,

    //! Camera pass. The active view is set up here. The very first pass.
    ESNRP_CAMERA =1,

    //! In this pass, lights are transformed into camera space and added to the driver
    ESNRP_LIGHT =2,

    //! This is used for sky boxes.
    ESNRP_SKY_BOX =4,

    //! All normal objects can use this for registering themselves.
    /** This value will never be returned by
    ISceneManager::getSceneNodeRenderPass(). The scene manager
    will determine by itself if an object is transparent or solid
    and register the object as SNRT_TRANSPARENT or SNRT_SOLD
    automatically if you call registerNodeForRendering with this
    value (which is default). Note that it will register the node
    only as ONE type. If your scene node has both solid and
    transparent material types register it twice (one time as
    SNRT_SOLID, the other time as SNRT_TRANSPARENT) and in the
    render() method call getSceneNodeRenderPass() to find out the
    current render pass and render only the corresponding parts of
    the node. */
    ESNRP_AUTOMATIC =24,

    //! Solid scene nodes or special scene nodes without materials.
    ESNRP_SOLID =8,

    //! Transparent scene nodes, drawn after solid nodes. They are sorted from back to front and drawn in that order.
    ESNRP_TRANSPARENT =16,

    //! Transparent effect scene nodes, drawn after Transparent nodes. They are sorted from back to front and drawn in that order.
    ESNRP_TRANSPARENT_EFFECT =32,

    //! Drawn after the solid nodes, before the transparent nodes, the time for drawing shadow volumes
    ESNRP_SHADOW =64
};

struct irr_IrrlichtDevice;

struct irr_ISceneManager;
typedef struct irr_ISceneManager irr_ISceneManager;

struct irr_ITexture;
struct irr_IMeshCache;
struct irr_IVideoDriver;
struct irr_IGUIEnvironment;
struct irr_IFileSystem;
struct irr_IVolumeLightSceneNode;
struct irr_IMeshSceneNode;
struct irr_ISceneNode;
struct irr_IAnimatedMeshSceneNode;
struct irr_ICameraSceneNode;
struct irr_SKeyMap;
struct irr_ILightSceneNode;
struct irr_IBillboardSceneNode;
struct irr_IParticleSystemSceneNode;
struct irr_ITerrainSceneNode;
struct irr_IMeshBuffer;
struct irr_IShader;
struct irr_IDummyTransformationSceneNode;
struct irr_ITextSceneNode;
struct irr_IGUIFont;
struct irr_IBillboardTextSceneNode;
struct irr_SMaterial;
struct irr_IImage;
struct irr_ISceneNodeAnimator;
struct irr_ISceneNodeAnimatorCollisionResponse;
struct irr_ITriangleSelector;
struct irr_IMetaTriangleSelector;
struct irr_IMeshLoader;
struct irr_ISceneLoader;
struct irr_ISceneCollisionManager;
struct irr_IMeshManipulator;
struct irr_SEvent;
struct irr_IAttributes;
struct irr_ISceneNodeFactory;
struct irr_ISceneNodeAnimatorFactory;
struct irr_ISceneUserDataSerializer;
struct irr_IMeshWriter;
struct irr_ISkinnedMesh;
struct irr_ILightManager;
struct irr_IGeometryCreator;

CIRRLICHT_API irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file);
CIRRLICHT_API irr_IMeshCache* irr_ISceneManager_getMeshCache(irr_ISceneManager* smgr);
CIRRLICHT_API irr_IVideoDriver* irr_ISceneManager_getVideoDriver(irr_ISceneManager* smgr);
CIRRLICHT_API irr_IGUIEnvironment* irr_ISceneManager_getGUIEnvironment(irr_ISceneManager* smgr);
CIRRLICHT_API irr_IFileSystem* irr_ISceneManager_getFileSystem(irr_ISceneManager* smgr);
CIRRLICHT_API irr_IVolumeLightSceneNode* irr_ISceneManager_addVolumeLightSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent=0, int id=-1, unsigned int subdivU = 32, unsigned int subdivV = 32, irr_SColor foot = {51, 0, 230, 180}, irr_SColor tail = {0, 0, 0, 0}, irr_vector3df position = {0,0,0}, irr_vector3df rotation = {0,0,0}, irr_vector3df scale = {1.0f, 1.0f, 1.0f});
CIRRLICHT_API irr_IMeshSceneNode* irr_ISceneManager_addCubeSceneNode(irr_ISceneManager* smgr, float size=10.0f, irr_ISceneNode* parent=0, int id=-1, irr_vector3df position = {0,0,0}, irr_vector3df rotation = {0,0,0}, irr_vector3df scale = {1.0f, 1.0f, 1.0f});
CIRRLICHT_API irr_IMeshSceneNode* irr_ISceneManager_addSphereSceneNode(irr_ISceneManager* smgr, float radius=5.0f, int polyCount=16, irr_ISceneNode* parent=0, int id=-1, irr_vector3df position = {0,0,0}, irr_vector3df rotation = {0,0,0}, irr_vector3df scale = {1.0f, 1.0f, 1.0f});
CIRRLICHT_API irr_IAnimatedMeshSceneNode* irr_ISceneManager_addAnimatedMeshSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh, irr_ISceneNode* parent=0, int id=-1, irr_vector3df position = {0,0,0}, irr_vector3df rotation = {0,0,0}, irr_vector3df scale = {1.0f, 1.0f, 1.0f}, bool alsoAddIfMeshPointerZero=false);
CIRRLICHT_API irr_IMeshSceneNode* irr_ISceneManager_addMeshSceneNode(irr_ISceneManager* smgr, irr_IMesh* mesh, irr_ISceneNode* parent=0, int id=-1, irr_vector3df position = {0,0,0}, irr_vector3df rotation = {0,0,0}, irr_vector3df scale = {1.0f, 1.0f, 1.0f}, bool alsoAddIfMeshPointerZero=false);
CIRRLICHT_API irr_ISceneNode* irr_ISceneManager_addWaterSurfaceSceneNode(irr_ISceneManager* smgr, irr_IMesh* mesh,
        float waveHeight=2.0f, float waveSpeed=300.0f, float waveLength=10.0f,
        irr_ISceneNode* parent=0, int id=-1,
        irr_vector3df position = {0,0,0},
        irr_vector3df rotation = {0,0,0},
        irr_vector3df scale = {1.0f, 1.0f, 1.0f});
CIRRLICHT_API irr_IMeshSceneNode* irr_ISceneManager_addOctreeSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh, irr_ISceneNode* parent=0,
        int id=-1, int minimalPolysPerNode=512, bool alsoAddIfMeshPointerZero=false);
CIRRLICHT_API irr_IMeshSceneNode* irr_ISceneManager_addOctreeSceneNode2(irr_ISceneManager* smgr, irr_IMesh* mesh, irr_ISceneNode* parent=0,
        int id=-1, int minimalPolysPerNode=256, bool alsoAddIfMeshPointerZero=false);

CIRRLICHT_API irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent, irr_vector3df pos, irr_vector3df lookAt, int id=-1, bool makeActive=true);
CIRRLICHT_API irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeMaya(irr_ISceneManager* smgr, irr_ISceneNode* parent=0,
        float rotateSpeed=-1500.f, float zoomSpeed=200.f,
        float translationSpeed=1500.f, int id=-1, float distance=70.f,
        bool makeActive=true);

CIRRLICHT_API irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeFPS(irr_ISceneManager* smgr, irr_ISceneNode* parent = 0,
        float rotateSpeed = 100.0f, float moveSpeed = 0.5f, int id=-1,
        irr_SKeyMap* keyMapArray=0, int keyMapSize=0, bool noVerticalMovement=false,
        float jumpSpeed = 0.f, bool invertMouse=false,
        bool makeActive=true);

CIRRLICHT_API irr_ILightSceneNode* irr_ISceneManager_addLightSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent = 0,
        irr_vector3df position = {0,0,0},
        irr_SColorf color = {1.0f, 1.0f, 1.0f},
        float radius=100.0f, int id=-1);

CIRRLICHT_API irr_IBillboardSceneNode* irr_ISceneManager_addBillboardSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent = 0,
        irr_dimension2df size = {10.0f, 10.0f},
        irr_vector3df position = {0,0,0}, int id=-1,
        irr_SColor colorTop = {0, 0, 0, 0}, irr_SColor colorBottom = {0, 0, 0, 0});

CIRRLICHT_API irr_ISceneNode* irr_ISceneManager_addSkyBoxSceneNode(irr_ISceneManager* smgr, irr_ITexture* top, irr_ITexture* bottom,
        irr_ITexture* left, irr_ITexture* right, irr_ITexture* front,
        irr_ITexture* back, irr_ISceneNode* parent = 0, int id=-1);

CIRRLICHT_API irr_ISceneNode* irr_ISceneManager_addSkyDomeSceneNode(irr_ISceneManager* smgr, irr_ITexture* texture,
        unsigned int horiRes=16, unsigned int vertRes=8,
        float texturePercentage=0.9, float spherePercentage=2.0,float radius = 1000.f,
        irr_ISceneNode* parent=0, int id=-1);

CIRRLICHT_API irr_IParticleSystemSceneNode* irr_ISceneManager_addParticleSystemSceneNode(irr_ISceneManager* smgr,
        bool withDefaultEmitter=true, irr_ISceneNode* parent=0, int id=-1,
        irr_vector3df position = {0,0,0},
        irr_vector3df rotation = {0,0,0},
        irr_vector3df scale = {1.0f, 1.0f, 1.0f});

CIRRLICHT_API irr_ITerrainSceneNode* irr_ISceneManager_addTerrainSceneNode(irr_ISceneManager* smgr,
        const char* heightMapFileName,
        irr_ISceneNode* parent=0, int id=-1,
        irr_vector3df position = {0.0f,0.0f,0.0f},
        irr_vector3df rotation = {0.0f,0.0f,0.0f},
        irr_vector3df scale = {1.0f,1.0f,1.0f},
        irr_SColor vertexColor = {255,255,255,255},
        int maxLOD=5, E_TERRAIN_PATCH_SIZE patchSize=ETPS_17, int smoothFactor=0,
        bool addAlsoIfHeightmapEmpty = false);

CIRRLICHT_API irr_IMeshSceneNode* irr_ISceneManager_addQuake3SceneNode(irr_ISceneManager* smgr, const irr_IMeshBuffer* meshBuffer, const irr_IShader * shader,
        irr_ISceneNode* parent=0, int id=-1
                                                        );

CIRRLICHT_API irr_ISceneNode* irr_ISceneManager_addEmptySceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent=0, int id=-1);

CIRRLICHT_API irr_IDummyTransformationSceneNode* irr_ISceneManager_addDummyTransformationSceneNode(irr_ISceneManager* smgr,
        irr_ISceneNode* parent=0, int id=-1);

CIRRLICHT_API irr_ITextSceneNode* irr_ISceneManager_addTextSceneNode(irr_ISceneManager* smgr, irr_IGUIFont* font, const wchar_t* text,
        irr_SColor color= {100,255,255,255},
        irr_ISceneNode* parent = 0, irr_vector3df position = {0,0,0},
        int id=-1);

CIRRLICHT_API irr_IBillboardTextSceneNode* irr_ISceneManager_addBillboardTextSceneNode(irr_ISceneManager* smgr, irr_IGUIFont* font, const wchar_t* text,
        irr_ISceneNode* parent = 0,
        irr_dimension2df size = {10.0f, 10.0f},
        irr_vector3df position = {0,0,0}, int id=-1,
        irr_SColor colorTop = {0xFFFFFFFF>>24, (0xFFFFFFFF>>16) & 0xff, (0xFFFFFFFF>>8) & 0xff, 0xFFFFFFFF & 0xff}, irr_SColor colorBottom = {0xFFFFFFFF>>24, (0xFFFFFFFF>>16) & 0xff, (0xFFFFFFFF>>8) & 0xff, 0xFFFFFFFF & 0xff});

CIRRLICHT_API irr_IAnimatedMesh* irr_ISceneManager_addHillPlaneMesh(irr_ISceneManager* smgr, const char* name,
        irr_dimension2df tileSize, irr_dimension2du tileCount,
        irr_SMaterial* material = 0, float hillHeight = 0.0f,
        irr_dimension2df countHills = {0.0f, 0.0f},
        irr_dimension2df textureRepeatCount = {1.0f, 1.0f});

CIRRLICHT_API irr_IAnimatedMesh* irr_ISceneManager_addTerrainMesh(irr_ISceneManager* smgr, const char* meshname,
        irr_IImage* texture, irr_IImage* heightmap,
        irr_dimension2df stretchSize = {10.0f,10.0f},
        float maxHeight=200.0f,
        irr_dimension2du defaultVertexBlockSize = {64,64});

CIRRLICHT_API irr_IAnimatedMesh* irr_ISceneManager_addArrowMesh(irr_ISceneManager* smgr, const char* name,
        irr_SColor vtxColorCylinder= {0xFFFFFFFF},
        irr_SColor vtxColorCone= {0xFFFFFFFF},
        unsigned int tesselationCylinder=4, unsigned int tesselationCone=8,
        float height=1.f, float cylinderHeight=0.6f,
        float widthCylinder=0.05f, float widthCone=0.3f);

CIRRLICHT_API irr_IAnimatedMesh* irr_ISceneManager_addSphereMesh(irr_ISceneManager* smgr, const char* name,
        float radius=5.f, unsigned int polyCountX = 16,
        unsigned int polyCountY = 16);

CIRRLICHT_API irr_IAnimatedMesh* irr_ISceneManager_addVolumeLightMesh(irr_ISceneManager* smgr, const char* name,
        const unsigned int SubdivideU = 32, const unsigned int SubdivideV = 32,
        irr_SColor FootColor = {51, 0, 230, 180},
        irr_SColor TailColor = {0, 0, 0, 0});

CIRRLICHT_API irr_ISceneNode* irr_ISceneManager_getRootSceneNode(irr_ISceneManager* smgr);

CIRRLICHT_API irr_ISceneNode* irr_ISceneManager_getSceneNodeFromId(irr_ISceneManager* smgr, unsigned int id, irr_ISceneNode* start=0);
CIRRLICHT_API irr_ISceneNode* irr_ISceneManager_getSceneNodeFromName(irr_ISceneManager* smgr, const char* name, irr_ISceneNode* start=0);
CIRRLICHT_API irr_ISceneNode* irr_ISceneManager_getSceneNodeFromType(irr_ISceneManager* smgr, ESCENE_NODE_TYPE type, irr_ISceneNode* start=0);
CIRRLICHT_API void irr_ISceneManager_getSceneNodesFromType(irr_ISceneManager* smgr, ESCENE_NODE_TYPE type,
        irr_array* outNodes,
        irr_ISceneNode* start=0);
CIRRLICHT_API irr_ICameraSceneNode* irr_ISceneManager_getActiveCamera(irr_ISceneManager* smgr);
CIRRLICHT_API void irr_ISceneManager_setActiveCamera(irr_ISceneManager* smgr, irr_ICameraSceneNode* camera);
CIRRLICHT_API void irr_ISceneManager_setShadowColor(irr_ISceneManager* smgr, irr_SColor color = {150,0,0,0});
CIRRLICHT_API irr_SColor irr_ISceneManager_getShadowColor(irr_ISceneManager* smgr);
CIRRLICHT_API unsigned int irr_ISceneManager_registerNodeForRendering(irr_ISceneManager* smgr, irr_ISceneNode* node,
        E_SCENE_NODE_RENDER_PASS pass = ESNRP_AUTOMATIC);

CIRRLICHT_API void irr_ISceneManager_drawAll(irr_ISceneManager* smgr);
CIRRLICHT_API irr_ISceneNodeAnimator* irr_ISceneManager_createRotationAnimator(irr_ISceneManager* smgr, irr_vector3df rotationSpeed);
CIRRLICHT_API irr_ISceneNodeAnimator* irr_ISceneManager_createFlyCircleAnimator(irr_ISceneManager* smgr,
        irr_vector3df center= {0.f,0.f,0.f},
        float radius=100.f, float speed=0.001f,
        irr_vector3df direction= {0.f, 1.f, 0.f},
        float startPosition = 0.f,
        float radiusEllipsoid = 0.f);

CIRRLICHT_API irr_ISceneNodeAnimator* irr_ISceneManager_createFlyStraightAnimator(irr_ISceneManager* smgr, irr_vector3df startPoint, irr_vector3df endPoint, unsigned int timeForWay, bool loop=false, bool pingpong = false);

CIRRLICHT_API irr_ISceneNodeAnimator* irr_ISceneManager_createTextureAnimator(irr_ISceneManager* smgr, irr_array* textures, int timePerFrame, bool loop=true);
CIRRLICHT_API irr_ISceneNodeAnimator* irr_ISceneManager_createDeleteAnimator(irr_ISceneManager* smgr, unsigned int timeMs);
CIRRLICHT_API irr_ISceneNodeAnimatorCollisionResponse* irr_ISceneManager_createCollisionResponseAnimator(irr_ISceneManager* smgr,
        irr_ITriangleSelector* world, irr_ISceneNode* sceneNode,
        irr_vector3df ellipsoidRadius = {30,60,30},
        irr_vector3df gravityPerSecond = {0,-10.0f,0},
        irr_vector3df ellipsoidTranslation = {0,0,0},
        float slidingValue = 0.0005f);

CIRRLICHT_API irr_ISceneNodeAnimator* irr_ISceneManager_createFollowSplineAnimator(irr_ISceneManager* smgr, int startTime,
        irr_array* points,
        float speed = 1.0f, float tightness = 0.5f, bool loop=true, bool pingpong=false);

CIRRLICHT_API irr_ITriangleSelector* irr_ISceneManager_createTriangleSelector(irr_ISceneManager* smgr, irr_IMesh* mesh, irr_ISceneNode* node);
CIRRLICHT_API irr_ITriangleSelector* irr_ISceneManager_createTriangleSelector2(irr_ISceneManager* smgr, irr_IAnimatedMeshSceneNode* node);
CIRRLICHT_API irr_ITriangleSelector* irr_ISceneManager_createTriangleSelectorFromBoundingBox(irr_ISceneManager* smgr, irr_ISceneNode* node);
CIRRLICHT_API irr_ITriangleSelector* irr_ISceneManager_createOctreeTriangleSelector(irr_ISceneManager* smgr, irr_IMesh* mesh,
        irr_ISceneNode* node, int minimalPolysPerNode=32);
CIRRLICHT_API irr_IMetaTriangleSelector* irr_ISceneManager_createMetaTriangleSelector(irr_ISceneManager* smgr);
CIRRLICHT_API irr_ITriangleSelector* irr_ISceneManager_createTerrainTriangleSelector(irr_ISceneManager* smgr,
        irr_ITerrainSceneNode* node, int LOD=0);
CIRRLICHT_API void irr_ISceneManager_addExternalMeshLoader(irr_ISceneManager* smgr, irr_IMeshLoader* externalLoader);
CIRRLICHT_API unsigned int irr_ISceneManager_getMeshLoaderCount(irr_ISceneManager* smgr);
CIRRLICHT_API irr_IMeshLoader* irr_ISceneManager_getMeshLoader(irr_ISceneManager* smgr, unsigned int index);
CIRRLICHT_API void irr_ISceneManager_addExternalSceneLoader(irr_ISceneManager* smgr, irr_ISceneLoader* externalLoader);
CIRRLICHT_API unsigned int irr_ISceneManager_getSceneLoaderCount(irr_ISceneManager* smgr);
CIRRLICHT_API irr_ISceneLoader* irr_ISceneManager_getSceneLoader(irr_ISceneManager* smgr, unsigned int index);
CIRRLICHT_API irr_ISceneCollisionManager* irr_ISceneManager_getSceneCollisionManager(irr_ISceneManager* smgr);
CIRRLICHT_API irr_IMeshManipulator* irr_ISceneManager_getMeshManipulator(irr_ISceneManager* smgr);
CIRRLICHT_API void irr_ISceneManager_addToDeletionQueue(irr_ISceneManager* smgr, irr_ISceneNode* node);
CIRRLICHT_API bool irr_ISceneManager_postEventFromUser(irr_ISceneManager* smgr, irr_SEvent* event);
CIRRLICHT_API void irr_ISceneManager_clear(irr_ISceneManager* smgr);
CIRRLICHT_API irr_IAttributes* irr_ISceneManager_getParameters(irr_ISceneManager* smgr);
CIRRLICHT_API E_SCENE_NODE_RENDER_PASS irr_ISceneManager_getSceneNodeRenderPass(irr_ISceneManager* smgr);
CIRRLICHT_API irr_ISceneNodeFactory* irr_ISceneManager_getDefaultSceneNodeFactory(irr_ISceneManager* smgr);
CIRRLICHT_API void irr_ISceneManager_registerSceneNodeFactory(irr_ISceneManager* smgr, irr_ISceneNodeFactory* factoryToAdd);
CIRRLICHT_API unsigned int irr_ISceneManager_getRegisteredSceneNodeFactoryCount(irr_ISceneManager* smgr);
CIRRLICHT_API irr_ISceneNodeFactory* irr_ISceneManager_getSceneNodeFactory(irr_ISceneManager* smgr, unsigned int index);
CIRRLICHT_API irr_ISceneNodeAnimatorFactory* irr_ISceneManager_getDefaultSceneNodeAnimatorFactory(irr_ISceneManager* smgr);
CIRRLICHT_API void irr_ISceneManager_registerSceneNodeAnimatorFactory(irr_ISceneManager* smgr, irr_ISceneNodeAnimatorFactory* factoryToAdd);
CIRRLICHT_API unsigned int irr_ISceneManager_getRegisteredSceneNodeAnimatorFactoryCount(irr_ISceneManager* smgr);
CIRRLICHT_API irr_ISceneNodeAnimatorFactory* irr_ISceneManager_getSceneNodeAnimatorFactory(irr_ISceneManager* smgr, unsigned int index);
CIRRLICHT_API const char* irr_ISceneManager_getSceneNodeTypeName(irr_ISceneManager* smgr, ESCENE_NODE_TYPE type);
CIRRLICHT_API const char* irr_ISceneManager_getAnimatorTypeName(irr_ISceneManager* smgr, ESCENE_NODE_ANIMATOR_TYPE type);
CIRRLICHT_API irr_ISceneNode* irr_ISceneManager_addSceneNode(irr_ISceneManager* smgr, const char* sceneNodeTypeName, irr_ISceneNode* parent=0);
CIRRLICHT_API irr_ISceneNodeAnimator* irr_ISceneManager_createSceneNodeAnimator(irr_ISceneManager* smgr, const char* typeName, irr_ISceneNode* target=0);
CIRRLICHT_API irr_ISceneManager* irr_ISceneManager_createNewSceneManager(irr_ISceneManager* smgr, bool cloneContent=false);
CIRRLICHT_API bool irr_ISceneManager_saveScene(irr_ISceneManager* smgr, const char* filename, irr_ISceneUserDataSerializer* userDataSerializer=0, irr_ISceneNode* node=0);
CIRRLICHT_API bool irr_ISceneManager_loadScene(irr_ISceneManager* smgr, const char* filename, irr_ISceneUserDataSerializer* userDataSerializer=0, irr_ISceneNode* rootNode=0);
CIRRLICHT_API irr_IMeshWriter* irr_ISceneManager_createMeshWriter(irr_ISceneManager* smgr, EMESH_WRITER_TYPE type);
CIRRLICHT_API irr_ISkinnedMesh* irr_ISceneManager_createSkinnedMesh(irr_ISceneManager* smgr);
CIRRLICHT_API void irr_ISceneManager_setAmbientLight(irr_ISceneManager* smgr, irr_SColorf ambientColor);
CIRRLICHT_API irr_SColorf irr_ISceneManager_getAmbientLight(irr_ISceneManager* smgr);
CIRRLICHT_API void irr_ISceneManager_setLightManager(irr_ISceneManager* smgr, irr_ILightManager* lightManager);
CIRRLICHT_API E_SCENE_NODE_RENDER_PASS irr_ISceneManager_getCurrentRenderPass(irr_ISceneManager* smgr);
CIRRLICHT_API const irr_IGeometryCreator* irr_ISceneManager_getGeometryCreator(irr_ISceneManager* smgr);
CIRRLICHT_API bool irr_ISceneManager_isCulled(irr_ISceneManager* smgr, const irr_ISceneNode* node);
