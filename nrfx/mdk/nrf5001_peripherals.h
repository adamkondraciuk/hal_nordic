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

#ifndef _NRF5001_PERIPHERALS_H
#define _NRF5001_PERIPHERALS_H


/* Clock Peripheral */
#define CLOCK_PRESENT
#define CLOCK_COUNT 1

/* Power Peripheral */
#define POWER_PRESENT
#define POWER_COUNT 1

#define POWER_FEATURE_RAM_REGISTERS_PRESENT
#define POWER_FEATURE_RAM_REGISTERS_COUNT       4

/* Regulators Peripheral */
#define REGULATORS_PRESENT
#define REGULATORS_COUNT 1

/* MPU and BPROT */
#define BPROT_PRESENT

#define BPROT_REGIONS_SIZE 4096
#define BPROT_REGIONS_NUM 32

/* Non-Volatile Memory Controller */
#define NVMC_PRESENT
#define NVMC_COUNT 1

#define NVMC_FEATURE_CACHE_PRESENT

/* GPIO */
#define GPIO_PRESENT
#define GPIO_COUNT 2

#define P0_PIN_NUM 7
#define P1_PIN_NUM 16

#define P0_FEATURE_PINS_PRESENT 0x000000FEUL
#define P1_FEATURE_PINS_PRESENT 0x00FFFF00UL

/* Radio */
#define RADIO_PRESENT
#define RADIO_COUNT 1

#define RADIO_EASYDMA_MAXCNT_SIZE 8
#define RADIO_FEATURE_IEEE_802_15_4_PRESENT

#define RADIO_TXPOWER_TXPOWER_Max RADIO_TXPOWER_TXPOWER_Pos8dBm

/* Accelerated Address Resolver */
#define AAR_PRESENT
#define AAR_COUNT 1

#define AAR_MAX_IRK_NUM 16

/* AES Electronic CodeBook mode encryption */
#define ECB_PRESENT
#define ECB_COUNT 1

/* AES CCM mode encryption */
#define CCM_PRESENT
#define CCM_COUNT 1

/* Distributed Peripheral to Peripheral Interconnect */
#define DPPI_PRESENT
#define DPPI_COUNT 1

#define DPPI_CH_NUM 15
#define DPPI_GROUP_NUM 6

/* Timer/Counter */
#define TIMER_PRESENT
#define TIMER_COUNT 2

#define TIMER0_MAX_SIZE 32
#define TIMER1_MAX_SIZE 32


#define TIMER0_CC_NUM 8
#define TIMER1_CC_NUM 8


/* Real Time Counter */
#define RTC_PRESENT
#define RTC_COUNT 2

#define RTC0_CC_NUM 4
#define RTC1_CC_NUM 4

/* RNG */
#define RNG_PRESENT
#define RNG_COUNT 1

/* Watchdog Timer */
#define WDT_PRESENT
#define WDT_COUNT 1

/* Serial Peripheral Interface Master with DMA */
#define SPIM_PRESENT
#define SPIM_COUNT 1

#define SPIM0_MAX_DATARATE  8

#define SPIM0_FEATURE_DCX_PRESENT

#define SPIM0_FEATURE_RXDELAY_PRESENT

#define SPIM0_EASYDMA_MAXCNT_SIZE 8

/* Serial Peripheral Interface Slave with DMA*/
#define SPIS_PRESENT
#define SPIS_COUNT 1

#define SPIS0_EASYDMA_MAXCNT_SIZE 8

/* Universal Asynchronous Receiver-Transmitter with DMA */
#define UARTE_PRESENT
#define UARTE_COUNT 1

#define UARTE0_EASYDMA_MAXCNT_SIZE 8

/* Quadrature Decoder */
#define QDEC_PRESENT
#define QDEC_COUNT 1

/* GPIO Tasks and Events */
#define GPIOTE_PRESENT
#define GPIOTE_COUNT 1

#define GPIOTE_CH_NUM 8

#define GPIOTE_FEATURE_SET_PRESENT
#define GPIOTE_FEATURE_CLR_PRESENT

/* Universal Serial Bus Device */
#define USBD_PRESENT
#define USBD_COUNT 1

#define USBD_EASYDMA_MAXCNT_SIZE 7

/* Oscillators */
#define OSCILLATORS_PRESENT
#define OSCILLATORS_COUNT 1

#endif      // _NRF5001_PERIPHERALS_H
