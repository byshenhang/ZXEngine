#pragma once
#include "pubh.h"
#include "Scene.h"

namespace ZXEngine
{
	struct SceneInfo
	{
		string path;
		Scene* scene = nullptr;
		~SceneInfo() { delete scene; };
	};

	class SceneManager
	{
	public:
		static void Create();
		static SceneManager* GetInstance();

	private:
		static SceneManager* mInstance;

	public:
		SceneManager() {};
		~SceneManager() {};

		Scene* GetScene(const string& name);
		void LoadScene(const string& path, bool switchNow = true);
		void SwitchScene(const string& name);
		void DeleteScene(const string& name);
		void DeleteAllScene();
		void ReloadScene();
		Scene* GetCurScene();

	private:
		SceneInfo* curScene = nullptr;
		map<string, SceneInfo*> scenes;

		SceneInfo* GetSceneInfo(const string& name);
	};
}