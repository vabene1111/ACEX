class CfgWeapons {
    class ItemCore;
    class ACE_ItemCore;
    class InventoryItem_Base_F;

    class ACEX_Item_FMRadio: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_FMradio_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Electronics\FMradio_F.p3d";
        picture = QPATHTOF(UI\FMRadio_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };

    class ACEX_Item_ExtensionCord: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_ExtensionCord_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Electronics\ExtensionCord_F.p3d";
        picture = QPATHTOF(UI\ExtensionCord_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };

    class ACEX_Item_HandyCam: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_HandyCam_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Electronics\Handycam_F.p3d";
        picture = QPATHTOF(UI\Handycam_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };

    class ACEX_Item_Laptop: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Laptop_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Electronics\Laptop_F.p3d";
        picture = QPATHTOF(UI\Laptop_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 60;
        };
    };

    class ACEX_Item_MobilePhone_Old: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_MobilePhone_old_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Electronics\MobilePhone_old_F.p3d";
        picture = QPATHTOF(UI\MobilePhone_old_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 7;
        };
    };

    class ACEX_Item_MobilePhone_Smart: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_MobilePhone_smart_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Electronics\MobilePhone_smart_F.p3d";
        picture = QPATHTOF(UI\MobilePhone_smart_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 7;
        };
    };

    class ACEX_Item_PortableLongRangeRadio: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_PortableLongRangeRadio_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Electronics\PortableLongRangeRadio_F.p3d";
        picture = QPATHTOF(UI\PortableLongRangeRadio_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 15;
        };
    };

    class ACEX_Item_SatellitePhone: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_SatellitePhone_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Electronics\SatellitePhone_F.p3d";
        picture = QPATHTOF(UI\SatellitePhone_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 150;
        };
    };

    class ACEX_Item_SurvivalRadio: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_SurvivalRadio_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Electronics\SurvivalRadio_F.p3d";
        picture = QPATHTOF(UI\SurvivalRadio_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 50;
        };
    };

    class ACEX_Item_File1: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_File1_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Documents\File1_F.p3d";
        picture = QPATHTOF(UI\File1_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
    };

    class ACEX_Item_File2: ACE_ItemCore {
        displayName = "$STR_A3_CFGVEHICLES_LAND_FILE_RESEARCH_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Documents\File2_F.p3d";
        picture = QPATHTOF(UI\File2_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
    };

    class ACEX_Item_FilePhotos: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_FilePhotos_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Documents\FilePhotos_F.p3d";
        picture = QPATHTOF(UI\FilePhotos_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 3;
        };
    };

    class ACEX_Item_Map: ACE_ItemCore {
        displayName = "$STR_A3_sleeved_map_0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Documents\Map_F.p3d";
        picture = QPATHTOF(UI\Map_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 10;
        };
    };

    class ACEX_Item_Photos_V1: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Photos_V1_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Documents\Photos_V1_F.p3d";
        picture = QPATHTOF(UI\Photos_V1_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
    };

    class ACEX_Item_BottlePlastic_V1: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_BottlePlastic_V1_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Food\BottlePlastic_V1_F.p3d";
        picture = QPATHTOF(UI\BottlePlastic_V1_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 12;
        };
    };

    class ACEX_Item_Can_Dented: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Can_Dented_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Food\Can_Dented_F.p3d";
        picture = QPATHTOF(UI\Can_Dented_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 3;
        };
    };

    class ACEX_Item_Can_Rusty: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Can_Rusty_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Food\Can_Rusty_F.p3d";
        picture = QPATHTOF(UI\Can_Rusty_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 3;
        };
    };

    class ACEX_Item_TacticalBacon: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_TacticalBacon_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Food\TacticalBacon_F.p3d";
        picture = QPATHTOF(UI\TacticalBacon_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 10;
        };
    };

    class ACEX_Item_Suitcase: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Suitcase_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Luggage\Suitcase_F.p3d";
        picture = QPATHTOF(UI\Suitcase_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            allowedSlots[] = {901};
            mass = 150;
        };
    };

    class ACEX_Item_PenBlack: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_PenBlack_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Stationery\PenBlack_F.p3d";
        picture = QPATHTOF(UI\PenBlack_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 0.5;
        };
    };

    class ACEX_Item_PenRed: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_PenRed_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Stationery\PenRed_F.p3d";
        picture = QPATHTOF(UI\PenRed_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 0.5;
        };
    };

    class ACEX_Item_PencilBlue: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_PencilBlue_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Stationery\PencilBlue_F.p3d";
        picture = QPATHTOF(UI\PencilBlue_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 0.5;
        };
    };

    class ACEX_Item_PencilGreen: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_PencilGreen_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Stationery\PencilGreen_F.p3d";
        picture = QPATHTOF(UI\PencilGreen_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 0.5;
        };
    };

    class ACEX_Item_PencilRed: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_PencilRed_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Stationery\PencilRed_F.p3d";
        picture = QPATHTOF(UI\PencilRed_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 0.5;
        };
    };

    class ACEX_Item_PencilYellow: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_PencilYellow_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Stationery\PencilYellow_F.p3d";
        picture = QPATHTOF(UI\PencilYellow_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 0.5;
        };
    };

    class ACEX_Item_PensAndPencils: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_PensAndPencils_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Stationery\PensAndPencils_F.p3d";
        picture = QPATHTOF(UI\PensAndPencils_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
    };

    class ACEX_Item_Axe: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Axe_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\Axe_F.p3d";
        picture = QPATHTOF(UI\Axe_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            allowedSlots[] = {901};
            mass = 120;
        };
    };

    class ACEX_Item_Axe_fire: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Axe_fire_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\Axe_fire_F.p3d";
        picture = QPATHTOF(UI\Axe_fire_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            allowedSlots[] = {901};
            mass = 120;
        };
    };

    class ACEX_Item_DrillAku: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_DrillAku_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\DrillAku_F.p3d";
        picture = QPATHTOF(UI\DrillAku_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 50;
        };
    };

    class ACEX_Item_DustMask: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_DustMask_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\DustMask_F.p3d";
        picture = QPATHTOF(UI\DustMask_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 0.5;
        };
    };

    class ACEX_Item_File_Tool: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_File_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\File_F.p3d";
        picture = QPATHTOF(UI\File_Tool_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 5;
        };
    };

    class ACEX_Item_Gloves: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Gloves_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\Gloves_F.p3d";
        picture = QPATHTOF(UI\Gloves_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
    };

    class ACEX_Item_Grinder: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Grinder_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\Grinder_F.p3d";
        picture = QPATHTOF(UI\Grinder_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 90;
        };
    };

    class ACEX_Item_Hammer: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Hammer_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\Hammer_F.p3d";
        picture = QPATHTOF(UI\Hammer_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 10;
        };
    };

    class ACEX_Item_Meter3m: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Meter3m_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\Meter3m_F.p3d";
        picture = QPATHTOF(UI\Meter3m_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 6;
        };
    };

    class ACEX_Item_MultiMeter: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_MultiMeter_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\MultiMeter_F.p3d";
        picture = QPATHTOF(UI\MultiMeter_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 7;
        };
    };

    class ACEX_Item_Saw: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Saw_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\Saw_F.p3d";
        picture = QPATHTOF(UI\Saw_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 8;
        };
    };

    class ACEX_Item_Screwdriver_V1: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Screwdriver_V1_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\Screwdriver_V1_F.p3d";
        picture = QPATHTOF(UI\Screwdriver_V1_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 3;
        };
    };

    class ACEX_Item_Screwdriver_V2: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Screwdriver_V2_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\Screwdriver_V2_F.p3d";
        picture = QPATHTOF(UI\Screwdriver_V2_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 3;
        };
    };

    class ACEX_Item_Wrench: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Wrench_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Tools\Wrench_F.p3d";
        picture = QPATHTOF(UI\Wrench_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 5;
        };
    };

    class ACEX_Item_Money: ACE_ItemCore {
        displayName = "$STR_A3_cfgVehicles_Land_Money_F0";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f\Items\Valuables\Money_F.p3d";
        picture = QPATHTOF(UI\Money_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 15;
        };
    };

    class ACEX_Item_HeatPack: ACE_ItemCore {
        displayName = "$STR_A3_heatpack";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Medical\HeatPack_F.p3d";
        picture = QPATHTOF(UI\HeatPack_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 4;
        };
    };

    class ACEX_Item_VitaminBottle: ACE_ItemCore {
        displayName = "$STR_A3_vitamin_bottle";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Medical\VitaminBottle_F.p3d";
        picture = QPATHTOF(UI\VitaminBottle_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 5;
        };
    };

    class ACEX_Item_WaterPurificationTablets: ACE_ItemCore {
        displayName = "$STR_A3_water_purification_tablets";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Medical\WaterPurificationTablets_F.p3d";
        picture = QPATHTOF(UI\WaterPurificationTablets_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 3;
        };
    };

    class ACEX_Item_ButaneCanister: ACE_ItemCore {
        displayName = "$STR_A3_butane_canister";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Tools\ButaneCanister_F.p3d";
        picture = QPATHTOF(UI\ButaneCanister_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 15;
        };
    };

    class ACEX_Item_ButaneTorch: ACE_ItemCore {
        displayName = "$STR_A3_butane_torch";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Tools\ButaneTorch_F.p3d";
        picture = QPATHTOF(UI\ButaneTorch_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 15;
        };
    };

    class ACEX_Item_CanOpener: ACE_ItemCore {
        displayName = "$STR_A3_can_opener";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Tools\CanOpener_F.p3d";
        picture = QPATHTOF(UI\CanOpener_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 4;
        };
    };

    class ACEX_Item_FireExtinguisher: ACE_ItemCore {
        displayName = "$STR_A3_fire_extinguisher";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Tools\FireExtinguisher_F.p3d";
        picture = QPATHTOF(UI\FireExtinguisher_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 200;
        };
    };

    class ACEX_Item_GasCanister: ACE_ItemCore {
        displayName = "$STR_A3_gas_canister";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Tools\GasCanister_F.p3d";
        picture = QPATHTOF(UI\GasCanister_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 20;
        };
    };

    class ACEX_Item_GasCooker: ACE_ItemCore {
        displayName = "$STR_A3_gas_cooker";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Tools\GasCooker_F.p3d";
        picture = QPATHTOF(UI\GasCooker_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 25;
        };
    };

    class ACEX_Item_Matches: ACE_ItemCore {
        displayName = "$STR_A3_box_of_matches";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Tools\Matches_F.p3d";
        picture = QPATHTOF(UI\Matches_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 3;
        };
    };

    class ACEX_Item_MetalWire: ACE_ItemCore {
        displayName = "$STR_A3_metal_wire";
        descriptionShort = CSTRING(Prop);
        model = "a3\structures_f_epa\Items\Tools\MetalWire_F.p3d";
        picture = QPATHTOF(UI\MetalWire_ca.paa);
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 5;
        };
    };
};
