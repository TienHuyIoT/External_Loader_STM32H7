/**
  ******************************************************************************
  * @file    Dev_Inf.c
  * @author  MCD Tools Team
  * @date    October-2015
  * @brief   This file defines the structure containing informations about the 
  *          external flash memory N25Q256QA used by ST-LINK Utility in 
  *          programming/erasing the device.
  ******************************************************************************
  */
#include "Dev_Inf.h"

/* This structure containes information used by ST-LINK Utility to program and erase the device */
#if defined (__ICCARM__)
__root struct StorageInfo const StorageInfo  =  {
#else
struct StorageInfo const StorageInfo  =  {
#endif
   "W25Q64_HMI-NEO", 					                // Device Name + version number
   NOR_FLASH,                                                           // Device Type
   0x90000000,                                                          // Device Start Address
   0x800000,                 						// Device Size in Bytes (8MBytes)
   0x100,                 						// Programming Page Size 256Bytes
   0xFF,                       						// Initial Content of Erased Memory
// Specify Size and Address of Sectors (view example below)
   0x00000800, 0x00001000,     				 		// Sector Num : 1024 ,Sector Size: 4KBytes 
   0x00000000, 0x00000000
};


