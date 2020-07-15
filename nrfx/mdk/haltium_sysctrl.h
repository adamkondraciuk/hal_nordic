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

#ifndef HALTIUM_SYSCTRL_H
#define HALTIUM_SYSCTRL_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_SYSCTRL                                   /*!< Processor information is domain local.                               */


/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* ===================================================== Core Interrupts ===================================================== */
  UserSoftware_IRQn                      = -16,      /*!< -16 User Software Interrupt                                          */
  SuperVisorSoftware_IRQn                = -15,      /*!< -15 Supervisor Software interrupt                                    */
  MachineSoftware_IRQn                   = -14,      /*!< -14 Machine Software Interrupt                                       */
  UserTimer_IRQn                         = -12,      /*!< -12 User Timer Interrupt                                             */
  SuperVisorTimer_IRQn                   = -11,      /*!< -11 Supervisor Timer interrupt                                       */
  MachineTimer_IRQn                      = -9,       /*!<  -9 Machine Timer Interrupt                                          */
  UserExternal_IRQn                      = -8,       /*!<  -8 User External (PLIC) Interrupt                                   */
  SuperVisorExternal_IRQn                = -7,       /*!<  -7 Supervisor External (PLIC) interrupt                             */
  MachineExternal_IRQn                   = -5,       /*!<  -5 Machine External (PLIC) Interrupt                                */
  CLICSoftware_IRQn                      = -4,       /*!<  -4 CLIC Software Interrupt                                          */
