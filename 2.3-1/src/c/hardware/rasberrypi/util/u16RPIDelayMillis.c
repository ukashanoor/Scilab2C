// Function to insert some delay in code execution. 
//
// Calling Sequence
//     u16RPIDelayMillis(time)
//
// Parameters
//     time: time(milliseconds) for which execution is to be delayed    
//
// Description
//     this function can be used for insertig execution delays. 'time' should be
//     specified in milliseconds.'time' should be between (1-65536).
//     Note: Delay inserted by this function is not accurate, but depedent on 
//     operating system, other running tasks etc.
// 
// Examples
//     u16RPIDelayMillis(100) //This will delay the execution of next code by 100 ms.
//
//
// Authors
//     Siddhesh Wani
//
#include "types.h"
#include "RPIPeripheralUtil.h"

uint8 u16RPIDelayMillis(uint16 time)
{
	bcm2835_delay(time);

}
