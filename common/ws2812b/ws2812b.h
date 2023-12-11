#ifndef __WS2812B_H
#define __WS2812B_H

void ws2812b_init(int tx_pin, int number_led);
void ws2812b_set_color(int index, int r, int g, int b);
void ws2812b_update_color(void);

#endif