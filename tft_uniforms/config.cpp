#include "defines.hpp"

class CfgPatches {
    class tft_uniforms {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_Characters_F_BLUFOR"};
        version = 1.1;
        author = "YoursTruly, Fitzgerald";
    };
};

class cfgVehicles {
    class B_Soldier_base_F;     // External class reference
    class B_AssaultPack_blk;    // External class reference
    class B_Kitbag_cbr;         // External class reference

    UNIT(OCP)
    UNIT(UCP)
    UNIT(WNT)

    BACKPACK(OCP)
    BACKPACK(UCP)
    BACKPACK(WNT)
};

class cfgWeapons {
    class UniformItem;                                  // External class reference
    class ItemCore;                                      // External class reference
    class HelmetBase;                                 // External class reference
    class U_B_CombatUniform_mcam;          // External class reference
    class U_B_CombatUniform_mcam_vest;   // External class reference
    class U_B_CombatUniform_mcam_tshirt; // External class reference
    class Vest_NoCamo_Base;                     // External class reference
    class H_Booniehat_khk;                          // External class reference
    class H_Beret_02;                                  // External class reference

    class H_HelmetSpecB : ItemCore {
        class ItemInfo;
    };
    class H_HelmetB : ItemCore {
        class ItemInfo;
    };
    class H_HelmetIA : H_HelmetB {
        class ItemInfo;
    };
    class H_Helmet_Skate : H_HelmetB {
        class ItemInfo;
    };
    class H_MilCap_ocamo : HelmetBase {
        class ItemInfo;
    };
    class V_PlateCarrier1_rgr : Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrierGL_rgr : Vest_NoCamo_Base {
        class ItemInfo;
    };

    class TFT_Beret_160th : H_Beret_02 {
        displayName = "160th SOAR Beret";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\UI\beret160.paa";
        hiddenSelectionsTextures[] = {"\tft_uniforms\Misc\beret160th.paa"};
    };
    class TFT_Beret_75th : H_Beret_02 {
        displayName = "75th Ranger Beret";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\UI\beret75.paa";
        hiddenSelectionsTextures[] = {"\tft_uniforms\Misc\beret75th.paa"};
    };

    UNIFORM(OCP)
    UNIFORM(UCP)
    UNIFORM(WNT)

    VEST(OCP)
    VEST(UCP)
    VEST(WNT)

    HELMET(OCP)
    HELMET(UCP)
    HELMET(WNT)

    PROTEC(Black)
    PROTEC(Tan)
};

class CfgGlasses {
    class G_Bandanna_beast;                      // External class reference
    class G_Bandanna_shades;                     // External class reference
    class G_Bandanna_sport;                      // External class reference
    class G_Bandanna_aviator;                    // External class reference

