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
#include "shadertypes.h"
#include "materialtypes.h"
#include "primitivetypes.h"

enum E_GPU_SHADING_LANGUAGE {
	EGSL_DEFAULT = 0,
	EGSL_CG
};

struct irr_IGPUProgrammingServices;
struct irr_IShaderConstantSetCallBack;
struct irr_IReadFile;

CIRRLICHT_API int irr_IGPUProgrammingServices_addHighLevelShaderMaterial(irr_IGPUProgrammingServices* services,
		const char* vertexShaderProgram,
		const char* vertexShaderEntryPointName,
		E_VERTEX_SHADER_TYPE vsCompileTarget,
		const char* pixelShaderProgram,
		const char* pixelShaderEntryPointName,
		E_PIXEL_SHADER_TYPE psCompileTarget,
		const char* geometryShaderProgram,
		const char* geometryShaderEntryPointName = "main",
		E_GEOMETRY_SHADER_TYPE gsCompileTarget = EGST_GS_4_0,
		E_PRIMITIVE_TYPE inType = EPT_TRIANGLES,
		E_PRIMITIVE_TYPE outType = EPT_TRIANGLE_STRIP,
		unsigned int verticesOut = 0,
		irr_IShaderConstantSetCallBack* callback = 0,
		E_MATERIAL_TYPE baseMaterial = EMT_SOLID,
		int userData = 0,
		E_GPU_SHADING_LANGUAGE shadingLang = EGSL_DEFAULT);

CIRRLICHT_API int irr_IGPUProgrammingServices_addShaderMaterial(irr_IGPUProgrammingServices* services, const char* vertexShaderProgram = 0,
		const char* pixelShaderProgram = 0,
		irr_IShaderConstantSetCallBack* callback = 0,
		E_MATERIAL_TYPE baseMaterial = EMT_SOLID,
		int userData = 0);
		
CIRRLICHT_API int irr_IGPUProgrammingServices_addShaderMaterialFromFiles(irr_IGPUProgrammingServices* services, irr_IReadFile* vertexShaderProgram,
		irr_IReadFile* pixelShaderProgram,
		irr_IShaderConstantSetCallBack* callback = 0,
		E_MATERIAL_TYPE baseMaterial = EMT_SOLID,
		int userData = 0);
		
CIRRLICHT_API int irr_IGPUProgrammingServices_addShaderMaterialFromFiles2(irr_IGPUProgrammingServices* services, const char* vertexShaderProgramFileName,
		const char* pixelShaderProgramFileName,
		irr_IShaderConstantSetCallBack* callback = 0,
		E_MATERIAL_TYPE baseMaterial = EMT_SOLID,
		int userData = 0);
