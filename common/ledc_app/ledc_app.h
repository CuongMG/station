#ifndef __LEDC_APP_H
#define __LEDC_APP_H

void ledc_init(void);
void ledc_add_channel(int pin, int channel);
void ledc_duty(int channel, int duty);

#endif