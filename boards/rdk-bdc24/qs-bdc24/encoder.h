//*****************************************************************************
//
// encoder.h - Prototypes for the QEI control module.
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

#ifndef __ENCODER_H__
#define __ENCODER_H__

//*****************************************************************************
//
// Function prototypes.
//
//*****************************************************************************
extern void EncoderInit(void);
extern void EncoderTick(void);
extern void EncoderIntHandler(void);
extern void EncoderLinesSet(unsigned long ulLines);
extern unsigned long EncoderLinesGet(void);
extern void EncoderPositionSet(long lPosition);
extern long EncoderPositionGet(void);
extern long EncoderVelocityGet(long lSigned);

#endif // __ENCODER_H__