/* ============================================== Processor Specific Interrupts ============================================== */
  GPIOTE00_IRQn                          = 104,      /*!< 104 GPIOTE00                                                         */
  GPIOTE01_IRQn                          = 105,      /*!< 105 GPIOTE01                                                         */
  GPIOTE10_IRQn                          = 106,      /*!< 106 GPIOTE10                                                         */
  GPIOTE11_IRQn                          = 107,      /*!< 107 GPIOTE11                                                         */
  L2CACHE_IRQn                           = 130,      /*!< 130 L2CACHE                                                          */
  GRAMC00_IRQn                           = 131,      /*!< 131 GRAMC00                                                          */
  GRAMC01_IRQn                           = 132,      /*!< 132 GRAMC01                                                          */
  GGENERIC2_IRQn                         = 133,      /*!< 133 GGENERIC2                                                        */
  MRAMC00_IRQn                           = 146,      /*!< 146 MRAMC00                                                          */
  MRAMC01_IRQn                           = 147,      /*!< 147 MRAMC01                                                          */
  EXMEE_IRQn                             = 148,      /*!< 148 EXMEE                                                            */
  GGENERIC3_IRQn                         = 150,      /*!< 150 GGENERIC3                                                        */
  GMVDMA_IRQn                            = 151,      /*!< 151 GMVDMA                                                           */
  GRAMC10_IRQn                           = 195,      /*!< 195 GRAMC10                                                          */
  GRAMC11_IRQn                           = 196,      /*!< 196 GRAMC11                                                          */
  OTPC00_IRQn                            = 197,      /*!< 197 OTPC00                                                           */
  GROMC00_IRQn                           = 198,      /*!< 198 GROMC00                                                          */
  VPR_IRQn                               = 203,      /*!< 203 VPR                                                              */
  GHSFLL_IRQn                            = 205,      /*!< 205 GHSFLL                                                           */
  GLRC0_IRQn                             = 206,      /*!< 206 GLRC0                                                            */
  GGENERIC6_IRQn                         = 207,      /*!< 207 GGENERIC6                                                        */
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
  GRAMC20_IRQn                           = 259,      /*!< 259 GRAMC20                                                          */
  GRAMC21_IRQn                           = 260,      /*!< 260 GRAMC21                                                          */
  GGENERIC7_IRQn                         = 270,      /*!< 270 GGENERIC7                                                        */
  GGENERIC8_IRQn                         = 271,      /*!< 271 GGENERIC8                                                        */
  GIPCT10_IRQn                           = 289,      /*!< 289 GIPCT10                                                          */
  GRTC0_IRQn                             = 296,      /*!< 296 GRTC0                                                            */
  GRTC1_IRQn                             = 297,      /*!< 297 GRTC1                                                            */
  GWDT0_IRQn                             = 298,      /*!< 298 GWDT0                                                            */
  GWDT1_IRQn                             = 299,      /*!< 299 GWDT1                                                            */
  GWDT2_IRQn                             = 300,      /*!< 300 GWDT2                                                            */
  GGENERIC9_IRQn                         = 316,      /*!< 316 GGENERIC9                                                        */
  GLRC1_IRQn                             = 318,      /*!< 318 GLRC1                                                            */
  GGENERIC12_IRQn                        = 319,      /*!< 319 GGENERIC12                                                       */
  GRTC_IRQn                              = 321,      /*!< 321 GRTC                                                             */
  GGENERIC13_IRQn                        = 322,      /*!< 322 GGENERIC13                                                       */
  RESETHUB_IRQn                          = 323,      /*!< 323 RESETHUB                                                         */
  GGENERIC14_IRQn                        = 324,      /*!< 324 GGENERIC14                                                       */
  GGENERIC15_IRQn                        = 325,      /*!< 325 GGENERIC15                                                       */
  GGENERIC16_IRQn                        = 326,      /*!< 326 GGENERIC16                                                       */
  GGENERIC17_IRQn                        = 336,      /*!< 336 GGENERIC17                                                       */
  LFRC_IRQn                              = 337,      /*!< 337 LFRC                                                             */
  GGENERIC18_IRQn                        = 338,      /*!< 338 GGENERIC18                                                       */
  GGENERIC19_IRQn                        = 339,      /*!< 339 GGENERIC19                                                       */
  GGENERIC20_IRQn                        = 341,      /*!< 341 GGENERIC20                                                       */
  GGENERIC21_IRQn                        = 342,      /*!< 342 GGENERIC21                                                       */
  GGENERIC22_IRQn                        = 343,      /*!< 343 GGENERIC22                                                       */
  GGENERIC23_IRQn                        = 352,      /*!< 352 GGENERIC23                                                       */
  GGENERIC29_IRQn                        = 359,      /*!< 359 GGENERIC29                                                       */
  GGENERIC30_IRQn                        = 360,      /*!< 360 GGENERIC30                                                       */
  VREGMRAM00_IRQn                        = 361,      /*!< 361 VREGMRAM00                                                       */
  VREGMRAM01_IRQn                        = 362,      /*!< 362 VREGMRAM01                                                       */
  GGENERIC32_IRQn                        = 363,      /*!< 363 GGENERIC32                                                       */
  MBIAS_IRQn                             = 368,      /*!< 368 MBIAS                                                            */
  VDETAO1V8_IRQn                         = 369,      /*!< 369 VDETAO1V8                                                        */
  VDETAO0V8_IRQn                         = 370,      /*!< 370 VDETAO0V8                                                        */
  VDETVS0V8_IRQn                         = 371,      /*!< 371 VDETVS0V8                                                        */
  GGENERIC36_IRQn                        = 372,      /*!< 372 GGENERIC36                                                       */
  GGENERIC37_IRQn                        = 373,      /*!< 373 GGENERIC37                                                       */
  GGENERIC38_IRQn                        = 374,      /*!< 374 GGENERIC38                                                       */
  GGENERIC39_IRQn                        = 375,      /*!< 375 GGENERIC39                                                       */
  GGENERIC40_IRQn                        = 376,      /*!< 376 GGENERIC40                                                       */
  GGENERIC41_IRQn                        = 377,      /*!< 377 GGENERIC41                                                       */
  GGENERIC42_IRQn                        = 378,      /*!< 378 GGENERIC42                                                       */
  SAADC_IRQn                             = 386,      /*!< 386 SAADC                                                            */
  COMP_LPCOMP_IRQn                       = 387,      /*!< 387 COMP_LPCOMP                                                      */
  TEMP_IRQn                              = 388,      /*!< 388 TEMP                                                             */
  NFCT_IRQn                              = 389,      /*!< 389 NFCT                                                             */
  GGENERIC43_IRQn                        = 398,      /*!< 398 GGENERIC43                                                       */
  GGENERIC44_IRQn                        = 399,      /*!< 399 GGENERIC44                                                       */
  I2S_IRQn                               = 402,      /*!< 402 I2S                                                              */
  PDM_IRQn                               = 403,      /*!< 403 PDM                                                              */
  QDEC0_IRQn                             = 404,      /*!< 404 QDEC0                                                            */
  QDEC1_IRQn                             = 405,      /*!< 405 QDEC1                                                            */
  SIMIF_IRQn                             = 406,      /*!< 406 SIMIF                                                            */
  GMIPIRFFE_IRQn                         = 407,      /*!< 407 GMIPIRFFE                                                        */
  TWIM9_IRQn                             = 408,      /*!< 408 TWIM9                                                            */
  GGENERIC45_IRQn                        = 414,      /*!< 414 GGENERIC45                                                       */
  GGENERIC46_IRQn                        = 415,      /*!< 415 GGENERIC46                                                       */
  GTIMER2_IRQn                           = 418,      /*!< 418 GTIMER2                                                          */
  GTIMER3_IRQn                           = 419,      /*!< 419 GTIMER3                                                          */
  PWM1_IRQn                              = 420,      /*!< 420 PWM1                                                             */
  SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQn    = 421,      /*!< 421 SPIM1_SPIS1_TWIM1_TWIS1_UARTE1                                   */
  SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQn    = 422,      /*!< 422 SPIM2_SPIS2_TWIM2_TWIS2_UARTE2                                   */
  GGENERIC47_IRQn                        = 430,      /*!< 430 GGENERIC47                                                       */
  GGENERIC48_IRQn                        = 431,      /*!< 431 GGENERIC48                                                       */
  GTIMER4_IRQn                           = 434,      /*!< 434 GTIMER4                                                          */
  GTIMER5_IRQn                           = 435,      /*!< 435 GTIMER5                                                          */
  PWM2_IRQn                              = 436,      /*!< 436 PWM2                                                             */
  SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQn    = 437,      /*!< 437 SPIM3_SPIS3_TWIM3_TWIS3_UARTE3                                   */
  SPIM4_SPIS4_TWIM4_TWIS4_UARTE4_IRQn    = 438,      /*!< 438 SPIM4_SPIS4_TWIM4_TWIS4_UARTE4                                   */
  GGENERIC49_IRQn                        = 446,      /*!< 446 GGENERIC49                                                       */
  GGENERIC50_IRQn                        = 447,      /*!< 447 GGENERIC50                                                       */
  GTIMER6_IRQn                           = 450,      /*!< 450 GTIMER6                                                          */
  GTIMER7_IRQn                           = 451,      /*!< 451 GTIMER7                                                          */
  PWM3_IRQn                              = 452,      /*!< 452 PWM3                                                             */
  SPIM5_SPIS5_TWIM5_TWIS5_UARTE5_IRQn    = 453,      /*!< 453 SPIM5_SPIS5_TWIM5_TWIS5_UARTE5                                   */
  SPIM6_SPIS6_TWIM6_TWIS6_UARTE6_IRQn    = 454,      /*!< 454 SPIM6_SPIS6_TWIM6_TWIS6_UARTE6                                   */
  GGENERIC51_IRQn                        = 462,      /*!< 462 GGENERIC51                                                       */
  GGENERIC52_IRQn                        = 463,      /*!< 463 GGENERIC52                                                       */
  GTIMER8_IRQn                           = 466,      /*!< 466 GTIMER8                                                          */
  GTIMER9_IRQn                           = 467,      /*!< 467 GTIMER9                                                          */
  PWM4_IRQn                              = 468,      /*!< 468 PWM4                                                             */
  SPIM7_SPIS7_TWIM7_TWIS7_UARTE7_IRQn    = 469,      /*!< 469 SPIM7_SPIS7_TWIM7_TWIS7_UARTE7                                   */
  SPIM8_SPIS8_TWIM8_TWIS8_UARTE8_IRQn    = 470,      /*!< 470 SPIM8_SPIS8_TWIM8_TWIS8_UARTE8                                   */
  GGENERIC53_IRQn                        = 478,      /*!< 478 GGENERIC53                                                       */
  GGENERIC54_IRQn                        = 479,      /*!< 479 GGENERIC54                                                       */
} IRQn_Type;


/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* ====================== Configuration of the Nordic Semiconductor VPR Processor and Core Peripherals ======================= */
#define __VPR_REV                    0.7             /*!< VPR Core Revision                                                    */
#define __DSP_PRESENT                  0             /*!< DSP present or not                                                   */
#define __CLIC_PRIO_BITS               3             /*!< Number of Bits used for Priority Levels                              */
#define __MTVT_PRESENT                 1             /*!< CPU supports alternate Vector Table address                          */
#define __MPU_PRESENT                  1             /*!< MPU present                                                          */
#define __FPU_PRESENT                  0             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */

