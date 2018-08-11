class CfgPatches {
	class mbplat {
		units[] = {
			"Land_MB_Platform_Side_1",
			"Land_MB_Platform_Side_2",
			"Land_MB_Platform_Side_3",
			"Land_MB_Platform_Side_4",
			"Land_MB_Platform_Side_5",
			"Land_MB_Platform_Side_6",
			"Land_MB_Platform_Corner_1",
			"Land_MB_Platform_Corner_2",
			"Land_MB_Platform_Corner_3",
			"Land_MB_Platform_Bridge_1",
			"Land_MB_Platform_Support_1",
			"Land_MB_Platform_Core_1",
			"Land_MB_Platform_Core_2",
			"Land_MB_Platform_Core_3",
			"Land_MB_Platform_Top_1",
			"Land_MB_Platform_Int_1",
			"Land_MB_Platform_Int_2",
			"Land_MB_Platform_Int_3",
			"Land_MB_Platform_Int_4",
			"Land_MB_Platform_Hgr_1",
			"Land_MB_Platform_Hgr_2",
			"Land_MB_Platform_Misc_1",
			"Land_MB_Composition_1",
			"Land_MB_Composition_2"	
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses {
	class mbPlatformParts {
		displayname = "Mother Base";
	};
};
class CfgFunctions {
	class mbplat {
		tag = "mbplat";
		class mbplatFunctions {
			file = "\mbplat\scripts";

			class TeleLift {};
			class CompInit {};
			class CompMove {};
			class CompDelete {};
		};
	};
};
class CfgVehicles {
	class VR_Block_base_F;
	class Land_MB_Platform_base: VR_Block_base_F {
		animated=false;
		vehicleClass = "mbPlatformParts";
		editorCategory="EdCat_MB_MotherBase";
		nameSound = "";
		icon = "iconStaticObject";
		accuracy = 1000;
		armor = 2000;
		destrType = "DestructNo";
		scope=0;
	};
	class Land_MB_Platform_Side_1: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_side_1.p3d";
		displayName = "Platform Side 1 (Top & Bottom Walkway)";
		editorSubcategory="EdSubCat_MB_Platforms_Edge";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
		
	};
	class Land_MB_Platform_Side_2: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_side_2.p3d";
		displayName = "Platform Side 2 (Top & Middle Bridge)";
		editorSubcategory="EdSubCat_MB_Platforms_Edge";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Side_3: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_side_3.p3d";
		displayName = "Platform Side 3 (Helipad)";
		editorSubcategory="EdSubCat_MB_Platforms_Edge";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Side_4: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_side_4.p3d";
		displayName = "Platform Side 4 (Hangar Entrance)";
		editorSubcategory="EdSubCat_MB_Platforms_Edge";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Side_5: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_side_5.p3d";
		displayName = "Platform Side 5 (Single Stair)";
		editorSubcategory="EdSubCat_MB_Platforms_Edge";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Side_6: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_side_6.p3d";
		displayName = "Platform Side 6 (Single Stair Longside)";
		editorSubcategory="EdSubCat_MB_Platforms_Edge";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Corner_1: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_corner_1.p3d";
		displayName = "Platform Corner 1";
		editorSubcategory="EdSubCat_MB_Platforms_Edge";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Corner_2: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_corner_2.p3d";
		displayName = "Platform Corner 2 (Big Corner)";
		editorSubcategory="EdSubCat_MB_Platforms_Edge";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Corner_3: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_corner_3.p3d";
		displayName = "Platform Corner 3 (Inside Corner)";
		editorSubcategory="EdSubCat_MB_Platforms_Edge";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Bridge_1: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_bridge_1.p3d";
		displayName = "Platform Bridge 1";
		editorSubcategory="EdSubCat_MB_Platforms_Support";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Support_Seabase: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_support_seabase.p3d";
		displayName = "Seafloor AI Path Fixer";
		editorSubcategory="EdSubCat_MB_Platforms_Support";
		mapSize = 2;
		scope = 0;
	};
	class Land_MB_Platform_Support_1: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_support_1.p3d";
		displayName = "Platform Support 1";
		editorSubcategory="EdSubCat_MB_Platforms_Support";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Foundation_1: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_foundation_1.p3d";
		displayName = "Platform Foundation 1";
		editorSubcategory="EdSubCat_MB_Platforms_Support";
		mapSize = 2;
		scope = 0;
	};
	class Land_MB_Platform_Foundation_2: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_foundation_2.p3d";
		displayName = "Platform Foundation 2";
		editorSubcategory="EdSubCat_MB_Platforms_Support";
		mapSize = 2;
		scope = 0;
	};
	class Land_MB_Platform_Core_1: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_core_1.p3d";
		displayName = "Platform Core 1 (Basic)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Core_2: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_core_2.p3d";
		displayName = "Platform Core 2 (Open Pit)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Core_3: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_core_3.p3d";
		displayName = "Platform Core 3 (Open Hangar)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Top_1: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_top_1.p3d";
		displayName = "Platform Top 1 (Runway)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Int_1: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_int_1.p3d";
		displayName = "Platform Interior 1 (Flat 1F)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Int_2: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_int_2.p3d";
		displayName = "Platform Interior 2 (Hangar 2F)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Int_3: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_int_3.p3d";
		displayName = "Platform Interior 3 (Open Hangar 2F)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Int_4: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_int_4.p3d";
		displayName = "Platform Interior 4 (Big Hangar 4F)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Hgr_2: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_hgr_2.p3d";
		displayName = "Hangar 2 (Tele-lift 4F)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
		class UserActions {
			class TeleLift {
				displayName = "Teleport Lift";
				position = Tele_2_Trigger;
				priority = 0.4;
				radius = 10;
				onlyForPlayer = false;
				condition = (true);
				statement = ([this,13] spawn mbplat_fnc_TeleLift);
			};
			class TeleLiftUp: TeleLift {
				position = Tele_1_Trigger;
			};
		};
		
	};
	class Land_MB_Platform_Misc_1: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_misc_1.p3d";
		displayName = "Misc 1 (Big Hangar End Wall)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
	};
	class Land_MB_Platform_Hgr_1: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_plat_hgr_1.p3d";
		displayName = "Hangar 1 (Tele-lift 2F)";
		editorSubcategory="EdSubCat_MB_Platforms_Core";
		mapSize = 2;
		scope = 2; scopeCurator = 2;
		class UserActions {
			class TeleLift {
				displayName = "Teleport Lift";
				position = Tele_2_Trigger;
				priority = 0.4;
				radius = 10;
				onlyForPlayer = false;
				condition = (true);
				statement = ([this,7] spawn mbplat_fnc_TeleLift);
			};
			class TeleLiftUp: TeleLift {
				position = Tele_1_Trigger;
			};
		};
	};
	class Land_MB_Composition_base: Land_MB_Platform_base {
		model = "\mbplat\mbplat\mb2_comp_base_1.p3d";
		displayName = "Platform Composition 1 (Helipad)";
		editorSubcategory="EdSubCat_MB_Platforms_Comp";
		mapSize = 2;
		scope = 0;
		mbplatParts[] = {
			{"Land_MB_Platform_Core_1","pos_core_1",0,7}
		};
		class Eventhandlers {
			init = "_this call mbplat_fnc_compInit";								
			AttributesChanged3DEN = "_this call mbplat_fnc_compMove";		
			Dragged3DEN = "_this call mbplat_fnc_compMove";				
			RegisteredToWorld3DEN = "_this call mbplat_fnc_compInit";
			UnregisteredFromWorld3DEN = "_this call mbplat_fnc_compDelete";
		};
	};
	class Land_MB_Composition_1: Land_MB_Composition_base {
		model = "\mbplat\mbplat\mb2_comp_base_1.p3d";
		displayName = "Platform Composition 1 (Helipad)";
		scope = 2; scopeCurator = 2;
		mbplatParts[] = {
			{"Land_MB_Platform_Core_1","pos_core_1",0,7},
			{"Land_MB_Platform_Side_3","pos_side_1",0,7},
			{"Land_MB_Platform_Side_5","pos_side_2",90,7},
			{"Land_MB_Platform_Side_5","pos_side_3",180,7},
			{"Land_MB_Platform_Side_2","pos_side_4",270,7},
			{"Land_MB_Platform_Corner_2","pos_corner_1",0,7},
			{"Land_MB_Platform_Corner_1","pos_corner_2",90,7},
			{"Land_MB_Platform_Corner_1","pos_corner_3",180,7},
			{"Land_MB_Platform_Corner_1","pos_corner_4",270,7},
			{"Land_MB_Platform_Support_1","pos_support_1",0,-1},
			{"Land_MB_Platform_Support_1","pos_support_2",0,-1},
			{"Land_MB_Platform_Support_1","pos_support_3",0,-1},
			{"Land_MB_Platform_Support_1","pos_support_4",0,-1},
			{"Land_HelipadEmpty_F","pos_heli_1",0,-1}
		};
	};
	class Land_MB_Composition_2: Land_MB_Composition_base {
		model = "\mbplat\mbplat\mb2_comp_base_1.p3d";
		displayName = "Platform Composition 2 (Open Hangar)";
		scope = 2; scopeCurator = 2;
		mbplatParts[] = {
			{"Land_MB_Platform_Core_3","pos_core_1",0,7},
			{"Land_MB_Platform_Side_4","pos_side_1",0,7},
			{"Land_MB_Platform_Side_2","pos_side_2",90,7},
			{"Land_MB_Platform_Side_4","pos_side_3",180,7},
			{"Land_MB_Platform_Side_2","pos_side_4",270,7},
			{"Land_MB_Platform_Corner_1","pos_corner_1",0,7},
			{"Land_MB_Platform_Corner_1","pos_corner_2",90,7},
			{"Land_MB_Platform_Corner_1","pos_corner_3",180,7},
			{"Land_MB_Platform_Corner_1","pos_corner_4",270,7},
			{"Land_MB_Platform_Support_1","pos_support_1",0,-1},
			{"Land_MB_Platform_Support_1","pos_support_2",0,-1},
			{"Land_MB_Platform_Support_1","pos_support_3",0,-1},
			{"Land_MB_Platform_Support_1","pos_support_4",0,-1}
		};
	};
};
class CfgEditorCategories {
	class EdCat_MB_MotherBase {
		displayName = "Mother Base";
	};
};
class CfgEditorSubcategories {
	class EdSubCat_MB_Platforms_Edge{
		displayName = "Platforms (Edge)";
	};
	class EdSubCat_MB_Platforms_Support{
		displayName = "Platforms (Support)";
	};
		class EdSubCat_MB_Platforms_Core{
		displayName = "Platforms (Core)";
	};
		class EdSubCat_MB_Platforms_Comp{
		displayName = "Platform Compositions";
	};
};