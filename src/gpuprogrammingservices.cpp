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

#include <IGPUProgrammingServices.h>
#include "gpuprogrammingservices.h"

int irr_IGPUProgrammingServices_addHighLevelShaderMaterial(irr_IGPUProgrammingServices* services, 
		const char* vertexShaderProgram,
		const char* vertexShaderEntryPointName,
		E_VERTEX_SHADER_TYPE vsCompileTarget,
		const char* pixelShaderProgram,
		const char* pixelShaderEntryPointName,
		E_PIXEL_SHADER_TYPE psCompileTarget,
		const char* geometryShaderProgram,
		const char* geometryShaderEntryPointName,
		E_GEOMETRY_SHADER_TYPE gsCompileTarget,
		E_PRIMITIVE_TYPE inType,
		E_PRIMITIVE_TYPE outType,
		unsigned int verticesOut,
		irr_IShaderConstantSetCallBack* callback,
		E_MATERIAL_TYPE baseMaterial,
		int userData,
		E_GPU_SHADING_LANGUAGE shadingLang) {
			
		return reinterpret_cast<irr::video::IGPUProgrammingServices*>(services)->addHighLevelShaderMaterial(vertexShaderProgram, vertexShaderEntryPointName, irr::video::E_VERTEX_SHADER_TYPE(vsCompileTarget), pixelShaderProgram, pixelShaderEntryPointName, irr::video::E_PIXEL_SHADER_TYPE(psCompileTarget), geometryShaderProgram, geometryShaderEntryPointName, irr::video::E_GEOMETRY_SHADER_TYPE(gsCompileTarget), irr::scene::E_PRIMITIVE_TYPE(inType), irr::scene::E_PRIMITIVE_TYPE(outType), verticesOut, reinterpret_cast<irr::video::IShaderConstantSetCallBack*>(callback), irr::video::E_MATERIAL_TYPE(baseMaterial), userData, irr::video::E_GPU_SHADING_LANGUAGE(shadingLang));
}

int irr_IGPUProgrammingServices_addShaderMaterial(irr_IGPUProgrammingServices* services, const char* vertexShaderProgram,
		const char* pixelShaderProgram,
		irr_IShaderConstantSetCallBack* callback,
		E_MATERIAL_TYPE baseMaterial,
		int userData) {

		return reinterpret_cast<irr::video::IGPUProgrammingServices*>(services)->addShaderMaterial(vertexShaderProgram, pixelShaderProgram, reinterpret_cast<irr::video::IShaderConstantSetCallBack*>(callback), irr::video::E_MATERIAL_TYPE(baseMaterial), userData);
}
		
int irr_IGPUProgrammingServices_addShaderMaterialFromFiles(irr_IGPUProgrammingServices* services, irr_IReadFile* vertexShaderProgram,
		irr_IReadFile* pixelShaderProgram,
		irr_IShaderConstantSetCallBack* callback,
		E_MATERIAL_TYPE baseMaterial,
		int userData) {

		return reinterpret_cast<irr::video::IGPUProgrammingServices*>(services)->addShaderMaterialFromFiles(reinterpret_cast<irr::io::IReadFile*>(vertexShaderProgram), reinterpret_cast<irr::io::IReadFile*>(pixelShaderProgram), reinterpret_cast<irr::video::IShaderConstantSetCallBack*>(callback), irr::video::E_MATERIAL_TYPE(baseMaterial), userData);
}
		
int irr_IGPUProgrammingServices_addShaderMaterialFromFiles2(irr_IGPUProgrammingServices* services, const char* vertexShaderProgramFileName,
		const char* pixelShaderProgramFileName,
		irr_IShaderConstantSetCallBack* callback,
		E_MATERIAL_TYPE baseMaterial,
		int userData) {

		return reinterpret_cast<irr::video::IGPUProgrammingServices*>(services)->addShaderMaterialFromFiles(vertexShaderProgramFileName, pixelShaderProgramFileName, reinterpret_cast<irr::video::IShaderConstantSetCallBack*>(callback), irr::video::E_MATERIAL_TYPE(baseMaterial), userData);
}
