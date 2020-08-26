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

#ifndef HALTIUM_CELLULARCORE_H
#define HALTIUM_CELLULARCORE_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_CELLULARCORE                              /*!< Processor information is domain local.                               */


/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* ===================================================== Core Interrupts ===================================================== */
  Reset_IRQn                             = -15,      /*!< -15 Reset Vector, invoked on Power up and warm reset                 */
  NonMaskableInt_IRQn                    = -14,      /*!< -14 Non maskable Interrupt, cannot be stopped or preempted           */
  HardFault_IRQn                         = -13,      /*!< -13 Hard Fault, all classes of Fault                                 */
  MemoryManagement_IRQn                  = -12,      /*!< -12 Memory Management, MPU mismatch, including Access Violation and No
                                                          Match*/                                                                 
  BusFault_IRQn                          = -11,      /*!< -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory
                                                          related Fault*/                                                         
  UsageFault_IRQn                        = -10,      /*!< -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition    */
  SecureFault_IRQn                       = -9,       /*!<  -9 Secure Fault Handler                                             */
  SVCall_IRQn                            = -5,       /*!<  -5 System Service Call via SVC instruction                          */
  DebugMonitor_IRQn                      = -4,       /*!<  -4 Debug Monitor                                                    */
  PendSV_IRQn                            = -2,       /*!<  -2 Pendable request for system service                              */
  SysTick_IRQn                           = -1,       /*!<  -1 System Tick Timer                                                */
