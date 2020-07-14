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

#ifndef HALTIUM_SECURE_H
#define HALTIUM_SECURE_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_SECURE                                    /*!< Processor information is domain local.                               */


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
  MPC_IRQn                               = 1,        /*!< 1 MPC                                                                */
  GENERIC0_IRQn                          = 2,        /*!< 2 GENERIC0                                                           */
  MVDMA_IRQn                             = 3,        /*!< 3 MVDMA                                                              */
  RAMC00_IRQn                            = 4,        /*!< 4 RAMC00                                                             */
  ROMC00_IRQn                            = 5,        /*!< 5 ROMC00                                                             */
  GENERIC1_IRQn                          = 6,        /*!< 6 GENERIC1                                                           */
  GENERIC2_IRQn                          = 10,       /*!< 10 GENERIC2                                                          */
  GENERIC3_IRQn                          = 11,       /*!< 11 GENERIC3                                                          */
  ABB_IRQn                               = 12,       /*!< 12 ABB                                                               */
  HSFLL_IRQn                             = 13,       /*!< 13 HSFLL                                                             */
  LRC0_IRQn                              = 14,       /*!< 14 LRC0                                                              */
  GENERIC6_IRQn                          = 15,       /*!< 15 GENERIC6                                                          */
  SPU1_IRQn                              = 16,       /*!< 16 SPU1                                                              */
  WDT0_IRQn                              = 20,       /*!< 20 WDT0                                                              */
  WDT1_IRQn                              = 21,       /*!< 21 WDT1                                                              */
  TAMPC_IRQn                             = 22,       /*!< 22 TAMPC                                                             */
  GENERIC7_IRQn                          = 28,       /*!< 28 GENERIC7                                                          */
  GENERIC8_IRQn                          = 29,       /*!< 29 GENERIC8                                                          */
  LRC1_IRQn                              = 30,       /*!< 30 LRC1                                                              */
  GENERIC10_IRQn                         = 31,       /*!< 31 GENERIC10                                                         */
  IPCT0_IRQn                             = 64,       /*!< 64 IPCT0                                                             */
  IPCT1_IRQn                             = 65,       /*!< 65 IPCT1                                                             */
  BELLBOARD0_IRQn                        = 96,       /*!< 96 BELLBOARD0                                                        */
  BELLBOARD1_IRQn                        = 97,       /*!< 97 BELLBOARD1                                                        */
  BELLBOARD2_IRQn                        = 98,       /*!< 98 BELLBOARD2                                                        */
  BELLBOARD3_IRQn                        = 99,       /*!< 99 BELLBOARD3                                                        */
  GPIOTE00_IRQn                          = 104,      /*!< 104 GPIOTE00                                                         */
  GPIOTE01_IRQn                          = 105,      /*!< 105 GPIOTE01                                                         */
  GPIOTE10_IRQn                          = 106,      /*!< 106 GPIOTE10                                                         */
  GPIOTE11_IRQn                          = 107,      /*!< 107 GPIOTE11                                                         */
  GSPU0_IRQn                             = 128,      /*!< 128 GSPU0                                                            */
  GMPC0_IRQn                             = 129,      /*!< 129 GMPC0                                                            */
  GSPU1_IRQn                             = 144,      /*!< 144 GSPU1                                                            */
  GMPC1_IRQn                             = 145,      /*!< 145 GMPC1                                                            */
  GSPU2_IRQn                             = 192,      /*!< 192 GSPU2                                                            */
  GMPC2_IRQn                             = 193,      /*!< 193 GMPC2                                                            */
  GSPU3_IRQn                             = 208,      /*!< 208 GSPU3                                                            */
  GIPCT00_IRQn                           = 209,      /*!< 209 GIPCT00                                                          */
  GGENERIC55_IRQn                        = 211,      /*!< 211 GGENERIC55                                                       */
  GGENERIC56_IRQn                        = 212,      /*!< 212 GGENERIC56                                                       */
  GGENERIC57_IRQn                        = 213,      /*!< 213 GGENERIC57                                                       */
  GGENERIC58_IRQn                        = 214,      /*!< 214 GGENERIC58                                                       */
  GSPU4_IRQn                             = 224,      /*!< 224 GSPU4                                                            */
  GTIMER0_IRQn                           = 226,      /*!< 226 GTIMER0                                                          */
  GTIMER1_IRQn                           = 227,      /*!< 227 GTIMER1                                                          */
  PWM0_IRQn                              = 228,      /*!< 228 PWM0                                                             */
  SPIM0_SPIS0_TWIM0_TWIS0_UARTE0_IRQn    = 229,      /*!< 229 SPIM0_SPIS0_TWIM0_TWIS0_UARTE0                                   */
  HSSPIM0_IRQn                           = 230,      /*!< 230 HSSPIM0                                                          */
  HSSPIM1_IRQn                           = 231,      /*!< 231 HSSPIM1                                                          */
  GSPU5_IRQn                             = 256,      /*!< 256 GSPU5                                                            */
  GMPC3_IRQn                             = 257,      /*!< 257 GMPC3                                                            */
  GSPU6_IRQn                             = 288,      /*!< 288 GSPU6                                                            */
  GIPCT10_IRQn                           = 289,      /*!< 289 GIPCT10                                                          */
  GRTC0_IRQn                             = 296,      /*!< 296 GRTC0                                                            */
  GRTC1_IRQn                             = 297,      /*!< 297 GRTC1                                                            */
  GWDT1_IRQn                             = 299,      /*!< 299 GWDT1                                                            */
  GWDT2_IRQn                             = 300,      /*!< 300 GWDT2                                                            */
  GSPU7_IRQn                             = 320,      /*!< 320 GSPU7                                                            */
  GSPU8_IRQn                             = 384,      /*!< 384 GSPU8                                                            */
  SAADC_IRQn                             = 386,      /*!< 386 SAADC                                                            */
  COMP_LPCOMP_IRQn                       = 387,      /*!< 387 COMP_LPCOMP                                                      */
  TEMP_IRQn                              = 388,      /*!< 388 TEMP                                                             */
  NFCT_IRQn                              = 389,      /*!< 389 NFCT                                                             */
  GSPU9_IRQn                             = 400,      /*!< 400 GSPU9                                                            */
  I2S_IRQn                               = 402,      /*!< 402 I2S                                                              */
  PDM_IRQn                               = 403,      /*!< 403 PDM                                                              */
  QDEC0_IRQn                             = 404,      /*!< 404 QDEC0                                                            */
  QDEC1_IRQn                             = 405,      /*!< 405 QDEC1                                                            */
  SIMIF_IRQn                             = 406,      /*!< 406 SIMIF                                                            */
  GMIPIRFFE_IRQn                         = 407,      /*!< 407 GMIPIRFFE                                                        */
  TWIM9_IRQn                             = 408,      /*!< 408 TWIM9                                                            */
  GSPU10_IRQn                            = 416,      /*!< 416 GSPU10                                                           */
  GTIMER2_IRQn                           = 418,      /*!< 418 GTIMER2                                                          */
  GTIMER3_IRQn                           = 419,      /*!< 419 GTIMER3                                                          */
  PWM1_IRQn                              = 420,      /*!< 420 PWM1                                                             */
  SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQn    = 421,      /*!< 421 SPIM1_SPIS1_TWIM1_TWIS1_UARTE1                                   */
  SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQn    = 422,      /*!< 422 SPIM2_SPIS2_TWIM2_TWIS2_UARTE2                                   */
  GSPU11_IRQn                            = 432,      /*!< 432 GSPU11                                                           */
  GTIMER4_IRQn                           = 434,      /*!< 434 GTIMER4                                                          */
  GTIMER5_IRQn                           = 435,      /*!< 435 GTIMER5                                                          */
  PWM2_IRQn                              = 436,      /*!< 436 PWM2                                                             */
  SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQn    = 437,      /*!< 437 SPIM3_SPIS3_TWIM3_TWIS3_UARTE3                                   */
  SPIM4_SPIS4_TWIM4_TWIS4_UARTE4_IRQn    = 438,      /*!< 438 SPIM4_SPIS4_TWIM4_TWIS4_UARTE4                                   */
  GSPU12_IRQn                            = 448,      /*!< 448 GSPU12                                                           */
  GTIMER6_IRQn                           = 450,      /*!< 450 GTIMER6                                                          */
  GTIMER7_IRQn                           = 451,      /*!< 451 GTIMER7                                                          */
  PWM3_IRQn                              = 452,      /*!< 452 PWM3                                                             */
  SPIM5_SPIS5_TWIM5_TWIS5_UARTE5_IRQn    = 453,      /*!< 453 SPIM5_SPIS5_TWIM5_TWIS5_UARTE5                                   */
  SPIM6_SPIS6_TWIM6_TWIS6_UARTE6_IRQn    = 454,      /*!< 454 SPIM6_SPIS6_TWIM6_TWIS6_UARTE6                                   */
  GSPU13_IRQn                            = 464,      /*!< 464 GSPU13                                                           */
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
#include "system_haltium_secure.h"                   /*!< haltium_secure System Library                                        */

