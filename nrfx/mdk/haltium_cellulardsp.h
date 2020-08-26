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

#ifndef HALTIUM_CELLULARDSP_H
#define HALTIUM_CELLULARDSP_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_CELLULARDSP                               /*!< Processor information is domain local.                               */


/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* ===================================================== Core Interrupts ===================================================== */
/* ============================================== Processor Specific Interrupts ============================================== */
  HSFLL_IRQn                             = 0,        /*!< 0 HSFLL                                                              */
  LRCCONF0_IRQn                          = 1,        /*!< 1 LRCCONF0                                                           */
  MPC_IRQn                               = 2,        /*!< 2 MPC                                                                */
  MVDMA_IRQn                             = 3,        /*!< 3 MVDMA                                                              */
  RAMC00_IRQn                            = 4,        /*!< 4 RAMC00                                                             */
  RAMC10_IRQn                            = 5,        /*!< 5 RAMC10                                                             */
  RAMC20_IRQn                            = 6,        /*!< 6 RAMC20                                                             */
  GENERIC2_IRQn                          = 7,        /*!< 7 GENERIC2                                                           */
  MWU_IRQn                               = 10,       /*!< 10 MWU                                                               */
  LTEFE0_IRQn                            = 11,       /*!< 11 LTEFE0                                                            */
  LTEFE1_IRQn                            = 12,       /*!< 12 LTEFE1                                                            */
  HARQ0_LTEFE2_IRQn                      = 13,       /*!< 13 HARQ0_LTEFE2                                                      */
  HARQ1_LTEFE3_VITERBI0_IRQn             = 14,       /*!< 14 HARQ1_LTEFE3_VITERBI0                                             */
  HARQ2_LTEFE4_VITERBI1_IRQn             = 15,       /*!< 15 HARQ2_LTEFE4_VITERBI1                                             */
  HARQ3_LRCCONF1_LTEFE5_VITERBI2_IRQn    = 16,       /*!< 16 HARQ3_LRCCONF1_LTEFE5_VITERBI2                                    */
  HARQ4_LTEFE6_VITERBI3_IRQn             = 17,       /*!< 17 HARQ4_LTEFE6_VITERBI3                                             */
  HARQ5_LTEFE7_IRQn                      = 18,       /*!< 18 HARQ5_LTEFE7                                                      */
  HARQ6_IPCT0_LTEFE8_IRQn                = 19,       /*!< 19 HARQ6_IPCT0_LTEFE8                                                */
  GENERIC4_HARQ7_IPCT1_LTEFE9_IRQn       = 20,       /*!< 20 GENERIC4_HARQ7_IPCT1_LTEFE9                                       */
  IPCT2_LTEFE10_IRQn                     = 21,       /*!< 21 IPCT2_LTEFE10                                                     */
  LTEFE11_IRQn                           = 22,       /*!< 22 LTEFE11                                                           */
  LTEFE12_IRQn                           = 23,       /*!< 23 LTEFE12                                                           */
  LTEFE13_IRQn                           = 24,       /*!< 24 LTEFE13                                                           */
  LTEFE14_IRQn                           = 25,       /*!< 25 LTEFE14                                                           */
  LTEFE15_IRQn                           = 26,       /*!< 26 LTEFE15                                                           */
  GENERIC6_IRQn                          = 32,       /*!< 32 GENERIC6                                                          */
  GENERIC9_IRQn                          = 36,       /*!< 36 GENERIC9                                                          */
  GENERIC10_IRQn                         = 37,       /*!< 37 GENERIC10                                                         */
  GENERIC11_IRQn                         = 38,       /*!< 38 GENERIC11                                                         */
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

/* ============================== Configuration of the CEVA XC5 Processor and Core Peripherals =============================== */
#define __XC5_REV                   r0p1             /*!< XC5 Core Revision                                                    */
#define __DSP_PRESENT                  1             /*!< DSP present or not                                                   */
#define __MPU_PRESENT                  1             /*!< MPU present                                                          */
#define __FPU_PRESENT                  1             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */

