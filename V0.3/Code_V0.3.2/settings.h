#ifndef SETTINGS_H
#define SETTINGS_H

#include "wave.h"
#include "lcd1602.h"
#include "adc_stc15.h"
#include "config_stc.h"

#ifndef uint8
#define uint8 unsigned char
#endif

#ifndef int8
#define int8 char
#endif

#ifndef uint16
#define uint16 unsigned int
#endif

#ifndef uint32
#define uint32 unsigned long int
#endif

extern bit Options; 
extern bit Clear_LCD_Flag;
extern uint8 PWM_Max_Duty;     
extern uint8 PWM_Min_Duty;   
void Change_Val(bit);
void Get_PWM_Duty_Limit();
void Update_LCD();

#endif