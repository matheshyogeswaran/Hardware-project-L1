#include <avr/io.h>
#include "LCD.h"
#include "keypad.h"
#include <util/delay.h>
#include <stdlib.h>
#include "adc.h"
#include "usart.h"
#include "registerFunctions.h"
#include <string.h>
#include "hsc.h"
#include "load.h"
#include "pwm.h"
#include "servo.h"
#define startButton 4