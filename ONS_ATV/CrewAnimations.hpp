class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		hmmwv_driver = "hmmwv_driver";
		hmmwv_mk19gunnerOut = "hmmwv_mk19gunnerOut";
		hmmwv_Gunner02 = "hmmwv_Gunner02";
		Jackal_BAF_commander = "Jackal_BAF_commander";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic {
    skeletonName = "OFP2_ManSkeleton";
    gestures = "CfgGesturesMale"; 
	class States {
		class Crew;
		class hmmwv_driver: Crew {
			file = "ONS_SOV\Anim\hmmwv_driver.rtm";
			interpolateTo[] = {KIA_hmmwv_driver,1};
		};
		class hmmwv_mk19gunnerOut: Crew {
			file = "ONS_SOV\Anim\hmmwv_mk19gunnerOut.rtm";
			interpolateTo[] = {KIA_hmmwv_driver,1};
		};
		class hmmwv_Gunner02: Crew {
			file = "ONS_SOV\Anim\HMWVW_Gunner02.rtm";
			interpolateTo[] = {KIA_hmmwv_driver,1};
		};
		class Jackal_BAF_commander: Crew {
			file = "ONS_SOV\Anim\Jackal_BAF_commander.rtm";
			interpolateto[] = {KIA_hmmwv_driver,1};
		};
	};
};