#endif                                               /*!< NRF_SECURE                                                           */


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
#else
  #warning Unsupported compiler type
#endif

/* =========================================================================================================================== */
/* ================                                  Peripheral Address Map                                  ================ */
/* =========================================================================================================================== */

#define NRF_SECURE_ETM_NS_BASE            0x00410000UL
#define NRF_SECURE_CTI_NS_BASE            0x00420000UL
#define NRF_SECURE_GSPU14_S_BASE          0xBF000000UL
#define NRF_SECURE_CTRLAP_S_BASE          0xBF002000UL
#define NRF_SECURE_GGENERIC0_S_BASE       0xBF004000UL
#define NRF_SECURE_GHSFLL2_S_BASE         0xBF005000UL
#define NRF_SECURE_GLRC2_S_BASE           0xBF006000UL
#define NRF_SECURE_GGENERIC61_S_BASE      0xBF007000UL
#define NRF_SECURE_GMPC4_S_BASE           0xBF008000UL
#define NRF_SECURE_GMEMCONF2_S_BASE       0xBF009000UL
#define NRF_SECURE_GENERIC11_S_BASE       0xE0042000UL
#define NRF_SECURE_CPUC_S_BASE            0xE0080000UL
#define NRF_SECURE_CACHE0_S_BASE          0xE0082000UL
#define NRF_SECURE_CACHE1_S_BASE          0xE0083000UL
#define NRF_SECURE_CACHE0DATA_S_BASE      0xE0F00000UL
#define NRF_SECURE_CACHE1DATA_S_BASE      0xE0F04000UL
#define NRF_SECURE_CACHE0INFO_S_BASE      0xE0F08000UL
#define NRF_SECURE_CACHE1INFO_S_BASE      0xE0F0C000UL
#define NRF_SECURE_SPU0_S_BASE            0x51000000UL
#define NRF_SECURE_MPC_S_BASE             0x51001000UL
#define NRF_SECURE_GENERIC0_S_BASE        0x51002000UL
#define NRF_SECURE_MVDMA_NS_BASE          0x41003000UL
#define NRF_SECURE_MVDMA_S_BASE           0x51003000UL
#define NRF_SECURE_RAMC00_NS_BASE         0x41004000UL
#define NRF_SECURE_RAMC00_S_BASE          0x51004000UL
#define NRF_SECURE_ROMC00_NS_BASE         0x41005000UL
#define NRF_SECURE_ROMC00_S_BASE          0x51005000UL
#define NRF_SECURE_GENERIC1_NS_BASE       0x41006000UL
#define NRF_SECURE_GENERIC1_S_BASE        0x51006000UL
#define NRF_SECURE_GENERIC2_S_BASE        0x5100A000UL
#define NRF_SECURE_GENERIC3_S_BASE        0x5100B000UL
#define NRF_SECURE_ABB_S_BASE             0x5100C000UL
#define NRF_SECURE_HSFLL_S_BASE           0x5100D000UL
#define NRF_SECURE_LRC0_S_BASE            0x5100E000UL
#define NRF_SECURE_GENERIC6_S_BASE        0x5100F000UL
#define NRF_SECURE_SPU1_S_BASE            0x51010000UL
#define NRF_SECURE_CPUCONF_NS_BASE        0x41011000UL
#define NRF_SECURE_CPUCONF_S_BASE         0x51011000UL
#define NRF_SECURE_MEMCONF_NS_BASE        0x41012000UL
#define NRF_SECURE_MEMCONF_S_BASE         0x51012000UL
#define NRF_SECURE_WDT0_NS_BASE           0x41014000UL
#define NRF_SECURE_WDT0_S_BASE            0x51014000UL
#define NRF_SECURE_WDT1_NS_BASE           0x41015000UL
#define NRF_SECURE_WDT1_S_BASE            0x51015000UL
#define NRF_SECURE_TAMPC_S_BASE           0x51016000UL
#define NRF_SECURE_MUTEX_NS_BASE          0x41017000UL
#define NRF_SECURE_MUTEX_S_BASE           0x51017000UL
#define NRF_SECURE_GENERIC7_S_BASE        0x5101C000UL
#define NRF_SECURE_GENERIC8_S_BASE        0x5101D000UL
#define NRF_SECURE_LRC1_S_BASE            0x5101E000UL
#define NRF_SECURE_GENERIC10_S_BASE       0x5101F000UL
#define NRF_SECURE_IPCT_NS_BASE           0x41013000UL
#define NRF_SECURE_IPCT_S_BASE            0x51013000UL
#define NRF_SECURE_BELLBOARD_NS_BASE      0x4F099000UL
#define NRF_SECURE_BELLBOARD_S_BASE       0x5F099000UL
#define NRF_SECURE_GSPU0_S_BASE           0x5F080000UL
#define NRF_SECURE_GMPC0_S_BASE           0x5F081000UL
#define NRF_SECURE_GSPU1_S_BASE           0x5F090000UL
#define NRF_SECURE_GMPC1_S_BASE           0x5F091000UL
#define NRF_SECURE_GSPU2_S_BASE           0x5F8C0000UL
#define NRF_SECURE_GMPC2_S_BASE           0x5F8C1000UL
#define NRF_SECURE_GSPU3_S_BASE           0x5F8D0000UL
#define NRF_SECURE_GSPU4_S_BASE           0x5F8E0000UL
#define NRF_SECURE_GSPU5_S_BASE           0x5F900000UL
#define NRF_SECURE_GMPC3_S_BASE           0x5F901000UL
#define NRF_SECURE_GSPU6_S_BASE           0x5F920000UL
#define NRF_SECURE_IPCMAP_S_BASE          0x5F923000UL
#define NRF_SECURE_IRQMAP_S_BASE          0x5F924000UL
#define NRF_SECURE_GSPU7_S_BASE           0x5F940000UL
#define NRF_SECURE_GSPU8_S_BASE           0x5F980000UL
#define NRF_SECURE_GSPU9_S_BASE           0x5F990000UL
#define NRF_SECURE_GSPU10_S_BASE          0x5F9A0000UL
#define NRF_SECURE_GSPU11_S_BASE          0x5F9B0000UL
#define NRF_SECURE_GSPU12_S_BASE          0x5F9C0000UL
#define NRF_SECURE_GSPU13_S_BASE          0x5F9D0000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_SECURE_ETM_NS                 ((NRF_ETM_Type*)                      NRF_SECURE_ETM_NS_BASE)
#define NRF_SECURE_CTI_NS                 ((NRF_CTI_Type*)                      NRF_SECURE_CTI_NS_BASE)
#define NRF_SECURE_GSPU14_S               ((NRF_SPU_Type*)                      NRF_SECURE_GSPU14_S_BASE)
#define NRF_SECURE_CTRLAP_S               ((NRF_CTRLAPPERI_Type*)               NRF_SECURE_CTRLAP_S_BASE)
#define NRF_SECURE_GGENERIC0_S            ((NRF_GENERIC_Type*)                  NRF_SECURE_GGENERIC0_S_BASE)
#define NRF_SECURE_GHSFLL2_S              ((NRF_HSFLL_Type*)                    NRF_SECURE_GHSFLL2_S_BASE)
#define NRF_SECURE_GLRC2_S                ((NRF_LRC_Type*)                      NRF_SECURE_GLRC2_S_BASE)
#define NRF_SECURE_GGENERIC61_S           ((NRF_GENERIC_Type*)                  NRF_SECURE_GGENERIC61_S_BASE)
#define NRF_SECURE_GMPC4_S                ((NRF_MPC_Type*)                      NRF_SECURE_GMPC4_S_BASE)
#define NRF_SECURE_GMEMCONF2_S            ((NRF_MEMCONF_Type*)                  NRF_SECURE_GMEMCONF2_S_BASE)
#define NRF_SECURE_GENERIC11_S            ((NRF_GENERIC_Type*)                  NRF_SECURE_GENERIC11_S_BASE)
#define NRF_SECURE_CPUC_S                 ((NRF_CM33SS_Type*)                   NRF_SECURE_CPUC_S_BASE)
#define NRF_SECURE_CACHE0_S               ((NRF_CACHE_Type*)                    NRF_SECURE_CACHE0_S_BASE)
#define NRF_SECURE_CACHE1_S               ((NRF_CACHE_Type*)                    NRF_SECURE_CACHE1_S_BASE)
#define NRF_SECURE_CACHE0DATA_S           ((NRF_CACHEDATA_Type*)                NRF_SECURE_CACHE0DATA_S_BASE)
#define NRF_SECURE_CACHE1DATA_S           ((NRF_CACHEDATA_Type*)                NRF_SECURE_CACHE1DATA_S_BASE)
#define NRF_SECURE_CACHE0INFO_S           ((NRF_CACHEINFO_Type*)                NRF_SECURE_CACHE0INFO_S_BASE)
#define NRF_SECURE_CACHE1INFO_S           ((NRF_CACHEINFO_Type*)                NRF_SECURE_CACHE1INFO_S_BASE)
#define NRF_SECURE_SPU0_S                 ((NRF_SPU_Type*)                      NRF_SECURE_SPU0_S_BASE)
#define NRF_SECURE_MPC_S                  ((NRF_MPC_Type*)                      NRF_SECURE_MPC_S_BASE)
#define NRF_SECURE_GENERIC0_S             ((NRF_GENERIC_Type*)                  NRF_SECURE_GENERIC0_S_BASE)
#define NRF_SECURE_MVDMA_NS               ((NRF_MVDMA_Type*)                    NRF_SECURE_MVDMA_NS_BASE)
#define NRF_SECURE_MVDMA_S                ((NRF_MVDMA_Type*)                    NRF_SECURE_MVDMA_S_BASE)
#define NRF_SECURE_RAMC00_NS              ((NRF_RAMC_Type*)                     NRF_SECURE_RAMC00_NS_BASE)
#define NRF_SECURE_RAMC00_S               ((NRF_RAMC_Type*)                     NRF_SECURE_RAMC00_S_BASE)
#define NRF_SECURE_ROMC00_NS              ((NRF_RAMC_Type*)                     NRF_SECURE_ROMC00_NS_BASE)
#define NRF_SECURE_ROMC00_S               ((NRF_RAMC_Type*)                     NRF_SECURE_ROMC00_S_BASE)
#define NRF_SECURE_GENERIC1_NS            ((NRF_GENERIC_Type*)                  NRF_SECURE_GENERIC1_NS_BASE)
#define NRF_SECURE_GENERIC1_S             ((NRF_GENERIC_Type*)                  NRF_SECURE_GENERIC1_S_BASE)
#define NRF_SECURE_GENERIC2_S             ((NRF_GENERIC_Type*)                  NRF_SECURE_GENERIC2_S_BASE)
#define NRF_SECURE_GENERIC3_S             ((NRF_GENERIC_Type*)                  NRF_SECURE_GENERIC3_S_BASE)
#define NRF_SECURE_ABB_S                  ((NRF_ABB_Type*)                      NRF_SECURE_ABB_S_BASE)
#define NRF_SECURE_HSFLL_S                ((NRF_HSFLL_Type*)                    NRF_SECURE_HSFLL_S_BASE)
#define NRF_SECURE_LRC0_S                 ((NRF_LRC_Type*)                      NRF_SECURE_LRC0_S_BASE)
#define NRF_SECURE_GENERIC6_S             ((NRF_GENERIC_Type*)                  NRF_SECURE_GENERIC6_S_BASE)
#define NRF_SECURE_SPU1_S                 ((NRF_SPU_Type*)                      NRF_SECURE_SPU1_S_BASE)
#define NRF_SECURE_CPUCONF_NS             ((NRF_CPUCONF_Type*)                  NRF_SECURE_CPUCONF_NS_BASE)
#define NRF_SECURE_CPUCONF_S              ((NRF_CPUCONF_Type*)                  NRF_SECURE_CPUCONF_S_BASE)
#define NRF_SECURE_MEMCONF_NS             ((NRF_MEMCONF_Type*)                  NRF_SECURE_MEMCONF_NS_BASE)
#define NRF_SECURE_MEMCONF_S              ((NRF_MEMCONF_Type*)                  NRF_SECURE_MEMCONF_S_BASE)
#define NRF_SECURE_WDT0_NS                ((NRF_WDT_Type*)                      NRF_SECURE_WDT0_NS_BASE)
#define NRF_SECURE_WDT0_S                 ((NRF_WDT_Type*)                      NRF_SECURE_WDT0_S_BASE)
#define NRF_SECURE_WDT1_NS                ((NRF_WDT_Type*)                      NRF_SECURE_WDT1_NS_BASE)
#define NRF_SECURE_WDT1_S                 ((NRF_WDT_Type*)                      NRF_SECURE_WDT1_S_BASE)
#define NRF_SECURE_TAMPC_S                ((NRF_TAMPC_Type*)                    NRF_SECURE_TAMPC_S_BASE)
#define NRF_SECURE_MUTEX_NS               ((NRF_MUTEX_Type*)                    NRF_SECURE_MUTEX_NS_BASE)
#define NRF_SECURE_MUTEX_S                ((NRF_MUTEX_Type*)                    NRF_SECURE_MUTEX_S_BASE)
#define NRF_SECURE_GENERIC7_S             ((NRF_GENERIC_Type*)                  NRF_SECURE_GENERIC7_S_BASE)
#define NRF_SECURE_GENERIC8_S             ((NRF_GENERIC_Type*)                  NRF_SECURE_GENERIC8_S_BASE)
#define NRF_SECURE_LRC1_S                 ((NRF_LRC_Type*)                      NRF_SECURE_LRC1_S_BASE)
#define NRF_SECURE_GENERIC10_S            ((NRF_GENERIC_Type*)                  NRF_SECURE_GENERIC10_S_BASE)
#define NRF_SECURE_IPCT_NS                ((NRF_IPCT_Type*)                     NRF_SECURE_IPCT_NS_BASE)
#define NRF_SECURE_IPCT_S                 ((NRF_IPCT_Type*)                     NRF_SECURE_IPCT_S_BASE)
#define NRF_SECURE_BELLBOARD_NS           ((NRF_BELLBOARD_Type*)                NRF_SECURE_BELLBOARD_NS_BASE)
#define NRF_SECURE_BELLBOARD_S            ((NRF_BELLBOARD_Type*)                NRF_SECURE_BELLBOARD_S_BASE)
#define NRF_SECURE_GSPU0_S                ((NRF_SPU_Type*)                      NRF_SECURE_GSPU0_S_BASE)
#define NRF_SECURE_GMPC0_S                ((NRF_MPC_Type*)                      NRF_SECURE_GMPC0_S_BASE)
#define NRF_SECURE_GSPU1_S                ((NRF_SPU_Type*)                      NRF_SECURE_GSPU1_S_BASE)
#define NRF_SECURE_GMPC1_S                ((NRF_MPC_Type*)                      NRF_SECURE_GMPC1_S_BASE)
#define NRF_SECURE_GSPU2_S                ((NRF_SPU_Type*)                      NRF_SECURE_GSPU2_S_BASE)
#define NRF_SECURE_GMPC2_S                ((NRF_MPC_Type*)                      NRF_SECURE_GMPC2_S_BASE)
#define NRF_SECURE_GSPU3_S                ((NRF_SPU_Type*)                      NRF_SECURE_GSPU3_S_BASE)
#define NRF_SECURE_GSPU4_S                ((NRF_SPU_Type*)                      NRF_SECURE_GSPU4_S_BASE)
#define NRF_SECURE_GSPU5_S                ((NRF_SPU_Type*)                      NRF_SECURE_GSPU5_S_BASE)
#define NRF_SECURE_GMPC3_S                ((NRF_MPC_Type*)                      NRF_SECURE_GMPC3_S_BASE)
#define NRF_SECURE_GSPU6_S                ((NRF_SPU_Type*)                      NRF_SECURE_GSPU6_S_BASE)
#define NRF_SECURE_IPCMAP_S               ((NRF_IPCMAP_Type*)                   NRF_SECURE_IPCMAP_S_BASE)
#define NRF_SECURE_IRQMAP_S               ((NRF_IRQMAP_Type*)                   NRF_SECURE_IRQMAP_S_BASE)
#define NRF_SECURE_GSPU7_S                ((NRF_SPU_Type*)                      NRF_SECURE_GSPU7_S_BASE)
#define NRF_SECURE_GSPU8_S                ((NRF_SPU_Type*)                      NRF_SECURE_GSPU8_S_BASE)
#define NRF_SECURE_GSPU9_S                ((NRF_SPU_Type*)                      NRF_SECURE_GSPU9_S_BASE)
#define NRF_SECURE_GSPU10_S               ((NRF_SPU_Type*)                      NRF_SECURE_GSPU10_S_BASE)
#define NRF_SECURE_GSPU11_S               ((NRF_SPU_Type*)                      NRF_SECURE_GSPU11_S_BASE)
#define NRF_SECURE_GSPU12_S               ((NRF_SPU_Type*)                      NRF_SECURE_GSPU12_S_BASE)
#define NRF_SECURE_GSPU13_S               ((NRF_SPU_Type*)                      NRF_SECURE_GSPU13_S_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_NONSECURE                                 /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
  #define NRF_SECURE_ETM                          NRF_SECURE_ETM_NS
  #define NRF_SECURE_CTI                          NRF_SECURE_CTI_NS
  #define NRF_SECURE_MVDMA                        NRF_SECURE_MVDMA_NS
  #define NRF_SECURE_RAMC00                       NRF_SECURE_RAMC00_NS
  #define NRF_SECURE_ROMC00                       NRF_SECURE_ROMC00_NS
  #define NRF_SECURE_GENERIC1                     NRF_SECURE_GENERIC1_NS
  #define NRF_SECURE_CPUCONF                      NRF_SECURE_CPUCONF_NS
  #define NRF_SECURE_MEMCONF                      NRF_SECURE_MEMCONF_NS
  #define NRF_SECURE_WDT0                         NRF_SECURE_WDT0_NS
  #define NRF_SECURE_WDT1                         NRF_SECURE_WDT1_NS
  #define NRF_SECURE_MUTEX                        NRF_SECURE_MUTEX_NS
  #define NRF_SECURE_IPCT                         NRF_SECURE_IPCT_NS
  #define NRF_SECURE_BELLBOARD                    NRF_SECURE_BELLBOARD_NS
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_SECURE_ETM                          NRF_SECURE_ETM_NS
  #define NRF_SECURE_CTI                          NRF_SECURE_CTI_NS
  #define NRF_SECURE_GSPU14                       NRF_SECURE_GSPU14_S
  #define NRF_SECURE_CTRLAP                       NRF_SECURE_CTRLAP_S
  #define NRF_SECURE_GGENERIC0                    NRF_SECURE_GGENERIC0_S
  #define NRF_SECURE_GHSFLL2                      NRF_SECURE_GHSFLL2_S
  #define NRF_SECURE_GLRC2                        NRF_SECURE_GLRC2_S
  #define NRF_SECURE_GGENERIC61                   NRF_SECURE_GGENERIC61_S
  #define NRF_SECURE_GMPC4                        NRF_SECURE_GMPC4_S
  #define NRF_SECURE_GMEMCONF2                    NRF_SECURE_GMEMCONF2_S
  #define NRF_SECURE_GENERIC11                    NRF_SECURE_GENERIC11_S
  #define NRF_SECURE_CPUC                         NRF_SECURE_CPUC_S
  #define NRF_SECURE_CACHE0                       NRF_SECURE_CACHE0_S
  #define NRF_SECURE_CACHE1                       NRF_SECURE_CACHE1_S
  #define NRF_SECURE_CACHE0DATA                   NRF_SECURE_CACHE0DATA_S
  #define NRF_SECURE_CACHE1DATA                   NRF_SECURE_CACHE1DATA_S
  #define NRF_SECURE_CACHE0INFO                   NRF_SECURE_CACHE0INFO_S
  #define NRF_SECURE_CACHE1INFO                   NRF_SECURE_CACHE1INFO_S
  #define NRF_SECURE_SPU0                         NRF_SECURE_SPU0_S
  #define NRF_SECURE_MPC                          NRF_SECURE_MPC_S
  #define NRF_SECURE_GENERIC0                     NRF_SECURE_GENERIC0_S
  #define NRF_SECURE_MVDMA                        NRF_SECURE_MVDMA_S
  #define NRF_SECURE_RAMC00                       NRF_SECURE_RAMC00_S
  #define NRF_SECURE_ROMC00                       NRF_SECURE_ROMC00_S
  #define NRF_SECURE_GENERIC1                     NRF_SECURE_GENERIC1_S
  #define NRF_SECURE_GENERIC2                     NRF_SECURE_GENERIC2_S
  #define NRF_SECURE_GENERIC3                     NRF_SECURE_GENERIC3_S
  #define NRF_SECURE_ABB                          NRF_SECURE_ABB_S
  #define NRF_SECURE_HSFLL                        NRF_SECURE_HSFLL_S
  #define NRF_SECURE_LRC0                         NRF_SECURE_LRC0_S
  #define NRF_SECURE_GENERIC6                     NRF_SECURE_GENERIC6_S
  #define NRF_SECURE_SPU1                         NRF_SECURE_SPU1_S
  #define NRF_SECURE_CPUCONF                      NRF_SECURE_CPUCONF_S
  #define NRF_SECURE_MEMCONF                      NRF_SECURE_MEMCONF_S
  #define NRF_SECURE_WDT0                         NRF_SECURE_WDT0_S
  #define NRF_SECURE_WDT1                         NRF_SECURE_WDT1_S
  #define NRF_SECURE_TAMPC                        NRF_SECURE_TAMPC_S
  #define NRF_SECURE_MUTEX                        NRF_SECURE_MUTEX_S
  #define NRF_SECURE_GENERIC7                     NRF_SECURE_GENERIC7_S
  #define NRF_SECURE_GENERIC8                     NRF_SECURE_GENERIC8_S
  #define NRF_SECURE_LRC1                         NRF_SECURE_LRC1_S
  #define NRF_SECURE_GENERIC10                    NRF_SECURE_GENERIC10_S
  #define NRF_SECURE_IPCT                         NRF_SECURE_IPCT_S
  #define NRF_SECURE_BELLBOARD                    NRF_SECURE_BELLBOARD_S
  #define NRF_SECURE_GSPU0                        NRF_SECURE_GSPU0_S
  #define NRF_SECURE_GMPC0                        NRF_SECURE_GMPC0_S
  #define NRF_SECURE_GSPU1                        NRF_SECURE_GSPU1_S
  #define NRF_SECURE_GMPC1                        NRF_SECURE_GMPC1_S
  #define NRF_SECURE_GSPU2                        NRF_SECURE_GSPU2_S
  #define NRF_SECURE_GMPC2                        NRF_SECURE_GMPC2_S
  #define NRF_SECURE_GSPU3                        NRF_SECURE_GSPU3_S
  #define NRF_SECURE_GSPU4                        NRF_SECURE_GSPU4_S
  #define NRF_SECURE_GSPU5                        NRF_SECURE_GSPU5_S
  #define NRF_SECURE_GMPC3                        NRF_SECURE_GMPC3_S
  #define NRF_SECURE_GSPU6                        NRF_SECURE_GSPU6_S
  #define NRF_SECURE_IPCMAP                       NRF_SECURE_IPCMAP_S
  #define NRF_SECURE_IRQMAP                       NRF_SECURE_IRQMAP_S
  #define NRF_SECURE_GSPU7                        NRF_SECURE_GSPU7_S
  #define NRF_SECURE_GSPU8                        NRF_SECURE_GSPU8_S
  #define NRF_SECURE_GSPU9                        NRF_SECURE_GSPU9_S
  #define NRF_SECURE_GSPU10                       NRF_SECURE_GSPU10_S
  #define NRF_SECURE_GSPU11                       NRF_SECURE_GSPU11_S
  #define NRF_SECURE_GSPU12                       NRF_SECURE_GSPU12_S
  #define NRF_SECURE_GSPU13                       NRF_SECURE_GSPU13_S
