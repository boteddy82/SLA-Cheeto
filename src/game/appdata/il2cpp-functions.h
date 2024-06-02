// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2021.2.0+

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;

DO_APP_FUNC(0x00454960, void, GameFrameWork_Update, (GameFrameWork* __this, MethodInfo* method));

DO_APP_FUNC(0x0202DAF0, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));
DO_APP_FUNC(0x0202DB10, String*, Marshal_PtrToStringUni, (void* ptr, MethodInfo* method));

// FovChanger
DO_APP_FUNC(0x0301C600, void, Camera_set_fieldOfView, (void* __this, float value, MethodInfo* method));

// FPSUnlock
DO_APP_FUNC(0x03015300, int, Application_get_targetFrameRate, (MethodInfo* method));
DO_APP_FUNC(0x03015A20, void, Application_set_targetFrameRate, (int value, MethodInfo* method));

DO_APP_FUNC(0x3039880, void, QualitySettings_set_vSyncCount, (int value, MethodInfo* method));

// TimeScale
DO_APP_FUNC(0x03071EC0, float, Time_get_timeScale, (MethodInfo* method));
DO_APP_FUNC(0x03071FB0, void, Time_set_timeScale, (float value, MethodInfo* method));

// Unity & C# Stuff
DO_APP_FUNC(0x03060E70, GameObject*, GameObject_Find, (String* name, MethodInfo* method));
DO_APP_FUNC(0x03061EC0, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x030610C0, Component*, GameObject_GetComponent, (GameObject* __this, Type* type, MethodInfo* method));;
DO_APP_FUNC(0x0305EC20, GameObject*, Component_get_gameObject, (Component* __this, MethodInfo* method));
DO_APP_FUNC(0x01066100, GameObject*, GameObject_get_gameObject, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x03076340, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x03065C60, Object_1__Array*, Object_1_FindObjectsOfType_1, (Type* type, bool includeInactive, MethodInfo* method));
DO_APP_FUNC(0x02162DF0, Type*, Type_GetType_3, (String* typeName, MethodInfo* method));
DO_APP_FUNC(0x02045210, Assembly*, Assembly_LoadWithPartialName, (String* partialName, MethodInfo* method));
DO_APP_FUNC(0x020450F0, Type*, Assembly_GetType, (Assembly* __this, String* name, MethodInfo* method));
DO_APP_FUNC(0x0308E5B0, Scene, SceneManager_GetActiveScene, (MethodInfo* method));
DO_APP_FUNC(0x0308FBE0, String*, Scene_GetNameInternal, (int32_t sceneHandle, MethodInfo* method));
DO_APP_FUNC(0x030651F0, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method));

DO_APP_FUNC(0x0040E5D0, void/*CharResourceData*/*, ENNEJEPMJLJ_GNAPBJPBKIO, (ENNEJEPMJLJ* __this, MethodInfo* method));
DO_APP_FUNC(0x0075EF00, void/*KAAIFMKPKAG*/*, KAAIFMKPKAG_IOFMGMJCCFO, (KAAIFMKPKAG* __this, bool DEJNILEHENL, MethodInfo* method));
// DO_APP_FUNC(0x00521CC0, List_1_ENNEJEPMJLJ_*, PJKMAOEINNH_BGEJLBHLGJP, (PJKMAOEINNH* __this, MethodInfo* method)); // Probably EntityManager or something similar
DO_APP_FUNC(0x0073D410, void, PIPHNBOBFEF_KBCIIEFLPGB, (PIPHNBOBFEF* __this, ESpecialState__Enum OCKAHFDGNEL, int64_t MGFPJFANLBG, int64_t DIACKALMMKH, int64_t PBAPBJGDAPJ, String* DLOACPLHGMP, MethodInfo* method));
DO_APP_FUNC(0x00956020, int32_t, GHINOEFFMPN_EKHGIHBHEPL, (SkillIdentity* EKPKPIJBPKE, void/*IEnumerable_1_UnityEngine_Component_*/* FKJDKGJBGOD, TargetHitData* COFCDKGCOGJ, MethodInfo* method));
DO_APP_FUNC(0x009E4270, void, EvadeProxy_Init, (EvadeProxy* __this, ENNEJEPMJLJ* IGBKKNODEGM, EvadePenetration* DHPMEMDBDMC, MethodInfo* method)); // Can hook this for Entity Manager
DO_APP_FUNC(0x00998A00, bool, PCILGJOEPJM_PPAKPBOJLIP, (ENNEJEPMJLJ* IGBKKNODEGM, MethodInfo* method)); // Check if Entity is alive????

// Mission Time
DO_APP_FUNC(0x00D87DD0, void, StageReadyPage_EnterUI, (StageReadyPage* __this, MethodInfo* method));
DO_APP_FUNC(0x00D8BA20, void, StoryQuestChapterPage_EnterUI, (StoryQuestChapterPage* __this,MethodInfo* method));
// Intro Movie
DO_APP_FUNC(0x00A9AE20, void, GameMovie_Update, (GameMovie* __this, MethodInfo* method));
DO_APP_FUNC(0x00A9C720, void, IntroMovie_Update, (IntroMovie* __this, MethodInfo* method));
// Disable Web View
DO_APP_FUNC(0x02287AD0, void, WebViewDialog_Show, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x02289840, void, WebViewUI_RefreshSize, (void* __this, MethodInfo* method));

DO_APP_FUNC(0x00430040, EGLGAPIAANF__Enum, JIBDAHKJHOG_PCLINKFFGNE, (JIBDAHKJHOG* __this, MethodInfo* method));
DO_APP_FUNC(0x00837FE0, void, JIBDAHKJHOG_KPDGECAFJKA, (JIBDAHKJHOG* __this, MethodInfo* method));
DO_APP_FUNC(0x00837510, void, JIBDAHKJHOG_HLLNLMAECBD, (JIBDAHKJHOG* __this, void* JONOLJGMLBE, void* BHMPNNCBFGN, MethodInfo* method)); // EnterBattleReq
DO_APP_FUNC(0x00836650, void, JIBDAHKJHOG_EJLDBPGJGPN, (JIBDAHKJHOG* __this, MethodInfo* method)); // NextStageBattle
DO_APP_FUNC(0x00836410, void, JIBDAHKJHOG_COLDHPFDOHG, (JIBDAHKJHOG* __this, MethodInfo* method)); // StageStart

// Shadow Cooldown And Limit
DO_APP_FUNC(0x009A41E0, void, JLLMICINIDA_LFCGJLAFFOM, (JLLMICINIDA* __this, MethodInfo* method));

// Singletons
DO_APP_FUNC(0x00344840, void*, TSingleton_GetInstance, (MethodInfo* method)); // Search for this in IDA
DO_APP_FUNC(0x0042C0E0, Object*, TSingleton_1_System_Object__get_Instance, (MethodInfo* method)); // Get the instance of the singleton
DO_APP_FUNC_METHODINFO(0x04038380, TSingleton_1_JIBDAHKJHOG__get_Instance__MethodInfo);
// DO_APP_FUNC_METHODINFO(0x0403AC70, TSingleton_1_PJKMAOEINNH__get_Instance__MethodInfo); // Probably EntityManager or something similar