class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
	};
	class V_CarrierRigKBT_01_light_base_F;
	class H_HelmetSpecB;
	class H_HelmetB_plain_mcamo;
	class H_HelmetHBK_headset_base_F;
	class H_HelmetHBK_base_F;
	class H_Booniehat_khk;
	class V_PlateCarrier2_blk;
	class H_Watchcap_blk;
	// uniforms
	class prazv_U_B_Multitarn: Uniform_Base
	{
		scope=2;
		displayName="Combat Uniform(Multitarn)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Multitarn_soldier_F";
			containerClass="Supply60";
			mass=35;
		};
	};
	class prazv_U_B_m84: Uniform_Base
	{
		scope=2;
		displayName="Combat Uniform(M84)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_m84_soldier_F";
			containerClass="Supply60";
			mass=35;
		};
	};
	class prazv_U_B_wz93: Uniform_Base
	{
		scope=2;
		displayName="Combat Uniform(WZ93 Pantera)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_wz93_soldier_F";
			containerClass="Supply60";
			mass=35;
		};
	};
	class prazv_U_B_wz93_2: Uniform_Base
	{
		scope=2;
		displayName="Combat Uniform(WZ93 Pantera/2)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_wz93_2_soldier_F";
			containerClass="Supply60";
			mass=35;
		};
	};
	class prazv_U_B_rodpm: Uniform_Base
	{
		scope=2;
		displayName="Combat Uniform(M2017)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_rodpm_soldier_F";
			containerClass="Supply60";
			mass=35;
		};
	};
	class prazv_U_B_mdu10: Uniform_Base
	{
		scope=2;
		displayName="Combat Uniform(M-MDU-10)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_mdu10_soldier_F";
			containerClass="Supply60";
			mass=35;
		};
	};
	class prazv_U_B_cropat: Uniform_Base
	{
		scope=2;
		displayName="Combat Uniform(CROPAT)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_cropat_soldier_F";
			containerClass="Supply60";
			mass=35;
		};
	};
	// stealth uniform
	class U_B_CTRG_Soldier_3_multitarn_F: Uniform_Base
	{
		author="prazv";
		scope=2;
		displayName="Combat Uniform (Rolled Up/Multitarn)";
		picture="\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_3_Arid_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_multitarn_F_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_3_multitarn_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_3_mdu10_F: Uniform_Base
	{
		author="prazv";
		scope=2;
		displayName="Combat Uniform (Rolled Up/M-MDU-10)";
		picture="\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_3_Arid_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_mdu10_F_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_3_mdu10_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_3_rodpm_F: Uniform_Base
	{
		author="prazv";
		scope=2;
		displayName="Combat Uniform (Rolled Up/M2017)";
		picture="\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_3_Arid_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_rodpm_F_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_3_rodpm_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_3_wz93_F: Uniform_Base
	{
		author="prazv";
		scope=2;
		displayName="Combat Uniform (Rolled Up/WZ93)";
		picture="\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_3_Arid_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_wz93_F_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_3_wz93_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_3_m84_F: Uniform_Base
	{
		author="prazv";
		scope=2;
		displayName="Combat Uniform (Rolled Up/M84)";
		picture="\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_3_Arid_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_M84_F_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_3_m84_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_3_cropat_F: Uniform_Base
	{
		author="prazv";
		scope=2;
		displayName="Combat Uniform (Rolled Up/CROPAT)";
		picture="\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_3_Arid_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\U_B_CTRG_Soldier_cropat_F_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_3_cropat_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	// vests
	class V_CarrierRigKBT_01_light_multitarn_F: V_CarrierRigKBT_01_light_base_F
	{
		author="prazv";
		_generalMacro="V_CarrierRigKBT_01_light_Olive_F";
		scope=2;
		displayName="Modular Carrier Lite (Multitarn)";
		picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_CArrierRigKBT_01_light_Olive_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\carrierrigkbt_01_multitarn_co.paa"
		};
	};
	class V_CarrierRigKBT_01_light_rodpm_F: V_CarrierRigKBT_01_light_base_F
	{
		author="prazv";
		_generalMacro="V_CarrierRigKBT_01_light_Olive_F";
		scope=2;
		displayName="Modular Carrier Lite (M2017)";
		picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_CArrierRigKBT_01_light_Olive_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\carrierrigkbt_01_rodpm_co.paa"
		};
	};
	class V_CarrierRigKBT_01_light_m84: V_CarrierRigKBT_01_light_base_F
	{
		author="prazv";
		_generalMacro="V_CarrierRigKBT_01_light_Olive_F";
		scope=2;
		displayName="Modular Carrier Lite (M84)";
		picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_CArrierRigKBT_01_light_Olive_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\carrierrigkbt_01_m84_co.paa"
		};
	};
	class V_CarrierRigKBT_01_light_wz93: V_CarrierRigKBT_01_light_base_F
	{
		author="prazv";
		_generalMacro="V_CarrierRigKBT_01_light_Olive_F";
		scope=2;
		displayName="Modular Carrier Lite (WZ93)";
		picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_CArrierRigKBT_01_light_Olive_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\carrierrigkbt_01_wz93_co.paa"
		};
	};
	class V_CarrierRigKBT_01_light_mdu10: V_CarrierRigKBT_01_light_base_F
	{
		author="prazv";
		_generalMacro="V_CarrierRigKBT_01_light_Olive_F";
		scope=2;
		displayName="Modular Carrier Lite (M-MDU-10)";
		picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_CArrierRigKBT_01_light_Olive_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\carrierrigkbt_01_mdu-10_co.paa"
		};
	};
	class V_CarrierRigKBT_01_light_cropat: V_CarrierRigKBT_01_light_base_F
	{
		author="prazv";
		_generalMacro="V_CarrierRigKBT_01_light_Olive_F";
		scope=2;
		displayName="Modular Carrier Lite (CROPAT)";
		picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_CArrierRigKBT_01_light_Olive_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\carrierrigkbt_01_cropat_co.paa"
		};
	};
	class V_PlateCarrier2_multitarn: V_PlateCarrier2_blk
	{
		author="prazv";
		_generalMacro="V_PlateCarrier2_blk";
		scope=2;
		displayName="Carrier Rig (Multitarn)";
		picture="\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\vests_multitarn_co.paa"
		};
	};
	class V_PlateCarrier2_rodpm: V_PlateCarrier2_blk
	{
		author="prazv";
		_generalMacro="V_PlateCarrier2_blk";
		scope=2;
		displayName="Carrier Rig (M2017)";
		picture="\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\vests_rodpm_co.paa"
		};
	};
	class V_PlateCarrier2_m84: V_PlateCarrier2_blk
	{
		author="prazv";
		_generalMacro="V_PlateCarrier2_blk";
		scope=2;
		displayName="Carrier Rig (M84)";
		picture="\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\vests_m84_co.paa"
		};
	};
	class V_PlateCarrier2_cropat: V_PlateCarrier2_blk
	{
		author="prazv";
		_generalMacro="V_PlateCarrier2_blk";
		scope=2;
		displayName="Carrier Rig (CROPAT)";
		picture="\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\vests_cropat_co.paa"
		};
	};
	class V_PlateCarrier2_wz93: V_PlateCarrier2_blk
	{
		author="prazv";
		_generalMacro="V_PlateCarrier2_blk";
		scope=2;
		displayName="Carrier Rig (WZ93)";
		picture="\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\vests_wz93_co.paa"
		};
	};
	class V_PlateCarrier2_mdu10: V_PlateCarrier2_blk
	{
		author="prazv";
		_generalMacro="V_PlateCarrier2_blk";
		scope=2;
		displayName="Carrier Rig (M-MDU-10)";
		picture="\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\vests_mdu10_co.paa"
		};
	};
	//helmets
	//combat helmet
	class H_HelmetB_plain_multitarn: H_HelmetB_plain_mcamo
	{
		author="prazv";
		_generalMacro="H_HelmetB_plain_wdl";
		scope=2;
		displayName="Combat Helmet (Multitarn)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetB_plain_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_multitarn_co.paa"
		};
	};
	class H_HelmetB_plain_rodpm: H_HelmetB_plain_mcamo
	{
		author="prazv";
		_generalMacro="H_HelmetB_plain_wdl";
		scope=2;
		displayName="Combat Helmet (M2017)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetB_plain_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_rodpm_co.paa"
		};
	};
	class H_HelmetB_plain_wz93: H_HelmetB_plain_mcamo
	{
		author="prazv";
		_generalMacro="H_HelmetB_plain_wdl";
		scope=2;
		displayName="Combat Helmet (WZ93)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetB_plain_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_wz93_co.paa"
		};
	};
	class H_HelmetB_plain_mdu10: H_HelmetB_plain_mcamo
	{
		author="prazv";
		_generalMacro="H_HelmetB_plain_wdl";
		scope=2;
		displayName="Combat Helmet (M-MDU-10)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetB_plain_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_mdu10_co.paa"
		};
	};
	class H_HelmetB_plain_m84: H_HelmetB_plain_mcamo
	{
		author="prazv";
		_generalMacro="H_HelmetB_plain_wdl";
		scope=2;
		displayName="Combat Helmet (M84)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetB_plain_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_m84_co.paa"
		};
	};
	class H_HelmetB_plain_cropat: H_HelmetB_plain_mcamo
	{
		author="prazv";
		_generalMacro="H_HelmetB_plain_wdl";
		scope=2;
		displayName="Combat Helmet (CROPAT)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetB_plain_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_cropat_co.paa"
		};
	};
	// combat helmet headset
	class H_HelmetSpecB_multitarn: H_HelmetSpecB
	{
		author="prazv";
		_generalMacro="H_HelmetSpecB_wdl";
		displayName="Enhanced Combat Helmet (Multitarn)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetSpecB_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_multitarn_co.paa"
		};
	};
	class H_HelmetSpecB_rodpm: H_HelmetSpecB
	{
		author="prazv";
		_generalMacro="H_HelmetSpecB_wdl";
		displayName="Enhanced Combat Helmet (M2017)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetSpecB_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_rodpm_co.paa"
		};
	};
	class H_HelmetSpecB_wz93: H_HelmetSpecB
	{
		author="prazv";
		_generalMacro="H_HelmetSpecB_wdl";
		displayName="Enhanced Combat Helmet (WZ93)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetSpecB_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_wz93_co.paa"
		};
	};
	class H_HelmetSpecB_mdu10: H_HelmetSpecB
	{
		author="prazv";
		_generalMacro="H_HelmetSpecB_wdl";
		displayName="Enhanced Combat Helmet (M-MDU-10)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetSpecB_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_mdu10_co.paa"
		};
	};
	class H_HelmetSpecB_m84: H_HelmetSpecB
	{
		author="prazv";
		_generalMacro="H_HelmetSpecB_wdl";
		displayName="Enhanced Combat Helmet (M84)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetSpecB_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_m84_co.paa"
		};
	};
	class H_HelmetSpecB_cropat: H_HelmetSpecB
	{
		author="prazv";
		_generalMacro="H_HelmetSpecB_wdl";
		displayName="Enhanced Combat Helmet (CROPAT)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetSpecB_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\equip1_cropat_co.paa"
		};
	};
	// Advanced Modular Helmet w Headset
	class H_HelmetHBK_headset_multitarn_F: H_HelmetHBK_headset_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_headset_F";
		scope=2;
		displayName="Advanced Modular Helmet (Multitarn/Headset)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_headset_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_multitarn_01_co.paa"
		};
	};
	class H_HelmetHBK_headset_rodpm_F: H_HelmetHBK_headset_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_headset_F";
		scope=2;
		displayName="Advanced Modular Helmet (M2017/Headset)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_headset_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_rodpm_01_co.paa"
		};
	};
	class H_HelmetHBK_headset_m84_F: H_HelmetHBK_headset_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_headset_F";
		scope=2;
		displayName="Advanced Modular Helmet (M84/Headset)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_headset_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_m84_01_co.paa"
		};
	};
	class H_HelmetHBK_headset_mdu10_F: H_HelmetHBK_headset_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_headset_F";
		scope=2;
		displayName="Advanced Modular Helmet (M-MDU-10/Headset)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_headset_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_mdu10_01_co.paa"
		};
	};
	class H_HelmetHBK_headset_wz93_F: H_HelmetHBK_headset_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_headset_F";
		scope=2;
		displayName="Advanced Modular Helmet (WZ93/Headset)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_headset_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_wz93_01_co.paa"
		};
	};
	class H_HelmetHBK_headset_cropat_F: H_HelmetHBK_headset_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_headset_F";
		scope=2;
		displayName="Advanced Modular Helmet (CROPAT/Headset)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_headset_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_cropat_01_co.paa"
		};
	};
	// Advanced Modular Helmet w/o Headset
	class H_HelmetHBK_multitarn_F: H_HelmetHBK_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_F";
		scope=2;
		displayName="Advanced Modular Helmet (Multitarn)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_multitarn_01_co.paa"
		};
	};
	class H_HelmetHBK_rodpm_F: H_HelmetHBK_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_F";
		scope=2;
		displayName="Advanced Modular Helmet (M2017)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_rodpm_01_co.paa"
		};
	};
	class H_HelmetHBK_m84_F: H_HelmetHBK_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_F";
		scope=2;
		displayName="Advanced Modular Helmet (M84)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_m84_01_co.paa"
		};
	};
	class H_HelmetHBK_mdu10_F: H_HelmetHBK_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_F";
		scope=2;
		displayName="Advanced Modular Helmet (M-MDU-10)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_mdu10_01_co.paa"
		};
	};
	class H_HelmetHBK_wz93_F: H_HelmetHBK_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_F";
		scope=2;
		displayName="Advanced Modular Helmet (WZ93)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_wz93_01_co.paa"
		};
	};
	class H_HelmetHBK_cropat_F: H_HelmetHBK_base_F
	{
		author="prazv";
		_generalMacro="H_HelmetHBK_F";
		scope=2;
		displayName="Advanced Modular Helmet (CROPAT)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\h_helmethbk_cropat_01_co.paa"
		};
	};
	//booniehats
	class H_Booniehat_multitarn: H_Booniehat_khk
	{
		author="prazv";
		_generalMacro="H_Booniehat_mgrn";
		scope=2;
		displayName="Boonie Hat (Multitarn)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_Booniehat_mgrn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\booniehat_multitarn_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_m84: H_Booniehat_khk
	{
		author="prazv";
		_generalMacro="H_Booniehat_mgrn";
		scope=2;
		displayName="Boonie Hat (M84)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_Booniehat_mgrn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\booniehat_m84_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_rodpm: H_Booniehat_khk
	{
		author="prazv";
		_generalMacro="H_Booniehat_mgrn";
		scope=2;
		displayName="Boonie Hat (M2017)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_Booniehat_mgrn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\booniehat_rodpm_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_cropat: H_Booniehat_khk
	{
		author="prazv";
		_generalMacro="H_Booniehat_mgrn";
		scope=2;
		displayName="Boonie Hat (CROPAT)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_Booniehat_mgrn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\booniehat_cropat_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_mdu10: H_Booniehat_khk
	{
		author="prazv";
		_generalMacro="H_Booniehat_mgrn";
		scope=2;
		displayName="Boonie Hat (M-MDU-10)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_Booniehat_mgrn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\booniehat_mdu10_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_wz93: H_Booniehat_khk
	{
		author="prazv";
		_generalMacro="H_Booniehat_mgrn";
		scope=2;
		displayName="Boonie Hat (WZ93)";
		picture="\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_Booniehat_mgrn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\booniehat_wz93_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	//beanies
	class H_Watchcap_rodpm: H_Watchcap_blk
	{
		author="prazv";
		_generalMacro="H_Watchcap_cbr";
		displayName="Beanie (M2017)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_cbr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\woolhat_rodpm_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Watchcap_wz93: H_Watchcap_blk
	{
		author="prazv";
		_generalMacro="H_Watchcap_cbr";
		displayName="Beanie (Wz93)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_cbr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\woolhat_wz93_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Watchcap_cropat: H_Watchcap_blk
	{
		author="prazv";
		_generalMacro="H_Watchcap_cbr";
		displayName="Beanie (CROPAT)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_cbr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\woolhat_cropat_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Watchcap_multitarn: H_Watchcap_blk
	{
		author="prazv";
		_generalMacro="H_Watchcap_cbr";
		displayName="Beanie (Multitarn)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_cbr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\woolhat_multitarn_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Watchcap_m84: H_Watchcap_blk
	{
		author="prazv";
		_generalMacro="H_Watchcap_cbr";
		displayName="Beanie (M84)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_cbr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\woolhat_m84_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Watchcap_mdu10: H_Watchcap_blk
	{
		author="prazv";
		_generalMacro="H_Watchcap_cbr";
		displayName="Beanie (M-MDU-10)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_cbr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"prazv_vanilla_retex\data\woolhat_mdu10_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
};
