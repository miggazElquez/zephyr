/*
 * Copyright (c) 2024 Bootlin
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* CMSIS required values */
typedef enum {
	Reset_IRQn            = -15,
	NonMaskableInt_IRQn   = -14,
	HardFault_IRQn        = -13,
	MemoryManagement_IRQn = -12,
	BusFault_IRQn         = -11,
	UsageFault_IRQn       = -10,
	SVCall_IRQn           =  -5,
	DebugMonitor_IRQn     =  -4,
	PendSV_IRQn           =  -2,
	SysTick_IRQn          =  -1,
} IRQn_Type;


#define __NVIC_PRIO_BITS       NUM_IRQ_PRIO_BITS

#include <core_cm0plus.h>
