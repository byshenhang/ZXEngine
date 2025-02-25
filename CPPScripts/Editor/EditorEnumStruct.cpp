#include "EditorEnumStruct.h"
#include "../Texture.h"
#include "../Material.h"
#include "../Component/MeshRenderer.h"

namespace ZXEngine
{
	AssetTextureInfo::AssetTextureInfo() :
		texture(nullptr)
	{}

	AssetTextureInfo::~AssetTextureInfo()
	{
		delete texture;
	}

	AssetMaterialInfo::AssetMaterialInfo() :
		material(nullptr)
	{}

	AssetMaterialInfo::~AssetMaterialInfo()
	{
		delete material;
	}

	AssetModelInfo::AssetModelInfo() : 
		boneNum(0),
		meshRenderer(nullptr)
	{}

	AssetModelInfo::~AssetModelInfo()
	{
		delete meshRenderer;
	}
}