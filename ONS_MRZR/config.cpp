#include "basicdefines_A3.hpp"
class DefaultEventhandlers;

#include "CfgPatches.hpp"

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CargoTurret;
class ViewOptics;
class ViewCargo;
class Sounds;

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
		class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};

	class ONS_MRZR_Base: Car_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeGarage = 2;
		side = 1;
		faction = "ONS_A3";
		vehicleClass = "Car";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};
		hideWeaponsDriver = 0;
		model 	= "\ONS_MRZR\ONS_MRZR.p3d";  /// simple path to model
		picture	= "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon in command bar
		Icon	= "\A3\Weapons_F\Data\placeholder_co.paa"; /// icon in map	
		
		displayName = "ONS MRZR"; /// displayed in Editor
		precision 	= 10; 	/// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
		brakeDistance 	= 1; 	/// 3 how many internal waypoints should the AI plan braking in advance
		brakeTorque = 6000;
		acceleration 	= 5; 	/// how fast acceleration does the AI think the car has
		fireResistance 	= 5; 	/// lesser protection against fire than tanks
		armor 			= 85; 	/// just some protection against missiles, collisions and explosions
		cost			= 50000; /// how likely is the enemy going to target this vehicle
		
		transportMaxBackpacks 	= 3; /// just some backpacks fit the trunk by default
		transportSoldier 	= 0; /// number of cargo except driver
		
		/// some values from parent class to show how to set them up
		wheelDamageRadiusCoef 	= 0.7; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		crewCrashProtection		= 0.25;			/// multiplier of damage to crew of the vehicle => low number means better protection
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerName = "Front_Seat";
				gunnerCompartments = "Compartment1";
				memoryPointGunnerOptics = "";
				memorypointgunneroutoptics = "";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -35;
				maxTurn = 40;
				minTurn = -80;
				isPersonTurret = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Back_Seat_Left";
				proxyIndex = 2;
				maxTurn = 90;
				minTurn = 20;
				minElev = -45;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction = "passenger_inside_3";
				gunnerName = "Back_Seat_Right";
				proxyIndex = 3;
				maxTurn = 20;
				minTurn = -90;
				minElev = -45;
			};
		};	
		class TransportItems /// some first aid kits in trunk according to safety regulations
		{
			item_xx(FirstAidKit,4);
		};			
		
		class HitPoints : HitPoints
		{
			class HitLFWheel:HitLFWheel	
			{
				armor=0.45;
				passThrough=0;
				visual = "";
			}; /// it is easier to destroy wheels than hull of the vehicle
			class HitLF2Wheel:HitLF2Wheel
			{
				armor=0.45;
				passThrough=0;
				visual = "";
			};

			class HitRFWheel:HitRFWheel
			{
				armor=0.45;
				passThrough=0;
				visual = "";
			};
			class HitRF2Wheel:HitRF2Wheel
			{
				armor=0.45;
				passThrough=0;
				visual = "";
			}; 
			class HitFuel
			{
				armor=0.50;
				material=-1;
				name="fueltank";
				visual="";
				passThrough=0.2;
			}; /// correct points for fuel tank, some of the damage is aFRLied to the whole
			class HitEngine
	 		{
				armor=0.50;
				material=-1;
				name="engine";
				visual="zbytek";
				passThrough=0;
			};
			class HitBody
			{
				armor=0.8;
				material=-1;
				name = "body";
				visual = "zbytek";
				passThrough=0.3;
				radius = 0.20;
			};
		};
		weapons[] = {"MiniCarHorn"};
		//driverAction = "driver_apcwheeled3_in";
		driverAction = "driver_MRAP_01"; 
		//driverdoor 		= {name of animation in model};
		cargoAction[] 		= {}; /// the same of all the crew
		getInAction 		= GetInoffroad; 		/// how does driver look while getting in
		getOutAction 		= GetOutLow; 		/// and out
		cargoGetInAction[] 	= {"GetInoffroad"}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {"GetOutLow"}; 	/// that means all use the same in this case
		
		#include "sounds.hpp"	/// sounds are in a separate file to make this one simple
		#include "pip.hpp"	/// PiPs are in a separate file to make this one simple
		#include "physx.hpp"	/// PhysX settings are in a separate file to make this one simple
		
		/// memory points where do tracks of the wheel appear
		// front left track, left offset
		memoryPointTrackFLL = "TrackFLL"; 
		// front left track, right offset
		memoryPointTrackFLR = "TrackFLR"; 
		// back left track, left offset
		memoryPointTrackBLL = "TrackBLL"; 
		// back left track, right offset
		memoryPointTrackBLR = "TrackBLR"; 
		// front right track, left offset
		memoryPointTrackFRL = "TrackFRL"; 
		// front right track, right offset
		memoryPointTrackFRR = "TrackFRR"; 
		// back right track, left offset
		memoryPointTrackBRL = "TrackBRL"; 
		// back right track, right offset
		memoryPointTrackBRR = "TrackBRR"; 		
		destrType = "DestructWreck";
		class Damage /// damage changes material in specific places (visual in hitPoint)
		{
			tex[]={};
			mat[]=
			{
				"ONS_MRZR\data\ons_mrzr_body.rvmat",		/// material mapped in model
				"ons_mrzr\data\ons_mrzr_damage.rvmat", 	/// changes to this one once damage of the part reaches 0.5
				"ons_mrzr\data\ons_mrzr_destruct.rvmat"		/// changes to this one once damage of the part reaches 1
			};
		};
		
		class Exhausts /// specific exhaust effects for the car
		{
			class Exhaust1 /// the car has two exhausts - each on one side
			{
				position 	= "exhaust";  		/// name of initial memory point
				direction 	= "exhaust_dir";	/// name of memory point for exhaust direction
				effect 		= "ExhaustEffectTankBack";	/// what particle effect is it going to use
			};				
		};		
		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 		= "L svetlo";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 100;						/// angle of full light
				outerAngle 		= 179;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 1.0;						/// how big is the flare
				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0; 
					linear 			= 0; 
					quadratic 		= 0.25; 
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;		/// this allows adding more lights into scene
				};
			};		
			class LightCarHeadR01:LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "P svetlo";
				selection 	= "Light_R";
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01", "LightCarHeadL02"}, {"LightCarHeadR01", "LightCarHeadR02"}}; /// aggregating reflectors helps the engine a lot
		/// it might be even good to aggregate all lights into one source as it is done for most of the cars
	};

	/*class ONS_MRZR_Minigun: ONS_MRZR_Base
	{
		scope = 2;
		crew 	= "B_Soldier_F"; 	/// we need someone to fit into the car
		side	= 1; 			/// civilian car should be on civilian side
		faction	= BLU_F;		/// and with civilian faction
		model 	= "\ONS_MRZR\ONS_MRZR_M134.p3d";  /// simple path to model
		picture	= "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon in command bar
		Icon	= "\A3\Weapons_F\Data\placeholder_co.paa"; /// icon in map	

		displayName = "ONS MRZR M134"; /// displayed in Editor

		HiddenSelections[] = {};
		HiddenSelectionsTextures[] ={};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerName = "Front_Seat";
				gunnerCompartments = "Compartment2";
				memoryPointGunnerOptics = "";
				memorypointgunneroutoptics = "";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -35;
				maxTurn = 20;
				minTurn = -90;
				isPersonTurret = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Back_Seat_Left";
				proxyIndex = 2;
				maxTurn = 95;
				minTurn = 20;
				minElev = -45;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction = "passenger_inside_3";
				gunnerName = "Back_Seat_Right";
				proxyIndex = 3;
				maxTurn = -95;
				minTurn = -20;
				minElev = -109;
			};
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				hasGunner = 1;
				weapons[] = {"M134_minigun"};
				magazines[] = {"5000Rnd_762x51_Belt","5000Rnd_762x51_Belt"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
				minElev = -25;
				maxElev = 60;
				maxTurn = 35;
				minTurn = -35;
				gunnerAction = "gunner_standup01";
				viewGunnerInExternal = "true";
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				gunnerRightHandAnimName = "handle_R";
				gunnerLeftHandAnimName = "handle_L";
			};
		};
	};*/
};