#include "system_haltium_cellulardsp.h"              /*!< haltium_cellulardsp System Library                                   */

#endif                                               /*!< NRF_CELLULARDSP                                                      */


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

#define NRF_CELLULARDSP_LSTM_BASE         0xE0004000UL
#define NRF_CELLULARDSP_ETM_BASE          0xE0005000UL
#define NRF_CELLULARDSP_CTI1_BASE         0xE0006000UL
#define NRF_CELLULARDSP_HSFLL_BASE        0x45000000UL
#define NRF_CELLULARDSP_LRCCONF0_BASE     0x45001000UL
#define NRF_CELLULARDSP_MPC_BASE          0x45002000UL
#define NRF_CELLULARDSP_MVDMA_BASE        0x45003000UL
#define NRF_CELLULARDSP_RAMC00_BASE       0x45004000UL
#define NRF_CELLULARDSP_RAMC10_BASE       0x45005000UL
#define NRF_CELLULARDSP_RAMC20_BASE       0x45006000UL
#define NRF_CELLULARDSP_GENERIC2_BASE     0x45007000UL
#define NRF_CELLULARDSP_DSPINTMAP_BASE    0x45008000UL
#define NRF_CELLULARDSP_MWU_BASE          0x4500A000UL
#define NRF_CELLULARDSP_LTEFE_BASE        0x4500B000UL
#define NRF_CELLULARDSP_TURBO_BASE        0x4500C000UL
#define NRF_CELLULARDSP_HARQ_BASE         0x4500D000UL
#define NRF_CELLULARDSP_VITERBI_BASE      0x4500E000UL
#define NRF_CELLULARDSP_PPIB0_BASE        0x4500F000UL
#define NRF_CELLULARDSP_LRCCONF1_BASE     0x45010000UL
#define NRF_CELLULARDSP_CPUCONF_BASE      0x45011000UL
#define NRF_CELLULARDSP_MEMCONF_BASE      0x45012000UL
#define NRF_CELLULARDSP_IPCT_BASE         0x45013000UL
#define NRF_CELLULARDSP_GENERIC4_BASE     0x45014000UL
#define NRF_CELLULARDSP_PCGCM0_BASE       0x45015000UL
#define NRF_CELLULARDSP_PPIB1_BASE        0x45016000UL
#define NRF_CELLULARDSP_GENERIC6_BASE     0x45020000UL
#define NRF_CELLULARDSP_DPPIC_BASE        0x45021000UL
#define NRF_CELLULARDSP_PCGCS0_BASE       0x45022000UL
#define NRF_CELLULARDSP_PCGCM1_BASE       0x45023000UL
#define NRF_CELLULARDSP_GENERIC9_BASE     0x45024000UL
#define NRF_CELLULARDSP_GENERIC10_BASE    0x45025000UL
#define NRF_CELLULARDSP_GENERIC11_BASE    0x45026000UL
#define NRF_CELLULARDSP_TRACEDELAYREG_BASE 0x45027000UL
#define NRF_CELLULARDSP_BELLBOARD_BASE    0x4F09D000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_CELLULARDSP_LSTM              ((NRF_STM_Type*)                      NRF_CELLULARDSP_LSTM_BASE)
#define NRF_CELLULARDSP_ETM               ((NRF_ETM_Type*)                      NRF_CELLULARDSP_ETM_BASE)
#define NRF_CELLULARDSP_CTI1              ((NRF_CTI_Type*)                      NRF_CELLULARDSP_CTI1_BASE)
#define NRF_CELLULARDSP_HSFLL             ((NRF_HSFLL_Type*)                    NRF_CELLULARDSP_HSFLL_BASE)
#define NRF_CELLULARDSP_LRCCONF0          ((NRF_LRCCONF_Type*)                  NRF_CELLULARDSP_LRCCONF0_BASE)
#define NRF_CELLULARDSP_MPC               ((NRF_MPC_Type*)                      NRF_CELLULARDSP_MPC_BASE)
#define NRF_CELLULARDSP_MVDMA             ((NRF_MVDMA_Type*)                    NRF_CELLULARDSP_MVDMA_BASE)
#define NRF_CELLULARDSP_RAMC00            ((NRF_RAMC_Type*)                     NRF_CELLULARDSP_RAMC00_BASE)
#define NRF_CELLULARDSP_RAMC10            ((NRF_RAMC_Type*)                     NRF_CELLULARDSP_RAMC10_BASE)
#define NRF_CELLULARDSP_RAMC20            ((NRF_RAMC_Type*)                     NRF_CELLULARDSP_RAMC20_BASE)
#define NRF_CELLULARDSP_GENERIC2          ((NRF_GENERIC_Type*)                  NRF_CELLULARDSP_GENERIC2_BASE)
#define NRF_CELLULARDSP_DSPINTMAP         ((NRF_DSPINTMAP_Type*)                NRF_CELLULARDSP_DSPINTMAP_BASE)
#define NRF_CELLULARDSP_MWU               ((NRF_MWU_Type*)                      NRF_CELLULARDSP_MWU_BASE)
#define NRF_CELLULARDSP_LTEFE             ((NRF_LTEFE_Type*)                    NRF_CELLULARDSP_LTEFE_BASE)
#define NRF_CELLULARDSP_TURBO             ((NRF_TURBO_Type*)                    NRF_CELLULARDSP_TURBO_BASE)
#define NRF_CELLULARDSP_HARQ              ((NRF_HARQ_Type*)                     NRF_CELLULARDSP_HARQ_BASE)
#define NRF_CELLULARDSP_VITERBI           ((NRF_VITERBI_Type*)                  NRF_CELLULARDSP_VITERBI_BASE)
#define NRF_CELLULARDSP_PPIB0             ((NRF_PPIB_Type*)                     NRF_CELLULARDSP_PPIB0_BASE)
#define NRF_CELLULARDSP_LRCCONF1          ((NRF_LRCCONF_Type*)                  NRF_CELLULARDSP_LRCCONF1_BASE)
#define NRF_CELLULARDSP_CPUCONF           ((NRF_CPUCONF_Type*)                  NRF_CELLULARDSP_CPUCONF_BASE)
#define NRF_CELLULARDSP_MEMCONF           ((NRF_MEMCONF_Type*)                  NRF_CELLULARDSP_MEMCONF_BASE)
#define NRF_CELLULARDSP_IPCT              ((NRF_IPCT_Type*)                     NRF_CELLULARDSP_IPCT_BASE)
#define NRF_CELLULARDSP_GENERIC4          ((NRF_GENERIC_Type*)                  NRF_CELLULARDSP_GENERIC4_BASE)
#define NRF_CELLULARDSP_PCGCM0            ((NRF_PCGCMASTER_Type*)               NRF_CELLULARDSP_PCGCM0_BASE)
#define NRF_CELLULARDSP_PPIB1             ((NRF_PPIB_Type*)                     NRF_CELLULARDSP_PPIB1_BASE)
#define NRF_CELLULARDSP_GENERIC6          ((NRF_GENERIC_Type*)                  NRF_CELLULARDSP_GENERIC6_BASE)
#define NRF_CELLULARDSP_DPPIC             ((NRF_DPPIC_Type*)                    NRF_CELLULARDSP_DPPIC_BASE)
#define NRF_CELLULARDSP_PCGCS0            ((NRF_PCGCSLAVE_Type*)                NRF_CELLULARDSP_PCGCS0_BASE)
#define NRF_CELLULARDSP_PCGCM1            ((NRF_PCGCMASTER_Type*)               NRF_CELLULARDSP_PCGCM1_BASE)
#define NRF_CELLULARDSP_GENERIC9          ((NRF_GENERIC_Type*)                  NRF_CELLULARDSP_GENERIC9_BASE)
#define NRF_CELLULARDSP_GENERIC10         ((NRF_GENERIC_Type*)                  NRF_CELLULARDSP_GENERIC10_BASE)
#define NRF_CELLULARDSP_GENERIC11         ((NRF_GENERIC_Type*)                  NRF_CELLULARDSP_GENERIC11_BASE)
#define NRF_CELLULARDSP_TRACEDELAYREG     ((NRF_TRACEDELAYREG_Type*)            NRF_CELLULARDSP_TRACEDELAYREG_BASE)
#define NRF_CELLULARDSP_BELLBOARD         ((NRF_BELLBOARD_Type*)                NRF_CELLULARDSP_BELLBOARD_BASE)

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_CELLULARDSP                               /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_LSTM                                NRF_CELLULARDSP_LSTM
  #define NRF_ETM                                 NRF_CELLULARDSP_ETM
  #define NRF_CTI1                                NRF_CELLULARDSP_CTI1
  #define NRF_HSFLL                               NRF_CELLULARDSP_HSFLL
  #define NRF_LRCCONF0                            NRF_CELLULARDSP_LRCCONF0
  #define NRF_MPC                                 NRF_CELLULARDSP_MPC
  #define NRF_MVDMA                               NRF_CELLULARDSP_MVDMA
  #define NRF_RAMC00                              NRF_CELLULARDSP_RAMC00
  #define NRF_RAMC10                              NRF_CELLULARDSP_RAMC10
  #define NRF_RAMC20                              NRF_CELLULARDSP_RAMC20
  #define NRF_GENERIC2                            NRF_CELLULARDSP_GENERIC2
  #define NRF_DSPINTMAP                           NRF_CELLULARDSP_DSPINTMAP
  #define NRF_MWU                                 NRF_CELLULARDSP_MWU
  #define NRF_LTEFE                               NRF_CELLULARDSP_LTEFE
  #define NRF_TURBO                               NRF_CELLULARDSP_TURBO
  #define NRF_HARQ                                NRF_CELLULARDSP_HARQ
  #define NRF_VITERBI                             NRF_CELLULARDSP_VITERBI
  #define NRF_PPIB0                               NRF_CELLULARDSP_PPIB0
  #define NRF_LRCCONF1                            NRF_CELLULARDSP_LRCCONF1
  #define NRF_CPUCONF                             NRF_CELLULARDSP_CPUCONF
  #define NRF_MEMCONF                             NRF_CELLULARDSP_MEMCONF
  #define NRF_IPCT                                NRF_CELLULARDSP_IPCT
  #define NRF_GENERIC4                            NRF_CELLULARDSP_GENERIC4
  #define NRF_PCGCM0                              NRF_CELLULARDSP_PCGCM0
  #define NRF_PPIB1                               NRF_CELLULARDSP_PPIB1
  #define NRF_GENERIC6                            NRF_CELLULARDSP_GENERIC6
  #define NRF_DPPIC                               NRF_CELLULARDSP_DPPIC
  #define NRF_PCGCS0                              NRF_CELLULARDSP_PCGCS0
  #define NRF_PCGCM1                              NRF_CELLULARDSP_PCGCM1
  #define NRF_GENERIC9                            NRF_CELLULARDSP_GENERIC9
  #define NRF_GENERIC10                           NRF_CELLULARDSP_GENERIC10
  #define NRF_GENERIC11                           NRF_CELLULARDSP_GENERIC11
  #define NRF_TRACEDELAYREG                       NRF_CELLULARDSP_TRACEDELAYREG
  #define NRF_BELLBOARD                           NRF_CELLULARDSP_BELLBOARD
#endif                                               /*!< NRF_CELLULARDSP                                                      */

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
#endif /* HALTIUM_CELLULARDSP_H */

