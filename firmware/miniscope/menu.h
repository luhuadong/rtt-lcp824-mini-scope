#ifndef __MENU_H__
#define __MENU_H__

#include <rtthread.h>

#define TIME_SCALE_MENU_TEXT { "20ms", "10ms", "5ms", "2ms", "1ms", "500us", "200us", "100us" }
#define TIME_SCALE_MENU_VALUE { 20000, 10000, 5000, 2000, 1000, 500, 200, 100 }
#define TRIG_DIRE_MENU_TEXT  {"R", "F"};
#define TRIG_DIRE_MENU_VALUE { 1, 0 }
#define VOLT_SCALE_MENU_TEXT {"Auto", "200mV", "500mV", "1V", "2V", "3V", "3.3V"}
#define VOLT_SCALE_MENU_VALUE { 0, 200, 500, 1000, 2000, 3000, 3300 }

enum MENU_TYPE_LIST 
{ 
    MENU_TYPE_TIME_SCALE = 0, 
    MENU_TYPE_TRI_DIR, 
    MENU_TYPE_VOLT_SCALE,
    /* end of enum */
    MENU_TYPE_MAX_NUM
};

enum MENU_TIME_SCALE_VALUE 
{ 
    TIME_SCALE_20MS = 0, 
    TIME_SCALE_10MS, 
    TIME_SCALE_5MS, 
    TIME_SCALE_2MS, 
    TIME_SCALE_1MS, 
    TIME_SCALE_500US, 
    TIME_SCALE_200US, 
    TIME_SCALE_100US, 
    /* end of enum */
    TIME_SCALE_MAX_NUM
};

enum MENU_VOLT_SCALE_VALUE 
{ 
    VOLT_SCALE_Auto = 0, 
    VOLT_SCALE_200MV, 
    VOLT_SCALE_500MV, 
    VOLT_SCALE_1V, 
    VOLT_SCALE_2V, 
    VOLT_SCALE_3V, 
    VOLT_SCALE_3V3, 
    /* end of enum */
    VOLT_SCALE_MAX_NUM
};

enum MENU_TRIG_DIRE_VALUE 
{ 
    TRIG_DIRE_RISING = 0,
    TRIG_DIRE_FALLING,
    /* end of enum */
    TRIG_DIRE_MAX_NUM
};

struct Menu_Info 
{
    enum MENU_TYPE_LIST type;
    rt_uint32_t index;
    rt_uint32_t *value;
    rt_uint32_t count;
    char **text;
};

#endif /* #ifndef __MENU_H__ */
