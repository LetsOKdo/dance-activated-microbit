#include "MicroBit.h"
#include "CodalDmesg.h"

#ifndef MB_NEXT_TESTS_H
#define MB_NEXT_TESTS_H

//#define MICROBIT_UBIT_AS_STATIC_OBJECT

#ifdef MICROBIT_UBIT_AS_STATIC_OBJECT
extern MicroBit uBit;
#else
extern MicroBit& uBit;
#endif

void blinky();
void button_test1();
void button_test2();
void button_test3();
void button_test4();
void display_test1();
void display_test2();
void concurrent_display_test();
void fade_test();
void mems_mic_test();
void piezo_mic_test();
void speaker_test(int plays);
void speaker_test2(int plays);
void gpio_test();
void highDriveTest();
void radio_rx_test();
void radio_rx_test2();
void radio_tx_test();
void temperature_test();
void accelerometer_test1();
void compass_test1();
void compass_test2();
void button_blinky_test();
void spirit_level();
void edge_connector_test();
void analog_test();
void piezo_clap_test(int wait_for_clap = 0);
void mems_clap_test(int wait_for_clap = 0);
void mems_clap_test_spl(int wait_for_clap = 0);
void showSerialNumber();
void display_wink();
void display_tick();
void display_radio();
void spirit_level2();
void button_blinky_test2();
int isPiezoMic2();
int out_of_box_experience();
int hasPassedFactoryTests();
void record_factory_pass();
void display_arrows();
void factory_radio_transmitter();
void square_wave_test();
void red_power_test();
void green_power_test();
void off_power_test();
void shake_test();
int read_light_level();
void compass_accelerometer_test();
void display_countdown();
void raw_blinky_test();
void display_button_icon_test();
void display_brightness_test();
void pwm_test();
void pwm_pin_test();
void cap_touch_test();
void cap_touch_test_raw();
void light_level_test_raw();
void display_brightness_AB_test();
void display_lightlevel_test();
void display_lightlevel_test2();
void mems_mic_drift_test();
void mc_clap_test();
void synthesizer_test();
void version_test();
void power_consumption_test();
void power_source_test();
void standby_test();
void sound_emoji_test();
void interactive_off_test();
void deep_sleep_test1();
void deep_sleep_test2();
void sound_emoji_streamer();
void flash_storage_test();
void mic_inference_test();
void accelerometer_inference_test();

#endif
