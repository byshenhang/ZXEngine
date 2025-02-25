#pragma once
#include "pubh.h"
#include "RenderAPI.h"

namespace ZXEngine
{
	class Mesh
	{
	public:
		uint32_t VAO;

		vector<Vertex> mVertices;
		vector<uint32_t> mIndices;

		// 骨骼偏移量数组
		vector<Matrix4> mBonesOffset;
		// 骨骼最终变换矩阵数组(列主序，会直接传给显存供Shader使用)
		vector<Matrix4> mBonesFinalTransform;
		// 骨骼名字到数组索引的映射
		unordered_map<string, uint32_t> mBoneNameToIndexMap;

		// 在xyz方向上最远的点，0-5分别对应+x, -x, +y, -y, +z, -z
		array<Vertex, 6> mExtremeVertices;
		// 模型在X轴上的长度
		float mAABBSizeX = 0.0f;
		// 模型在Y轴上的长度
		float mAABBSizeY = 0.0f;
		// 模型在Z轴上的长度
		float mAABBSizeZ = 0.0f;

		~Mesh();
	};
}