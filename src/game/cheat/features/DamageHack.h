#pragma once
#include "Singleton.h"
#include "global.h"

namespace Cheat::Features
{
	class DamageHack : public Singleton<DamageHack>
	{
	public:
		DamageHack();

	private:
		static void PIPHNBOBFEF_KBCIIEFLPGB_Hook(app::PIPHNBOBFEF* __this, app::ESpecialState__Enum specialState, int64_t someInt1, int64_t someInt2, int64_t someInt3, app::String* buffName, MethodInfo* method);
		static int32_t GHINOEFFMPN_EKHGIHBHEPL_Hook(app::SkillIdentity* skillIdentity, void* FKJDKGJBGOD, app::TargetHitData* targetHitData, MethodInfo* method);
	};
}
