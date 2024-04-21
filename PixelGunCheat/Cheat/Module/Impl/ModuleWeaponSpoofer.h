﻿#pragma once
#include "../ModuleBase.h"
#include "../../Data/Weapons.h"

static std::vector<std::wstring> spoof_list = weapons_names;
static BKCDropdown __spoof_weapons_list = { "Weapon Select", spoof_list[0], spoof_list, "", true };
static BKCCheckbox __spoof_weapons_dev = {"Spoof Developer", true, "Tries to add the weapon through developer mode, less consistent but safer."};
static BKCCheckbox __spoof_weapons_all = {"Add All", false, "WARNING, THIS MAY TAKE A WHILE"};
static BKCModule __spoof_weapons = { "Spoof Weapons", EXPLOIT, 0x0, false, { &__spoof_weapons_list, &__spoof_weapons_dev, &__spoof_weapons_all } };

class ModuleWeaponSpoofer : ModuleBase
{
public:
    ModuleWeaponSpoofer() : ModuleBase(&__spoof_weapons)
    {
        __spoof_weapons_list.add_value(L"new_well_pistol");
        __spoof_weapons_list.add_value(L"fps_destroyer");
        __spoof_weapons_list.add_value(L"achieve_hunter");
    }
    
    void do_module(void* arg) override
    {
        
    }
    
    bool all()
    {
        return __spoof_weapons_all.enabled;
    }

    void lock()
    {
        __spoof_weapons.enabled = false;
    }

    std::wstring to_unlock()
    {
        return __spoof_weapons_list.current_value;
    }

    bool dev()
    {
        return __spoof_weapons_dev.enabled;
    }

    std::vector<std::wstring> get_spoof_list()
    {
        return spoof_list;
    }
};