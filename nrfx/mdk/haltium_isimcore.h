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

#ifndef HALTIUM_ISIMCORE_H
#define HALTIUM_ISIMCORE_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_ISIMCORE                                  /*!< Processor information is domain local.                               */


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
  GENERIC0_IRQn                          = 2,        /*!< 2 GENERIC0                                                           */
  LRC0_IRQn                              = 3,        /*!< 3 LRC0                                                               */
  GENERIC2_IRQn                          = 4,        /*!< 4 GENERIC2                                                           */
  SPU1_IRQn                              = 16,       /*!< 16 SPU1                                                              */
  MPC_IRQn                               = 17,       /*!< 17 MPC                                                               */
  HSFLL_IRQn                             = 18,       /*!< 18 HSFLL                                                             */
  LRC1_IRQn                              = 19,       /*!< 19 LRC1                                                              */
  GENERIC4_IRQn                          = 20,       /*!< 20 GENERIC4                                                          */
  GENERIC5_IRQn                          = 21,       /*!< 21 GENERIC5                                                          */
  SPU2_IRQn                              = 32,       /*!< 32 SPU2                                                              */
  GENERIC6_IRQn                          = 33,       /*!< 33 GENERIC6                                                          */
  GENERIC7_IRQn                          = 34,       /*!< 34 GENERIC7                                                          */
  GENERIC8_IRQn                          = 35,       /*!< 35 GENERIC8                                                          */
  GENERIC9_IRQn                          = 36,       /*!< 36 GENERIC9                                                          */
  GPIOTE00_IRQn                          = 104,      /*!< 104 GPIOTE00                                                         */
  GPIOTE01_IRQn                          = 105,      /*!< 105 GPIOTE01                                                         */
  GPIOTE10_IRQn                          = 106,      /*!< 106 GPIOTE10                                                         */
  GPIOTE11_IRQn                          = 107,      /*!< 107 GPIOTE11                                                         */
  GIPCT00_IRQn                           = 209,      /*!< 209 GIPCT00                                                          */
  GGENERIC55_IRQn                        = 211,      /*!< 211 GGENERIC55                                                       */
  GGENERIC56_IRQn                        = 212,      /*!< 212 GGENERIC56                                                       */
  GGENERIC57_IRQn                        = 213,      /*!< 213 GGENERIC57                                                       */
  GGENERIC58_IRQn                        = 214,      /*!< 214 GGENERIC58                                                       */
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
#include "system_haltium_isimcore.h"                 /*!< haltium_isimcore System Library                                      */

#endif                                               /*!< NRF_ISIMCORE                                                         */


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