/* ============================================== Processor Specific Interrupts ============================================== */
  SPU0_IRQn                              = 0,        /*!< 0 SPU0                                                               */
  HSFLL_IRQn                             = 1,        /*!< 1 HSFLL                                                              */
  LRCCONF0_IRQn                          = 2,        /*!< 2 LRCCONF0                                                           */
  MPC_IRQn                               = 3,        /*!< 3 MPC                                                                */
  GENERIC2_IRQn                          = 4,        /*!< 4 GENERIC2                                                           */
  MVDMA_IRQn                             = 5,        /*!< 5 MVDMA                                                              */
  RAMC00_IRQn                            = 6,        /*!< 6 RAMC00                                                             */
  AESLTE_IRQn                            = 8,        /*!< 8 AESLTE                                                             */
  SNOW_IRQn                              = 9,        /*!< 9 SNOW                                                               */
  ZUC_IRQn                               = 10,       /*!< 10 ZUC                                                               */
  SPU1_IRQn                              = 16,       /*!< 16 SPU1                                                              */
  LRCCONF1_IRQn                          = 17,       /*!< 17 LRCCONF1                                                          */
  WDT0_IRQn                              = 21,       /*!< 21 WDT0                                                              */
  WDT1_IRQn                              = 22,       /*!< 22 WDT1                                                              */
  RTC_IRQn                               = 23,       /*!< 23 RTC                                                               */
  SPU2_IRQn                              = 32,       /*!< 32 SPU2                                                              */
  LRCCONF2_IRQn                          = 33,       /*!< 33 LRCCONF2                                                          */
  MCPLL_IRQn                             = 35,       /*!< 35 MCPLL                                                             */
  LFCLKCALIBMEAS_IRQn                    = 37,       /*!< 37 LFCLKCALIBMEAS                                                    */
  SPU3_IRQn                              = 48,       /*!< 48 SPU3                                                              */
  LRCCONF3_IRQn                          = 49,       /*!< 49 LRCCONF3                                                          */
  IPCT0_IRQn                             = 64,       /*!< 64 IPCT0                                                             */
  IPCT1_IRQn                             = 65,       /*!< 65 IPCT1                                                             */
  IPCT2_IRQn                             = 66,       /*!< 66 IPCT2                                                             */
  IPCT3_IRQn                             = 67,       /*!< 67 IPCT3                                                             */
  SYSTEMTIMER0_IRQn                      = 68,       /*!< 68 SYSTEMTIMER0                                                      */
  SYSTEMTIMER1_IRQn                      = 69,       /*!< 69 SYSTEMTIMER1                                                      */
  LTETIMER0_IRQn                         = 70,       /*!< 70 LTETIMER0                                                         */
  LTETIMER1_IRQn                         = 71,       /*!< 71 LTETIMER1                                                         */
  GNSSTIMER0_IRQn                        = 72,       /*!< 72 GNSSTIMER0                                                        */
  GNSSTIMER1_IRQn                        = 73,       /*!< 73 GNSSTIMER1                                                        */
  BELLBOARD0_IRQn                        = 96,       /*!< 96 BELLBOARD0                                                        */
  BELLBOARD1_IRQn                        = 97,       /*!< 97 BELLBOARD1                                                        */
  BELLBOARD2_IRQn                        = 98,       /*!< 98 BELLBOARD2                                                        */
  BELLBOARD3_IRQn                        = 99,       /*!< 99 BELLBOARD3                                                        */
  GPIOTE00_IRQn                          = 104,      /*!< 104 GPIOTE00                                                         */
  GPIOTE01_IRQn                          = 105,      /*!< 105 GPIOTE01                                                         */
  GPIOTE10_IRQn                          = 106,      /*!< 106 GPIOTE10                                                         */
  GPIOTE11_IRQn                          = 107,      /*!< 107 GPIOTE11                                                         */
  USBHS_IRQn                             = 134,      /*!< 134 USBHS                                                            */
  GIPCT00_IRQn                           = 209,      /*!< 209 GIPCT00                                                          */
  I3C0_IRQn                              = 211,      /*!< 211 I3C0                                                             */
  I3C1_IRQn                              = 212,      /*!< 212 I3C1                                                             */
  I3C2_IRQn                              = 213,      /*!< 213 I3C2                                                             */
  I3C3_IRQn                              = 214,      /*!< 214 I3C3                                                             */
  GTIMER0_IRQn                           = 226,      /*!< 226 GTIMER0                                                          */
  GTIMER1_IRQn                           = 227,      /*!< 227 GTIMER1                                                          */
  PWM0_IRQn                              = 228,      /*!< 228 PWM0                                                             */
  SPIM0_SPIS0_TWIM0_TWIS0_UARTE0_IRQn    = 229,      /*!< 229 SPIM0_SPIS0_TWIM0_TWIS0_UARTE0                                   */
  HSSPIM0_IRQn                           = 230,      /*!< 230 HSSPIM0                                                          */
  HSSPIM1_IRQn                           = 231,      /*!< 231 HSSPIM1                                                          */
  GIPCT10_IRQn                           = 289,      /*!< 289 GIPCT10                                                          */
  GRTC0_IRQn                             = 296,      /*!< 296 GRTC0                                                            */
  GRTC1_IRQn                             = 297,      /*!< 297 GRTC1                                                            */
  GWDT1_IRQn                             = 299,      /*!< 299 GWDT1                                                            */
  GWDT2_IRQn                             = 300,      /*!< 300 GWDT2                                                            */
  SAADC_IRQn                             = 386,      /*!< 386 SAADC                                                            */
  COMP_LPCOMP_IRQn                       = 387,      /*!< 387 COMP_LPCOMP                                                      */
  TEMP_IRQn                              = 388,      /*!< 388 TEMP                                                             */
  NFCT_IRQn                              = 389,      /*!< 389 NFCT                                                             */
  I2S_IRQn                               = 402,      /*!< 402 I2S                                                              */
  PDM_IRQn                               = 403,      /*!< 403 PDM                                                              */
  QDEC0_IRQn                             = 404,      /*!< 404 QDEC0                                                            */
  QDEC1_IRQn                             = 405,      /*!< 405 QDEC1                                                            */
  SIMIF_IRQn                             = 406,      /*!< 406 SIMIF                                                            */
  GMIPIRFFE_IRQn                         = 407,      /*!< 407 GMIPIRFFE                                                        */
  TWIM9_IRQn                             = 408,      /*!< 408 TWIM9                                                            */
  GTIMER2_IRQn                           = 418,      /*!< 418 GTIMER2                                                          */
  GTIMER3_IRQn                           = 419,      /*!< 419 GTIMER3                                                          */
  PWM1_IRQn                              = 420,      /*!< 420 PWM1                                                             */
  SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQn    = 421,      /*!< 421 SPIM1_SPIS1_TWIM1_TWIS1_UARTE1                                   */
  SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQn    = 422,      /*!< 422 SPIM2_SPIS2_TWIM2_TWIS2_UARTE2                                   */
  GTIMER4_IRQn                           = 434,      /*!< 434 GTIMER4                                                          */
  GTIMER5_IRQn                           = 435,      /*!< 435 GTIMER5                                                          */
  PWM2_IRQn                              = 436,      /*!< 436 PWM2                                                             */
  SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQn    = 437,      /*!< 437 SPIM3_SPIS3_TWIM3_TWIS3_UARTE3                                   */
  SPIM4_SPIS4_TWIM4_TWIS4_UARTE4_IRQn    = 438,      /*!< 438 SPIM4_SPIS4_TWIM4_TWIS4_UARTE4                                   */
  GTIMER6_IRQn                           = 450,      /*!< 450 GTIMER6                                                          */
  GTIMER7_IRQn                           = 451,      /*!< 451 GTIMER7                                                          */
  PWM3_IRQn                              = 452,      /*!< 452 PWM3                                                             */
  SPIM5_SPIS5_TWIM5_TWIS5_UARTE5_IRQn    = 453,      /*!< 453 SPIM5_SPIS5_TWIM5_TWIS5_UARTE5                                   */
  SPIM6_SPIS6_TWIM6_TWIS6_UARTE6_IRQn    = 454,      /*!< 454 SPIM6_SPIS6_TWIM6_TWIS6_UARTE6                                   */
  GTIMER8_IRQn                           = 466,      /*!< 466 GTIMER8                                                          */
  GTIMER9_IRQn                           = 467,      /*!< 467 GTIMER9                                                          */
  PWM4_IRQn                              = 468,      /*!< 468 PWM4                                                             */
  SPIM7_SPIS7_TWIM7_TWIS7_UARTE7_IRQn    = 469,      /*!< 469 SPIM7_SPIS7_TWIM7_TWIS7_UARTE7                                   */
  SPIM8_SPIS8_TWIM8_TWIS8_UARTE8_IRQn    = 470,      /*!< 470 SPIM8_SPIS8_TWIM8_TWIS8_UARTE8                                   */
} IRQn_Type;


/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* =========================== Configuration of the ARM Cortex-M33 Processor and Core Peripherals ============================ */
#define __CM33_REV                  r0p4             /*!< CM33 Core Revision                                                   */
#define __DSP_PRESENT                  1             /*!< DSP present or not                                                   */
#define __NVIC_PRIO_BITS               3             /*!< Number of Bits used for Priority Levels                              */
#define __VTOR_PRESENT                 1             /*!< CPU supports alternate Vector Table address                          */
#define __MPU_PRESENT                  1             /*!< MPU present                                                          */
#define __FPU_PRESENT                  1             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */
#define __Vendor_SysTickConfig         0             /*!< Vendor SysTick Config implementation is used                         */
#define __SAU_REGION_PRESENT           0             /*!< SAU present                                                          */

#include "core_cm33.h"                               /*!< ARM Cortex-M33 processor and core peripherals                        */
#include "system_haltium_cellularcore.h"             /*!< haltium_cellularcore System Library                                  */

#endif                                               /*!< NRF_CELLULARCORE                                                     */


