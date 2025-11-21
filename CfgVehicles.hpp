class CfgVehicles
{
	class B_Soldier_base_F;
	class Vest_Base_F;
	class B_AssaultPack_Base;
	class B_CTRG_Soldier_3_F;
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
	class B_CTRG_Soldier_3_multitarn_F: B_CTRG_Soldier_3_F
	{
		author="prazv";
		_generalMacro="B_CTRG_Soldier_3_arid_F";
		uniformClass="U_B_CTRG_Soldier_3_multitarn_F";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_multitarn_F_co.paa"
		};
	};
	class B_CTRG_Soldier_3_mdu10_F: B_CTRG_Soldier_3_F
	{
		author="prazv";
		_generalMacro="B_CTRG_Soldier_3_arid_F";
		uniformClass="U_B_CTRG_Soldier_3_mdu10_F";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_mdu10_F_co.paa"
		};
	};
	class B_CTRG_Soldier_3_rodpm_F: B_CTRG_Soldier_3_F
	{
		author="prazv";
		_generalMacro="B_CTRG_Soldier_3_arid_F";
		uniformClass="U_B_CTRG_Soldier_3_rodpm_F";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_rodpm_F_co.paa"
		};
	};
	class B_CTRG_Soldier_3_wz93_F: B_CTRG_Soldier_3_F
	{
		author="prazv";
		_generalMacro="B_CTRG_Soldier_3_arid_F";
		uniformClass="U_B_CTRG_Soldier_3_wz93_F";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_wz93_F_co.paa"
		};
	};
	class B_CTRG_Soldier_3_m84_F: B_CTRG_Soldier_3_F
	{
		author="prazv";
		_generalMacro="B_CTRG_Soldier_3_arid_F";
		uniformClass="U_B_CTRG_Soldier_3_m84_F";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_m84_F_co.paa"
		};
	};
	class B_CTRG_Soldier_3_cropat_F: B_CTRG_Soldier_3_F
	{
		author="prazv";
		_generalMacro="B_CTRG_Soldier_3_arid_F";
		uniformClass="U_B_CTRG_Soldier_3_cropat_F";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_cropat_F_co.paa"
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
	//backpacks
	class B_AssaultPack_multitarn: B_AssaultPack_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_AssaultPack_khk";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		displayName="Assault Backpack (Multitarn)";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\backpack_compact_multitarn_co.paa"
		};
	};
	class B_AssaultPack_rodpm: B_AssaultPack_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_AssaultPack_khk";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		displayName="Assault Backpack (M2017)";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\backpack_compact_rodpm_co.paa"
		};
	};
	class B_AssaultPack_m84: B_AssaultPack_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_AssaultPack_khk";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		displayName="Assault Backpack (M84)";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\backpack_compact_m84_co.paa"
		};
	};
	class B_AssaultPack_wz93: B_AssaultPack_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_AssaultPack_khk";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		displayName="Assault Backpack (WZ93)";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\backpack_compact_wz93_co.paa"
		};
	};
	class B_AssaultPack_cropat: B_AssaultPack_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_AssaultPack_khk";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		displayName="Assault Backpack (CROPAT)";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\backpack_compact_cropat_co.paa"
		};
	};
	class B_AssaultPack_mdu10: B_AssaultPack_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_AssaultPack_khk";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		displayName="Assault Backpack (M-MDU-10)";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\backpack_compact_mdu10_co.paa"
		};
	};
};