#endif                                               /*!<  NRF_NONSECURE                                                       */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_SECURE                                    /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_ETM                                 NRF_SECURE_ETM
  #define NRF_CTI                                 NRF_SECURE_CTI
  #define NRF_GSPU14                              NRF_SECURE_GSPU14
  #define NRF_CTRLAP                              NRF_SECURE_CTRLAP
  #define NRF_GGENERIC0                           NRF_SECURE_GGENERIC0
  #define NRF_GHSFLL2                             NRF_SECURE_GHSFLL2
  #define NRF_GLRC2                               NRF_SECURE_GLRC2
  #define NRF_GGENERIC61                          NRF_SECURE_GGENERIC61
  #define NRF_GMPC4                               NRF_SECURE_GMPC4
  #define NRF_GMEMCONF2                           NRF_SECURE_GMEMCONF2
  #define NRF_GENERIC11                           NRF_SECURE_GENERIC11
  #define NRF_CPUC                                NRF_SECURE_CPUC
  #define NRF_CACHE0                              NRF_SECURE_CACHE0
  #define NRF_CACHE1                              NRF_SECURE_CACHE1
  #define NRF_CACHE0DATA                          NRF_SECURE_CACHE0DATA
  #define NRF_CACHE1DATA                          NRF_SECURE_CACHE1DATA
  #define NRF_CACHE0INFO                          NRF_SECURE_CACHE0INFO
  #define NRF_CACHE1INFO                          NRF_SECURE_CACHE1INFO
  #define NRF_SPU0                                NRF_SECURE_SPU0
  #define NRF_MPC                                 NRF_SECURE_MPC
  #define NRF_GENERIC0                            NRF_SECURE_GENERIC0
  #define NRF_MVDMA                               NRF_SECURE_MVDMA
  #define NRF_RAMC00                              NRF_SECURE_RAMC00
  #define NRF_ROMC00                              NRF_SECURE_ROMC00
  #define NRF_GENERIC1                            NRF_SECURE_GENERIC1
  #define NRF_GENERIC2                            NRF_SECURE_GENERIC2
  #define NRF_GENERIC3                            NRF_SECURE_GENERIC3
  #define NRF_ABB                                 NRF_SECURE_ABB
  #define NRF_HSFLL                               NRF_SECURE_HSFLL
  #define NRF_LRC0                                NRF_SECURE_LRC0
  #define NRF_GENERIC6                            NRF_SECURE_GENERIC6
  #define NRF_SPU1                                NRF_SECURE_SPU1
  #define NRF_CPUCONF                             NRF_SECURE_CPUCONF
  #define NRF_MEMCONF                             NRF_SECURE_MEMCONF
  #define NRF_WDT0                                NRF_SECURE_WDT0
  #define NRF_WDT1                                NRF_SECURE_WDT1
  #define NRF_TAMPC                               NRF_SECURE_TAMPC
  #define NRF_MUTEX                               NRF_SECURE_MUTEX
  #define NRF_GENERIC7                            NRF_SECURE_GENERIC7
  #define NRF_GENERIC8                            NRF_SECURE_GENERIC8
  #define NRF_LRC1                                NRF_SECURE_LRC1
  #define NRF_GENERIC10                           NRF_SECURE_GENERIC10
  #define NRF_IPCT                                NRF_SECURE_IPCT
  #define NRF_BELLBOARD                           NRF_SECURE_BELLBOARD
  #define NRF_GSPU0                               NRF_SECURE_GSPU0
  #define NRF_GMPC0                               NRF_SECURE_GMPC0
  #define NRF_GSPU1                               NRF_SECURE_GSPU1
  #define NRF_GMPC1                               NRF_SECURE_GMPC1
  #define NRF_GSPU2                               NRF_SECURE_GSPU2
  #define NRF_GMPC2                               NRF_SECURE_GMPC2
  #define NRF_GSPU3                               NRF_SECURE_GSPU3
  #define NRF_GSPU4                               NRF_SECURE_GSPU4
  #define NRF_GSPU5                               NRF_SECURE_GSPU5
  #define NRF_GMPC3                               NRF_SECURE_GMPC3
  #define NRF_GSPU6                               NRF_SECURE_GSPU6
  #define NRF_IPCMAP                              NRF_SECURE_IPCMAP
  #define NRF_IRQMAP                              NRF_SECURE_IRQMAP
  #define NRF_GSPU7                               NRF_SECURE_GSPU7
  #define NRF_GSPU8                               NRF_SECURE_GSPU8
  #define NRF_GSPU9                               NRF_SECURE_GSPU9
  #define NRF_GSPU10                              NRF_SECURE_GSPU10
  #define NRF_GSPU11                              NRF_SECURE_GSPU11
  #define NRF_GSPU12                              NRF_SECURE_GSPU12
  #define NRF_GSPU13                              NRF_SECURE_GSPU13
#endif                                               /*!< NRF_SECURE                                                           */

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
#endif


#ifdef __cplusplus
}
#endif
#endif /* HALTIUM_SECURE_H */