    class TFT_Bandana_Snow: G_Bandanna_beast {
        displayname = "Bandana (Snow)";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\snow.paa";
        hiddenSelectionsTextures[] = {"\tft_uniforms\Misc\Bandana\snow.paa"};
    };
    class TFT_Bandana_Snow_Aviators : G_Bandanna_aviator {
        displayname = "Bandana (Snow) Aviator";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\tan_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\tft_uniforms\Misc\Bandana\snow.paa",
            "\a3\characters_f\heads\glasses\data\glass_ca.paa"
        };
    };
    class TFT_Bandana_Snow_Shades : G_Bandanna_shades {
        displayname = "Bandana (Snow) Shades";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\tan_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\tft_uniforms\Misc\Bandana\snow.paa",
            "\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
        };
    };
    class TFT_Bandana_Snow_Sport : G_Bandanna_sport {
        displayname = "Bandana (Snow) Sport";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\tan_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\tft_uniforms\Misc\Bandana\snow.paa",
            "\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
        };
    };
    class TFT_Bandana_Skull_Black: G_Bandanna_beast {
        displayname = "Bandana (Black) Skull";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\black_skull.paa";
        hiddenSelectionsTextures[] = {"\tft_uniforms\Misc\Bandana\black_skull.paa"};
    };
    class TFT_Bandana_Skull_Aviator_Black: G_Bandanna_aviator {
        displayname = "Bandana (Black) Skull Aviator";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\black_skull_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\tft_uniforms\Misc\Bandana\black_skull.paa",
            "\a3\characters_f\heads\glasses\data\glass_ca.paa"
        };
    };
    class TFT_Bandana_Skull_Shades_Black: G_Bandanna_shades {
        displayname = "Bandana (Black) Skull Shades";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\black_skull_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\tft_uniforms\Misc\Bandana\black_skull.paa",
            "\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
        };
    };
    class TFT_Bandana_Skull_Sport_Black: G_Bandanna_sport {
        displayname = "Bandana (Black) Skull Sport";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\black_skull_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\tft_uniforms\Misc\Bandana\black_skull.paa",
            "\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
        };
    };
    class TFT_Bandana_Beast_Shades_Black: G_Bandanna_shades {
        displayname = "Bandana (Black) Beast Shades";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\black_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_beast_co.paa",
            "\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
        };
    };
    class TFT_Bandana_Beast_Aviator_Black: G_Bandanna_aviator {
        displayname = "Bandana (Black) Beast Aviator";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\black_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_beast_co.paa",
            "\a3\characters_f\heads\glasses\data\glass_ca.paa"
        };
    };
    class TFT_Bandana_Beast_Sport_Black: G_Bandanna_sport {
        displayname = "Bandana (Black) Beast Sport";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\black_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_beast_co.paa",
            "\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
        };
    };
    class TFT_Bandana_Khaki_Aviators : G_Bandanna_aviator {
        displayname = "Bandana (Khaki) Aviator";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\khaki_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_khk_co.paa",
            "\a3\characters_f\heads\glasses\data\glass_ca.paa"
        };
    };
    class TFT_Bandana_Khaki_Shades : G_Bandanna_shades {
        displayname = "Bandana (Khaki) Shades";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\khaki_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_khk_co.paa",
            "\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
        };
    };
    class TFT_Bandana_Khaki_Sport : G_Bandanna_sport {
        displayname = "Bandana (Khaki) Sport";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\khaki_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_khk_co.paa",
            "\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
        };
    };
    class TFT_Bandana_Olive_Aviators : G_Bandanna_aviator {
        displayname = "Bandana (Olive) Aviator";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\olive_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_grn_co.paa",
            "\a3\characters_f\heads\glasses\data\glass_ca.paa"
        };
    };
    class TFT_Bandana_Olive_Shades : G_Bandanna_shades {
        displayname = "Bandana (Olive) Shades";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\olive_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_grn_co.paa",
            "\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
        };
    };
    class TFT_Bandana_Olive_Sport : G_Bandanna_sport {
        displayname = "Bandana (Olive) Sport";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\olive_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_grn_co.paa",
            "\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
        };
    };
    class TFT_Bandana_Tan_Aviators : G_Bandanna_aviator {
        displayname = "Bandana (Tan) Aviator";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\tan_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_tan_co.paa",
            "\a3\characters_f\heads\glasses\data\glass_ca.paa"
        };
    };
    class TFT_Bandana_Tan_Shades : G_Bandanna_shades {
        displayname = "Bandana (Tan) Shades";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\tan_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_tan_co.paa",
            "\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
        };
    };
    class TFT_Bandana_Tan_Sport : G_Bandanna_sport {
        displayname = "Bandana (Tan) Sport";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\Bandana\UI\tan_beast_glasses.paa";
        hiddenSelectionsTextures[]= {
            "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_tan_co.paa",
            "\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
        };
    };



    BANDANA(Khaki)
    BANDANA(Olive)
    BANDANA(Tan)
    BANDANA(Snow)
};
