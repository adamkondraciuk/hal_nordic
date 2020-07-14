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

#ifndef HALTIUM_CELLULARRF_H
#define HALTIUM_CELLULARRF_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_CELLULARRF                                /*!< Processor information is domain local.                               */


/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* ===================================================== Core Interrupts ===================================================== */
  Reset_IRQn                             = -15,      /*!< -15 Reset Vector, invoked on Power up and warm reset                 */
  NonMaskableInt_IRQn                    = -14,      /*!< -14 Non maskable Interrupt, cannot be stopped or preempted           */
  HardFault_IRQn                         = -13,      /*!< -13 Hard Fault, all classes of Fault                                 */
  SVCall_IRQn                            = -5,       /*!<  -5 System Service Call via SVC instruction                          */
  PendSV_IRQn                            = -2,       /*!<  -2 Pendable request for system service                              */
  SysTick_IRQn                           = -1,       /*!<  -1 System Tick Timer                                                */
/* ============================================== Processor Specific Interrupts ============================================== */
  GENERIC0_TXDFE_IRQn                    = 0,        /*!< 0 GENERIC0_TXDFE                                                     */
  RAMC00_TX_SEQ_TIMER_IRQn               = 1,        /*!< 1 RAMC00_TX_SEQ_TIMER                                                */
  EGU_TX_RAMC10_IRQn                     = 2,        /*!< 2 EGU_TX_RAMC10                                                      */
  RAMC20_RXDFE0_IRQn                     = 3,        /*!< 3 RAMC20_RXDFE0                                                      */
  GENERIC1_RXDFE1_IRQn                   = 4,        /*!< 4 GENERIC1_RXDFE1                                                    */
  RX_SEQ_TIMER_IRQn                      = 5,        /*!< 5 RX_SEQ_TIMER                                                       */
  EGU_RX_IRQn                            = 6,        /*!< 6 EGU_RX                                                             */
  LRC0_TX_DSA0_IRQn                      = 7,        /*!< 7 LRC0_TX_DSA0                                                       */
  HSFLL_TX_DSA1_IRQn                     = 8,        /*!< 8 HSFLL_TX_DSA1                                                      */
  GENERIC5_RX_DSA0_IRQn                  = 9,        /*!< 9 GENERIC5_RX_DSA0                                                   */
  MPC_RX_DSA1_IRQn                       = 10,       /*!< 10 MPC_RX_DSA1                                                       */
  GPIOTE0_IRQn                           = 11,       /*!< 11 GPIOTE0                                                           */
  STC_TIMER_IRQn                         = 13,       /*!< 13 STC_TIMER                                                         */
  MIPIRFFE_0_IRQn                        = 14,       /*!< 14 MIPIRFFE_0                                                        */
  MIPIRFFE_1_IRQn                        = 15,       /*!< 15 MIPIRFFE_1                                                        */
  RFSERVICES_IRQn                        = 16,       /*!< 16 RFSERVICES                                                        */
  LRC1_IRQn                              = 17,       /*!< 17 LRC1                                                              */
  MVDMA_IRQn                             = 20,       /*!< 20 MVDMA                                                             */
  BELLBOARD0_IRQn                        = 23,       /*!< 23 BELLBOARD0                                                        */
  BELLBOARD1_IRQn                        = 24,       /*!< 24 BELLBOARD1                                                        */
  BELLBOARD2_IRQn                        = 25,       /*!< 25 BELLBOARD2                                                        */
  BELLBOARD3_IRQn                        = 26,       /*!< 26 BELLBOARD3                                                        */
  IPCT0_IRQn                             = 27,       /*!< 27 IPCT0                                                             */
  IPCT1_IRQn                             = 28,       /*!< 28 IPCT1                                                             */
  IPCT2_IRQn                             = 29,       /*!< 29 IPCT2                                                             */
  IPCT3_IRQn                             = 30,       /*!< 30 IPCT3                                                             */
  IPCT4_IRQn                             = 31,       /*!< 31 IPCT4                                                             */
  GENERIC16_IRQn                         = 70,       /*!< 70 GENERIC16                                                         */
  RAMC30_IRQn                            = 81,       /*!< 81 RAMC30                                                            */
  RAMC40_IRQn                            = 82,       /*!< 82 RAMC40                                                            */
  LRC2_IRQn                              = 84,       /*!< 84 LRC2                                                              */
} IRQn_Type;


