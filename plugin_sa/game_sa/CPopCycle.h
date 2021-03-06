/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"

enum ePopcyclePedGroup {
    POPCYCLE_PEDGROUP_WORKERS_LA,
    POPCYCLE_PEDGROUP_WORKERS_SF,
    POPCYCLE_PEDGROUP_WORKERS_VG,
    POPCYCLE_PEDGROUP_BUSINESS_LA,
    POPCYCLE_PEDGROUP_BUSINESS_SF,
    POPCYCLE_PEDGROUP_BUSINESS_VG,
    POPCYCLE_PEDGROUP_CLUBBERS_LA,
    POPCYCLE_PEDGROUP_CLUBBERS_SF,
    POPCYCLE_PEDGROUP_CLUBBERS_VG,
    POPCYCLE_PEDGROUP_FARMERS,
    POPCYCLE_PEDGROUP_BEACHFOLK,
    POPCYCLE_PEDGROUP_PARKFOLK_LA,
    POPCYCLE_PEDGROUP_PARKFOLK_SF,
    POPCYCLE_PEDGROUP_PARKFOLK_VG,
    POPCYCLE_PEDGROUP_CASUAL_RICH_LA,
    POPCYCLE_PEDGROUP_CASUAL_RICH_SF,
    POPCYCLE_PEDGROUP_CASUAL_RICH_VG,
    POPCYCLE_PEDGROUP_CASUAL_AVERAGE_LA,
    POPCYCLE_PEDGROUP_CASUAL_AVERAGE_SF,
    POPCYCLE_PEDGROUP_CASUAL_AVERAGE_VG,
    POPCYCLE_PEDGROUP_CASUAL_POOR_LA,
    POPCYCLE_PEDGROUP_CASUAL_POOR_SF,
    POPCYCLE_PEDGROUP_CASUAL_POOR_VG,
    POPCYCLE_PEDGROUP_PROSTITUTES_LA,
    POPCYCLE_PEDGROUP_PROSTITUTES_SF,
    POPCYCLE_PEDGROUP_PROSTITUTES_VG,
    POPCYCLE_PEDGROUP_CRIMINALS_LA,
    POPCYCLE_PEDGROUP_CRIMINALS_SF,
    POPCYCLE_PEDGROUP_CRIMINALS_VG,
    POPCYCLE_PEDGROUP_GOLFERS,
    POPCYCLE_PEDGROUP_SERVANTS_LA,
    POPCYCLE_PEDGROUP_SERVANTS_SF,
    POPCYCLE_PEDGROUP_SERVANTS_VG,
    POPCYCLE_PEDGROUP_AIRCREW_LA,
    POPCYCLE_PEDGROUP_AIRCREW_SF,
    POPCYCLE_PEDGROUP_AIRCREW_VG,
    POPCYCLE_PEDGROUP_ENTERTAINERS_LA,
    POPCYCLE_PEDGROUP_ENTERTAINERS_SF,
    POPCYCLE_PEDGROUP_ENTERTAINERS_VG,
    POPCYCLE_PEDGROUP_OUT_OF_TOWN_FACTORY_WORKERS,
    POPCYCLE_PEDGROUP_DESERT_FOLK,
    POPCYCLE_PEDGROUP_AIRCREW_RUNWAY,
    POPCYCLE_PEDGROUP_BALLAS,
    POPCYCLE_PEDGROUP_GROVE,
    POPCYCLE_PEDGROUP_VAGOS,
    POPCYCLE_PEDGROUP_SF_RIFA,
    POPCYCLE_PEDGROUP_DA_NANG_BOYS,
    POPCYCLE_PEDGROUP_ITALIAN_MAFIA,
    POPCYCLE_PEDGROUP_TRIADS,
    POPCYCLE_PEDGROUP_VARRIO_LOS_AZTECAZ,
    POPCYCLE_PEDGROUP_DEALERS = 52,
    POPCYCLE_PEDGROUP_SHOPKEEPERS,
    POPCYCLE_PEDGROUP_OFFICE_WORKERS,
    POPCYCLE_PEDGROUP_HUSBANDS,
    POPCYCLE_PEDGROUP_WIVES,

    POPCYCLE_TOTAL_NUM_PEDGROUPS
};

enum ePopcycleCarGroup {
    POPCYCLE_CARGROUP_WORKERS,
    POPCYCLE_CARGROUP_BUSINESS,
    POPCYCLE_CARGROUP_CLUBBERS,
    POPCYCLE_CARGROUP_FARMERS,
    POPCYCLE_CARGROUP_BEACHFOLK,
    POPCYCLE_CARGROUP_PARKFOLK,
    POPCYCLE_CARGROUP_CASUAL_RICH,
    POPCYCLE_CARGROUP_CASUAL_AVERAGE,
    POPCYCLE_CARGROUP_CASUAL_POOR,
    POPCYCLE_CARGROUP_PROSTITUTES,
    POPCYCLE_CARGROUP_CRIMINALS,
    POPCYCLE_CARGROUP_GOLFERS,
    POPCYCLE_CARGROUP_SERVANTS,
    POPCYCLE_CARGROUP_AIRCREW,
    POPCYCLE_CARGROUP_ENTERTAINERS,
    POPCYCLE_CARGROUP_OUT_OF_TOWN_FACTORY,
    POPCYCLE_CARGROUP_DESERT_FOLK,
    POPCYCLE_CARGROUP_AIRCREW_RUNWAY,
    POPCYCLE_CARGROUP_BALLAS,
    POPCYCLE_CARGROUP_GROVE,
    POPCYCLE_CARGROUP_VAGOS,
    POPCYCLE_CARGROUP_SF_RIFA,
    POPCYCLE_CARGROUP_DA_NANG_BOYS,
    POPCYCLE_CARGROUP_ITALIAN_MAFIA,
    POPCYCLE_CARGROUP_TRIADS,
    POPCYCLE_CARGROUP_VARRIO_LOS_AZTECAZ,
    POPCYCLE_CARGROUP_DEALERS = 28,
    POPCYCLE_CARGROUP_BOATS,
    POPCYCLE_CARGROUP_CHEAT1,
    POPCYCLE_CARGROUP_CHEAT2,
    POPCYCLE_CARGROUP_CHEAT3,
    POPCYCLE_CARGROUP_CHEAT4,

    POPCYCLE_TOTAL_NUM_CARGROUPS
};