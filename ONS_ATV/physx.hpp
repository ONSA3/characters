		//----- General Parameters -----//
		normalSpeedForwardCoef=0.9;
		turnCoef=3.5;
		terrainCoef=0.5;
		simulation="carx";

		maxSpeed=95;
		fuelCapacity=28;
		wheelCircumference=1.5;

		brakeIdleSpeed=0.0;
		maxFordingDepth=0.7;
		waterSpeedFactor=0.3;
		waterResistance=1;
		waterResistanceCoef=0.2;
		waterLeakiness = 10.0;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
				GearboxRatios[] = {"R1",-2.47,"N",0,"D1",2.21,"D2",1.48};
			TransmissionRatios[] = {"High",6.8};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[]={0.95,0.0,0.95,0.95};
		switchTime = 0.31;
		latency = 1.3;
		transmissionLosses = 18;

		//----- Clutch and Driveline Parameters -----//
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 15.0;

		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
		{"(1000/8000)","(40/95)"},
		{"(2000/8000)","(55/95)"},
		{"(3000/8000)","(60/95)"},
		{"(4000/8000)","(65/95)"},
		{"(5000/8000)","(75/95)"},
		{"(6000/8000)","(80/95)"},
		{"(7000/8000)","(95/95)"},
		{"(9001/8000)","(0/95)"}
		};

		maxOmega = 837.76;
		enginePower = 66;
		//peakTorque = 95;
		peakTorque = "(95*2)";
		idleRPM = 300;
		redRPM = 8000;


		engineLosses = 34;
		thrustDelay=0.1;
		engineBrakeCoef = 0.8;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef=0.3;
		antiRollbarForceLimit=3;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;


		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=20;
				MOI=5;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=1000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.2;
				mMaxDroop=0.2;
				sprungMass = 220; // mass in model - 882.000
				springStrength = 22050;
				springDamperRate = 2163;

				longitudinalStiffnessPerUnitGravity=4800;
				latStiffX = 2.5;
				latStiffY = 18;
				frictionVsSlipGraph[] = {{ 0.17,0.95 }, { 0.4,0.85 },{ 1,0.75 }};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxBrakeTorque=1000;
				maxHandBrakeTorque=10000;
			};
			class LR2: LF
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxBrakeTorque=1000;
				maxHandBrakeTorque=10000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: LF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxBrakeTorque=3000;
				maxHandBrakeTorque=10000;
			};
			class RR2: LF
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxBrakeTorque=3000;
				maxHandBrakeTorque=10000;
			};

		};
		/// End of PhysX