#include "core_vpr.h"                                /*!< Nordic Semiconductor VPR processor and core peripherals              */
#include "system_haltium_sysctrl.h"                  /*!< haltium_sysctrl System Library                                       */

#endif                                               /*!< NRF_SYSCTRL                                                          */


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

#define NRF_SYSCTRL_L2CACHEDATA_S_BASE    0x0E000000UL
#define NRF_SYSCTRL_L2CACHEINFO_S_BASE    0x0E008000UL
#define NRF_SYSCTRL_L2CACHE_S_BASE        0x5F082000UL
#define NRF_SYSCTRL_GRAMC00_S_BASE        0x5F083000UL
#define NRF_SYSCTRL_GRAMC01_S_BASE        0x5F084000UL
#define NRF_SYSCTRL_GGENERIC2_S_BASE      0x5F085000UL
#define NRF_SYSCTRL_MRAMC00_S_BASE        0x5F092000UL
#define NRF_SYSCTRL_MRAMC01_S_BASE        0x5F093000UL
#define NRF_SYSCTRL_EXMEE_S_BASE          0x5F094000UL
#define NRF_SYSCTRL_EXMIF_NS_BASE         0x4F095000UL
#define NRF_SYSCTRL_EXMIF_S_BASE          0x5F095000UL
#define NRF_SYSCTRL_GGENERIC3_S_BASE      0x5F096000UL
#define NRF_SYSCTRL_GMVDMA_S_BASE         0x5F097000UL
#define NRF_SYSCTRL_GPPIB0_S_BASE         0x5F098000UL
#define NRF_SYSCTRL_GAMBIX0_S_BASE        0x5F8C2000UL
#define NRF_SYSCTRL_GRAMC10_S_BASE        0x5F8C3000UL
#define NRF_SYSCTRL_GRAMC11_S_BASE        0x5F8C4000UL
#define NRF_SYSCTRL_OTPC00_S_BASE         0x5F8C5000UL
#define NRF_SYSCTRL_GROMC00_S_BASE        0x5F8C6000UL
#define NRF_SYSCTRL_GMEMCONF0_S_BASE      0x5F8C7000UL
#define NRF_SYSCTRL_CLIC_S_BASE           0x5F8C8000UL
#define NRF_SYSCTRL_VPR_S_BASE            0x5F8CB000UL
#define NRF_SYSCTRL_GHSFLL_S_BASE         0x5F8CD000UL
#define NRF_SYSCTRL_GLRC0_S_BASE          0x5F8CE000UL
#define NRF_SYSCTRL_GGENERIC6_S_BASE      0x5F8CF000UL
#define NRF_SYSCTRL_GPPIB1_S_BASE         0x5F8EF000UL
#define NRF_SYSCTRL_GAMBIX1_S_BASE        0x5F902000UL
#define NRF_SYSCTRL_GRAMC20_S_BASE        0x5F903000UL
#define NRF_SYSCTRL_GRAMC21_S_BASE        0x5F904000UL
#define NRF_SYSCTRL_GMEMCONF1_S_BASE      0x5F905000UL
#define NRF_SYSCTRL_GGENERIC7_S_BASE      0x5F90E000UL
#define NRF_SYSCTRL_GGENERIC8_S_BASE      0x5F90F000UL
#define NRF_SYSCTRL_GPPIB2_S_BASE         0x5F925000UL
#define NRF_SYSCTRL_GPPIB3_S_BASE         0x5F926000UL
#define NRF_SYSCTRL_GWDT0_S_BASE          0x5F92A000UL
#define NRF_SYSCTRL_GGENERIC9_S_BASE      0x5F93C000UL
#define NRF_SYSCTRL_GLRC1_S_BASE          0x5F93E000UL
#define NRF_SYSCTRL_GGENERIC12_S_BASE     0x5F93F000UL
#define NRF_SYSCTRL_GRTC_S_BASE           0x5F941000UL
#define NRF_SYSCTRL_GGENERIC13_S_BASE     0x5F942000UL
#define NRF_SYSCTRL_RESETHUB_S_BASE       0x5F943000UL
#define NRF_SYSCTRL_GGENERIC14_S_BASE     0x5F944000UL
#define NRF_SYSCTRL_GGENERIC15_S_BASE     0x5F945000UL
#define NRF_SYSCTRL_GGENERIC16_S_BASE     0x5F946000UL
#define NRF_SYSCTRL_GGENERIC17_S_BASE     0x5F950000UL
#define NRF_SYSCTRL_LFRC_S_BASE           0x5F951000UL
#define NRF_SYSCTRL_GGENERIC18_S_BASE     0x5F952000UL
#define NRF_SYSCTRL_GGENERIC19_S_BASE     0x5F953000UL
#define NRF_SYSCTRL_FLL16M_S_BASE         0x5F954000UL
#define NRF_SYSCTRL_GGENERIC20_S_BASE     0x5F955000UL
#define NRF_SYSCTRL_GGENERIC21_S_BASE     0x5F956000UL
#define NRF_SYSCTRL_GGENERIC22_S_BASE     0x5F957000UL
#define NRF_SYSCTRL_GGENERIC23_S_BASE     0x5F960000UL
#define NRF_SYSCTRL_VREGMAIN_S_BASE       0x5F961000UL
#define NRF_SYSCTRL_VREGAO1V8_S_BASE      0x5F962000UL
#define NRF_SYSCTRL_VREG1V0_S_BASE        0x5F963000UL
#define NRF_SYSCTRL_VREGAO0V8_S_BASE      0x5F964000UL
#define NRF_SYSCTRL_VREGVS0V8_S_BASE      0x5F965000UL
#define NRF_SYSCTRL_VREGSU_S_BASE         0x5F966000UL
#define NRF_SYSCTRL_GGENERIC29_S_BASE     0x5F967000UL
#define NRF_SYSCTRL_GGENERIC30_S_BASE     0x5F968000UL
#define NRF_SYSCTRL_VREGMRAM00_S_BASE     0x5F969000UL
#define NRF_SYSCTRL_VREGMRAM01_S_BASE     0x5F96A000UL
#define NRF_SYSCTRL_GGENERIC32_S_BASE     0x5F96B000UL
#define NRF_SYSCTRL_MBIAS_S_BASE          0x5F970000UL
#define NRF_SYSCTRL_VDETAO1V8_S_BASE      0x5F971000UL
#define NRF_SYSCTRL_VDETAO0V8_S_BASE      0x5F972000UL
#define NRF_SYSCTRL_VDETVS0V8_S_BASE      0x5F973000UL
#define NRF_SYSCTRL_GGENERIC36_S_BASE     0x5F974000UL
#define NRF_SYSCTRL_GGENERIC37_S_BASE     0x5F975000UL
#define NRF_SYSCTRL_GGENERIC38_S_BASE     0x5F976000UL
#define NRF_SYSCTRL_GGENERIC39_S_BASE     0x5F977000UL
#define NRF_SYSCTRL_GGENERIC40_S_BASE     0x5F978000UL
#define NRF_SYSCTRL_GGENERIC41_S_BASE     0x5F979000UL
#define NRF_SYSCTRL_GGENERIC42_S_BASE     0x5F97A000UL
#define NRF_SYSCTRL_GPPIB4_S_BASE         0x5F98D000UL
#define NRF_SYSCTRL_GGENERIC43_S_BASE     0x5F98E000UL
#define NRF_SYSCTRL_GGENERIC44_S_BASE     0x5F98F000UL
#define NRF_SYSCTRL_GPPIB5_S_BASE         0x5F99D000UL
#define NRF_SYSCTRL_GGENERIC45_S_BASE     0x5F99E000UL
#define NRF_SYSCTRL_GGENERIC46_S_BASE     0x5F99F000UL
#define NRF_SYSCTRL_GPPIB6_S_BASE         0x5F9AD000UL
#define NRF_SYSCTRL_GGENERIC47_S_BASE     0x5F9AE000UL
#define NRF_SYSCTRL_GGENERIC48_S_BASE     0x5F9AF000UL
#define NRF_SYSCTRL_GPPIB7_S_BASE         0x5F9BD000UL
#define NRF_SYSCTRL_GGENERIC49_S_BASE     0x5F9BE000UL
#define NRF_SYSCTRL_GGENERIC50_S_BASE     0x5F9BF000UL
#define NRF_SYSCTRL_GPPIB8_S_BASE         0x5F9CD000UL
#define NRF_SYSCTRL_GGENERIC51_S_BASE     0x5F9CE000UL
#define NRF_SYSCTRL_GGENERIC52_S_BASE     0x5F9CF000UL
#define NRF_SYSCTRL_GPPIB9_S_BASE         0x5F9DD000UL
#define NRF_SYSCTRL_GGENERIC53_S_BASE     0x5F9DE000UL
#define NRF_SYSCTRL_GGENERIC54_S_BASE     0x5F9DF000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_SYSCTRL_L2CACHEDATA_S         ((NRF_CACHEDATA_Type*)                NRF_SYSCTRL_L2CACHEDATA_S_BASE)
#define NRF_SYSCTRL_L2CACHEINFO_S         ((NRF_CACHEINFO_Type*)                NRF_SYSCTRL_L2CACHEINFO_S_BASE)
#define NRF_SYSCTRL_L2CACHE_S             ((NRF_CACHE_Type*)                    NRF_SYSCTRL_L2CACHE_S_BASE)
#define NRF_SYSCTRL_GRAMC00_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_GRAMC00_S_BASE)
#define NRF_SYSCTRL_GRAMC01_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_GRAMC01_S_BASE)
#define NRF_SYSCTRL_GGENERIC2_S           ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC2_S_BASE)
#define NRF_SYSCTRL_MRAMC00_S             ((NRF_MRAMC_Type*)                    NRF_SYSCTRL_MRAMC00_S_BASE)
#define NRF_SYSCTRL_MRAMC01_S             ((NRF_MRAMC_Type*)                    NRF_SYSCTRL_MRAMC01_S_BASE)
#define NRF_SYSCTRL_EXMEE_S               ((NRF_EXMEE_Type*)                    NRF_SYSCTRL_EXMEE_S_BASE)
#define NRF_SYSCTRL_EXMIF_NS              ((NRF_EXMIF_Type*)                    NRF_SYSCTRL_EXMIF_NS_BASE)
#define NRF_SYSCTRL_EXMIF_S               ((NRF_EXMIF_Type*)                    NRF_SYSCTRL_EXMIF_S_BASE)
#define NRF_SYSCTRL_GGENERIC3_S           ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC3_S_BASE)
#define NRF_SYSCTRL_GMVDMA_S              ((NRF_MVDMA_Type*)                    NRF_SYSCTRL_GMVDMA_S_BASE)
#define NRF_SYSCTRL_GPPIB0_S              ((NRF_PPIB_Type*)                     NRF_SYSCTRL_GPPIB0_S_BASE)
#define NRF_SYSCTRL_GAMBIX0_S             ((NRF_AMBIX_Type*)                    NRF_SYSCTRL_GAMBIX0_S_BASE)
#define NRF_SYSCTRL_GRAMC10_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_GRAMC10_S_BASE)
#define NRF_SYSCTRL_GRAMC11_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_GRAMC11_S_BASE)
#define NRF_SYSCTRL_OTPC00_S              ((NRF_OTPC_Type*)                     NRF_SYSCTRL_OTPC00_S_BASE)
#define NRF_SYSCTRL_GROMC00_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_GROMC00_S_BASE)
#define NRF_SYSCTRL_GMEMCONF0_S           ((NRF_MEMCONF_Type*)                  NRF_SYSCTRL_GMEMCONF0_S_BASE)
#define NRF_SYSCTRL_CLIC_S                ((NRF_CLIC_Type*)                     NRF_SYSCTRL_CLIC_S_BASE)
#define NRF_SYSCTRL_VPR_S                 ((NRF_VPR_Type*)                      NRF_SYSCTRL_VPR_S_BASE)
#define NRF_SYSCTRL_GHSFLL_S              ((NRF_HSFLL_Type*)                    NRF_SYSCTRL_GHSFLL_S_BASE)
#define NRF_SYSCTRL_GLRC0_S               ((NRF_LRC_Type*)                      NRF_SYSCTRL_GLRC0_S_BASE)
#define NRF_SYSCTRL_GGENERIC6_S           ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC6_S_BASE)
#define NRF_SYSCTRL_GPPIB1_S              ((NRF_PPIB_Type*)                     NRF_SYSCTRL_GPPIB1_S_BASE)
#define NRF_SYSCTRL_GAMBIX1_S             ((NRF_AMBIX_Type*)                    NRF_SYSCTRL_GAMBIX1_S_BASE)
#define NRF_SYSCTRL_GRAMC20_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_GRAMC20_S_BASE)
#define NRF_SYSCTRL_GRAMC21_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_GRAMC21_S_BASE)
#define NRF_SYSCTRL_GMEMCONF1_S           ((NRF_MEMCONF_Type*)                  NRF_SYSCTRL_GMEMCONF1_S_BASE)
#define NRF_SYSCTRL_GGENERIC7_S           ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC7_S_BASE)
#define NRF_SYSCTRL_GGENERIC8_S           ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC8_S_BASE)
#define NRF_SYSCTRL_GPPIB2_S              ((NRF_PPIB_Type*)                     NRF_SYSCTRL_GPPIB2_S_BASE)
#define NRF_SYSCTRL_GPPIB3_S              ((NRF_PPIB_Type*)                     NRF_SYSCTRL_GPPIB3_S_BASE)
#define NRF_SYSCTRL_GWDT0_S               ((NRF_WDT_Type*)                      NRF_SYSCTRL_GWDT0_S_BASE)
#define NRF_SYSCTRL_GGENERIC9_S           ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC9_S_BASE)
#define NRF_SYSCTRL_GLRC1_S               ((NRF_LRC_Type*)                      NRF_SYSCTRL_GLRC1_S_BASE)
#define NRF_SYSCTRL_GGENERIC12_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC12_S_BASE)
#define NRF_SYSCTRL_GRTC_S                ((NRF_GRTC_Type*)                     NRF_SYSCTRL_GRTC_S_BASE)
#define NRF_SYSCTRL_GGENERIC13_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC13_S_BASE)
#define NRF_SYSCTRL_RESETHUB_S            ((NRF_RESETHUB_Type*)                 NRF_SYSCTRL_RESETHUB_S_BASE)
#define NRF_SYSCTRL_GGENERIC14_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC14_S_BASE)
#define NRF_SYSCTRL_GGENERIC15_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC15_S_BASE)
#define NRF_SYSCTRL_GGENERIC16_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC16_S_BASE)
#define NRF_SYSCTRL_GGENERIC17_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC17_S_BASE)
#define NRF_SYSCTRL_LFRC_S                ((NRF_LFRC_Type*)                     NRF_SYSCTRL_LFRC_S_BASE)
#define NRF_SYSCTRL_GGENERIC18_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC18_S_BASE)
#define NRF_SYSCTRL_GGENERIC19_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC19_S_BASE)
#define NRF_SYSCTRL_FLL16M_S              ((NRF_FLL16M_Type*)                   NRF_SYSCTRL_FLL16M_S_BASE)
#define NRF_SYSCTRL_GGENERIC20_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC20_S_BASE)
#define NRF_SYSCTRL_GGENERIC21_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC21_S_BASE)
#define NRF_SYSCTRL_GGENERIC22_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC22_S_BASE)
#define NRF_SYSCTRL_GGENERIC23_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC23_S_BASE)
#define NRF_SYSCTRL_VREGMAIN_S            ((NRF_VREGMAIN_Type*)                 NRF_SYSCTRL_VREGMAIN_S_BASE)
#define NRF_SYSCTRL_VREGAO1V8_S           ((NRF_VREGAO1V8_Type*)                NRF_SYSCTRL_VREGAO1V8_S_BASE)
#define NRF_SYSCTRL_VREG1V0_S             ((NRF_VREG1V0_Type*)                  NRF_SYSCTRL_VREG1V0_S_BASE)
#define NRF_SYSCTRL_VREGAO0V8_S           ((NRF_VREGAO0V8_Type*)                NRF_SYSCTRL_VREGAO0V8_S_BASE)
#define NRF_SYSCTRL_VREGVS0V8_S           ((NRF_VREGVS0V8_Type*)                NRF_SYSCTRL_VREGVS0V8_S_BASE)
#define NRF_SYSCTRL_VREGSU_S              ((NRF_VREGSU_Type*)                   NRF_SYSCTRL_VREGSU_S_BASE)
#define NRF_SYSCTRL_GGENERIC29_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC29_S_BASE)
#define NRF_SYSCTRL_GGENERIC30_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC30_S_BASE)
#define NRF_SYSCTRL_VREGMRAM00_S          ((NRF_VREGMRAM_Type*)                 NRF_SYSCTRL_VREGMRAM00_S_BASE)
#define NRF_SYSCTRL_VREGMRAM01_S          ((NRF_VREGMRAM_Type*)                 NRF_SYSCTRL_VREGMRAM01_S_BASE)
#define NRF_SYSCTRL_GGENERIC32_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC32_S_BASE)
#define NRF_SYSCTRL_MBIAS_S               ((NRF_MBIAS_Type*)                    NRF_SYSCTRL_MBIAS_S_BASE)
#define NRF_SYSCTRL_VDETAO1V8_S           ((NRF_VDETAO1V8_Type*)                NRF_SYSCTRL_VDETAO1V8_S_BASE)
#define NRF_SYSCTRL_VDETAO0V8_S           ((NRF_VDETAO0V8_Type*)                NRF_SYSCTRL_VDETAO0V8_S_BASE)
#define NRF_SYSCTRL_VDETVS0V8_S           ((NRF_VDETVS0V8_Type*)                NRF_SYSCTRL_VDETVS0V8_S_BASE)
#define NRF_SYSCTRL_GGENERIC36_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC36_S_BASE)
#define NRF_SYSCTRL_GGENERIC37_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC37_S_BASE)
#define NRF_SYSCTRL_GGENERIC38_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC38_S_BASE)
#define NRF_SYSCTRL_GGENERIC39_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC39_S_BASE)
#define NRF_SYSCTRL_GGENERIC40_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC40_S_BASE)
#define NRF_SYSCTRL_GGENERIC41_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC41_S_BASE)
#define NRF_SYSCTRL_GGENERIC42_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC42_S_BASE)
#define NRF_SYSCTRL_GPPIB4_S              ((NRF_PPIB_Type*)                     NRF_SYSCTRL_GPPIB4_S_BASE)
#define NRF_SYSCTRL_GGENERIC43_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC43_S_BASE)
#define NRF_SYSCTRL_GGENERIC44_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC44_S_BASE)
#define NRF_SYSCTRL_GPPIB5_S              ((NRF_PPIB_Type*)                     NRF_SYSCTRL_GPPIB5_S_BASE)
#define NRF_SYSCTRL_GGENERIC45_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC45_S_BASE)
#define NRF_SYSCTRL_GGENERIC46_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC46_S_BASE)
#define NRF_SYSCTRL_GPPIB6_S              ((NRF_PPIB_Type*)                     NRF_SYSCTRL_GPPIB6_S_BASE)
#define NRF_SYSCTRL_GGENERIC47_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC47_S_BASE)
#define NRF_SYSCTRL_GGENERIC48_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC48_S_BASE)
#define NRF_SYSCTRL_GPPIB7_S              ((NRF_PPIB_Type*)                     NRF_SYSCTRL_GPPIB7_S_BASE)
#define NRF_SYSCTRL_GGENERIC49_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC49_S_BASE)
#define NRF_SYSCTRL_GGENERIC50_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC50_S_BASE)
#define NRF_SYSCTRL_GPPIB8_S              ((NRF_PPIB_Type*)                     NRF_SYSCTRL_GPPIB8_S_BASE)
#define NRF_SYSCTRL_GGENERIC51_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC51_S_BASE)
#define NRF_SYSCTRL_GGENERIC52_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC52_S_BASE)
#define NRF_SYSCTRL_GPPIB9_S              ((NRF_PPIB_Type*)                     NRF_SYSCTRL_GPPIB9_S_BASE)
#define NRF_SYSCTRL_GGENERIC53_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC53_S_BASE)
#define NRF_SYSCTRL_GGENERIC54_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC54_S_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_NONSECURE                                 /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
  #define NRF_SYSCTRL_EXMIF                       NRF_SYSCTRL_EXMIF_NS
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_SYSCTRL_L2CACHEDATA                 NRF_SYSCTRL_L2CACHEDATA_S
  #define NRF_SYSCTRL_L2CACHEINFO                 NRF_SYSCTRL_L2CACHEINFO_S
  #define NRF_SYSCTRL_L2CACHE                     NRF_SYSCTRL_L2CACHE_S
  #define NRF_SYSCTRL_GRAMC00                     NRF_SYSCTRL_GRAMC00_S
  #define NRF_SYSCTRL_GRAMC01                     NRF_SYSCTRL_GRAMC01_S
  #define NRF_SYSCTRL_GGENERIC2                   NRF_SYSCTRL_GGENERIC2_S
  #define NRF_SYSCTRL_MRAMC00                     NRF_SYSCTRL_MRAMC00_S
  #define NRF_SYSCTRL_MRAMC01                     NRF_SYSCTRL_MRAMC01_S
  #define NRF_SYSCTRL_EXMEE                       NRF_SYSCTRL_EXMEE_S
  #define NRF_SYSCTRL_EXMIF                       NRF_SYSCTRL_EXMIF_S
  #define NRF_SYSCTRL_GGENERIC3                   NRF_SYSCTRL_GGENERIC3_S
  #define NRF_SYSCTRL_GMVDMA                      NRF_SYSCTRL_GMVDMA_S
  #define NRF_SYSCTRL_GPPIB0                      NRF_SYSCTRL_GPPIB0_S
  #define NRF_SYSCTRL_GAMBIX0                     NRF_SYSCTRL_GAMBIX0_S
  #define NRF_SYSCTRL_GRAMC10                     NRF_SYSCTRL_GRAMC10_S
  #define NRF_SYSCTRL_GRAMC11                     NRF_SYSCTRL_GRAMC11_S
  #define NRF_SYSCTRL_OTPC00                      NRF_SYSCTRL_OTPC00_S
  #define NRF_SYSCTRL_GROMC00                     NRF_SYSCTRL_GROMC00_S
  #define NRF_SYSCTRL_GMEMCONF0                   NRF_SYSCTRL_GMEMCONF0_S
  #define NRF_SYSCTRL_CLIC                        NRF_SYSCTRL_CLIC_S
  #define NRF_SYSCTRL_VPR                         NRF_SYSCTRL_VPR_S
  #define NRF_SYSCTRL_GHSFLL                      NRF_SYSCTRL_GHSFLL_S
  #define NRF_SYSCTRL_GLRC0                       NRF_SYSCTRL_GLRC0_S
  #define NRF_SYSCTRL_GGENERIC6                   NRF_SYSCTRL_GGENERIC6_S
  #define NRF_SYSCTRL_GPPIB1                      NRF_SYSCTRL_GPPIB1_S
  #define NRF_SYSCTRL_GAMBIX1                     NRF_SYSCTRL_GAMBIX1_S
  #define NRF_SYSCTRL_GRAMC20                     NRF_SYSCTRL_GRAMC20_S
  #define NRF_SYSCTRL_GRAMC21                     NRF_SYSCTRL_GRAMC21_S
  #define NRF_SYSCTRL_GMEMCONF1                   NRF_SYSCTRL_GMEMCONF1_S
  #define NRF_SYSCTRL_GGENERIC7                   NRF_SYSCTRL_GGENERIC7_S
  #define NRF_SYSCTRL_GGENERIC8                   NRF_SYSCTRL_GGENERIC8_S
  #define NRF_SYSCTRL_GPPIB2                      NRF_SYSCTRL_GPPIB2_S
  #define NRF_SYSCTRL_GPPIB3                      NRF_SYSCTRL_GPPIB3_S
  #define NRF_SYSCTRL_GWDT0                       NRF_SYSCTRL_GWDT0_S
  #define NRF_SYSCTRL_GGENERIC9                   NRF_SYSCTRL_GGENERIC9_S
  #define NRF_SYSCTRL_GLRC1                       NRF_SYSCTRL_GLRC1_S
  #define NRF_SYSCTRL_GGENERIC12                  NRF_SYSCTRL_GGENERIC12_S
  #define NRF_SYSCTRL_GRTC                        NRF_SYSCTRL_GRTC_S
  #define NRF_SYSCTRL_GGENERIC13                  NRF_SYSCTRL_GGENERIC13_S
  #define NRF_SYSCTRL_RESETHUB                    NRF_SYSCTRL_RESETHUB_S
  #define NRF_SYSCTRL_GGENERIC14                  NRF_SYSCTRL_GGENERIC14_S
  #define NRF_SYSCTRL_GGENERIC15                  NRF_SYSCTRL_GGENERIC15_S
  #define NRF_SYSCTRL_GGENERIC16                  NRF_SYSCTRL_GGENERIC16_S
  #define NRF_SYSCTRL_GGENERIC17                  NRF_SYSCTRL_GGENERIC17_S
  #define NRF_SYSCTRL_LFRC                        NRF_SYSCTRL_LFRC_S
  #define NRF_SYSCTRL_GGENERIC18                  NRF_SYSCTRL_GGENERIC18_S
  #define NRF_SYSCTRL_GGENERIC19                  NRF_SYSCTRL_GGENERIC19_S
  #define NRF_SYSCTRL_FLL16M                      NRF_SYSCTRL_FLL16M_S
  #define NRF_SYSCTRL_GGENERIC20                  NRF_SYSCTRL_GGENERIC20_S
  #define NRF_SYSCTRL_GGENERIC21                  NRF_SYSCTRL_GGENERIC21_S
  #define NRF_SYSCTRL_GGENERIC22                  NRF_SYSCTRL_GGENERIC22_S
  #define NRF_SYSCTRL_GGENERIC23                  NRF_SYSCTRL_GGENERIC23_S
  #define NRF_SYSCTRL_VREGMAIN                    NRF_SYSCTRL_VREGMAIN_S
  #define NRF_SYSCTRL_VREGAO1V8                   NRF_SYSCTRL_VREGAO1V8_S
  #define NRF_SYSCTRL_VREG1V0                     NRF_SYSCTRL_VREG1V0_S
  #define NRF_SYSCTRL_VREGAO0V8                   NRF_SYSCTRL_VREGAO0V8_S
  #define NRF_SYSCTRL_VREGVS0V8                   NRF_SYSCTRL_VREGVS0V8_S
  #define NRF_SYSCTRL_VREGSU                      NRF_SYSCTRL_VREGSU_S
  #define NRF_SYSCTRL_GGENERIC29                  NRF_SYSCTRL_GGENERIC29_S
  #define NRF_SYSCTRL_GGENERIC30                  NRF_SYSCTRL_GGENERIC30_S
  #define NRF_SYSCTRL_VREGMRAM00                  NRF_SYSCTRL_VREGMRAM00_S
  #define NRF_SYSCTRL_VREGMRAM01                  NRF_SYSCTRL_VREGMRAM01_S
  #define NRF_SYSCTRL_GGENERIC32                  NRF_SYSCTRL_GGENERIC32_S
  #define NRF_SYSCTRL_MBIAS                       NRF_SYSCTRL_MBIAS_S
  #define NRF_SYSCTRL_VDETAO1V8                   NRF_SYSCTRL_VDETAO1V8_S
  #define NRF_SYSCTRL_VDETAO0V8                   NRF_SYSCTRL_VDETAO0V8_S
  #define NRF_SYSCTRL_VDETVS0V8                   NRF_SYSCTRL_VDETVS0V8_S
  #define NRF_SYSCTRL_GGENERIC36                  NRF_SYSCTRL_GGENERIC36_S
  #define NRF_SYSCTRL_GGENERIC37                  NRF_SYSCTRL_GGENERIC37_S
  #define NRF_SYSCTRL_GGENERIC38                  NRF_SYSCTRL_GGENERIC38_S
  #define NRF_SYSCTRL_GGENERIC39                  NRF_SYSCTRL_GGENERIC39_S
  #define NRF_SYSCTRL_GGENERIC40                  NRF_SYSCTRL_GGENERIC40_S
  #define NRF_SYSCTRL_GGENERIC41                  NRF_SYSCTRL_GGENERIC41_S
  #define NRF_SYSCTRL_GGENERIC42                  NRF_SYSCTRL_GGENERIC42_S
  #define NRF_SYSCTRL_GPPIB4                      NRF_SYSCTRL_GPPIB4_S
  #define NRF_SYSCTRL_GGENERIC43                  NRF_SYSCTRL_GGENERIC43_S
  #define NRF_SYSCTRL_GGENERIC44                  NRF_SYSCTRL_GGENERIC44_S
  #define NRF_SYSCTRL_GPPIB5                      NRF_SYSCTRL_GPPIB5_S
  #define NRF_SYSCTRL_GGENERIC45                  NRF_SYSCTRL_GGENERIC45_S
  #define NRF_SYSCTRL_GGENERIC46                  NRF_SYSCTRL_GGENERIC46_S
  #define NRF_SYSCTRL_GPPIB6                      NRF_SYSCTRL_GPPIB6_S
  #define NRF_SYSCTRL_GGENERIC47                  NRF_SYSCTRL_GGENERIC47_S
  #define NRF_SYSCTRL_GGENERIC48                  NRF_SYSCTRL_GGENERIC48_S
  #define NRF_SYSCTRL_GPPIB7                      NRF_SYSCTRL_GPPIB7_S
  #define NRF_SYSCTRL_GGENERIC49                  NRF_SYSCTRL_GGENERIC49_S
  #define NRF_SYSCTRL_GGENERIC50                  NRF_SYSCTRL_GGENERIC50_S
  #define NRF_SYSCTRL_GPPIB8                      NRF_SYSCTRL_GPPIB8_S
  #define NRF_SYSCTRL_GGENERIC51                  NRF_SYSCTRL_GGENERIC51_S
  #define NRF_SYSCTRL_GGENERIC52                  NRF_SYSCTRL_GGENERIC52_S
  #define NRF_SYSCTRL_GPPIB9                      NRF_SYSCTRL_GPPIB9_S
  #define NRF_SYSCTRL_GGENERIC53                  NRF_SYSCTRL_GGENERIC53_S
  #define NRF_SYSCTRL_GGENERIC54                  NRF_SYSCTRL_GGENERIC54_S
