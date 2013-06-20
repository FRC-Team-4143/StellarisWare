//*****************************************************************************
//
// led.h - Prototypes for the LED driver.
//
// Copyright (c) 2008-2012 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 9107 of the RDK-BDC24 Firmware Package.
//
//*****************************************************************************

#ifndef __LED_H__
#define __LED_H__

//*****************************************************************************
//
// Function prototypes.
//
//*****************************************************************************
extern void LEDInit(void);
extern void LEDTick(void);
extern void LEDParameterReset(void);
extern void LEDAssignStart(void);
extern void LEDAssignStop(void);
extern void LEDBlinkID(unsigned long ulID);
extern void LEDCalibrateStart(void);
extern void LEDCalibrateSuccess(void);
extern void LEDCalibrateFail(void);
extern void LEDFirmwareUpdate(void);

#endif // __LED_H__