/* ========================================= Start of section using anonymous unions ========================================= */

#if defined (__CC_ARM)
  #pragma anon_unions
#elif defined (__ICCARM__)
  #pragma language=extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc11-extensions"
  #pragma clang diagnostic ignored "-Wreserved-id-macro"
  #pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
  #pragma clang diagnostic ignored "-Wnested-anon-types"
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning 586
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#elif defined (_CEVA)
  /* anonymous unions are enabled by default */
#else
  #warning Unsupported compiler type
#endif

/* =========================================================================================================================== */
/* ================                                  Peripheral Address Map                                  ================ */
/* =========================================================================================================================== */

#define NRF_CELLULARCORE_ETM_NS_BASE      0xE0041000UL
#define NRF_CELLULARCORE_CTI_NS_BASE      0xE0042000UL
#define NRF_CELLULARCORE_CPUC_S_BASE      0xE0080000UL
#define NRF_CELLULARCORE_CACHE0_S_BASE    0xE0082000UL
#define NRF_CELLULARCORE_CACHE1_S_BASE    0xE0083000UL
#define NRF_CELLULARCORE_CACHE0DATA_S_BASE 0xE0F00000UL
#define NRF_CELLULARCORE_CACHE1DATA_S_BASE 0xE0F04000UL
#define NRF_CELLULARCORE_CACHE0INFO_S_BASE 0xE0F08000UL
#define NRF_CELLULARCORE_CACHE1INFO_S_BASE 0xE0F0C000UL
#define NRF_CELLULARCORE_SPU0_S_BASE      0x54000000UL
#define NRF_CELLULARCORE_HSFLL_S_BASE     0x54001000UL
#define NRF_CELLULARCORE_LRCCONF0_S_BASE  0x54002000UL
#define NRF_CELLULARCORE_MPC_S_BASE       0x54003000UL
#define NRF_CELLULARCORE_GENERIC2_S_BASE  0x54004000UL
#define NRF_CELLULARCORE_MVDMA_NS_BASE    0x44005000UL
#define NRF_CELLULARCORE_MVDMA_S_BASE     0x54005000UL
#define NRF_CELLULARCORE_RAMC00_NS_BASE   0x44006000UL
#define NRF_CELLULARCORE_RAMC00_S_BASE    0x54006000UL
#define NRF_CELLULARCORE_AESLTE_NS_BASE   0x44008000UL
#define NRF_CELLULARCORE_AESLTE_S_BASE    0x54008000UL
#define NRF_CELLULARCORE_SNOW_NS_BASE     0x44009000UL
#define NRF_CELLULARCORE_SNOW_S_BASE      0x54009000UL
#define NRF_CELLULARCORE_ZUC_NS_BASE      0x4400A000UL
#define NRF_CELLULARCORE_ZUC_S_BASE       0x5400A000UL
#define NRF_CELLULARCORE_TRACEDELAYREG_NS_BASE 0x4400B000UL
#define NRF_CELLULARCORE_TRACEDELAYREG_S_BASE 0x5400B000UL
#define NRF_CELLULARCORE_PCGCS0_S_BASE    0x5400C000UL
#define NRF_CELLULARCORE_PCGCM0_S_BASE    0x5400D000UL
#define NRF_CELLULARCORE_SPU1_S_BASE      0x54010000UL
#define NRF_CELLULARCORE_LRCCONF1_S_BASE  0x54011000UL
#define NRF_CELLULARCORE_CPUCONF_NS_BASE  0x44012000UL
#define NRF_CELLULARCORE_CPUCONF_S_BASE   0x54012000UL
#define NRF_CELLULARCORE_MEMCONF_NS_BASE  0x44013000UL
#define NRF_CELLULARCORE_MEMCONF_S_BASE   0x54013000UL
#define NRF_CELLULARCORE_WDT0_NS_BASE     0x44015000UL
#define NRF_CELLULARCORE_WDT0_S_BASE      0x54015000UL
#define NRF_CELLULARCORE_WDT1_NS_BASE     0x44016000UL
#define NRF_CELLULARCORE_WDT1_S_BASE      0x54016000UL
#define NRF_CELLULARCORE_RTC_NS_BASE      0x44017000UL
#define NRF_CELLULARCORE_RTC_S_BASE       0x54017000UL
#define NRF_CELLULARCORE_PCGCS1_S_BASE    0x54018000UL
#define NRF_CELLULARCORE_PCGCM1_S_BASE    0x54019000UL
#define NRF_CELLULARCORE_SPU2_S_BASE      0x54020000UL
#define NRF_CELLULARCORE_LRCCONF2_S_BASE  0x54021000UL
#define NRF_CELLULARCORE_DPPIC0_NS_BASE   0x44022000UL
#define NRF_CELLULARCORE_DPPIC0_S_BASE    0x54022000UL
#define NRF_CELLULARCORE_MCPLL_NS_BASE    0x44023000UL
#define NRF_CELLULARCORE_MCPLL_S_BASE     0x54023000UL
#define NRF_CELLULARCORE_LFCLKCALIBMEAS_NS_BASE 0x44025000UL
#define NRF_CELLULARCORE_LFCLKCALIBMEAS_S_BASE 0x54025000UL
#define NRF_CELLULARCORE_TIMEREVENTSYNCH_NS_BASE 0x44026000UL
#define NRF_CELLULARCORE_TIMEREVENTSYNCH_S_BASE 0x54026000UL
#define NRF_CELLULARCORE_TIMEMARKMUX0_NS_BASE 0x44027000UL
#define NRF_CELLULARCORE_TIMEMARKMUX0_S_BASE 0x54027000UL
#define NRF_CELLULARCORE_PCGCS2_S_BASE    0x54028000UL
#define NRF_CELLULARCORE_PCGCM2_S_BASE    0x54029000UL
#define NRF_CELLULARCORE_SPU3_S_BASE      0x54030000UL
#define NRF_CELLULARCORE_LRCCONF3_S_BASE  0x54031000UL
#define NRF_CELLULARCORE_DPPIC1_NS_BASE   0x44032000UL
#define NRF_CELLULARCORE_DPPIC1_S_BASE    0x54032000UL
#define NRF_CELLULARCORE_TIMEMARKMUX1_NS_BASE 0x44034000UL
#define NRF_CELLULARCORE_TIMEMARKMUX1_S_BASE 0x54034000UL
#define NRF_CELLULARCORE_PCGCS3_S_BASE    0x54035000UL
#define NRF_CELLULARCORE_PCGCM3_S_BASE    0x54036000UL
#define NRF_CELLULARCORE_IPCT_NS_BASE     0x44014000UL
#define NRF_CELLULARCORE_IPCT_S_BASE      0x54014000UL
#define NRF_CELLULARCORE_SYSTEMTIMER_NS_BASE 0x44007000UL
#define NRF_CELLULARCORE_SYSTEMTIMER_S_BASE 0x54007000UL
#define NRF_CELLULARCORE_LTETIMER_NS_BASE 0x44024000UL
#define NRF_CELLULARCORE_LTETIMER_S_BASE  0x54024000UL
#define NRF_CELLULARCORE_GNSSTIMER_NS_BASE 0x44033000UL
#define NRF_CELLULARCORE_GNSSTIMER_S_BASE 0x54033000UL
#define NRF_CELLULARCORE_BELLBOARD_NS_BASE 0x4F09C000UL
#define NRF_CELLULARCORE_BELLBOARD_S_BASE 0x5F09C000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_CELLULARCORE_ETM_NS           ((NRF_ETM_Type*)                      NRF_CELLULARCORE_ETM_NS_BASE)
#define NRF_CELLULARCORE_CTI_NS           ((NRF_CTI_Type*)                      NRF_CELLULARCORE_CTI_NS_BASE)
#define NRF_CELLULARCORE_CPUC_S           ((NRF_CM33SS_Type*)                   NRF_CELLULARCORE_CPUC_S_BASE)
#define NRF_CELLULARCORE_CACHE0_S         ((NRF_CACHE_Type*)                    NRF_CELLULARCORE_CACHE0_S_BASE)
#define NRF_CELLULARCORE_CACHE1_S         ((NRF_CACHE_Type*)                    NRF_CELLULARCORE_CACHE1_S_BASE)
#define NRF_CELLULARCORE_CACHE0DATA_S     ((NRF_CACHEDATA_Type*)                NRF_CELLULARCORE_CACHE0DATA_S_BASE)
#define NRF_CELLULARCORE_CACHE1DATA_S     ((NRF_CACHEDATA_Type*)                NRF_CELLULARCORE_CACHE1DATA_S_BASE)
#define NRF_CELLULARCORE_CACHE0INFO_S     ((NRF_CACHEINFO_Type*)                NRF_CELLULARCORE_CACHE0INFO_S_BASE)
#define NRF_CELLULARCORE_CACHE1INFO_S     ((NRF_CACHEINFO_Type*)                NRF_CELLULARCORE_CACHE1INFO_S_BASE)
#define NRF_CELLULARCORE_SPU0_S           ((NRF_SPU_Type*)                      NRF_CELLULARCORE_SPU0_S_BASE)
#define NRF_CELLULARCORE_HSFLL_S          ((NRF_HSFLL_Type*)                    NRF_CELLULARCORE_HSFLL_S_BASE)
#define NRF_CELLULARCORE_LRCCONF0_S       ((NRF_LRCCONF_Type*)                  NRF_CELLULARCORE_LRCCONF0_S_BASE)
#define NRF_CELLULARCORE_MPC_S            ((NRF_MPC_Type*)                      NRF_CELLULARCORE_MPC_S_BASE)
#define NRF_CELLULARCORE_GENERIC2_S       ((NRF_GENERIC_Type*)                  NRF_CELLULARCORE_GENERIC2_S_BASE)
#define NRF_CELLULARCORE_MVDMA_NS         ((NRF_MVDMA_Type*)                    NRF_CELLULARCORE_MVDMA_NS_BASE)
#define NRF_CELLULARCORE_MVDMA_S          ((NRF_MVDMA_Type*)                    NRF_CELLULARCORE_MVDMA_S_BASE)
#define NRF_CELLULARCORE_RAMC00_NS        ((NRF_RAMC_Type*)                     NRF_CELLULARCORE_RAMC00_NS_BASE)
#define NRF_CELLULARCORE_RAMC00_S         ((NRF_RAMC_Type*)                     NRF_CELLULARCORE_RAMC00_S_BASE)
#define NRF_CELLULARCORE_AESLTE_NS        ((NRF_AESLTE_Type*)                   NRF_CELLULARCORE_AESLTE_NS_BASE)
#define NRF_CELLULARCORE_AESLTE_S         ((NRF_AESLTE_Type*)                   NRF_CELLULARCORE_AESLTE_S_BASE)
#define NRF_CELLULARCORE_SNOW_NS          ((NRF_SNOW_Type*)                     NRF_CELLULARCORE_SNOW_NS_BASE)
#define NRF_CELLULARCORE_SNOW_S           ((NRF_SNOW_Type*)                     NRF_CELLULARCORE_SNOW_S_BASE)
#define NRF_CELLULARCORE_ZUC_NS           ((NRF_ZUC_Type*)                      NRF_CELLULARCORE_ZUC_NS_BASE)
#define NRF_CELLULARCORE_ZUC_S            ((NRF_ZUC_Type*)                      NRF_CELLULARCORE_ZUC_S_BASE)
#define NRF_CELLULARCORE_TRACEDELAYREG_NS ((NRF_TRACEDELAYREG_Type*)            NRF_CELLULARCORE_TRACEDELAYREG_NS_BASE)
#define NRF_CELLULARCORE_TRACEDELAYREG_S  ((NRF_TRACEDELAYREG_Type*)            NRF_CELLULARCORE_TRACEDELAYREG_S_BASE)
#define NRF_CELLULARCORE_PCGCS0_S         ((NRF_PCGCSLAVE_Type*)                NRF_CELLULARCORE_PCGCS0_S_BASE)
#define NRF_CELLULARCORE_PCGCM0_S         ((NRF_PCGCMASTER_Type*)               NRF_CELLULARCORE_PCGCM0_S_BASE)
#define NRF_CELLULARCORE_SPU1_S           ((NRF_SPU_Type*)                      NRF_CELLULARCORE_SPU1_S_BASE)
#define NRF_CELLULARCORE_LRCCONF1_S       ((NRF_LRCCONF_Type*)                  NRF_CELLULARCORE_LRCCONF1_S_BASE)
#define NRF_CELLULARCORE_CPUCONF_NS       ((NRF_CPUCONF_Type*)                  NRF_CELLULARCORE_CPUCONF_NS_BASE)
#define NRF_CELLULARCORE_CPUCONF_S        ((NRF_CPUCONF_Type*)                  NRF_CELLULARCORE_CPUCONF_S_BASE)
#define NRF_CELLULARCORE_MEMCONF_NS       ((NRF_MEMCONF_Type*)                  NRF_CELLULARCORE_MEMCONF_NS_BASE)
#define NRF_CELLULARCORE_MEMCONF_S        ((NRF_MEMCONF_Type*)                  NRF_CELLULARCORE_MEMCONF_S_BASE)
#define NRF_CELLULARCORE_WDT0_NS          ((NRF_WDT_Type*)                      NRF_CELLULARCORE_WDT0_NS_BASE)
#define NRF_CELLULARCORE_WDT0_S           ((NRF_WDT_Type*)                      NRF_CELLULARCORE_WDT0_S_BASE)
#define NRF_CELLULARCORE_WDT1_NS          ((NRF_WDT_Type*)                      NRF_CELLULARCORE_WDT1_NS_BASE)
#define NRF_CELLULARCORE_WDT1_S           ((NRF_WDT_Type*)                      NRF_CELLULARCORE_WDT1_S_BASE)
#define NRF_CELLULARCORE_RTC_NS           ((NRF_RTC_Type*)                      NRF_CELLULARCORE_RTC_NS_BASE)
#define NRF_CELLULARCORE_RTC_S            ((NRF_RTC_Type*)                      NRF_CELLULARCORE_RTC_S_BASE)
#define NRF_CELLULARCORE_PCGCS1_S         ((NRF_PCGCSLAVE_Type*)                NRF_CELLULARCORE_PCGCS1_S_BASE)
#define NRF_CELLULARCORE_PCGCM1_S         ((NRF_PCGCMASTER_Type*)               NRF_CELLULARCORE_PCGCM1_S_BASE)
#define NRF_CELLULARCORE_SPU2_S           ((NRF_SPU_Type*)                      NRF_CELLULARCORE_SPU2_S_BASE)
#define NRF_CELLULARCORE_LRCCONF2_S       ((NRF_LRCCONF_Type*)                  NRF_CELLULARCORE_LRCCONF2_S_BASE)
#define NRF_CELLULARCORE_DPPIC0_NS        ((NRF_DPPIC_Type*)                    NRF_CELLULARCORE_DPPIC0_NS_BASE)
#define NRF_CELLULARCORE_DPPIC0_S         ((NRF_DPPIC_Type*)                    NRF_CELLULARCORE_DPPIC0_S_BASE)
#define NRF_CELLULARCORE_MCPLL_NS         ((NRF_MCPLL_Type*)                    NRF_CELLULARCORE_MCPLL_NS_BASE)
#define NRF_CELLULARCORE_MCPLL_S          ((NRF_MCPLL_Type*)                    NRF_CELLULARCORE_MCPLL_S_BASE)
#define NRF_CELLULARCORE_LFCLKCALIBMEAS_NS ((NRF_LFCLKCALIBMEAS_Type*)          NRF_CELLULARCORE_LFCLKCALIBMEAS_NS_BASE)
#define NRF_CELLULARCORE_LFCLKCALIBMEAS_S ((NRF_LFCLKCALIBMEAS_Type*)           NRF_CELLULARCORE_LFCLKCALIBMEAS_S_BASE)
#define NRF_CELLULARCORE_TIMEREVENTSYNCH_NS ((NRF_TIMEREVENTSYNCH_Type*)        NRF_CELLULARCORE_TIMEREVENTSYNCH_NS_BASE)
#define NRF_CELLULARCORE_TIMEREVENTSYNCH_S ((NRF_TIMEREVENTSYNCH_Type*)         NRF_CELLULARCORE_TIMEREVENTSYNCH_S_BASE)
#define NRF_CELLULARCORE_TIMEMARKMUX0_NS  ((NRF_TIMEMARKMUX_Type*)              NRF_CELLULARCORE_TIMEMARKMUX0_NS_BASE)
#define NRF_CELLULARCORE_TIMEMARKMUX0_S   ((NRF_TIMEMARKMUX_Type*)              NRF_CELLULARCORE_TIMEMARKMUX0_S_BASE)
#define NRF_CELLULARCORE_PCGCS2_S         ((NRF_PCGCSLAVE_Type*)                NRF_CELLULARCORE_PCGCS2_S_BASE)
#define NRF_CELLULARCORE_PCGCM2_S         ((NRF_PCGCMASTER_Type*)               NRF_CELLULARCORE_PCGCM2_S_BASE)
#define NRF_CELLULARCORE_SPU3_S           ((NRF_SPU_Type*)                      NRF_CELLULARCORE_SPU3_S_BASE)
#define NRF_CELLULARCORE_LRCCONF3_S       ((NRF_LRCCONF_Type*)                  NRF_CELLULARCORE_LRCCONF3_S_BASE)
#define NRF_CELLULARCORE_DPPIC1_NS        ((NRF_DPPIC_Type*)                    NRF_CELLULARCORE_DPPIC1_NS_BASE)
#define NRF_CELLULARCORE_DPPIC1_S         ((NRF_DPPIC_Type*)                    NRF_CELLULARCORE_DPPIC1_S_BASE)
#define NRF_CELLULARCORE_TIMEMARKMUX1_NS  ((NRF_TIMEMARKMUX_Type*)              NRF_CELLULARCORE_TIMEMARKMUX1_NS_BASE)
#define NRF_CELLULARCORE_TIMEMARKMUX1_S   ((NRF_TIMEMARKMUX_Type*)              NRF_CELLULARCORE_TIMEMARKMUX1_S_BASE)
#define NRF_CELLULARCORE_PCGCS3_S         ((NRF_PCGCSLAVE_Type*)                NRF_CELLULARCORE_PCGCS3_S_BASE)
#define NRF_CELLULARCORE_PCGCM3_S         ((NRF_PCGCMASTER_Type*)               NRF_CELLULARCORE_PCGCM3_S_BASE)
#define NRF_CELLULARCORE_IPCT_NS          ((NRF_IPCT_Type*)                     NRF_CELLULARCORE_IPCT_NS_BASE)
#define NRF_CELLULARCORE_IPCT_S           ((NRF_IPCT_Type*)                     NRF_CELLULARCORE_IPCT_S_BASE)
#define NRF_CELLULARCORE_SYSTEMTIMER_NS   ((NRF_MODEMTIMER_Type*)               NRF_CELLULARCORE_SYSTEMTIMER_NS_BASE)
#define NRF_CELLULARCORE_SYSTEMTIMER_S    ((NRF_MODEMTIMER_Type*)               NRF_CELLULARCORE_SYSTEMTIMER_S_BASE)
#define NRF_CELLULARCORE_LTETIMER_NS      ((NRF_MODEMTIMER_Type*)               NRF_CELLULARCORE_LTETIMER_NS_BASE)
#define NRF_CELLULARCORE_LTETIMER_S       ((NRF_MODEMTIMER_Type*)               NRF_CELLULARCORE_LTETIMER_S_BASE)
#define NRF_CELLULARCORE_GNSSTIMER_NS     ((NRF_MODEMTIMER_Type*)               NRF_CELLULARCORE_GNSSTIMER_NS_BASE)
#define NRF_CELLULARCORE_GNSSTIMER_S      ((NRF_MODEMTIMER_Type*)               NRF_CELLULARCORE_GNSSTIMER_S_BASE)
#define NRF_CELLULARCORE_BELLBOARD_NS     ((NRF_BELLBOARD_Type*)                NRF_CELLULARCORE_BELLBOARD_NS_BASE)
#define NRF_CELLULARCORE_BELLBOARD_S      ((NRF_BELLBOARD_Type*)                NRF_CELLULARCORE_BELLBOARD_S_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_NONSECURE                                 /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
  #define NRF_CELLULARCORE_ETM                    NRF_CELLULARCORE_ETM_NS
  #define NRF_CELLULARCORE_CTI                    NRF_CELLULARCORE_CTI_NS
  #define NRF_CELLULARCORE_MVDMA                  NRF_CELLULARCORE_MVDMA_NS
  #define NRF_CELLULARCORE_RAMC00                 NRF_CELLULARCORE_RAMC00_NS
  #define NRF_CELLULARCORE_AESLTE                 NRF_CELLULARCORE_AESLTE_NS
  #define NRF_CELLULARCORE_SNOW                   NRF_CELLULARCORE_SNOW_NS
  #define NRF_CELLULARCORE_ZUC                    NRF_CELLULARCORE_ZUC_NS
  #define NRF_CELLULARCORE_TRACEDELAYREG          NRF_CELLULARCORE_TRACEDELAYREG_NS
  #define NRF_CELLULARCORE_CPUCONF                NRF_CELLULARCORE_CPUCONF_NS
  #define NRF_CELLULARCORE_MEMCONF                NRF_CELLULARCORE_MEMCONF_NS
  #define NRF_CELLULARCORE_WDT0                   NRF_CELLULARCORE_WDT0_NS
  #define NRF_CELLULARCORE_WDT1                   NRF_CELLULARCORE_WDT1_NS
  #define NRF_CELLULARCORE_RTC                    NRF_CELLULARCORE_RTC_NS
  #define NRF_CELLULARCORE_DPPIC0                 NRF_CELLULARCORE_DPPIC0_NS
  #define NRF_CELLULARCORE_MCPLL                  NRF_CELLULARCORE_MCPLL_NS
  #define NRF_CELLULARCORE_LFCLKCALIBMEAS         NRF_CELLULARCORE_LFCLKCALIBMEAS_NS
  #define NRF_CELLULARCORE_TIMEREVENTSYNCH        NRF_CELLULARCORE_TIMEREVENTSYNCH_NS
  #define NRF_CELLULARCORE_TIMEMARKMUX0           NRF_CELLULARCORE_TIMEMARKMUX0_NS
  #define NRF_CELLULARCORE_DPPIC1                 NRF_CELLULARCORE_DPPIC1_NS
  #define NRF_CELLULARCORE_TIMEMARKMUX1           NRF_CELLULARCORE_TIMEMARKMUX1_NS
  #define NRF_CELLULARCORE_IPCT                   NRF_CELLULARCORE_IPCT_NS
  #define NRF_CELLULARCORE_SYSTEMTIMER            NRF_CELLULARCORE_SYSTEMTIMER_NS
  #define NRF_CELLULARCORE_LTETIMER               NRF_CELLULARCORE_LTETIMER_NS
  #define NRF_CELLULARCORE_GNSSTIMER              NRF_CELLULARCORE_GNSSTIMER_NS
  #define NRF_CELLULARCORE_BELLBOARD              NRF_CELLULARCORE_BELLBOARD_NS
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_CELLULARCORE_ETM                    NRF_CELLULARCORE_ETM_NS
  #define NRF_CELLULARCORE_CTI                    NRF_CELLULARCORE_CTI_NS
  #define NRF_CELLULARCORE_CPUC                   NRF_CELLULARCORE_CPUC_S
  #define NRF_CELLULARCORE_CACHE0                 NRF_CELLULARCORE_CACHE0_S
  #define NRF_CELLULARCORE_CACHE1                 NRF_CELLULARCORE_CACHE1_S
  #define NRF_CELLULARCORE_CACHE0DATA             NRF_CELLULARCORE_CACHE0DATA_S
  #define NRF_CELLULARCORE_CACHE1DATA             NRF_CELLULARCORE_CACHE1DATA_S
  #define NRF_CELLULARCORE_CACHE0INFO             NRF_CELLULARCORE_CACHE0INFO_S
  #define NRF_CELLULARCORE_CACHE1INFO             NRF_CELLULARCORE_CACHE1INFO_S
  #define NRF_CELLULARCORE_SPU0                   NRF_CELLULARCORE_SPU0_S
  #define NRF_CELLULARCORE_HSFLL                  NRF_CELLULARCORE_HSFLL_S
  #define NRF_CELLULARCORE_LRCCONF0               NRF_CELLULARCORE_LRCCONF0_S
  #define NRF_CELLULARCORE_MPC                    NRF_CELLULARCORE_MPC_S
  #define NRF_CELLULARCORE_GENERIC2               NRF_CELLULARCORE_GENERIC2_S
  #define NRF_CELLULARCORE_MVDMA                  NRF_CELLULARCORE_MVDMA_S
  #define NRF_CELLULARCORE_RAMC00                 NRF_CELLULARCORE_RAMC00_S
  #define NRF_CELLULARCORE_AESLTE                 NRF_CELLULARCORE_AESLTE_S
  #define NRF_CELLULARCORE_SNOW                   NRF_CELLULARCORE_SNOW_S
  #define NRF_CELLULARCORE_ZUC                    NRF_CELLULARCORE_ZUC_S
  #define NRF_CELLULARCORE_TRACEDELAYREG          NRF_CELLULARCORE_TRACEDELAYREG_S
  #define NRF_CELLULARCORE_PCGCS0                 NRF_CELLULARCORE_PCGCS0_S
  #define NRF_CELLULARCORE_PCGCM0                 NRF_CELLULARCORE_PCGCM0_S
  #define NRF_CELLULARCORE_SPU1                   NRF_CELLULARCORE_SPU1_S
  #define NRF_CELLULARCORE_LRCCONF1               NRF_CELLULARCORE_LRCCONF1_S
  #define NRF_CELLULARCORE_CPUCONF                NRF_CELLULARCORE_CPUCONF_S
  #define NRF_CELLULARCORE_MEMCONF                NRF_CELLULARCORE_MEMCONF_S
  #define NRF_CELLULARCORE_WDT0                   NRF_CELLULARCORE_WDT0_S
  #define NRF_CELLULARCORE_WDT1                   NRF_CELLULARCORE_WDT1_S
  #define NRF_CELLULARCORE_RTC                    NRF_CELLULARCORE_RTC_S
  #define NRF_CELLULARCORE_PCGCS1                 NRF_CELLULARCORE_PCGCS1_S
  #define NRF_CELLULARCORE_PCGCM1                 NRF_CELLULARCORE_PCGCM1_S
  #define NRF_CELLULARCORE_SPU2                   NRF_CELLULARCORE_SPU2_S
  #define NRF_CELLULARCORE_LRCCONF2               NRF_CELLULARCORE_LRCCONF2_S
  #define NRF_CELLULARCORE_DPPIC0                 NRF_CELLULARCORE_DPPIC0_S
  #define NRF_CELLULARCORE_MCPLL                  NRF_CELLULARCORE_MCPLL_S
  #define NRF_CELLULARCORE_LFCLKCALIBMEAS         NRF_CELLULARCORE_LFCLKCALIBMEAS_S
  #define NRF_CELLULARCORE_TIMEREVENTSYNCH        NRF_CELLULARCORE_TIMEREVENTSYNCH_S
  #define NRF_CELLULARCORE_TIMEMARKMUX0           NRF_CELLULARCORE_TIMEMARKMUX0_S
  #define NRF_CELLULARCORE_PCGCS2                 NRF_CELLULARCORE_PCGCS2_S
  #define NRF_CELLULARCORE_PCGCM2                 NRF_CELLULARCORE_PCGCM2_S
  #define NRF_CELLULARCORE_SPU3                   NRF_CELLULARCORE_SPU3_S
  #define NRF_CELLULARCORE_LRCCONF3               NRF_CELLULARCORE_LRCCONF3_S
  #define NRF_CELLULARCORE_DPPIC1                 NRF_CELLULARCORE_DPPIC1_S
  #define NRF_CELLULARCORE_TIMEMARKMUX1           NRF_CELLULARCORE_TIMEMARKMUX1_S
  #define NRF_CELLULARCORE_PCGCS3                 NRF_CELLULARCORE_PCGCS3_S
  #define NRF_CELLULARCORE_PCGCM3                 NRF_CELLULARCORE_PCGCM3_S
  #define NRF_CELLULARCORE_IPCT                   NRF_CELLULARCORE_IPCT_S
  #define NRF_CELLULARCORE_SYSTEMTIMER            NRF_CELLULARCORE_SYSTEMTIMER_S
  #define NRF_CELLULARCORE_LTETIMER               NRF_CELLULARCORE_LTETIMER_S
  #define NRF_CELLULARCORE_GNSSTIMER              NRF_CELLULARCORE_GNSSTIMER_S
  #define NRF_CELLULARCORE_BELLBOARD              NRF_CELLULARCORE_BELLBOARD_S
