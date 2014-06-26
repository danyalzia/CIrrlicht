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

#ifndef _CIRRLICHT_EMATERIALFLAGS_
#define _CIRRLICHT_EMATERIALFLAGS_

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

	//! Material flags
    enum E_MATERIAL_FLAG
	{
		//! Draw as wireframe or filled triangles? Default: false
		EMF_WIREFRAME = 0x1,

		//! Draw as point cloud or filled triangles? Default: false
		EMF_POINTCLOUD = 0x2,

		//! Flat or Gouraud shading? Default: true
		EMF_GOURAUD_SHADING = 0x4,

		//! Will this material be lighted? Default: true
		EMF_LIGHTING = 0x8,

		//! Is the ZBuffer enabled? Default: true
		EMF_ZBUFFER = 0x10,

		//! May be written to the zbuffer or is it readonly. Default: true
		/** This flag is ignored, if the material type is a transparent type. */
		EMF_ZWRITE_ENABLE = 0x20,

		//! Is backface culling enabled? Default: true
		EMF_BACK_FACE_CULLING = 0x40,

		//! Is frontface culling enabled? Default: false
		/** Overrides EMF_BACK_FACE_CULLING if both are enabled. */
		EMF_FRONT_FACE_CULLING = 0x80,

		//! Is bilinear filtering enabled? Default: true
		EMF_BILINEAR_FILTER = 0x100,

		//! Is trilinear filtering enabled? Default: false
		/** If the trilinear filter flag is enabled,
		the bilinear filtering flag is ignored. */
		EMF_TRILINEAR_FILTER = 0x200,

		//! Is anisotropic filtering? Default: false
		/** In Irrlicht you can use anisotropic texture filtering in
		conjunction with bilinear or trilinear texture filtering
		to improve rendering results. Primitives will look less
		blurry with this flag switched on. */
		EMF_ANISOTROPIC_FILTER = 0x400,

		//! Is fog enabled? Default: false
		EMF_FOG_ENABLE = 0x800,

		//! Normalizes normals. Default: false
		/** You can enable this if you need to scale a dynamic lighted
		model. Usually, its normals will get scaled too then and it
		will get darker. If you enable the EMF_NORMALIZE_NORMALS flag,
		the normals will be normalized again, and the model will look
		as bright as it should. */
		EMF_NORMALIZE_NORMALS = 0x1000,

		//! Access to all layers texture wrap settings. Overwrites separate layer settings.
		EMF_TEXTURE_WRAP = 0x2000,

		//! AntiAliasing mode
		EMF_ANTI_ALIASING = 0x4000,

		//! ColorMask bits, for enabling the color planes
		EMF_COLOR_MASK = 0x8000,

		//! ColorMaterial enum for vertex color interpretation
		EMF_COLOR_MATERIAL = 0x10000,

		//! Flag for enabling/disabling mipmap usage
		EMF_USE_MIP_MAPS = 0x20000,

		//! Flag for blend operation
		EMF_BLEND_OPERATION = 0x40000,

		//! Flag for polygon offset
		EMF_POLYGON_OFFSET = 0x80000,

        //! Flag for blend factor
		EMF_BLEND_FACTOR = 0x160000
	};

    //! Array holding the built in material type names
	const char* const sBuiltInMaterialTypeNames[] =
	{
		"solid",
		"solid_2layer",
		"lightmap",
		"lightmap_add",
		"lightmap_m2",
		"lightmap_m4",
		"lightmap_light",
		"lightmap_light_m2",
		"lightmap_light_m4",
		"detail_map",
		"sphere_map",
		"reflection_2layer",
		"trans_add",
		"trans_alphach",
		"trans_alphach_ref",
		"trans_vertex_alpha",
		"trans_reflection_2layer",
		"normalmap_solid",
		"normalmap_trans_add",
		"normalmap_trans_vertexalpha",
		"parallaxmap_solid",
		"parallaxmap_trans_add",
		"parallaxmap_trans_vertexalpha",
		"onetexture_blend",
		0
	};
	
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_EMATERIALFLAGS_