#define NRF_ISIMCORE_SPU0_S_BASE          0x57000000UL
#define NRF_ISIMCORE_CPUCONF_NS_BASE      0x47001000UL
#define NRF_ISIMCORE_CPUCONF_S_BASE       0x57001000UL
#define NRF_ISIMCORE_GENERIC0_NS_BASE     0x47002000UL
#define NRF_ISIMCORE_LRC0_NS_BASE         0x57003000UL
#define NRF_ISIMCORE_GENERIC2_NS_BASE     0x57004000UL
#define NRF_ISIMCORE_SPU1_S_BASE          0x57010000UL
#define NRF_ISIMCORE_MPC_S_BASE           0x57011000UL
#define NRF_ISIMCORE_HSFLL_S_BASE         0x57012000UL
#define NRF_ISIMCORE_LRC1_NS_BASE         0x57013000UL
#define NRF_ISIMCORE_GENERIC4_NS_BASE     0x57014000UL
#define NRF_ISIMCORE_GENERIC5_NS_BASE     0x57015000UL
#define NRF_ISIMCORE_SPU2_S_BASE          0x57020000UL
#define NRF_ISIMCORE_GENERIC6_NS_BASE     0x47021000UL
#define NRF_ISIMCORE_GENERIC7_NS_BASE     0x47022000UL
#define NRF_ISIMCORE_GENERIC8_NS_BASE     0x47023000UL
#define NRF_ISIMCORE_GENERIC9_NS_BASE     0x47024000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_ISIMCORE_SPU0_S               ((NRF_SPU_Type*)                      NRF_ISIMCORE_SPU0_S_BASE)
#define NRF_ISIMCORE_CPUCONF_NS           ((NRF_CPUCONF_Type*)                  NRF_ISIMCORE_CPUCONF_NS_BASE)
#define NRF_ISIMCORE_CPUCONF_S            ((NRF_CPUCONF_Type*)                  NRF_ISIMCORE_CPUCONF_S_BASE)
#define NRF_ISIMCORE_GENERIC0_NS          ((NRF_GENERIC_Type*)                  NRF_ISIMCORE_GENERIC0_NS_BASE)
#define NRF_ISIMCORE_LRC0_NS              ((NRF_LRC_Type*)                      NRF_ISIMCORE_LRC0_NS_BASE)
#define NRF_ISIMCORE_GENERIC2_NS          ((NRF_GENERIC_Type*)                  NRF_ISIMCORE_GENERIC2_NS_BASE)
#define NRF_ISIMCORE_SPU1_S               ((NRF_SPU_Type*)                      NRF_ISIMCORE_SPU1_S_BASE)
#define NRF_ISIMCORE_MPC_S                ((NRF_MPC_Type*)                      NRF_ISIMCORE_MPC_S_BASE)
#define NRF_ISIMCORE_HSFLL_S              ((NRF_HSFLL_Type*)                    NRF_ISIMCORE_HSFLL_S_BASE)
#define NRF_ISIMCORE_LRC1_NS              ((NRF_LRC_Type*)                      NRF_ISIMCORE_LRC1_NS_BASE)
#define NRF_ISIMCORE_GENERIC4_NS          ((NRF_GENERIC_Type*)                  NRF_ISIMCORE_GENERIC4_NS_BASE)
#define NRF_ISIMCORE_GENERIC5_NS          ((NRF_GENERIC_Type*)                  NRF_ISIMCORE_GENERIC5_NS_BASE)
#define NRF_ISIMCORE_SPU2_S               ((NRF_SPU_Type*)                      NRF_ISIMCORE_SPU2_S_BASE)
#define NRF_ISIMCORE_GENERIC6_NS          ((NRF_GENERIC_Type*)                  NRF_ISIMCORE_GENERIC6_NS_BASE)
#define NRF_ISIMCORE_GENERIC7_NS          ((NRF_GENERIC_Type*)                  NRF_ISIMCORE_GENERIC7_NS_BASE)
#define NRF_ISIMCORE_GENERIC8_NS          ((NRF_GENERIC_Type*)                  NRF_ISIMCORE_GENERIC8_NS_BASE)
#define NRF_ISIMCORE_GENERIC9_NS          ((NRF_GENERIC_Type*)                  NRF_ISIMCORE_GENERIC9_NS_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_NONSECURE                                 /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
  #define NRF_ISIMCORE_CPUCONF                    NRF_ISIMCORE_CPUCONF_NS
  #define NRF_ISIMCORE_GENERIC0                   NRF_ISIMCORE_GENERIC0_NS
  #define NRF_ISIMCORE_LRC0                       NRF_ISIMCORE_LRC0_NS
  #define NRF_ISIMCORE_GENERIC2                   NRF_ISIMCORE_GENERIC2_NS
  #define NRF_ISIMCORE_LRC1                       NRF_ISIMCORE_LRC1_NS
  #define NRF_ISIMCORE_GENERIC4                   NRF_ISIMCORE_GENERIC4_NS
  #define NRF_ISIMCORE_GENERIC5                   NRF_ISIMCORE_GENERIC5_NS
  #define NRF_ISIMCORE_GENERIC6                   NRF_ISIMCORE_GENERIC6_NS
  #define NRF_ISIMCORE_GENERIC7                   NRF_ISIMCORE_GENERIC7_NS
  #define NRF_ISIMCORE_GENERIC8                   NRF_ISIMCORE_GENERIC8_NS
  #define NRF_ISIMCORE_GENERIC9                   NRF_ISIMCORE_GENERIC9_NS
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_ISIMCORE_SPU0                       NRF_ISIMCORE_SPU0_S
  #define NRF_ISIMCORE_CPUCONF                    NRF_ISIMCORE_CPUCONF_S
  #define NRF_ISIMCORE_GENERIC0                   NRF_ISIMCORE_GENERIC0_NS
  #define NRF_ISIMCORE_LRC0                       NRF_ISIMCORE_LRC0_NS
  #define NRF_ISIMCORE_GENERIC2                   NRF_ISIMCORE_GENERIC2_NS
  #define NRF_ISIMCORE_SPU1                       NRF_ISIMCORE_SPU1_S
  #define NRF_ISIMCORE_MPC                        NRF_ISIMCORE_MPC_S
  #define NRF_ISIMCORE_HSFLL                      NRF_ISIMCORE_HSFLL_S
  #define NRF_ISIMCORE_LRC1                       NRF_ISIMCORE_LRC1_NS
  #define NRF_ISIMCORE_GENERIC4                   NRF_ISIMCORE_GENERIC4_NS
  #define NRF_ISIMCORE_GENERIC5                   NRF_ISIMCORE_GENERIC5_NS
  #define NRF_ISIMCORE_SPU2                       NRF_ISIMCORE_SPU2_S
  #define NRF_ISIMCORE_GENERIC6                   NRF_ISIMCORE_GENERIC6_NS
  #define NRF_ISIMCORE_GENERIC7                   NRF_ISIMCORE_GENERIC7_NS
  #define NRF_ISIMCORE_GENERIC8                   NRF_ISIMCORE_GENERIC8_NS
  #define NRF_ISIMCORE_GENERIC9                   NRF_ISIMCORE_GENERIC9_NS
#endif                                               /*!<  NRF_NONSECURE                                                       */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_ISIMCORE                                  /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_SPU0                                NRF_ISIMCORE_SPU0
  #define NRF_CPUCONF                             NRF_ISIMCORE_CPUCONF
  #define NRF_GENERIC0                            NRF_ISIMCORE_GENERIC0
  #define NRF_LRC0                                NRF_ISIMCORE_LRC0
  #define NRF_GENERIC2                            NRF_ISIMCORE_GENERIC2
  #define NRF_SPU1                                NRF_ISIMCORE_SPU1
  #define NRF_MPC                                 NRF_ISIMCORE_MPC
  #define NRF_HSFLL                               NRF_ISIMCORE_HSFLL
  #define NRF_LRC1                                NRF_ISIMCORE_LRC1
  #define NRF_GENERIC4                            NRF_ISIMCORE_GENERIC4
  #define NRF_GENERIC5                            NRF_ISIMCORE_GENERIC5
  #define NRF_SPU2                                NRF_ISIMCORE_SPU2
  #define NRF_GENERIC6                            NRF_ISIMCORE_GENERIC6
  #define NRF_GENERIC7                            NRF_ISIMCORE_GENERIC7
  #define NRF_GENERIC8                            NRF_ISIMCORE_GENERIC8
  #define NRF_GENERIC9                            NRF_ISIMCORE_GENERIC9
#endif                                               /*!< NRF_ISIMCORE                                                         */

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
#endif /* HALTIUM_ISIMCORE_H */

