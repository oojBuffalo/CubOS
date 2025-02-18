/*
    ############################################################################################
    #                                                                                          #
    #                                   M5STICK SETTINGS +                                     #
    #                                                                                          #
    ############################################################################################
*/

// ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
//      FOR ESP8266 USE NONOSSDK 2.2.2 +
// ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !

#define SCREEN_WIDTH            320     // Screen resolution width
#define SCREEN_HEIGHT           240     // Screen resolution height

#define FONT_CHAR_WIDTH         6     // Font letter size width
#define FONT_CHAR_HEIGHT        8     // Font letter size height

#define PLATFORM_AVR

//#define BLUETOOTH_ENABLED
//#define WIFI_ENABLED

#define ON_TIME_CHANGE_EVERY_MS 1000

//#define HARDWARE_BUTTONS_ENABLED              // Conf of controls with hardware btns    

//#define DRIVER_CONTROLS_TOTALBUTTONS 1
//#define DRIVER_CONTROLS_DELAY_BEFORE_LONG_PRESS 350

#define COLOR_SCREEN                     // Screen is colored

//#define toDefaultApp_onLeftLongPress

#define STARTING_APP_NUMM   -1    // for Mainmenu (default app)
//#define STARTING_APP_NUMM    1 // Settings
//#define STARTING_APP_NUMM    2 // Pedometer
//#define STARTING_APP_NUMM    0

#define FONT_SIZE_DEFAULT   1

//#define CPU_SLEEP_ENABLE

//#define BATTERY_ENABLE
//#define CLOCK_ENABLE
//#define USE_PRIMITIVE_HARDWARE_DRAW_ACCELERATION

//#define RTC_ENABLE

//#define SCREEN_ROTATION_0
//#define SCREEN_ROTATION_90
//#define SCREEN_ROTATION_180
//#define SCREEN_ROTATION_270

#define STYLE_STATUSBAR_HEIGHT  20

//#define SMOOTH_ANIMATION
//#define NARROW_SCREEN

#define TOUCH_SCREEN_ENABLE

//#define FRAMEBUFFER_ENABLE
//#define FRAMEBUFFER_TWIN_FULL
//#define FRAMEBUFFER_BYTE_PER_PIXEL 2
//#define FRAMEBUFFER_PSRAM

//#define SCREEN_INVERT_COLORS
//#define SCREEN_CHANGE_BLUE_RED


#undef SMOOTH_BACKLIGHT_CONTROL_DELAY_CHANGE
//#undef DISPLAY_BACKLIGHT_CONTROL_ENABLE

#define SMOOTH_ANIMATION_COEFFICIENT    4

//#define ACCELEROMETER_ENABLE
//#define MAGNITOMETER_ENABLE
//#define PEDOMETER_ENABLE
//#define DEBUG_PEDOMETER
#undef DISPLAY_BACKLIGHT_FADE_CONTROL_ENABLE



#define DEFAULT_TIME_TO_POWEROFF_DISPLAY        15
#define DEFAULT_DELAY_TO_FADE_DISPLAY           10

#undef POWERSAVE_ENABLE
#undef CPU_CONTROLL_ENABLE
#undef BATTERY_ENABLE

/*
#define PEDOMETER_STEP_DETECTION_DELAY          20000 // Wake up to check accelerometer
//#define PEDOMETER_STEP_DETECTION_DELAY          1000 // Wake up to check accelerometer
#define PEDOMETER_STEP_DETECTION_PERIOD_MS              1000
#define PEDOMETER_MESURES_IN_STEP_DETECTION_PERIOD      5

#define PEDOMETER_DELTA_VALUE_MIN           1.3f
#define PEDOMETER_CENTRALWIGHT_VALUE_MIN    0.2f

//#define DEBUG_PEDOMETER
// #define DEBUG_WAKEUP
*/

//#define SOFTWARE_BUTTONS_ENABLE
#define SOFTWARE_BUTTONS_PORITION_RIGHT

#define SOFTWARE_BUTTONS_BAR_SIZE 30
#define SOFTWARE_BUTTONS_PADDING 50

//#define SOFTWARE_KEYBOARD_ENABLE

#define DEBUG_SERIAL

/*
    ############################################################################################
    #                                                                                          #
    #                                   M5STICK SETTINGS -                                     #
    #                                                                                          #
    ############################################################################################
*/