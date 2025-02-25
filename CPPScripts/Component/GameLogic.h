#pragma once
#include "../pubh.h"
#include "Component.h"

namespace ZXEngine
{
	class GameLogic : public Component
	{
	public:
		static ComponentType GetType();

	public:
		int luaID = 0;
		string luaName;
		string luaFullPath;

		GameLogic();
		~GameLogic();

		virtual ComponentType GetInsType();

		void Start();
		void Update();
		void CallLuaFunction(const char* func);

	private:
		bool firstCall = true;
	};
}