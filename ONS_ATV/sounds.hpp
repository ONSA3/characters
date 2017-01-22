soundGetIn[]=
{
	"",
	0.056234129,
	1
};
soundGetOut[]=
{
	"",
	0.056234129,
	1,
	40
};
soundDammage[]=
{
	"",
	0.56234133,
	1
};
soundEngineOnInt[]=
{
	"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_start",
	0.56234133,
	1
};
soundEngineOnExt[]=
{
	"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_start",
	0.56234133,
	1,
	200
};
soundEngineOffInt[]=
{
	"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_stop",
	0.56234133,
	1
};
soundEngineOffExt[]=
{
	"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_stop",
	0.56234133,
	1,
	200
};
buildCrash0[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1",
	1,
	1,
	200
};
buildCrash1[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2",
	1,
	1,
	200
};
buildCrash2[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3",
	1,
	1,
	200
};
buildCrash3[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4",
	1,
	1,
	200
};
soundBuildingCrash[]=
{
	"buildCrash0",
	0.25,
	"buildCrash1",
	0.25,
	"buildCrash2",
	0.25,
	"buildCrash3",
	0.25
};
WoodCrash0[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_1",
	1,
	1,
	200
};
WoodCrash1[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_2",
	1,
	1,
	200
};
WoodCrash2[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_3",
	1,
	1,
	200
};
WoodCrash3[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_4",
	1,
	1,
	200
};
soundWoodCrash[]=
{
	"woodCrash0",
	0.25,
	"woodCrash1",
	0.25,
	"woodCrash2",
	0.25,
	"woodCrash3",
	0.25
};
armorCrash0[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_1",
	1,
	1,
	200
};
armorCrash1[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_2",
	1,
	1,
	200
};
armorCrash2[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_3",
	1,
	1,
	200
};
armorCrash3[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_4",
	1,
	1,
	200
};
soundArmorCrash[]=
{
	"ArmorCrash0",
	0.25,
	"ArmorCrash1",
	0.25,
	"ArmorCrash2",
	0.25,
	"ArmorCrash3",
	0.25
};
Crash0[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1",
	1,
	1,
	200
};
Crash1[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2",
	1,
	1,
	200
};
Crash2[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3",
	1,
	1,
	200
};
Crash3[]=
{
	"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4",
	1,
	1,
	200
};
soundCrashes[]=
{
	"Crash0",
	0.25,
	"Crash1",
	0.25,
	"Crash2",
	0.25,
	"Crash3",
	0.25
};

