#pragma once

#include "global.h"

inline app::Type* GetUnityType(std::string name)
{
	auto type = app::Type_GetType_3(string_to_il2cppi(name), nullptr);
	if (type != nullptr) return type;

	auto assemblyName = name.substr(0, name.find_first_of("."));
	auto assembly = app::Assembly_LoadWithPartialName(string_to_il2cppi(assemblyName), nullptr);
	if (assembly == nullptr) return nullptr;

	return app::Assembly_GetType(assembly, string_to_il2cppi(name), nullptr);
}

inline bool IsInLoginScene()
{
	auto scene = app::SceneManager_GetActiveScene(nullptr);
	auto sceneName = il2cppi_to_string(app::Scene_GetNameInternal(scene.m_Handle, nullptr));
	LOG("Scene name: %s", sceneName.c_str());
	if (sceneName == "LoginScene") return true;

	return false;
}

inline bool IsPlayerRootEmpty()
{
	auto objTransform = app::GameObject_get_transform(app::GameObject_Find(string_to_il2cppi("CharGroupRoot/PLAYER/"), nullptr), nullptr);
	if (objTransform == nullptr) return true;

	if (app::Transform_get_childCount(objTransform, nullptr) > 0) return false;

	return true;
}