
#define _ARMA_

class CfgPatches
{
	class ONS_Characters_AIRCREW
	{
		units[] = 
		{
			"ONS_Soldier_HELIPILOT_TW",
			"ONS_Soldier_HELIPILOT_AR",
			"ONS_Soldier_HELICREW_TW",
			"ONS_Soldier_HELICREW_AR",
			"ONS_Soldier_HeliMedic_TW",
			"ONS_Soldier_HeliMedic_AR"
		};
		weapons[] = 
		{
			"ONS_G_Helmet_Pilot_Heli",
			"ONS_G_Beret_Blue_RCAF"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"ONS_Characters"};
	};
};