class Sounds:  Sounds
{
	class Idle_ext
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm1",
			0.31622776,
			1,
			100
		};
		frequency=1;
		volume="engineOn*camPos*(((rpm/    8500) factor[(1200/    8500),(1700/    8500)])	*	((rpm/    8500) factor[(2550/    8500),( 2200/    8500)]))";
	};
	class Engine
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm2",
			0.3548134,
			1,
			200
		};
		frequency="0.9	+	((rpm/    8500) factor[(2200/    8500),(4250/    8500)])*0.2";
		volume="engineOn*camPos*(((rpm/    8500) factor[(2550/    8500),(3100/    8500)])	*	((rpm/    8500) factor[(4335/    8500),( 3400/    8500)]))";
	};
	class Engine1_ext
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm3",
			0.39810717,
			1,
			200
		};
		frequency="0.9	+	((rpm/    8500) factor[(3400/    8500),(5525/    8500)])*0.2";
		volume="engineOn*camPos*(((rpm/    8500) factor[(3315/    8500),(4250/    8500)])	*	((rpm/    8500) factor[(5525/    8500),( 4675/    8500)]))";
	};
	class Engine2_ext
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm4",
			0.44668359,
			1,
			250
		};
		frequency="0.9	+	((rpm/    8500) factor[(4590/    8500),(6630/    8500)])*0.2";
		volume="engineOn*camPos*(((rpm/    8500) factor[(4675/    8500),(5440/    8500)])	*	((rpm/    8500) factor[(6672/    8500),( 5865/    8500)]))";
	};
	class Engine3_ext
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm5",
			0.50118721,
			1,
			250
		};
		frequency="0.95	+	((rpm/    8500) factor[(5865/    8500),(7905/    8500)])*0.2";
		volume="engineOn*camPos*(((rpm/    8500) factor[(5737/    8500),(6587/    8500)])	*	((rpm/    8500) factor[(7947/    8500),( 6927/    8500)]))";
	};
	class Engine4_ext
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm7",
			0.56234133,
			1,
			300
		};
		frequency="0.95	+	((rpm/    8500) factor[(6927/    8500),(8500/    8500)])*0.2";
		volume="engineOn*camPos*((rpm/    8500) factor[(7012/    8500),(8075/    8500)])";
	};
	class IdleThrust
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",
			0.56234133,
			1,
			150
		};
		frequency=1;
		volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    8500) factor[(850/    8500),(1700/    8500)])	*	((rpm/    8500) factor[(3187/    8500),( 2550/    8500)]))";
	};
	class EngineThrust
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",
			0.63095737,
			1,
			200
		};
		frequency="0.9	+	((rpm/    8500) factor[(600/    8500),(1000/    8500)])*0.2";
		volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    8500) factor[(2550/    8500),(3100/    8500)])	*	((rpm/    8500) factor[(4335/    8500),( 3400/    8500)]))";
	};
	class Engine1_Thrust_ext
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",
			0.70794576,
			1,
			250
		};
		frequency="0.9	+	((rpm/    8500) factor[(3400/    8500),(5525/    8500)])*0.2";
		volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    8500) factor[(3315/    8500),(4250/    8500)])	*	((rpm/    8500) factor[(5525/    8500),( 4675/    8500)]))";
	};
	class Engine2_Thrust_ext
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",
			0.79432821,
			1,
			300
		};
		frequency="0.9	+	((rpm/    8500) factor[(4590/    8500),(6630/    8500)])*0.2";
		volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    8500) factor[(4675/    8500),(5440/    8500)])	*	((rpm/    8500) factor[(6672/    8500),( 5865/    8500)]))";
	};
	class Engine3_Thrust_ext
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",
			0.89125091,
			1,
			350
		};
		frequency="0.95	+	((rpm/    8500) factor[(5865/    8500),(7905/    8500)])*0.2";
		volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    8500) factor[(5737/    8500),(6587/    8500)])	*	((rpm/    8500) factor[(7947/    8500),( 6927/    8500)]))";
	};
	class Engine4_Thrust_ext
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",
			1,
			1,
			400
		};
		frequency="0.95	+	((rpm/    8500) factor[(6927/    8500),(8500/    8500)])*0.2";
		volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/    8500) factor[(7012/    8500),(8075/    8500)])";
	};
	class Idle_int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm1",
			0.25118864,
			1
		};
		frequency=1;
		volume="engineOn*(1-camPos)*(((rpm/    8500) factor[(850/    8500),(1700/    8500)])	*	((rpm/    8500) factor[(3187/    8500),( 2550/    8500)]))";
	};
	class Engine_int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm2",
			0.2818383,
			1
		};
		frequency="0.9	+	((rpm/    8500) factor[(2550/    8500),(4250/    8500)])*0.2";
		volume="engineOn*(1-camPos)*(((rpm/    8500) factor[(2550/    8500),(3102/    8500)])	*	((rpm/    8500) factor[(4335/    8500),( 3400/    8500)]))";
	};
	class Engine1_int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm3",
			0.31622776,
			1
		};
		frequency="0.9	+	((rpm/    8500) factor[(3400/    8500),(5525/    8500)])*0.2";
		volume="engineOn*(1-camPos)*(((rpm/    8500) factor[(3315/    8500),(4250/    8500)])	*	((rpm/    8500) factor[(5525/    8500),( 4675/    8500)]))";
	};
	class Engine2_int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm4",
			0.3548134,
			1
		};
		frequency="0.9	+	((rpm/    8500) factor[(4590/    8500),(6630/    8500)])*0.2";
		volume="engineOn*(1-camPos)*(((rpm/    8500) factor[(4675/    8500),(5440/    8500)])	*	((rpm/    8500) factor[(6672/    8500),( 5865/    8500)]))";
	};
	class Engine3_int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm5",
			0.39810717,
			1
		};
		frequency="0.95	+	((rpm/    8500) factor[(5865/    8500),(7905/    8500)])*0.2";
		volume="engineOn*(1-camPos)*(((rpm/    8500) factor[(5737/    8500),(6587/    8500)])	*	((rpm/    8500) factor[(7947/    8500),( 6927/    8500)]))";
	};
	class Engine4_int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm7",
			0.44668359,
			1
		};
		frequency="0.95	+	((rpm/    8500) factor[(6927/    8500),(8500/    8500)])*0.2";
		volume="engineOn*(1-camPos)*((rpm/    8500) factor[(7012/    8500),(8075/    8500)])";
	};
	class IdleThrust_Int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",
			0.56234133,
			1
		};
		frequency=1;
		volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    8500) factor[(850/    8500),(1700/    8500)])	*	((rpm/    8500) factor[(3187/    8500),( 2550/    8500)]))";
	};
	class EngineThrust_Int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",
			0.63095737,
			1
		};
		frequency="0.9	+	((rpm/    8500) factor[(2550/    8500),(4250/    8500)])*0.2";
		volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    8500) factor[(2550/    8500),(3102/    8500)])	*	((rpm/    8500) factor[(4335/    8500),( 3400/    8500)]))";
	};
	class Engine1_Thrust_int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",
			0.70794576,
			1
		};
		frequency="0.9	+	((rpm/    8500) factor[(3400/    8500),(5525/    8500)])*0.2";
		volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    8500) factor[(3315/    8500),(4250/    8500)])	*	((rpm/    8500) factor[(5525/    8500),( 4675/    8500)]))";
	};
	class Engine2_Thrust_int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",
			0.79432821,
			1
		};
		frequency="0.9	+	((rpm/    8500) factor[(4590/    8500),(6630/    8500)])*0.2";
		volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    8500) factor[(4675/    8500),(5440/    8500)])	*	((rpm/    8500) factor[(6672/    8500),( 5865/    8500)]))";
	};
	class Engine3_Thrust_int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",
			0.89125091,
			1
		};
		frequency="0.95	+	((rpm/    8500) factor[(5865/    8500),(7905/    8500)])*0.2";
		volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/    8500) factor[(5737/    8500),(6587/    8500)])	*	((rpm/    8500) factor[(7947/    8500),( 6927/    8500)]))";
	};
	class Engine4_Thrust_int
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",
			1,
			1
		};
		frequency="0.95	+	((rpm/    8500) factor[(6927/    8500),(8500/    8500)])*0.2";
		volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/    8500) factor[(7012/    8500),(8075/    8500)])";
	};
	class TiresRockOut
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
			1,
			1,
			60
		};
		frequency="1";
		volume="camPos*rock*(speed factor[2, 20])";
	};
	class TiresSandOut
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
			1,
			1,
			60
		};
		frequency="1";
		volume="camPos*sand*(speed factor[2, 20])";
	};
	class TiresGrassOut
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
			1,
			1,
			60
		};
		frequency="1";
		volume="camPos*grass*(speed factor[2, 20])";
	};
	class TiresMudOut
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
			1,
			1,
			60
		};
		frequency="1";
		volume="camPos*mud*(speed factor[2, 20])";
	};
	class TiresGravelOut
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
			1,
			1,
			60
		};
		frequency="1";
		volume="camPos*gravel*(speed factor[2, 20])";
	};
	class TiresAsphaltOut
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
			1,
			1,
			60
		};
		frequency="1";
		volume="camPos*asphalt*(speed factor[2, 20])";
	};
	class NoiseOut
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",
			0.89125091,
			1,
			90
		};
		frequency="1";
		volume="camPos*(damper0 max 0.02)*(speed factor[0, 15])";
	};
	class TiresRockIn
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
			0.63095737,
			1
		};
		frequency="1";
		volume="(1-camPos)*rock*(speed factor[2, 20])";
	};
	class TiresSandIn
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",
			0.63095737,
			1
		};
		frequency="1";
		volume="(1-camPos)*sand*(speed factor[2, 20])";
	};
	class TiresGrassIn
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
			0.63095737,
			1
		};
		frequency="1";
		volume="(1-camPos)*grass*(speed factor[2, 20])";
	};
	class TiresMudIn
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
			0.63095737,
			1
		};
		frequency="1";
		volume="(1-camPos)*mud*(speed factor[2, 20])";
	};
	class TiresGravelIn
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
			0.63095737,
			1
		};
		frequency="1";
		volume="(1-camPos)*gravel*(speed factor[2, 20])";
	};
	class TiresAsphaltIn
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
			0.50118721,
			1
		};
		frequency="1";
		volume="(1-camPos)*asphalt*(speed factor[2, 20])";
	};
	class NoiseIn
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",
			0.56234133,
			1
		};
		frequency="1";
		volume="(damper0 max 0.1)*(speed factor[0, 15])*(1-camPos)";
	};
	class breaking_ext_road
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
			0.70794576,
			1,
			80
		};
		frequency=1;
		volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
	};
	class acceleration_ext_road
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
			0.70794576,
			1,
			80
		};
		frequency=1;
		volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_ext_road
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
			0.70794576,
			1,
			80
		};
		frequency=1;
		volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_ext_road
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
			0.70794576,
			1,
			80
		};
		frequency=1;
		volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
	class breaking_ext_dirt
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
			0.70794576,
			1,
			60
		};
		frequency=1;
		volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
	};
	class acceleration_ext_dirt
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
			0.70794576,
			1,
			60
		};
		frequency=1;
		volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_ext_dirt
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
			0.70794576,
			1,
			60
		};
		frequency=1;
		volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_ext_dirt
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
			0.70794576,
			1,
			60
		};
		frequency=1;
		volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
	class breaking_int_road
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
			0.50118721,
			1
		};
		frequency=1;
		volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
	};
	class acceleration_int_road
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
			0.50118721,
			1
		};
		frequency=1;
		volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_int_road
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
			0.50118721,
			1
		};
		frequency=1;
		volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_int_road
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
			0.50118721,
			1
		};
		frequency=1;
		volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
	class breaking_int_dirt
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
			0.50118721,
			1
		};
		frequency=1;
		volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
	};
	class acceleration_int_dirt
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
			0.50118721,
			1
		};
		frequency=1;
		volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_int_dirt
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
			0.50118721,
			1
		};
		frequency=1;
		volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_int_dirt
	{
		sound[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
			0.50118721,
			1
		};
		frequency=1;
		volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
};