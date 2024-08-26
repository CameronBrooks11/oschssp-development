#ifndef GUI_H
#define GUI_H

#include <LiquidCrystal_I2C.h>
#include <LiquidMenu.h>
#include <ClickEncoder.h>
#include "EveryTimerB.h"

// use TimerB2 as a drop in replacement for Timer1
#define Timer1 TimerB2 

void initializeLCD();
void initializeLcdGui();
void updateLcdGui();
void toggleToggler();

void initializeEncoder(int pinA, int pinB, int pinC, int steps);
int16_t processEncoderEvents();

enum UserEvent
{
  EV_NONE,
  EV_BTN_CLICKED,
  EV_BTN_2CLICKED,
  EV_BTN_HELD,
  EV_BTN_RELEASED,
  EV_ENCUP,
  EV_ENCDN
};

enum funcID
{
  FUNC_INCRT,
  FUNC_DECRT,
  FUNC_USE,
};

extern LiquidScreen screenMain, screenOptions, screenError;

#endif // GUI_H
