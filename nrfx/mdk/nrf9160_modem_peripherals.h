/*

Copyright (c) 2010 - 2020, Nordic Semiconductor ASA

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form, except as embedded into a Nordic
   Semiconductor ASA integrated circuit in a product or a software update for
   such product, must reproduce the above copyright notice, this list of
   conditions and the following disclaimer in the documentation and/or other
   materials provided with the distribution.

3. Neither the name of Nordic Semiconductor ASA nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

4. This software, with or without modification, must only be used with a
   Nordic Semiconductor ASA integrated circuit.

5. Any software provided in binary form under this license must not be reverse
   engineered, decompiled, modified and/or disassembled.

THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef _NRF9160_MODEM_PERIPHERALS_H
#define _NRF9160_MODEM_PERIPHERALS_H

/* Clock Peripheral */
#define CLOCK_PRESENT
#define CLOCK_COUNT 1

/* Power Peripheral */
#define POWER_PRESENT
#define POWER_COUNT 1

/* Non-Volatile Memory Controller */
#define NVMC_PRESENT
#define NVMC_COUNT 1

#define NVMC_FEATURE_CACHE_PRESENT

/* Memory Watch Unit */
#define MWU_PRESENT
#define MWU_COUNT 1

/* GPIO */
#define GPIO_PRESENT
#define GPIO_COUNT 1

#define P0_PIN_NUM 10

#define P0_FEATURE_PINS_PRESENT 0x000003FFUL

/* Modem Timer */
#define MODEM_TIMER_PRESENT
#define MODEM_TIMER_COUNT 2

#define MODEM_TIMER0_MAX_SIZE 64
#define MODEM_TIMER1_MAX_SIZE 64


#define MODEM_TIMER0_CC_NUM 8
#define MODEM_TIMER1_CC_NUM 8

/* Real Time Counter */
#define RTC_PRESENT
#define RTC_COUNT 1

#define RTC0_CC_NUM 4

/* Watchdog Timer */
#define WDT_PRESENT
#define WDT_COUNT 2

/* GPIO Tasks and Events */
#define GPIOTE_PRESENT
#define GPIOTE_COUNT 3

#define GPIOTE_FEATURE_SET_PRESENT
#define GPIOTE_FEATURE_CLR_PRESENT

/* IPC */
#define IPC_PRESENT
#define IPC_COUNT 1

#define IPC_CH_NUM 8
#define IPC_CONF_NUM 8
#define IPC_GPMEM_NUM 2


#endif  // _NRF9160_MODEM_PERIPHERALS_H