#endif                                               /*!<  NRF_NONSECURE                                                       */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_CELLULARCORE                              /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_ETM                                 NRF_CELLULARCORE_ETM
  #define NRF_CTI                                 NRF_CELLULARCORE_CTI
  #define NRF_CPUC                                NRF_CELLULARCORE_CPUC
  #define NRF_CACHE0                              NRF_CELLULARCORE_CACHE0
  #define NRF_CACHE1                              NRF_CELLULARCORE_CACHE1
  #define NRF_CACHE0DATA                          NRF_CELLULARCORE_CACHE0DATA
  #define NRF_CACHE1DATA                          NRF_CELLULARCORE_CACHE1DATA
  #define NRF_CACHE0INFO                          NRF_CELLULARCORE_CACHE0INFO
  #define NRF_CACHE1INFO                          NRF_CELLULARCORE_CACHE1INFO
  #define NRF_SPU0                                NRF_CELLULARCORE_SPU0
  #define NRF_HSFLL                               NRF_CELLULARCORE_HSFLL
  #define NRF_LRCCONF0                            NRF_CELLULARCORE_LRCCONF0
  #define NRF_MPC                                 NRF_CELLULARCORE_MPC
  #define NRF_GENERIC2                            NRF_CELLULARCORE_GENERIC2
  #define NRF_MVDMA                               NRF_CELLULARCORE_MVDMA
  #define NRF_RAMC00                              NRF_CELLULARCORE_RAMC00
  #define NRF_AESLTE                              NRF_CELLULARCORE_AESLTE
  #define NRF_SNOW                                NRF_CELLULARCORE_SNOW
  #define NRF_ZUC                                 NRF_CELLULARCORE_ZUC
  #define NRF_TRACEDELAYREG                       NRF_CELLULARCORE_TRACEDELAYREG
  #define NRF_PCGCS0                              NRF_CELLULARCORE_PCGCS0
  #define NRF_PCGCM0                              NRF_CELLULARCORE_PCGCM0
  #define NRF_SPU1                                NRF_CELLULARCORE_SPU1
  #define NRF_LRCCONF1                            NRF_CELLULARCORE_LRCCONF1
  #define NRF_CPUCONF                             NRF_CELLULARCORE_CPUCONF
  #define NRF_MEMCONF                             NRF_CELLULARCORE_MEMCONF
  #define NRF_WDT0                                NRF_CELLULARCORE_WDT0
  #define NRF_WDT1                                NRF_CELLULARCORE_WDT1
  #define NRF_RTC                                 NRF_CELLULARCORE_RTC
  #define NRF_PCGCS1                              NRF_CELLULARCORE_PCGCS1
  #define NRF_PCGCM1                              NRF_CELLULARCORE_PCGCM1
  #define NRF_SPU2                                NRF_CELLULARCORE_SPU2
  #define NRF_LRCCONF2                            NRF_CELLULARCORE_LRCCONF2
  #define NRF_DPPIC0                              NRF_CELLULARCORE_DPPIC0
  #define NRF_MCPLL                               NRF_CELLULARCORE_MCPLL
  #define NRF_LFCLKCALIBMEAS                      NRF_CELLULARCORE_LFCLKCALIBMEAS
  #define NRF_TIMEREVENTSYNCH                     NRF_CELLULARCORE_TIMEREVENTSYNCH
  #define NRF_TIMEMARKMUX0                        NRF_CELLULARCORE_TIMEMARKMUX0
  #define NRF_PCGCS2                              NRF_CELLULARCORE_PCGCS2
  #define NRF_PCGCM2                              NRF_CELLULARCORE_PCGCM2
  #define NRF_SPU3                                NRF_CELLULARCORE_SPU3
  #define NRF_LRCCONF3                            NRF_CELLULARCORE_LRCCONF3
  #define NRF_DPPIC1                              NRF_CELLULARCORE_DPPIC1
  #define NRF_TIMEMARKMUX1                        NRF_CELLULARCORE_TIMEMARKMUX1
  #define NRF_PCGCS3                              NRF_CELLULARCORE_PCGCS3
  #define NRF_PCGCM3                              NRF_CELLULARCORE_PCGCM3
  #define NRF_IPCT                                NRF_CELLULARCORE_IPCT
  #define NRF_SYSTEMTIMER                         NRF_CELLULARCORE_SYSTEMTIMER
  #define NRF_LTETIMER                            NRF_CELLULARCORE_LTETIMER
  #define NRF_GNSSTIMER                           NRF_CELLULARCORE_GNSSTIMER
  #define NRF_BELLBOARD                           NRF_CELLULARCORE_BELLBOARD
#endif                                               /*!< NRF_CELLULARCORE                                                     */

/* ========================================== End of section using anonymous unions ========================================== */

#if defined (__CC_ARM)
  #pragma pop
#elif defined (__ICCARM__)
  /* leave anonymous unions enabled */
#elif (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic pop
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning restore
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#elif defined (_CEVA)
  /* anonymous unions are enabled by default */
#endif


#ifdef __cplusplus
}
#endif
#endif /* HALTIUM_CELLULARCORE_H */