/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* ============================ Configuration of the ARM Cortex-M0 Processor and Core Peripherals ============================ */
#define __CM0_REV                   r0p0             /*!< CM0 Core Revision                                                    */
#define __DSP_PRESENT                  0             /*!< DSP present or not                                                   */
#define __NVIC_PRIO_BITS               3             /*!< Number of Bits used for Priority Levels                              */
#define __VTOR_PRESENT                 0             /*!< CPU supports alternate Vector Table address                          */
#define __MPU_PRESENT                  0             /*!< MPU present                                                          */
#define __FPU_PRESENT                  0             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */
#define __Vendor_SysTickConfig         0             /*!< Vendor SysTick Config implementation is used                         */
#define __SAU_REGION_PRESENT           0             /*!< SAU present                                                          */

#include "core_cm0.h"                                /*!< ARM Cortex-M0 processor and core peripherals                         */
#include "system_haltium_cellularrf.h"               /*!< haltium_cellularrf System Library                                    */

#endif                                               /*!< NRF_CELLULARRF                                                       */


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

#define NRF_CELLULARRF_GENERIC0_BASE      0x46000000UL
#define NRF_CELLULARRF_TXDFE_BASE         0x46020000UL
#define NRF_CELLULARRF_RAMC00_BASE        0x46001000UL
#define NRF_CELLULARRF_TX_SEQ_TIMER_BASE  0x46021000UL
#define NRF_CELLULARRF_RAMC10_BASE        0x46002000UL
#define NRF_CELLULARRF_EGU_TX_BASE        0x46022000UL
#define NRF_CELLULARRF_RAMC20_BASE        0x46003000UL
#define NRF_CELLULARRF_RXDFE_BASE         0x46030000UL
#define NRF_CELLULARRF_GENERIC1_BASE      0x46004000UL
#define NRF_CELLULARRF_MUTEX_BASE         0x46005000UL
#define NRF_CELLULARRF_RX_SEQ_TIMER_BASE  0x46032000UL
#define NRF_CELLULARRF_EGU_RX_BASE        0x46033000UL
#define NRF_CELLULARRF_LRC0_BASE          0x46007000UL
#define NRF_CELLULARRF_TX_DSA_BASE        0x46040000UL
#define NRF_CELLULARRF_HSFLL_BASE         0x46008000UL
#define NRF_CELLULARRF_GENERIC5_BASE      0x46009000UL
#define NRF_CELLULARRF_RX_DSA_BASE        0x46042000UL
#define NRF_CELLULARRF_MPC_BASE           0x4600A000UL
#define NRF_CELLULARRF_GPIOTE_BASE        0x46044000UL
#define NRF_CELLULARRF_STC_TIMER_BASE     0x46048000UL
#define NRF_CELLULARRF_MIPIRFFE_0_BASE    0x46049000UL
#define NRF_CELLULARRF_MIPIRFFE_1_BASE    0x4604A000UL
#define NRF_CELLULARRF_RFSERVICES_BASE    0x46045000UL
#define NRF_CELLULARRF_LRC1_BASE          0x46011000UL
#define NRF_CELLULARRF_CPUCONF_BASE       0x46013000UL
#define NRF_CELLULARRF_MVDMA_BASE         0x4600B000UL
#define NRF_CELLULARRF_MEMCONF_BASE       0x46014000UL
#define NRF_CELLULARRF_BELLBOARD_BASE     0x4F09E000UL
#define NRF_CELLULARRF_IPCT_BASE          0x46015000UL
#define NRF_CELLULARRF_GENERIC16_BASE     0x46046000UL
#define NRF_CELLULARRF_RFPLL_BASE         0x46047000UL
#define NRF_CELLULARRF_DPPIC_BASE         0x46050000UL
#define NRF_CELLULARRF_RAMC30_BASE        0x46051000UL
#define NRF_CELLULARRF_RAMC40_BASE        0x46052000UL
#define NRF_CELLULARRF_LRC2_BASE          0x46054000UL
#define NRF_CELLULARRF_GPIO_BASE          0x46055000UL
#define NRF_CELLULARRF_DUMMY_BASE         0x430FF000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_CELLULARRF_GENERIC0           ((NRF_GENERIC_Type*)                  NRF_CELLULARRF_GENERIC0_BASE)
#define NRF_CELLULARRF_TXDFE              ((NRF_TXDFE_Type*)                    NRF_CELLULARRF_TXDFE_BASE)
#define NRF_CELLULARRF_RAMC00             ((NRF_RAMC_Type*)                     NRF_CELLULARRF_RAMC00_BASE)
#define NRF_CELLULARRF_TX_SEQ_TIMER       ((NRF_RFTIMER_Type*)                  NRF_CELLULARRF_TX_SEQ_TIMER_BASE)
#define NRF_CELLULARRF_RAMC10             ((NRF_RAMC_Type*)                     NRF_CELLULARRF_RAMC10_BASE)
#define NRF_CELLULARRF_EGU_TX             ((NRF_EGU_Type*)                      NRF_CELLULARRF_EGU_TX_BASE)
#define NRF_CELLULARRF_RAMC20             ((NRF_RAMC_Type*)                     NRF_CELLULARRF_RAMC20_BASE)
#define NRF_CELLULARRF_RXDFE              ((NRF_RXDFE_Type*)                    NRF_CELLULARRF_RXDFE_BASE)
#define NRF_CELLULARRF_GENERIC1           ((NRF_GENERIC_Type*)                  NRF_CELLULARRF_GENERIC1_BASE)
#define NRF_CELLULARRF_MUTEX              ((NRF_MUTEX_Type*)                    NRF_CELLULARRF_MUTEX_BASE)
#define NRF_CELLULARRF_RX_SEQ_TIMER       ((NRF_RFTIMER_Type*)                  NRF_CELLULARRF_RX_SEQ_TIMER_BASE)
#define NRF_CELLULARRF_EGU_RX             ((NRF_EGU_Type*)                      NRF_CELLULARRF_EGU_RX_BASE)
#define NRF_CELLULARRF_LRC0               ((NRF_LRC_Type*)                      NRF_CELLULARRF_LRC0_BASE)
#define NRF_CELLULARRF_TX_DSA             ((NRF_DSA2_Type*)                     NRF_CELLULARRF_TX_DSA_BASE)
#define NRF_CELLULARRF_HSFLL              ((NRF_HSFLL_Type*)                    NRF_CELLULARRF_HSFLL_BASE)
#define NRF_CELLULARRF_GENERIC5           ((NRF_GENERIC_Type*)                  NRF_CELLULARRF_GENERIC5_BASE)
#define NRF_CELLULARRF_RX_DSA             ((NRF_DSA2_Type*)                     NRF_CELLULARRF_RX_DSA_BASE)
#define NRF_CELLULARRF_MPC                ((NRF_MPC_Type*)                      NRF_CELLULARRF_MPC_BASE)
#define NRF_CELLULARRF_GPIOTE             ((NRF_GPIOTE_Type*)                   NRF_CELLULARRF_GPIOTE_BASE)
#define NRF_CELLULARRF_STC_TIMER          ((NRF_RFTIMER_Type*)                  NRF_CELLULARRF_STC_TIMER_BASE)
#define NRF_CELLULARRF_MIPIRFFE_0         ((NRF_MIPIRFFE_Type*)                 NRF_CELLULARRF_MIPIRFFE_0_BASE)
#define NRF_CELLULARRF_MIPIRFFE_1         ((NRF_MIPIRFFE_Type*)                 NRF_CELLULARRF_MIPIRFFE_1_BASE)
#define NRF_CELLULARRF_RFSERVICES         ((NRF_RFSERVICES_Type*)               NRF_CELLULARRF_RFSERVICES_BASE)
#define NRF_CELLULARRF_LRC1               ((NRF_LRC_Type*)                      NRF_CELLULARRF_LRC1_BASE)
#define NRF_CELLULARRF_CPUCONF            ((NRF_CPUCONF_Type*)                  NRF_CELLULARRF_CPUCONF_BASE)
#define NRF_CELLULARRF_MVDMA              ((NRF_MVDMA_Type*)                    NRF_CELLULARRF_MVDMA_BASE)
#define NRF_CELLULARRF_MEMCONF            ((NRF_MEMCONF_Type*)                  NRF_CELLULARRF_MEMCONF_BASE)
#define NRF_CELLULARRF_BELLBOARD          ((NRF_BELLBOARD_Type*)                NRF_CELLULARRF_BELLBOARD_BASE)
#define NRF_CELLULARRF_IPCT               ((NRF_IPCT_Type*)                     NRF_CELLULARRF_IPCT_BASE)
#define NRF_CELLULARRF_GENERIC16          ((NRF_GENERIC_Type*)                  NRF_CELLULARRF_GENERIC16_BASE)
#define NRF_CELLULARRF_RFPLL              ((NRF_RFPLL_Type*)                    NRF_CELLULARRF_RFPLL_BASE)
#define NRF_CELLULARRF_DPPIC              ((NRF_DPPIC_Type*)                    NRF_CELLULARRF_DPPIC_BASE)
#define NRF_CELLULARRF_RAMC30             ((NRF_RAMC_Type*)                     NRF_CELLULARRF_RAMC30_BASE)
#define NRF_CELLULARRF_RAMC40             ((NRF_RAMC_Type*)                     NRF_CELLULARRF_RAMC40_BASE)
#define NRF_CELLULARRF_LRC2               ((NRF_LRC_Type*)                      NRF_CELLULARRF_LRC2_BASE)
#define NRF_CELLULARRF_GPIO               ((NRF_GPIO_Type*)                     NRF_CELLULARRF_GPIO_BASE)
#define NRF_CELLULARRF_DUMMY              ((NRF_DUMMY_Type*)                    NRF_CELLULARRF_DUMMY_BASE)

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_CELLULARRF                                /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_GENERIC0                            NRF_CELLULARRF_GENERIC0
  #define NRF_TXDFE                               NRF_CELLULARRF_TXDFE
  #define NRF_RAMC00                              NRF_CELLULARRF_RAMC00
  #define NRF_TX_SEQ_TIMER                        NRF_CELLULARRF_TX_SEQ_TIMER
  #define NRF_RAMC10                              NRF_CELLULARRF_RAMC10
  #define NRF_EGU_TX                              NRF_CELLULARRF_EGU_TX
  #define NRF_RAMC20                              NRF_CELLULARRF_RAMC20
  #define NRF_RXDFE                               NRF_CELLULARRF_RXDFE
  #define NRF_GENERIC1                            NRF_CELLULARRF_GENERIC1
  #define NRF_MUTEX                               NRF_CELLULARRF_MUTEX
  #define NRF_RX_SEQ_TIMER                        NRF_CELLULARRF_RX_SEQ_TIMER
  #define NRF_EGU_RX                              NRF_CELLULARRF_EGU_RX
  #define NRF_LRC0                                NRF_CELLULARRF_LRC0
  #define NRF_TX_DSA                              NRF_CELLULARRF_TX_DSA
  #define NRF_HSFLL                               NRF_CELLULARRF_HSFLL
  #define NRF_GENERIC5                            NRF_CELLULARRF_GENERIC5
  #define NRF_RX_DSA                              NRF_CELLULARRF_RX_DSA
  #define NRF_MPC                                 NRF_CELLULARRF_MPC
  #define NRF_GPIOTE                              NRF_CELLULARRF_GPIOTE
  #define NRF_STC_TIMER                           NRF_CELLULARRF_STC_TIMER
  #define NRF_MIPIRFFE_0                          NRF_CELLULARRF_MIPIRFFE_0
  #define NRF_MIPIRFFE_1                          NRF_CELLULARRF_MIPIRFFE_1
  #define NRF_RFSERVICES                          NRF_CELLULARRF_RFSERVICES
  #define NRF_LRC1                                NRF_CELLULARRF_LRC1
  #define NRF_CPUCONF                             NRF_CELLULARRF_CPUCONF
  #define NRF_MVDMA                               NRF_CELLULARRF_MVDMA
  #define NRF_MEMCONF                             NRF_CELLULARRF_MEMCONF
  #define NRF_BELLBOARD                           NRF_CELLULARRF_BELLBOARD
  #define NRF_IPCT                                NRF_CELLULARRF_IPCT
  #define NRF_GENERIC16                           NRF_CELLULARRF_GENERIC16
  #define NRF_RFPLL                               NRF_CELLULARRF_RFPLL
  #define NRF_DPPIC                               NRF_CELLULARRF_DPPIC
  #define NRF_RAMC30                              NRF_CELLULARRF_RAMC30
  #define NRF_RAMC40                              NRF_CELLULARRF_RAMC40
  #define NRF_LRC2                                NRF_CELLULARRF_LRC2
  #define NRF_GPIO                                NRF_CELLULARRF_GPIO
  #define NRF_DUMMY                               NRF_CELLULARRF_DUMMY
#endif                                               /*!< NRF_CELLULARRF                                                       */

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
#endif /* HALTIUM_CELLULARRF_H */

