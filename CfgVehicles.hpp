class CfgVehicles
{
	class B_Soldier_base_F;
	class Vest_Base_F;
	// uniforms
	class B_Multitarn_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\clothing1_Multitarn_co.paa"
		};
	};
	class B_m84_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\clothing1_m84_co.paa"
		};
	};
	class B_wz93_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\clothing1_wz93_co.paa"
		};
	};
	class B_wz93_2_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\clothing1_wz93_2_co.paa"
		};
	};
	class B_rodpm_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\clothing1_rodpm_co.paa"
		};
	};
	class B_mdu10_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\clothing1_mdu10_co.paa"
		};
	};
	class B_cropat_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\clothing1_cropat_co.paa"
		};
	};
	// vests 
	class Vest_V_CarrierRigKBT_01_light_multitarn_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Carrier Lite (Multitarn)";
		author="prazv";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_CarrierRigKBT_01_light_multitarn_F
			{
				name="V_CarrierRigKBT_01_light_multitarn_F";
				count=1;
			};
		};
	};
	class Vest_V_CarrierRigKBT_01_light_rodpm_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Carrier Lite (M2017)";
		author="prazv";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_CarrierRigKBT_01_light_rodpm_F
			{
				name="V_CarrierRigKBT_01_light_rodpm_F";
				count=1;
			};
		};
	};
	class Vest_V_CarrierRigKBT_01_light_m84_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Carrier Lite (M84)";
		author="prazv";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_CarrierRigKBT_01_light_m84_F
			{
				name="V_CarrierRigKBT_01_light_m84_F";
				count=1;
			};
		};
	};
	class Vest_V_CarrierRigKBT_01_light_wz93_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Carrier Lite (WZ93)";
		author="prazv";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_CarrierRigKBT_01_light_wz93_F
			{
				name="V_CarrierRigKBT_01_light_wz93_F";
				count=1;
			};
		};
	};
	class Vest_V_CarrierRigKBT_01_light_mdu10_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Carrier Lite (M-MDU-10)";
		author="prazv";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_CarrierRigKBT_01_light_mdu10_F
			{
				name="V_CarrierRigKBT_01_light_mdu10_F";
				count=1;
			};
		};
	};
	class Vest_V_CarrierRigKBT_01_light_cropat_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Carrier Lite (CROPAT)";
		author="prazv";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_CarrierRigKBT_01_light_cropat_F
			{
				name="V_CarrierRigKBT_01_light_cropat_F";
				count=1;
			};
		};
	};
};