#endif                                               /*!<  NRF_NONSECURE                                                       */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_SYSCTRL                                   /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_L2CACHEDATA                         NRF_SYSCTRL_L2CACHEDATA
  #define NRF_L2CACHEINFO                         NRF_SYSCTRL_L2CACHEINFO
  #define NRF_L2CACHE                             NRF_SYSCTRL_L2CACHE
  #define NRF_GRAMC00                             NRF_SYSCTRL_GRAMC00
  #define NRF_GRAMC01                             NRF_SYSCTRL_GRAMC01
  #define NRF_GGENERIC2                           NRF_SYSCTRL_GGENERIC2
  #define NRF_MRAMC00                             NRF_SYSCTRL_MRAMC00
  #define NRF_MRAMC01                             NRF_SYSCTRL_MRAMC01
  #define NRF_EXMEE                               NRF_SYSCTRL_EXMEE
  #define NRF_EXMIF                               NRF_SYSCTRL_EXMIF
  #define NRF_GGENERIC3                           NRF_SYSCTRL_GGENERIC3
  #define NRF_GMVDMA                              NRF_SYSCTRL_GMVDMA
  #define NRF_GPPIB0                              NRF_SYSCTRL_GPPIB0
  #define NRF_GAMBIX0                             NRF_SYSCTRL_GAMBIX0
  #define NRF_GRAMC10                             NRF_SYSCTRL_GRAMC10
  #define NRF_GRAMC11                             NRF_SYSCTRL_GRAMC11
  #define NRF_OTPC00                              NRF_SYSCTRL_OTPC00
  #define NRF_GROMC00                             NRF_SYSCTRL_GROMC00
  #define NRF_GMEMCONF0                           NRF_SYSCTRL_GMEMCONF0
  #define NRF_CLIC                                NRF_SYSCTRL_CLIC
  #define NRF_VPR                                 NRF_SYSCTRL_VPR
  #define NRF_GHSFLL                              NRF_SYSCTRL_GHSFLL
  #define NRF_GLRC0                               NRF_SYSCTRL_GLRC0
  #define NRF_GGENERIC6                           NRF_SYSCTRL_GGENERIC6
  #define NRF_GPPIB1                              NRF_SYSCTRL_GPPIB1
  #define NRF_GAMBIX1                             NRF_SYSCTRL_GAMBIX1
  #define NRF_GRAMC20                             NRF_SYSCTRL_GRAMC20
  #define NRF_GRAMC21                             NRF_SYSCTRL_GRAMC21
  #define NRF_GMEMCONF1                           NRF_SYSCTRL_GMEMCONF1
  #define NRF_GGENERIC7                           NRF_SYSCTRL_GGENERIC7
  #define NRF_GGENERIC8                           NRF_SYSCTRL_GGENERIC8
  #define NRF_GPPIB2                              NRF_SYSCTRL_GPPIB2
  #define NRF_GPPIB3                              NRF_SYSCTRL_GPPIB3
  #define NRF_GWDT0                               NRF_SYSCTRL_GWDT0
  #define NRF_GGENERIC9                           NRF_SYSCTRL_GGENERIC9
  #define NRF_GLRC1                               NRF_SYSCTRL_GLRC1
  #define NRF_GGENERIC12                          NRF_SYSCTRL_GGENERIC12
  #define NRF_GRTC                                NRF_SYSCTRL_GRTC
  #define NRF_GGENERIC13                          NRF_SYSCTRL_GGENERIC13
  #define NRF_RESETHUB                            NRF_SYSCTRL_RESETHUB
  #define NRF_GGENERIC14                          NRF_SYSCTRL_GGENERIC14
  #define NRF_GGENERIC15                          NRF_SYSCTRL_GGENERIC15
  #define NRF_GGENERIC16                          NRF_SYSCTRL_GGENERIC16
  #define NRF_GGENERIC17                          NRF_SYSCTRL_GGENERIC17
  #define NRF_LFRC                                NRF_SYSCTRL_LFRC
  #define NRF_GGENERIC18                          NRF_SYSCTRL_GGENERIC18
  #define NRF_GGENERIC19                          NRF_SYSCTRL_GGENERIC19
  #define NRF_FLL16M                              NRF_SYSCTRL_FLL16M
  #define NRF_GGENERIC20                          NRF_SYSCTRL_GGENERIC20
  #define NRF_GGENERIC21                          NRF_SYSCTRL_GGENERIC21
  #define NRF_GGENERIC22                          NRF_SYSCTRL_GGENERIC22
  #define NRF_GGENERIC23                          NRF_SYSCTRL_GGENERIC23
  #define NRF_VREGMAIN                            NRF_SYSCTRL_VREGMAIN
  #define NRF_VREGAO1V8                           NRF_SYSCTRL_VREGAO1V8
  #define NRF_VREG1V0                             NRF_SYSCTRL_VREG1V0
  #define NRF_VREGAO0V8                           NRF_SYSCTRL_VREGAO0V8
  #define NRF_VREGVS0V8                           NRF_SYSCTRL_VREGVS0V8
  #define NRF_VREGSU                              NRF_SYSCTRL_VREGSU
  #define NRF_GGENERIC29                          NRF_SYSCTRL_GGENERIC29
  #define NRF_GGENERIC30                          NRF_SYSCTRL_GGENERIC30
  #define NRF_VREGMRAM00                          NRF_SYSCTRL_VREGMRAM00
  #define NRF_VREGMRAM01                          NRF_SYSCTRL_VREGMRAM01
  #define NRF_GGENERIC32                          NRF_SYSCTRL_GGENERIC32
  #define NRF_MBIAS                               NRF_SYSCTRL_MBIAS
  #define NRF_VDETAO1V8                           NRF_SYSCTRL_VDETAO1V8
  #define NRF_VDETAO0V8                           NRF_SYSCTRL_VDETAO0V8
  #define NRF_VDETVS0V8                           NRF_SYSCTRL_VDETVS0V8
  #define NRF_GGENERIC36                          NRF_SYSCTRL_GGENERIC36
  #define NRF_GGENERIC37                          NRF_SYSCTRL_GGENERIC37
  #define NRF_GGENERIC38                          NRF_SYSCTRL_GGENERIC38
  #define NRF_GGENERIC39                          NRF_SYSCTRL_GGENERIC39
  #define NRF_GGENERIC40                          NRF_SYSCTRL_GGENERIC40
  #define NRF_GGENERIC41                          NRF_SYSCTRL_GGENERIC41
  #define NRF_GGENERIC42                          NRF_SYSCTRL_GGENERIC42
  #define NRF_GPPIB4                              NRF_SYSCTRL_GPPIB4
  #define NRF_GGENERIC43                          NRF_SYSCTRL_GGENERIC43
  #define NRF_GGENERIC44                          NRF_SYSCTRL_GGENERIC44
  #define NRF_GPPIB5                              NRF_SYSCTRL_GPPIB5
  #define NRF_GGENERIC45                          NRF_SYSCTRL_GGENERIC45
  #define NRF_GGENERIC46                          NRF_SYSCTRL_GGENERIC46
  #define NRF_GPPIB6                              NRF_SYSCTRL_GPPIB6
  #define NRF_GGENERIC47                          NRF_SYSCTRL_GGENERIC47
  #define NRF_GGENERIC48                          NRF_SYSCTRL_GGENERIC48
  #define NRF_GPPIB7                              NRF_SYSCTRL_GPPIB7
  #define NRF_GGENERIC49                          NRF_SYSCTRL_GGENERIC49
  #define NRF_GGENERIC50                          NRF_SYSCTRL_GGENERIC50
  #define NRF_GPPIB8                              NRF_SYSCTRL_GPPIB8
  #define NRF_GGENERIC51                          NRF_SYSCTRL_GGENERIC51
  #define NRF_GGENERIC52                          NRF_SYSCTRL_GGENERIC52
  #define NRF_GPPIB9                              NRF_SYSCTRL_GPPIB9
  #define NRF_GGENERIC53                          NRF_SYSCTRL_GGENERIC53
  #define NRF_GGENERIC54                          NRF_SYSCTRL_GGENERIC54
#endif                                               /*!< NRF_SYSCTRL                                                          */

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
#endif /* HALTIUM_SYSCTRL_H */

