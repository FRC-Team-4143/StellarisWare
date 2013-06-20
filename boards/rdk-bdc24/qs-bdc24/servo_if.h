//*****************************************************************************
//
// servo_if.h - Prototypes for the servo (PWM) input interface.
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

#ifndef __SERVO_IF_H__
#define __SERVO_IF_H__

//*****************************************************************************
//
// Function prototypes.
//
//*****************************************************************************
extern void ServoIFInit(void);
extern void ServoIFIntHandler(void);
extern void ServoIFCalibrationStart(void);
extern void ServoIFCalibrationEnd(void);
extern void ServoIFCalibrationAbort(void);

#endif // __SERVO_IF_H__
