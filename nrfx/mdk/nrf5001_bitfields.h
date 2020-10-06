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

#ifndef __NRF5001_BITS_H
#define __NRF5001_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: AAR */
/* Description: Accelerated Address Resolver */

/* Register: AAR_TASKS_START */
/* Description: Start resolving addresses based on IRKs specified in the IRK data structure */

/* Bit 0 : Start resolving addresses based on IRKs specified in the IRK data structure */
#define AAR_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define AAR_TASKS_START_TASKS_START_Msk (0x1UL << AAR_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define AAR_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: AAR_TASKS_STOP */
/* Description: Stop resolving addresses */

/* Bit 0 : Stop resolving addresses */
#define AAR_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define AAR_TASKS_STOP_TASKS_STOP_Msk (0x1UL << AAR_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define AAR_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: AAR_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define AAR_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_SUBSCRIBE_START_EN_Msk (0x1UL << AAR_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define AAR_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define AAR_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << AAR_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define AAR_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_SUBSCRIBE_STOP_EN_Msk (0x1UL << AAR_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define AAR_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define AAR_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << AAR_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_EVENTS_END */
/* Description: Address resolution procedure complete */

/* Bit 0 : Address resolution procedure complete */
#define AAR_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define AAR_EVENTS_END_EVENTS_END_Msk (0x1UL << AAR_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define AAR_EVENTS_END_EVENTS_END_NotGenerated (0x0UL) /*!< Event not generated */
#define AAR_EVENTS_END_EVENTS_END_Generated (0x1UL) /*!< Event generated */

/* Register: AAR_EVENTS_RESOLVED */
/* Description: Address resolved */

/* Bit 0 : Address resolved */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos (0UL) /*!< Position of EVENTS_RESOLVED field. */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Msk (0x1UL << AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos) /*!< Bit mask of EVENTS_RESOLVED field. */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_NotGenerated (0x0UL) /*!< Event not generated */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Generated (0x1UL) /*!< Event generated */

/* Register: AAR_EVENTS_NOTRESOLVED */
/* Description: Address not resolved */

/* Bit 0 : Address not resolved */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos (0UL) /*!< Position of EVENTS_NOTRESOLVED field. */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Msk (0x1UL << AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos) /*!< Bit mask of EVENTS_NOTRESOLVED field. */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_NotGenerated (0x0UL) /*!< Event not generated */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Generated (0x1UL) /*!< Event generated */

/* Register: AAR_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define AAR_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_PUBLISH_END_EN_Msk (0x1UL << AAR_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_PUBLISH_END_EN_Disabled (0x0UL) /*!< Disable publishing */
#define AAR_PUBLISH_END_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to */
#define AAR_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_PUBLISH_END_CHIDX_Msk (0xFFUL << AAR_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_PUBLISH_RESOLVED */
/* Description: Publish configuration for event RESOLVED */

/* Bit 31 :   */
#define AAR_PUBLISH_RESOLVED_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_PUBLISH_RESOLVED_EN_Msk (0x1UL << AAR_PUBLISH_RESOLVED_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_PUBLISH_RESOLVED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define AAR_PUBLISH_RESOLVED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RESOLVED will publish to */
#define AAR_PUBLISH_RESOLVED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_PUBLISH_RESOLVED_CHIDX_Msk (0xFFUL << AAR_PUBLISH_RESOLVED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_PUBLISH_NOTRESOLVED */
/* Description: Publish configuration for event NOTRESOLVED */

/* Bit 31 :   */
#define AAR_PUBLISH_NOTRESOLVED_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_PUBLISH_NOTRESOLVED_EN_Msk (0x1UL << AAR_PUBLISH_NOTRESOLVED_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_PUBLISH_NOTRESOLVED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define AAR_PUBLISH_NOTRESOLVED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event NOTRESOLVED will publish to */
#define AAR_PUBLISH_NOTRESOLVED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_PUBLISH_NOTRESOLVED_CHIDX_Msk (0xFFUL << AAR_PUBLISH_NOTRESOLVED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for event NOTRESOLVED */
#define AAR_INTEN_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTEN_NOTRESOLVED_Msk (0x1UL << AAR_INTEN_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTEN_NOTRESOLVED_Disabled (0x0UL) /*!< Disable */
#define AAR_INTEN_NOTRESOLVED_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event RESOLVED */
#define AAR_INTEN_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTEN_RESOLVED_Msk (0x1UL << AAR_INTEN_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTEN_RESOLVED_Disabled (0x0UL) /*!< Disable */
#define AAR_INTEN_RESOLVED_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event END */
#define AAR_INTEN_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTEN_END_Msk (0x1UL << AAR_INTEN_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTEN_END_Disabled (0x0UL) /*!< Disable */
#define AAR_INTEN_END_Enabled (0x1UL) /*!< Enable */

/* Register: AAR_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event NOTRESOLVED */
#define AAR_INTENSET_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTENSET_NOTRESOLVED_Msk (0x1UL << AAR_INTENSET_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTENSET_NOTRESOLVED_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENSET_NOTRESOLVED_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENSET_NOTRESOLVED_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event RESOLVED */
#define AAR_INTENSET_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTENSET_RESOLVED_Msk (0x1UL << AAR_INTENSET_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTENSET_RESOLVED_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENSET_RESOLVED_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENSET_RESOLVED_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event END */
#define AAR_INTENSET_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTENSET_END_Msk (0x1UL << AAR_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTENSET_END_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENSET_END_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENSET_END_Set (0x1UL) /*!< Enable */

/* Register: AAR_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event NOTRESOLVED */
#define AAR_INTENCLR_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTENCLR_NOTRESOLVED_Msk (0x1UL << AAR_INTENCLR_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTENCLR_NOTRESOLVED_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_NOTRESOLVED_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_NOTRESOLVED_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event RESOLVED */
#define AAR_INTENCLR_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTENCLR_RESOLVED_Msk (0x1UL << AAR_INTENCLR_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTENCLR_RESOLVED_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_RESOLVED_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_RESOLVED_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event END */
#define AAR_INTENCLR_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTENCLR_END_Msk (0x1UL << AAR_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTENCLR_END_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_END_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_END_Clear (0x1UL) /*!< Disable */

/* Register: AAR_STATUS */
/* Description: Resolution status */

/* Bits 3..0 : The IRK that was used last time an address was resolved */
#define AAR_STATUS_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define AAR_STATUS_STATUS_Msk (0xFUL << AAR_STATUS_STATUS_Pos) /*!< Bit mask of STATUS field. */

/* Register: AAR_ENABLE */
/* Description: Enable AAR */

/* Bits 1..0 : Enable or disable AAR */
#define AAR_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define AAR_ENABLE_ENABLE_Msk (0x3UL << AAR_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define AAR_ENABLE_ENABLE_Disabled (0x0UL) /*!< Disable */
#define AAR_ENABLE_ENABLE_Enabled (0x3UL) /*!< Enable */

/* Register: AAR_NIRK */
/* Description: Number of IRKs */

/* Bits 4..0 : Number of Identity root keys available in the IRK data structure */
#define AAR_NIRK_NIRK_Pos (0UL) /*!< Position of NIRK field. */
#define AAR_NIRK_NIRK_Msk (0x1FUL << AAR_NIRK_NIRK_Pos) /*!< Bit mask of NIRK field. */

/* Register: AAR_IRKPTR */
/* Description: Pointer to IRK data structure */

/* Bits 31..0 : Pointer to the IRK data structure */
#define AAR_IRKPTR_IRKPTR_Pos (0UL) /*!< Position of IRKPTR field. */
#define AAR_IRKPTR_IRKPTR_Msk (0xFFFFFFFFUL << AAR_IRKPTR_IRKPTR_Pos) /*!< Bit mask of IRKPTR field. */

/* Register: AAR_ADDRPTR */
/* Description: Pointer to the resolvable address */

/* Bits 31..0 : Pointer to the resolvable address (6-bytes) */
#define AAR_ADDRPTR_ADDRPTR_Pos (0UL) /*!< Position of ADDRPTR field. */
#define AAR_ADDRPTR_ADDRPTR_Msk (0xFFFFFFFFUL << AAR_ADDRPTR_ADDRPTR_Pos) /*!< Bit mask of ADDRPTR field. */

/* Register: AAR_SCRATCHPTR */
/* Description: Pointer to data area used for temporary storage */

/* Bits 31..0 : Pointer to a scratch data area used for temporary storage during resolution. A space of minimum 3 bytes must be reserved. */
#define AAR_SCRATCHPTR_SCRATCHPTR_Pos (0UL) /*!< Position of SCRATCHPTR field. */
#define AAR_SCRATCHPTR_SCRATCHPTR_Msk (0xFFFFFFFFUL << AAR_SCRATCHPTR_SCRATCHPTR_Pos) /*!< Bit mask of SCRATCHPTR field. */


/* Peripheral: AMLI */
/* Description: AHB Multi-Layer Interface */

/* Register: AMLI_RAMPRI_CPU */
/* Description: AHB bus master priority register for CPU */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_CPU_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_CPU_RAM1_Msk (0x1UL << AMLI_RAMPRI_CPU_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_CPU_RAM1_Pri0 (0x0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM1_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_CPU_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_CPU_RAM0_Msk (0x1UL << AMLI_RAMPRI_CPU_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_CPU_RAM0_Pri0 (0x0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM0_Pri1 (0x1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_PERI */
/* Description: AHB bus master priority register for periperals */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_PERI_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_PERI_RAM1_Msk (0x1UL << AMLI_RAMPRI_PERI_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_PERI_RAM1_Pri0 (0x0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_PERI_RAM1_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_PERI_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_PERI_RAM0_Msk (0x1UL << AMLI_RAMPRI_PERI_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_PERI_RAM0_Pri0 (0x0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_PERI_RAM0_Pri1 (0x1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_USB */
/* Description: AHB bus master priority register for USB */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_USB_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_USB_RAM1_Msk (0x1UL << AMLI_RAMPRI_USB_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_USB_RAM1_Pri0 (0x0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_USB_RAM1_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_USB_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_USB_RAM0_Msk (0x1UL << AMLI_RAMPRI_USB_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_USB_RAM0_Pri0 (0x0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_USB_RAM0_Pri1 (0x1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_CTRLAP */
/* Description: AHB bus master priority register for CTRL-AP */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_CTRLAP_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_CTRLAP_RAM1_Msk (0x1UL << AMLI_RAMPRI_CTRLAP_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_CTRLAP_RAM1_Pri0 (0x0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CTRLAP_RAM1_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_CTRLAP_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_CTRLAP_RAM0_Msk (0x1UL << AMLI_RAMPRI_CTRLAP_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_CTRLAP_RAM0_Pri0 (0x0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CTRLAP_RAM0_Pri1 (0x1UL) /*!< Priority 1 */


/* Peripheral: BPROT */
/* Description: Block Protect */

/* Register: BPROT_CONFIG */
/* Description: Description collection: Block protect configuration register n. */

/* Bit 31 : Enable protection for region 31. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION31_Pos (31UL) /*!< Position of REGION31 field. */
#define BPROT_CONFIG_REGION31_Msk (0x1UL << BPROT_CONFIG_REGION31_Pos) /*!< Bit mask of REGION31 field. */
#define BPROT_CONFIG_REGION31_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION31_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 30 : Enable protection for region 30. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION30_Pos (30UL) /*!< Position of REGION30 field. */
#define BPROT_CONFIG_REGION30_Msk (0x1UL << BPROT_CONFIG_REGION30_Pos) /*!< Bit mask of REGION30 field. */
#define BPROT_CONFIG_REGION30_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION30_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 29 : Enable protection for region 29. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION29_Pos (29UL) /*!< Position of REGION29 field. */
#define BPROT_CONFIG_REGION29_Msk (0x1UL << BPROT_CONFIG_REGION29_Pos) /*!< Bit mask of REGION29 field. */
#define BPROT_CONFIG_REGION29_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION29_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 28 : Enable protection for region 28. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION28_Pos (28UL) /*!< Position of REGION28 field. */
#define BPROT_CONFIG_REGION28_Msk (0x1UL << BPROT_CONFIG_REGION28_Pos) /*!< Bit mask of REGION28 field. */
#define BPROT_CONFIG_REGION28_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION28_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 27 : Enable protection for region 27. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION27_Pos (27UL) /*!< Position of REGION27 field. */
#define BPROT_CONFIG_REGION27_Msk (0x1UL << BPROT_CONFIG_REGION27_Pos) /*!< Bit mask of REGION27 field. */
#define BPROT_CONFIG_REGION27_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION27_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 26 : Enable protection for region 26. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION26_Pos (26UL) /*!< Position of REGION26 field. */
#define BPROT_CONFIG_REGION26_Msk (0x1UL << BPROT_CONFIG_REGION26_Pos) /*!< Bit mask of REGION26 field. */
#define BPROT_CONFIG_REGION26_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION26_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 25 : Enable protection for region 25. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION25_Pos (25UL) /*!< Position of REGION25 field. */
#define BPROT_CONFIG_REGION25_Msk (0x1UL << BPROT_CONFIG_REGION25_Pos) /*!< Bit mask of REGION25 field. */
#define BPROT_CONFIG_REGION25_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION25_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 24 : Enable protection for region 24. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION24_Pos (24UL) /*!< Position of REGION24 field. */
#define BPROT_CONFIG_REGION24_Msk (0x1UL << BPROT_CONFIG_REGION24_Pos) /*!< Bit mask of REGION24 field. */
#define BPROT_CONFIG_REGION24_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION24_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 23 : Enable protection for region 23. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION23_Pos (23UL) /*!< Position of REGION23 field. */
#define BPROT_CONFIG_REGION23_Msk (0x1UL << BPROT_CONFIG_REGION23_Pos) /*!< Bit mask of REGION23 field. */
#define BPROT_CONFIG_REGION23_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION23_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 22 : Enable protection for region 22. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION22_Pos (22UL) /*!< Position of REGION22 field. */
#define BPROT_CONFIG_REGION22_Msk (0x1UL << BPROT_CONFIG_REGION22_Pos) /*!< Bit mask of REGION22 field. */
#define BPROT_CONFIG_REGION22_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION22_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 21 : Enable protection for region 21. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION21_Pos (21UL) /*!< Position of REGION21 field. */
#define BPROT_CONFIG_REGION21_Msk (0x1UL << BPROT_CONFIG_REGION21_Pos) /*!< Bit mask of REGION21 field. */
#define BPROT_CONFIG_REGION21_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION21_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 20 : Enable protection for region 20. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION20_Pos (20UL) /*!< Position of REGION20 field. */
#define BPROT_CONFIG_REGION20_Msk (0x1UL << BPROT_CONFIG_REGION20_Pos) /*!< Bit mask of REGION20 field. */
#define BPROT_CONFIG_REGION20_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION20_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 19 : Enable protection for region 19. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION19_Pos (19UL) /*!< Position of REGION19 field. */
#define BPROT_CONFIG_REGION19_Msk (0x1UL << BPROT_CONFIG_REGION19_Pos) /*!< Bit mask of REGION19 field. */
#define BPROT_CONFIG_REGION19_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION19_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 18 : Enable protection for region 18. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION18_Pos (18UL) /*!< Position of REGION18 field. */
#define BPROT_CONFIG_REGION18_Msk (0x1UL << BPROT_CONFIG_REGION18_Pos) /*!< Bit mask of REGION18 field. */
#define BPROT_CONFIG_REGION18_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION18_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 17 : Enable protection for region 17. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION17_Pos (17UL) /*!< Position of REGION17 field. */
#define BPROT_CONFIG_REGION17_Msk (0x1UL << BPROT_CONFIG_REGION17_Pos) /*!< Bit mask of REGION17 field. */
#define BPROT_CONFIG_REGION17_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION17_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 16 : Enable protection for region 16. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION16_Pos (16UL) /*!< Position of REGION16 field. */
#define BPROT_CONFIG_REGION16_Msk (0x1UL << BPROT_CONFIG_REGION16_Pos) /*!< Bit mask of REGION16 field. */
#define BPROT_CONFIG_REGION16_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION16_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 15 : Enable protection for region 15. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION15_Pos (15UL) /*!< Position of REGION15 field. */
#define BPROT_CONFIG_REGION15_Msk (0x1UL << BPROT_CONFIG_REGION15_Pos) /*!< Bit mask of REGION15 field. */
#define BPROT_CONFIG_REGION15_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION15_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 14 : Enable protection for region 14. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION14_Pos (14UL) /*!< Position of REGION14 field. */
#define BPROT_CONFIG_REGION14_Msk (0x1UL << BPROT_CONFIG_REGION14_Pos) /*!< Bit mask of REGION14 field. */
#define BPROT_CONFIG_REGION14_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION14_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 13 : Enable protection for region 13. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION13_Pos (13UL) /*!< Position of REGION13 field. */
#define BPROT_CONFIG_REGION13_Msk (0x1UL << BPROT_CONFIG_REGION13_Pos) /*!< Bit mask of REGION13 field. */
#define BPROT_CONFIG_REGION13_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION13_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 12 : Enable protection for region 12. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION12_Pos (12UL) /*!< Position of REGION12 field. */
#define BPROT_CONFIG_REGION12_Msk (0x1UL << BPROT_CONFIG_REGION12_Pos) /*!< Bit mask of REGION12 field. */
#define BPROT_CONFIG_REGION12_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION12_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 11 : Enable protection for region 11. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION11_Pos (11UL) /*!< Position of REGION11 field. */
#define BPROT_CONFIG_REGION11_Msk (0x1UL << BPROT_CONFIG_REGION11_Pos) /*!< Bit mask of REGION11 field. */
#define BPROT_CONFIG_REGION11_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION11_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 10 : Enable protection for region 10. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION10_Pos (10UL) /*!< Position of REGION10 field. */
#define BPROT_CONFIG_REGION10_Msk (0x1UL << BPROT_CONFIG_REGION10_Pos) /*!< Bit mask of REGION10 field. */
#define BPROT_CONFIG_REGION10_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION10_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 9 : Enable protection for region 9. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION9_Pos (9UL) /*!< Position of REGION9 field. */
#define BPROT_CONFIG_REGION9_Msk (0x1UL << BPROT_CONFIG_REGION9_Pos) /*!< Bit mask of REGION9 field. */
#define BPROT_CONFIG_REGION9_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION9_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 8 : Enable protection for region 8. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION8_Pos (8UL) /*!< Position of REGION8 field. */
#define BPROT_CONFIG_REGION8_Msk (0x1UL << BPROT_CONFIG_REGION8_Pos) /*!< Bit mask of REGION8 field. */
#define BPROT_CONFIG_REGION8_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION8_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 7 : Enable protection for region 7. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION7_Pos (7UL) /*!< Position of REGION7 field. */
#define BPROT_CONFIG_REGION7_Msk (0x1UL << BPROT_CONFIG_REGION7_Pos) /*!< Bit mask of REGION7 field. */
#define BPROT_CONFIG_REGION7_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION7_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 6 : Enable protection for region 6. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION6_Pos (6UL) /*!< Position of REGION6 field. */
#define BPROT_CONFIG_REGION6_Msk (0x1UL << BPROT_CONFIG_REGION6_Pos) /*!< Bit mask of REGION6 field. */
#define BPROT_CONFIG_REGION6_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION6_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 5 : Enable protection for region 5. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION5_Pos (5UL) /*!< Position of REGION5 field. */
#define BPROT_CONFIG_REGION5_Msk (0x1UL << BPROT_CONFIG_REGION5_Pos) /*!< Bit mask of REGION5 field. */
#define BPROT_CONFIG_REGION5_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION5_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 4 : Enable protection for region 4. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION4_Pos (4UL) /*!< Position of REGION4 field. */
#define BPROT_CONFIG_REGION4_Msk (0x1UL << BPROT_CONFIG_REGION4_Pos) /*!< Bit mask of REGION4 field. */
#define BPROT_CONFIG_REGION4_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION4_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 3 : Enable protection for region 3. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION3_Pos (3UL) /*!< Position of REGION3 field. */
#define BPROT_CONFIG_REGION3_Msk (0x1UL << BPROT_CONFIG_REGION3_Pos) /*!< Bit mask of REGION3 field. */
#define BPROT_CONFIG_REGION3_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION3_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 2 : Enable protection for region 2. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION2_Pos (2UL) /*!< Position of REGION2 field. */
#define BPROT_CONFIG_REGION2_Msk (0x1UL << BPROT_CONFIG_REGION2_Pos) /*!< Bit mask of REGION2 field. */
#define BPROT_CONFIG_REGION2_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION2_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 1 : Enable protection for region 1. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION1_Pos (1UL) /*!< Position of REGION1 field. */
#define BPROT_CONFIG_REGION1_Msk (0x1UL << BPROT_CONFIG_REGION1_Pos) /*!< Bit mask of REGION1 field. */
#define BPROT_CONFIG_REGION1_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION1_Enabled (0x1UL) /*!< Enable protection. */

/* Bit 0 : Enable protection for region 0. Writing '0' has no effect. */
#define BPROT_CONFIG_REGION0_Pos (0UL) /*!< Position of REGION0 field. */
#define BPROT_CONFIG_REGION0_Msk (0x1UL << BPROT_CONFIG_REGION0_Pos) /*!< Bit mask of REGION0 field. */
#define BPROT_CONFIG_REGION0_Disabled (0x0UL) /*!< Disable protection. */
#define BPROT_CONFIG_REGION0_Enabled (0x1UL) /*!< Enable protection. */


/* Peripheral: CCM */
/* Description: AES CCM mode encryption */

/* Register: CCM_TASKS_KSGEN */
/* Description: Start generation of keystream. This operation will stop by itself when completed. */

/* Bit 0 : Start generation of keystream. This operation will stop by itself when completed. */
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Pos (0UL) /*!< Position of TASKS_KSGEN field. */
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Msk (0x1UL << CCM_TASKS_KSGEN_TASKS_KSGEN_Pos) /*!< Bit mask of TASKS_KSGEN field. */
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Trigger (0x1UL) /*!< Trigger task */

/* Register: CCM_TASKS_CRYPT */
/* Description: Start encryption/decryption. This operation will stop by itself when completed. */

/* Bit 0 : Start encryption/decryption. This operation will stop by itself when completed. */
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Pos (0UL) /*!< Position of TASKS_CRYPT field. */
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Msk (0x1UL << CCM_TASKS_CRYPT_TASKS_CRYPT_Pos) /*!< Bit mask of TASKS_CRYPT field. */
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Trigger (0x1UL) /*!< Trigger task */

/* Register: CCM_TASKS_STOP */
/* Description: Stop encryption/decryption */

/* Bit 0 : Stop encryption/decryption */
#define CCM_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define CCM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << CCM_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define CCM_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: CCM_TASKS_RATEOVERRIDE */
/* Description: Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */

/* Bit 0 : Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos (0UL) /*!< Position of TASKS_RATEOVERRIDE field. */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Msk (0x1UL << CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos) /*!< Bit mask of TASKS_RATEOVERRIDE field. */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Trigger (0x1UL) /*!< Trigger task */

/* Register: CCM_SUBSCRIBE_KSGEN */
/* Description: Subscribe configuration for task KSGEN */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_KSGEN_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_KSGEN_EN_Msk (0x1UL << CCM_SUBSCRIBE_KSGEN_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_KSGEN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_KSGEN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task KSGEN will subscribe to */
#define CCM_SUBSCRIBE_KSGEN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_KSGEN_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_KSGEN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SUBSCRIBE_CRYPT */
/* Description: Subscribe configuration for task CRYPT */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_CRYPT_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_CRYPT_EN_Msk (0x1UL << CCM_SUBSCRIBE_CRYPT_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_CRYPT_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_CRYPT_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CRYPT will subscribe to */
#define CCM_SUBSCRIBE_CRYPT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_CRYPT_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_CRYPT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_STOP_EN_Msk (0x1UL << CCM_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define CCM_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SUBSCRIBE_RATEOVERRIDE */
/* Description: Subscribe configuration for task RATEOVERRIDE */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Msk (0x1UL << CCM_SUBSCRIBE_RATEOVERRIDE_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RATEOVERRIDE will subscribe to */
#define CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_EVENTS_ENDKSGEN */
/* Description: Keystream generation complete */

/* Bit 0 : Keystream generation complete */
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Pos (0UL) /*!< Position of EVENTS_ENDKSGEN field. */
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Msk (0x1UL << CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Pos) /*!< Bit mask of EVENTS_ENDKSGEN field. */
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_NotGenerated (0x0UL) /*!< Event not generated */
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Generated (0x1UL) /*!< Event generated */

/* Register: CCM_EVENTS_ENDCRYPT */
/* Description: Encrypt/decrypt complete */

/* Bit 0 : Encrypt/decrypt complete */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos (0UL) /*!< Position of EVENTS_ENDCRYPT field. */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Msk (0x1UL << CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos) /*!< Bit mask of EVENTS_ENDCRYPT field. */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_NotGenerated (0x0UL) /*!< Event not generated */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Generated (0x1UL) /*!< Event generated */

/* Register: CCM_EVENTS_ERROR */
/* Description: Deprecated register - CCM error event */

/* Bit 0 : Deprecated field -  CCM error event */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << CCM_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0x0UL) /*!< Event not generated */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Generated (0x1UL) /*!< Event generated */

/* Register: CCM_PUBLISH_ENDKSGEN */
/* Description: Publish configuration for event ENDKSGEN */

/* Bit 31 :   */
#define CCM_PUBLISH_ENDKSGEN_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_PUBLISH_ENDKSGEN_EN_Msk (0x1UL << CCM_PUBLISH_ENDKSGEN_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_PUBLISH_ENDKSGEN_EN_Disabled (0x0UL) /*!< Disable publishing */
#define CCM_PUBLISH_ENDKSGEN_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDKSGEN will publish to */
#define CCM_PUBLISH_ENDKSGEN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_PUBLISH_ENDKSGEN_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ENDKSGEN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_PUBLISH_ENDCRYPT */
/* Description: Publish configuration for event ENDCRYPT */

/* Bit 31 :   */
#define CCM_PUBLISH_ENDCRYPT_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_PUBLISH_ENDCRYPT_EN_Msk (0x1UL << CCM_PUBLISH_ENDCRYPT_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_PUBLISH_ENDCRYPT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define CCM_PUBLISH_ENDCRYPT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDCRYPT will publish to */
#define CCM_PUBLISH_ENDCRYPT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_PUBLISH_ENDCRYPT_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ENDCRYPT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_PUBLISH_ERROR */
/* Description: Deprecated register - Publish configuration for event ERROR */

/* Bit 31 :   */
#define CCM_PUBLISH_ERROR_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_PUBLISH_ERROR_EN_Msk (0x1UL << CCM_PUBLISH_ERROR_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_PUBLISH_ERROR_EN_Disabled (0x0UL) /*!< Disable publishing */
#define CCM_PUBLISH_ERROR_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ERROR will publish to */
#define CCM_PUBLISH_ERROR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_PUBLISH_ERROR_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ERROR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 0 : Shortcut between event ENDKSGEN and task CRYPT */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Pos (0UL) /*!< Position of ENDKSGEN_CRYPT field. */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Msk (0x1UL << CCM_SHORTS_ENDKSGEN_CRYPT_Pos) /*!< Bit mask of ENDKSGEN_CRYPT field. */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Disabled (0x0UL) /*!< Disable shortcut */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: CCM_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Deprecated intsetfield -  Write '1' to enable interrupt for event ERROR */
#define CCM_INTENSET_ERROR_Pos (2UL) /*!< Position of ERROR field. */
#define CCM_INTENSET_ERROR_Msk (0x1UL << CCM_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define CCM_INTENSET_ERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ERROR_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event ENDCRYPT */
#define CCM_INTENSET_ENDCRYPT_Pos (1UL) /*!< Position of ENDCRYPT field. */
#define CCM_INTENSET_ENDCRYPT_Msk (0x1UL << CCM_INTENSET_ENDCRYPT_Pos) /*!< Bit mask of ENDCRYPT field. */
#define CCM_INTENSET_ENDCRYPT_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ENDCRYPT_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ENDCRYPT_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event ENDKSGEN */
#define CCM_INTENSET_ENDKSGEN_Pos (0UL) /*!< Position of ENDKSGEN field. */
#define CCM_INTENSET_ENDKSGEN_Msk (0x1UL << CCM_INTENSET_ENDKSGEN_Pos) /*!< Bit mask of ENDKSGEN field. */
#define CCM_INTENSET_ENDKSGEN_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ENDKSGEN_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ENDKSGEN_Set (0x1UL) /*!< Enable */

/* Register: CCM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Deprecated intclrfield -  Write '1' to disable interrupt for event ERROR */
#define CCM_INTENCLR_ERROR_Pos (2UL) /*!< Position of ERROR field. */
#define CCM_INTENCLR_ERROR_Msk (0x1UL << CCM_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define CCM_INTENCLR_ERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ERROR_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event ENDCRYPT */
#define CCM_INTENCLR_ENDCRYPT_Pos (1UL) /*!< Position of ENDCRYPT field. */
#define CCM_INTENCLR_ENDCRYPT_Msk (0x1UL << CCM_INTENCLR_ENDCRYPT_Pos) /*!< Bit mask of ENDCRYPT field. */
#define CCM_INTENCLR_ENDCRYPT_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ENDCRYPT_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ENDCRYPT_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event ENDKSGEN */
#define CCM_INTENCLR_ENDKSGEN_Pos (0UL) /*!< Position of ENDKSGEN field. */
#define CCM_INTENCLR_ENDKSGEN_Msk (0x1UL << CCM_INTENCLR_ENDKSGEN_Pos) /*!< Bit mask of ENDKSGEN field. */
#define CCM_INTENCLR_ENDKSGEN_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ENDKSGEN_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ENDKSGEN_Clear (0x1UL) /*!< Disable */

/* Register: CCM_MICSTATUS */
/* Description: MIC check result */

/* Bit 0 : The result of the MIC check performed during the previous decryption operation */
#define CCM_MICSTATUS_MICSTATUS_Pos (0UL) /*!< Position of MICSTATUS field. */
#define CCM_MICSTATUS_MICSTATUS_Msk (0x1UL << CCM_MICSTATUS_MICSTATUS_Pos) /*!< Bit mask of MICSTATUS field. */
#define CCM_MICSTATUS_MICSTATUS_CheckFailed (0x0UL) /*!< MIC check failed */
#define CCM_MICSTATUS_MICSTATUS_CheckPassed (0x1UL) /*!< MIC check passed */

/* Register: CCM_ENABLE */
/* Description: Enable */

/* Bits 1..0 : Enable or disable CCM */
#define CCM_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define CCM_ENABLE_ENABLE_Msk (0x3UL << CCM_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define CCM_ENABLE_ENABLE_Disabled (0x0UL) /*!< Disable */
#define CCM_ENABLE_ENABLE_Enabled (0x2UL) /*!< Enable */

/* Register: CCM_MODE */
/* Description: Operation mode */

/* Bit 24 : Packet length configuration */
#define CCM_MODE_LENGTH_Pos (24UL) /*!< Position of LENGTH field. */
#define CCM_MODE_LENGTH_Msk (0x1UL << CCM_MODE_LENGTH_Pos) /*!< Bit mask of LENGTH field. */
#define CCM_MODE_LENGTH_Default (0x0UL) /*!< Default length. Effective length of LENGTH field in encrypted/decrypted packet is 5 bits. A keystream for packet payloads up to 27 bytes will be generated. */
#define CCM_MODE_LENGTH_Extended (0x1UL) /*!< Extended length. Effective length of LENGTH field in encrypted/decrypted packet is 8 bits. A keystream for packet payloads up to MAXPACKETSIZE bytes will be generated. */

/* Bits 17..16 : Radio data rate that the CCM shall run synchronous with */
#define CCM_MODE_DATARATE_Pos (16UL) /*!< Position of DATARATE field. */
#define CCM_MODE_DATARATE_Msk (0x3UL << CCM_MODE_DATARATE_Pos) /*!< Bit mask of DATARATE field. */
#define CCM_MODE_DATARATE_1Mbit (0x0UL) /*!< 1 Mbps */
#define CCM_MODE_DATARATE_2Mbit (0x1UL) /*!< 2 Mbps */
#define CCM_MODE_DATARATE_125Kbps (0x2UL) /*!< 125 Kbps */
#define CCM_MODE_DATARATE_500Kbps (0x3UL) /*!< 500 Kbps */

/* Bits 1..0 : The mode of operation to be used. Settings in this register apply whenever either the KSGEN task or the CRYPT task is triggered. */
#define CCM_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define CCM_MODE_MODE_Msk (0x3UL << CCM_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define CCM_MODE_MODE_Encryption (0x0UL) /*!< AES CCM packet encryption mode */
#define CCM_MODE_MODE_Decryption (0x1UL) /*!< AES CCM packet decryption mode */
#define CCM_MODE_MODE_FastDecryption (0x2UL) /*!< AES fast decrypt mode */

/* Register: CCM_CNFPTR */
/* Description: Pointer to data structure holding the AES key and the NONCE vector */

/* Bits 31..0 : Pointer to the data structure holding the AES key and the CCM NONCE vector (see table CCM data structure overview) */
#define CCM_CNFPTR_CNFPTR_Pos (0UL) /*!< Position of CNFPTR field. */
#define CCM_CNFPTR_CNFPTR_Msk (0xFFFFFFFFUL << CCM_CNFPTR_CNFPTR_Pos) /*!< Bit mask of CNFPTR field. */

/* Register: CCM_INPTR */
/* Description: Input pointer */

/* Bits 31..0 : Input pointer */
#define CCM_INPTR_INPTR_Pos (0UL) /*!< Position of INPTR field. */
#define CCM_INPTR_INPTR_Msk (0xFFFFFFFFUL << CCM_INPTR_INPTR_Pos) /*!< Bit mask of INPTR field. */

/* Register: CCM_OUTPTR */
/* Description: Output pointer */

/* Bits 31..0 : Output pointer */
#define CCM_OUTPTR_OUTPTR_Pos (0UL) /*!< Position of OUTPTR field. */
#define CCM_OUTPTR_OUTPTR_Msk (0xFFFFFFFFUL << CCM_OUTPTR_OUTPTR_Pos) /*!< Bit mask of OUTPTR field. */

/* Register: CCM_SCRATCHPTR */
/* Description: Pointer to data area used for temporary storage */

/* Bits 31..0 : Pointer to a scratch data area used for temporary storage during keystream generation,
        MIC generation and encryption/decryption. */
#define CCM_SCRATCHPTR_SCRATCHPTR_Pos (0UL) /*!< Position of SCRATCHPTR field. */
#define CCM_SCRATCHPTR_SCRATCHPTR_Msk (0xFFFFFFFFUL << CCM_SCRATCHPTR_SCRATCHPTR_Pos) /*!< Bit mask of SCRATCHPTR field. */

/* Register: CCM_MAXPACKETSIZE */
/* Description: Length of keystream generated when MODE.LENGTH = Extended */

/* Bits 7..0 : Length of keystream generated when MODE.LENGTH = Extended. This value must be greater than or equal to the subsequent packet payload to be encrypted/decrypted. */
#define CCM_MAXPACKETSIZE_MAXPACKETSIZE_Pos (0UL) /*!< Position of MAXPACKETSIZE field. */
#define CCM_MAXPACKETSIZE_MAXPACKETSIZE_Msk (0xFFUL << CCM_MAXPACKETSIZE_MAXPACKETSIZE_Pos) /*!< Bit mask of MAXPACKETSIZE field. */

/* Register: CCM_RATEOVERRIDE */
/* Description: Data rate override setting. */

/* Bits 1..0 : Data rate override setting */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Pos (0UL) /*!< Position of RATEOVERRIDE field. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Msk (0x3UL << CCM_RATEOVERRIDE_RATEOVERRIDE_Pos) /*!< Bit mask of RATEOVERRIDE field. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_1Mbit (0x0UL) /*!< 1 Mbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_2Mbit (0x1UL) /*!< 2 Mbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_125Kbps (0x2UL) /*!< 125 Kbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_500Kbps (0x3UL) /*!< 500 Kbps */


/* Peripheral: CLOCK */
/* Description: Clock management */

/* Register: CLOCK_TASKS_HFCLKSTART */
/* Description: Start HFCLK128M/HFCLK64M source as selected in HFCLKSRC */

/* Bit 0 : Start HFCLK128M/HFCLK64M source as selected in HFCLKSRC */
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos (0UL) /*!< Position of TASKS_HFCLKSTART field. */
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Msk (0x1UL << CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos) /*!< Bit mask of TASKS_HFCLKSTART field. */
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: CLOCK_TASKS_HFCLKSTOP */
/* Description: Stop HFCLK128M/HFCLK64M source */

/* Bit 0 : Stop HFCLK128M/HFCLK64M source */
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos (0UL) /*!< Position of TASKS_HFCLKSTOP field. */
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos) /*!< Bit mask of TASKS_HFCLKSTOP field. */
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: CLOCK_TASKS_LFCLKSTART */
/* Description: Start LFCLK source as selected in LFCLKSRC */

/* Bit 0 : Start LFCLK source as selected in LFCLKSRC */
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos (0UL) /*!< Position of TASKS_LFCLKSTART field. */
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Msk (0x1UL << CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos) /*!< Bit mask of TASKS_LFCLKSTART field. */
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: CLOCK_TASKS_LFCLKSTOP */
/* Description: Stop LFCLK source */

/* Bit 0 : Stop LFCLK source */
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos (0UL) /*!< Position of TASKS_LFCLKSTOP field. */
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos) /*!< Bit mask of TASKS_LFCLKSTOP field. */
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: CLOCK_TASKS_CAL */
/* Description: Start calibration of LFRC oscillator */

/* Bit 0 : Start calibration of LFRC oscillator */
#define CLOCK_TASKS_CAL_TASKS_CAL_Pos (0UL) /*!< Position of TASKS_CAL field. */
#define CLOCK_TASKS_CAL_TASKS_CAL_Msk (0x1UL << CLOCK_TASKS_CAL_TASKS_CAL_Pos) /*!< Bit mask of TASKS_CAL field. */
#define CLOCK_TASKS_CAL_TASKS_CAL_Trigger (0x1UL) /*!< Trigger task */

/* Register: CLOCK_SUBSCRIBE_HFCLKSTART */
/* Description: Subscribe configuration for task HFCLKSTART */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_HFCLKSTART_EN_Pos (31UL) /*!< Position of EN field. */
#define CLOCK_SUBSCRIBE_HFCLKSTART_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_HFCLKSTART_EN_Pos) /*!< Bit mask of EN field. */
#define CLOCK_SUBSCRIBE_HFCLKSTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CLOCK_SUBSCRIBE_HFCLKSTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task HFCLKSTART will subscribe to */
#define CLOCK_SUBSCRIBE_HFCLKSTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CLOCK_SUBSCRIBE_HFCLKSTART_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_HFCLKSTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CLOCK_SUBSCRIBE_HFCLKSTOP */
/* Description: Subscribe configuration for task HFCLKSTOP */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_HFCLKSTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define CLOCK_SUBSCRIBE_HFCLKSTOP_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_HFCLKSTOP_EN_Pos) /*!< Bit mask of EN field. */
#define CLOCK_SUBSCRIBE_HFCLKSTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CLOCK_SUBSCRIBE_HFCLKSTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task HFCLKSTOP will subscribe to */
#define CLOCK_SUBSCRIBE_HFCLKSTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CLOCK_SUBSCRIBE_HFCLKSTOP_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_HFCLKSTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CLOCK_SUBSCRIBE_LFCLKSTART */
/* Description: Subscribe configuration for task LFCLKSTART */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_LFCLKSTART_EN_Pos (31UL) /*!< Position of EN field. */
#define CLOCK_SUBSCRIBE_LFCLKSTART_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_LFCLKSTART_EN_Pos) /*!< Bit mask of EN field. */
#define CLOCK_SUBSCRIBE_LFCLKSTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CLOCK_SUBSCRIBE_LFCLKSTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task LFCLKSTART will subscribe to */
#define CLOCK_SUBSCRIBE_LFCLKSTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CLOCK_SUBSCRIBE_LFCLKSTART_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_LFCLKSTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CLOCK_SUBSCRIBE_LFCLKSTOP */
/* Description: Subscribe configuration for task LFCLKSTOP */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_LFCLKSTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define CLOCK_SUBSCRIBE_LFCLKSTOP_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_LFCLKSTOP_EN_Pos) /*!< Bit mask of EN field. */
#define CLOCK_SUBSCRIBE_LFCLKSTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CLOCK_SUBSCRIBE_LFCLKSTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task LFCLKSTOP will subscribe to */
#define CLOCK_SUBSCRIBE_LFCLKSTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CLOCK_SUBSCRIBE_LFCLKSTOP_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_LFCLKSTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CLOCK_SUBSCRIBE_CAL */
/* Description: Subscribe configuration for task CAL */

/* Bit 31 :   */
#define CLOCK_SUBSCRIBE_CAL_EN_Pos (31UL) /*!< Position of EN field. */
#define CLOCK_SUBSCRIBE_CAL_EN_Msk (0x1UL << CLOCK_SUBSCRIBE_CAL_EN_Pos) /*!< Bit mask of EN field. */
#define CLOCK_SUBSCRIBE_CAL_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CLOCK_SUBSCRIBE_CAL_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CAL will subscribe to */
#define CLOCK_SUBSCRIBE_CAL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CLOCK_SUBSCRIBE_CAL_CHIDX_Msk (0xFFUL << CLOCK_SUBSCRIBE_CAL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CLOCK_EVENTS_HFCLKSTARTED */
/* Description: HFCLK source started */

/* Bit 0 : HFCLK source started */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos (0UL) /*!< Position of EVENTS_HFCLKSTARTED field. */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos) /*!< Bit mask of EVENTS_HFCLKSTARTED field. */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_NotGenerated (0x0UL) /*!< Event not generated */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Generated (0x1UL) /*!< Event generated */

/* Register: CLOCK_EVENTS_LFCLKSTARTED */
/* Description: LFCLK source started */

/* Bit 0 : LFCLK source started */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos (0UL) /*!< Position of EVENTS_LFCLKSTARTED field. */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos) /*!< Bit mask of EVENTS_LFCLKSTARTED field. */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_NotGenerated (0x0UL) /*!< Event not generated */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Generated (0x1UL) /*!< Event generated */

/* Register: CLOCK_EVENTS_DONE */
/* Description: Calibration of LFRC oscillator complete event */

/* Bit 0 : Calibration of LFRC oscillator complete event */
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Pos (0UL) /*!< Position of EVENTS_DONE field. */
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << CLOCK_EVENTS_DONE_EVENTS_DONE_Pos) /*!< Bit mask of EVENTS_DONE field. */
#define CLOCK_EVENTS_DONE_EVENTS_DONE_NotGenerated (0x0UL) /*!< Event not generated */
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Generated (0x1UL) /*!< Event generated */

/* Register: CLOCK_PUBLISH_HFCLKSTARTED */
/* Description: Publish configuration for event HFCLKSTARTED */

/* Bit 31 :   */
#define CLOCK_PUBLISH_HFCLKSTARTED_EN_Pos (31UL) /*!< Position of EN field. */
#define CLOCK_PUBLISH_HFCLKSTARTED_EN_Msk (0x1UL << CLOCK_PUBLISH_HFCLKSTARTED_EN_Pos) /*!< Bit mask of EN field. */
#define CLOCK_PUBLISH_HFCLKSTARTED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define CLOCK_PUBLISH_HFCLKSTARTED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event HFCLKSTARTED will publish to */
#define CLOCK_PUBLISH_HFCLKSTARTED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CLOCK_PUBLISH_HFCLKSTARTED_CHIDX_Msk (0xFFUL << CLOCK_PUBLISH_HFCLKSTARTED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CLOCK_PUBLISH_LFCLKSTARTED */
/* Description: Publish configuration for event LFCLKSTARTED */

/* Bit 31 :   */
#define CLOCK_PUBLISH_LFCLKSTARTED_EN_Pos (31UL) /*!< Position of EN field. */
#define CLOCK_PUBLISH_LFCLKSTARTED_EN_Msk (0x1UL << CLOCK_PUBLISH_LFCLKSTARTED_EN_Pos) /*!< Bit mask of EN field. */
#define CLOCK_PUBLISH_LFCLKSTARTED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define CLOCK_PUBLISH_LFCLKSTARTED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event LFCLKSTARTED will publish to */
#define CLOCK_PUBLISH_LFCLKSTARTED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CLOCK_PUBLISH_LFCLKSTARTED_CHIDX_Msk (0xFFUL << CLOCK_PUBLISH_LFCLKSTARTED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CLOCK_PUBLISH_DONE */
/* Description: Publish configuration for event DONE */

/* Bit 31 :   */
#define CLOCK_PUBLISH_DONE_EN_Pos (31UL) /*!< Position of EN field. */
#define CLOCK_PUBLISH_DONE_EN_Msk (0x1UL << CLOCK_PUBLISH_DONE_EN_Pos) /*!< Bit mask of EN field. */
#define CLOCK_PUBLISH_DONE_EN_Disabled (0x0UL) /*!< Disable publishing */
#define CLOCK_PUBLISH_DONE_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DONE will publish to */
#define CLOCK_PUBLISH_DONE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CLOCK_PUBLISH_DONE_CHIDX_Msk (0xFFUL << CLOCK_PUBLISH_DONE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CLOCK_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 7 : Enable or disable interrupt for event DONE */
#define CLOCK_INTEN_DONE_Pos (7UL) /*!< Position of DONE field. */
#define CLOCK_INTEN_DONE_Msk (0x1UL << CLOCK_INTEN_DONE_Pos) /*!< Bit mask of DONE field. */
#define CLOCK_INTEN_DONE_Disabled (0x0UL) /*!< Disable */
#define CLOCK_INTEN_DONE_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event LFCLKSTARTED */
#define CLOCK_INTEN_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTEN_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTEN_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTEN_LFCLKSTARTED_Disabled (0x0UL) /*!< Disable */
#define CLOCK_INTEN_LFCLKSTARTED_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event HFCLKSTARTED */
#define CLOCK_INTEN_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTEN_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTEN_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTEN_HFCLKSTARTED_Disabled (0x0UL) /*!< Disable */
#define CLOCK_INTEN_HFCLKSTARTED_Enabled (0x1UL) /*!< Enable */

/* Register: CLOCK_INTENSET */
/* Description: Enable interrupt */

/* Bit 7 : Write '1' to enable interrupt for event DONE */
#define CLOCK_INTENSET_DONE_Pos (7UL) /*!< Position of DONE field. */
#define CLOCK_INTENSET_DONE_Msk (0x1UL << CLOCK_INTENSET_DONE_Pos) /*!< Bit mask of DONE field. */
#define CLOCK_INTENSET_DONE_Disabled (0x0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_DONE_Enabled (0x1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_DONE_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event LFCLKSTARTED */
#define CLOCK_INTENSET_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTENSET_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTENSET_LFCLKSTARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_LFCLKSTARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_LFCLKSTARTED_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event HFCLKSTARTED */
#define CLOCK_INTENSET_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTENSET_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTENSET_HFCLKSTARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_HFCLKSTARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_HFCLKSTARTED_Set (0x1UL) /*!< Enable */

/* Register: CLOCK_INTENCLR */
/* Description: Disable interrupt */

/* Bit 7 : Write '1' to disable interrupt for event DONE */
#define CLOCK_INTENCLR_DONE_Pos (7UL) /*!< Position of DONE field. */
#define CLOCK_INTENCLR_DONE_Msk (0x1UL << CLOCK_INTENCLR_DONE_Pos) /*!< Bit mask of DONE field. */
#define CLOCK_INTENCLR_DONE_Disabled (0x0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_DONE_Enabled (0x1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_DONE_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event LFCLKSTARTED */
#define CLOCK_INTENCLR_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTENCLR_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTENCLR_LFCLKSTARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_LFCLKSTARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_LFCLKSTARTED_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event HFCLKSTARTED */
#define CLOCK_INTENCLR_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTENCLR_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTENCLR_HFCLKSTARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_HFCLKSTARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_HFCLKSTARTED_Clear (0x1UL) /*!< Disable */

/* Register: CLOCK_INTPEND */
/* Description: Pending interrupts */

/* Bit 7 : Read pending status of interrupt for event DONE */
#define CLOCK_INTPEND_DONE_Pos (7UL) /*!< Position of DONE field. */
#define CLOCK_INTPEND_DONE_Msk (0x1UL << CLOCK_INTPEND_DONE_Pos) /*!< Bit mask of DONE field. */
#define CLOCK_INTPEND_DONE_NotPending (0x0UL) /*!< Read: Not pending */
#define CLOCK_INTPEND_DONE_Pending (0x1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event LFCLKSTARTED */
#define CLOCK_INTPEND_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTPEND_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTPEND_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTPEND_LFCLKSTARTED_NotPending (0x0UL) /*!< Read: Not pending */
#define CLOCK_INTPEND_LFCLKSTARTED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event HFCLKSTARTED */
#define CLOCK_INTPEND_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTPEND_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTPEND_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTPEND_HFCLKSTARTED_NotPending (0x0UL) /*!< Read: Not pending */
#define CLOCK_INTPEND_HFCLKSTARTED_Pending (0x1UL) /*!< Read: Pending */

/* Register: CLOCK_HFCLKRUN */
/* Description: Status indicating that HFCLKSTART task has been triggered */

/* Bit 0 : HFCLKSTART task triggered or not */
#define CLOCK_HFCLKRUN_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define CLOCK_HFCLKRUN_STATUS_Msk (0x1UL << CLOCK_HFCLKRUN_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define CLOCK_HFCLKRUN_STATUS_NotTriggered (0x0UL) /*!< Task not triggered */
#define CLOCK_HFCLKRUN_STATUS_Triggered (0x1UL) /*!< Task triggered */

/* Register: CLOCK_HFCLKSTAT */
/* Description: Status indicating which HFCLK128M/HFCLK64M source is running Note: Value of this register in any CLOCK instance reflects status only due to configurations/actions in that CLOCK instance. */

/* Bit 16 : HFCLK state */
#define CLOCK_HFCLKSTAT_STATE_Pos (16UL) /*!< Position of STATE field. */
#define CLOCK_HFCLKSTAT_STATE_Msk (0x1UL << CLOCK_HFCLKSTAT_STATE_Pos) /*!< Bit mask of STATE field. */
#define CLOCK_HFCLKSTAT_STATE_NotRunning (0x0UL) /*!< HFCLK not running */
#define CLOCK_HFCLKSTAT_STATE_Running (0x1UL) /*!< HFCLK running */

/* Bit 4 : ALWAYSRUN activated */
#define CLOCK_HFCLKSTAT_ALWAYSRUNNING_Pos (4UL) /*!< Position of ALWAYSRUNNING field. */
#define CLOCK_HFCLKSTAT_ALWAYSRUNNING_Msk (0x1UL << CLOCK_HFCLKSTAT_ALWAYSRUNNING_Pos) /*!< Bit mask of ALWAYSRUNNING field. */
#define CLOCK_HFCLKSTAT_ALWAYSRUNNING_NotRunning (0x0UL) /*!< Automatic clock control enabled */
#define CLOCK_HFCLKSTAT_ALWAYSRUNNING_Running (0x1UL) /*!< Oscillator is always running */

/* Bit 0 : Active clock source */
#define CLOCK_HFCLKSTAT_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_HFCLKSTAT_SRC_Msk (0x1UL << CLOCK_HFCLKSTAT_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_HFCLKSTAT_SRC_HFINT (0x0UL) /*!< Clock source: HFINT - 128 MHz on-chip oscillator */
#define CLOCK_HFCLKSTAT_SRC_HFXO (0x1UL) /*!< Clock source: HFXO - 128 MHz clock derived from external 32 MHz crystal oscillator */

/* Register: CLOCK_LFCLKRUN */
/* Description: Status indicating that LFCLKSTART task has been triggered */

/* Bit 0 : LFCLKSTART task triggered or not */
#define CLOCK_LFCLKRUN_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define CLOCK_LFCLKRUN_STATUS_Msk (0x1UL << CLOCK_LFCLKRUN_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define CLOCK_LFCLKRUN_STATUS_NotTriggered (0x0UL) /*!< Task not triggered */
#define CLOCK_LFCLKRUN_STATUS_Triggered (0x1UL) /*!< Task triggered */

/* Register: CLOCK_LFCLKSTAT */
/* Description: Status indicating which LFCLK source is running Note: Value of this register in any CLOCK instance reflects status only due to configurations/actions in that CLOCK instance. */

/* Bit 16 : LFCLK state */
#define CLOCK_LFCLKSTAT_STATE_Pos (16UL) /*!< Position of STATE field. */
#define CLOCK_LFCLKSTAT_STATE_Msk (0x1UL << CLOCK_LFCLKSTAT_STATE_Pos) /*!< Bit mask of STATE field. */
#define CLOCK_LFCLKSTAT_STATE_NotRunning (0x0UL) /*!< LFCLK not running */
#define CLOCK_LFCLKSTAT_STATE_Running (0x1UL) /*!< LFCLK running */

/* Bit 4 : ALWAYSRUN activated */
#define CLOCK_LFCLKSTAT_ALWAYSRUNNING_Pos (4UL) /*!< Position of ALWAYSRUNNING field. */
#define CLOCK_LFCLKSTAT_ALWAYSRUNNING_Msk (0x1UL << CLOCK_LFCLKSTAT_ALWAYSRUNNING_Pos) /*!< Bit mask of ALWAYSRUNNING field. */
#define CLOCK_LFCLKSTAT_ALWAYSRUNNING_NotRunning (0x0UL) /*!< Automatic clock control enabled */
#define CLOCK_LFCLKSTAT_ALWAYSRUNNING_Running (0x1UL) /*!< Oscillator is always running */

/* Bits 1..0 : Active clock source */
#define CLOCK_LFCLKSTAT_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_LFCLKSTAT_SRC_Msk (0x3UL << CLOCK_LFCLKSTAT_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_LFCLKSTAT_SRC_LFULP (0x0UL) /*!< 32.768 kHz ultra-low power RC oscillator */
#define CLOCK_LFCLKSTAT_SRC_LFRC (0x1UL) /*!< 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSTAT_SRC_LFXO (0x2UL) /*!< 32.768 kHz crystal oscillator */
#define CLOCK_LFCLKSTAT_SRC_LFSYNT (0x3UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: CLOCK_LFCLKSRCCOPY */
/* Description: Copy of LFCLKSRC register, set when LFCLKSTART task was triggered */

/* Bits 1..0 : Clock source */
#define CLOCK_LFCLKSRCCOPY_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_LFCLKSRCCOPY_SRC_Msk (0x3UL << CLOCK_LFCLKSRCCOPY_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_LFCLKSRCCOPY_SRC_LFULP (0x0UL) /*!< 32.768 kHz ultra-low power RC oscillator */
#define CLOCK_LFCLKSRCCOPY_SRC_LFRC (0x1UL) /*!< 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSRCCOPY_SRC_LFXO (0x2UL) /*!< 32.768 kHz crystal oscillator */
#define CLOCK_LFCLKSRCCOPY_SRC_LFSYNT (0x3UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: CLOCK_HFCLKCURRFREQ */
/* Description: Current frequency of HFCLK */

/* Bits 1..0 : Current high frequency clock (HCLK) frequency */
#define CLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Pos (0UL) /*!< Position of HFCLKCURRFREQ field. */
#define CLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Msk (0x3UL << CLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Pos) /*!< Bit mask of HFCLKCURRFREQ field. */
#define CLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Div1 (0x0UL) /*!< HFCLK divided by 1 */

/* Register: CLOCK_HFCLKSRC */
/* Description: Clock source for HFCLK */

/* Bit 0 : Select which HFCLK source is started by the HFCLKSTART task */
#define CLOCK_HFCLKSRC_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_HFCLKSRC_SRC_Msk (0x1UL << CLOCK_HFCLKSRC_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_HFCLKSRC_SRC_HFINT (0x0UL) /*!< HFCLKSTART task starts HFINT oscillator */
#define CLOCK_HFCLKSRC_SRC_HFXO (0x1UL) /*!< HFCLKSTART task starts HFXO oscillator */

/* Register: CLOCK_LFCLKSRC */
/* Description: Clock source for LFCLK */

/* Bits 1..0 : Select which LFCLK source is started by the LFCLKSTART task */
#define CLOCK_LFCLKSRC_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_LFCLKSRC_SRC_Msk (0x3UL << CLOCK_LFCLKSRC_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_LFCLKSRC_SRC_LFULP (0x0UL) /*!< 32.768 kHz ultra-low power RC oscillator */
#define CLOCK_LFCLKSRC_SRC_LFRC (0x1UL) /*!< 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSRC_SRC_LFXO (0x2UL) /*!< 32.768 kHz crystal oscillator */
#define CLOCK_LFCLKSRC_SRC_LFSYNT (0x3UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: CLOCK_HFCLKCTRL */
/* Description: HFCLK frequency configuration */

/* Bits 1..0 : High frequency clock HCLK */
#define CLOCK_HFCLKCTRL_HCLK_Pos (0UL) /*!< Position of HCLK field. */
#define CLOCK_HFCLKCTRL_HCLK_Msk (0x3UL << CLOCK_HFCLKCTRL_HCLK_Pos) /*!< Bit mask of HCLK field. */
#define CLOCK_HFCLKCTRL_HCLK_Div1 (0x0UL) /*!< Divide HFCLK by 1 */

/* Register: CLOCK_HFCLKALWAYSRUN */
/* Description: Automatic or manual control of HFCLK */

/* Bit 0 : Ensure clock is always running */
#define CLOCK_HFCLKALWAYSRUN_ALWAYSRUN_Pos (0UL) /*!< Position of ALWAYSRUN field. */
#define CLOCK_HFCLKALWAYSRUN_ALWAYSRUN_Msk (0x1UL << CLOCK_HFCLKALWAYSRUN_ALWAYSRUN_Pos) /*!< Bit mask of ALWAYSRUN field. */
#define CLOCK_HFCLKALWAYSRUN_ALWAYSRUN_Automatic (0x0UL) /*!< Use automatic clock control */
#define CLOCK_HFCLKALWAYSRUN_ALWAYSRUN_AlwaysRun (0x1UL) /*!< Ensure clock is always running */

/* Register: CLOCK_LFCLKALWAYSRUN */
/* Description: Automatic or manual control of LFCLK */

/* Bit 0 : Ensure clock is always running */
#define CLOCK_LFCLKALWAYSRUN_ALWAYSRUN_Pos (0UL) /*!< Position of ALWAYSRUN field. */
#define CLOCK_LFCLKALWAYSRUN_ALWAYSRUN_Msk (0x1UL << CLOCK_LFCLKALWAYSRUN_ALWAYSRUN_Pos) /*!< Bit mask of ALWAYSRUN field. */
#define CLOCK_LFCLKALWAYSRUN_ALWAYSRUN_Automatic (0x0UL) /*!< Use automatic clock control */
#define CLOCK_LFCLKALWAYSRUN_ALWAYSRUN_AlwaysRun (0x1UL) /*!< Ensure clock is always running */


/* Peripheral: DPPIC */
/* Description: Distributed programmable peripheral interconnect controller */

/* Register: DPPIC_TASKS_CHG_EN */
/* Description: Description cluster: Enable channel group n */

/* Bit 0 : Enable channel group n */
#define DPPIC_TASKS_CHG_EN_EN_Pos (0UL) /*!< Position of EN field. */
#define DPPIC_TASKS_CHG_EN_EN_Msk (0x1UL << DPPIC_TASKS_CHG_EN_EN_Pos) /*!< Bit mask of EN field. */
#define DPPIC_TASKS_CHG_EN_EN_Trigger (0x1UL) /*!< Trigger task */

/* Register: DPPIC_TASKS_CHG_DIS */
/* Description: Description cluster: Disable channel group n */

/* Bit 0 : Disable channel group n */
#define DPPIC_TASKS_CHG_DIS_DIS_Pos (0UL) /*!< Position of DIS field. */
#define DPPIC_TASKS_CHG_DIS_DIS_Msk (0x1UL << DPPIC_TASKS_CHG_DIS_DIS_Pos) /*!< Bit mask of DIS field. */
#define DPPIC_TASKS_CHG_DIS_DIS_Trigger (0x1UL) /*!< Trigger task */

/* Register: DPPIC_SUBSCRIBE_CHG_EN */
/* Description: Description cluster: Subscribe configuration for task CHG[n].EN */

/* Bit 31 :   */
#define DPPIC_SUBSCRIBE_CHG_EN_EN_Pos (31UL) /*!< Position of EN field. */
#define DPPIC_SUBSCRIBE_CHG_EN_EN_Msk (0x1UL << DPPIC_SUBSCRIBE_CHG_EN_EN_Pos) /*!< Bit mask of EN field. */
#define DPPIC_SUBSCRIBE_CHG_EN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define DPPIC_SUBSCRIBE_CHG_EN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CHG[n].EN will subscribe to */
#define DPPIC_SUBSCRIBE_CHG_EN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define DPPIC_SUBSCRIBE_CHG_EN_CHIDX_Msk (0xFFUL << DPPIC_SUBSCRIBE_CHG_EN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: DPPIC_SUBSCRIBE_CHG_DIS */
/* Description: Description cluster: Subscribe configuration for task CHG[n].DIS */

/* Bit 31 :   */
#define DPPIC_SUBSCRIBE_CHG_DIS_EN_Pos (31UL) /*!< Position of EN field. */
#define DPPIC_SUBSCRIBE_CHG_DIS_EN_Msk (0x1UL << DPPIC_SUBSCRIBE_CHG_DIS_EN_Pos) /*!< Bit mask of EN field. */
#define DPPIC_SUBSCRIBE_CHG_DIS_EN_Disabled (0x0UL) /*!< Disable subscription */
#define DPPIC_SUBSCRIBE_CHG_DIS_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CHG[n].DIS will subscribe to */
#define DPPIC_SUBSCRIBE_CHG_DIS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define DPPIC_SUBSCRIBE_CHG_DIS_CHIDX_Msk (0xFFUL << DPPIC_SUBSCRIBE_CHG_DIS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: DPPIC_CHEN */
/* Description: Channel enable register */

/* Bit 15 : Enable or disable channel 15 */
#define DPPIC_CHEN_CH15_Pos (15UL) /*!< Position of CH15 field. */
#define DPPIC_CHEN_CH15_Msk (0x1UL << DPPIC_CHEN_CH15_Pos) /*!< Bit mask of CH15 field. */
#define DPPIC_CHEN_CH15_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH15_Enabled (0x1UL) /*!< Enable channel */

/* Bit 14 : Enable or disable channel 14 */
#define DPPIC_CHEN_CH14_Pos (14UL) /*!< Position of CH14 field. */
#define DPPIC_CHEN_CH14_Msk (0x1UL << DPPIC_CHEN_CH14_Pos) /*!< Bit mask of CH14 field. */
#define DPPIC_CHEN_CH14_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH14_Enabled (0x1UL) /*!< Enable channel */

/* Bit 13 : Enable or disable channel 13 */
#define DPPIC_CHEN_CH13_Pos (13UL) /*!< Position of CH13 field. */
#define DPPIC_CHEN_CH13_Msk (0x1UL << DPPIC_CHEN_CH13_Pos) /*!< Bit mask of CH13 field. */
#define DPPIC_CHEN_CH13_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH13_Enabled (0x1UL) /*!< Enable channel */

/* Bit 12 : Enable or disable channel 12 */
#define DPPIC_CHEN_CH12_Pos (12UL) /*!< Position of CH12 field. */
#define DPPIC_CHEN_CH12_Msk (0x1UL << DPPIC_CHEN_CH12_Pos) /*!< Bit mask of CH12 field. */
#define DPPIC_CHEN_CH12_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH12_Enabled (0x1UL) /*!< Enable channel */

/* Bit 11 : Enable or disable channel 11 */
#define DPPIC_CHEN_CH11_Pos (11UL) /*!< Position of CH11 field. */
#define DPPIC_CHEN_CH11_Msk (0x1UL << DPPIC_CHEN_CH11_Pos) /*!< Bit mask of CH11 field. */
#define DPPIC_CHEN_CH11_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH11_Enabled (0x1UL) /*!< Enable channel */

/* Bit 10 : Enable or disable channel 10 */
#define DPPIC_CHEN_CH10_Pos (10UL) /*!< Position of CH10 field. */
#define DPPIC_CHEN_CH10_Msk (0x1UL << DPPIC_CHEN_CH10_Pos) /*!< Bit mask of CH10 field. */
#define DPPIC_CHEN_CH10_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH10_Enabled (0x1UL) /*!< Enable channel */

/* Bit 9 : Enable or disable channel 9 */
#define DPPIC_CHEN_CH9_Pos (9UL) /*!< Position of CH9 field. */
#define DPPIC_CHEN_CH9_Msk (0x1UL << DPPIC_CHEN_CH9_Pos) /*!< Bit mask of CH9 field. */
#define DPPIC_CHEN_CH9_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH9_Enabled (0x1UL) /*!< Enable channel */

/* Bit 8 : Enable or disable channel 8 */
#define DPPIC_CHEN_CH8_Pos (8UL) /*!< Position of CH8 field. */
#define DPPIC_CHEN_CH8_Msk (0x1UL << DPPIC_CHEN_CH8_Pos) /*!< Bit mask of CH8 field. */
#define DPPIC_CHEN_CH8_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH8_Enabled (0x1UL) /*!< Enable channel */

/* Bit 7 : Enable or disable channel 7 */
#define DPPIC_CHEN_CH7_Pos (7UL) /*!< Position of CH7 field. */
#define DPPIC_CHEN_CH7_Msk (0x1UL << DPPIC_CHEN_CH7_Pos) /*!< Bit mask of CH7 field. */
#define DPPIC_CHEN_CH7_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH7_Enabled (0x1UL) /*!< Enable channel */

/* Bit 6 : Enable or disable channel 6 */
#define DPPIC_CHEN_CH6_Pos (6UL) /*!< Position of CH6 field. */
#define DPPIC_CHEN_CH6_Msk (0x1UL << DPPIC_CHEN_CH6_Pos) /*!< Bit mask of CH6 field. */
#define DPPIC_CHEN_CH6_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH6_Enabled (0x1UL) /*!< Enable channel */

/* Bit 5 : Enable or disable channel 5 */
#define DPPIC_CHEN_CH5_Pos (5UL) /*!< Position of CH5 field. */
#define DPPIC_CHEN_CH5_Msk (0x1UL << DPPIC_CHEN_CH5_Pos) /*!< Bit mask of CH5 field. */
#define DPPIC_CHEN_CH5_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH5_Enabled (0x1UL) /*!< Enable channel */

/* Bit 4 : Enable or disable channel 4 */
#define DPPIC_CHEN_CH4_Pos (4UL) /*!< Position of CH4 field. */
#define DPPIC_CHEN_CH4_Msk (0x1UL << DPPIC_CHEN_CH4_Pos) /*!< Bit mask of CH4 field. */
#define DPPIC_CHEN_CH4_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH4_Enabled (0x1UL) /*!< Enable channel */

/* Bit 3 : Enable or disable channel 3 */
#define DPPIC_CHEN_CH3_Pos (3UL) /*!< Position of CH3 field. */
#define DPPIC_CHEN_CH3_Msk (0x1UL << DPPIC_CHEN_CH3_Pos) /*!< Bit mask of CH3 field. */
#define DPPIC_CHEN_CH3_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH3_Enabled (0x1UL) /*!< Enable channel */

/* Bit 2 : Enable or disable channel 2 */
#define DPPIC_CHEN_CH2_Pos (2UL) /*!< Position of CH2 field. */
#define DPPIC_CHEN_CH2_Msk (0x1UL << DPPIC_CHEN_CH2_Pos) /*!< Bit mask of CH2 field. */
#define DPPIC_CHEN_CH2_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH2_Enabled (0x1UL) /*!< Enable channel */

/* Bit 1 : Enable or disable channel 1 */
#define DPPIC_CHEN_CH1_Pos (1UL) /*!< Position of CH1 field. */
#define DPPIC_CHEN_CH1_Msk (0x1UL << DPPIC_CHEN_CH1_Pos) /*!< Bit mask of CH1 field. */
#define DPPIC_CHEN_CH1_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH1_Enabled (0x1UL) /*!< Enable channel */

/* Bit 0 : Enable or disable channel 0 */
#define DPPIC_CHEN_CH0_Pos (0UL) /*!< Position of CH0 field. */
#define DPPIC_CHEN_CH0_Msk (0x1UL << DPPIC_CHEN_CH0_Pos) /*!< Bit mask of CH0 field. */
#define DPPIC_CHEN_CH0_Disabled (0x0UL) /*!< Disable channel */
#define DPPIC_CHEN_CH0_Enabled (0x1UL) /*!< Enable channel */

/* Register: DPPIC_CHENSET */
/* Description: Channel enable set register */

/* Bit 15 : Channel 15 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH15_Pos (15UL) /*!< Position of CH15 field. */
#define DPPIC_CHENSET_CH15_Msk (0x1UL << DPPIC_CHENSET_CH15_Pos) /*!< Bit mask of CH15 field. */
#define DPPIC_CHENSET_CH15_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH15_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH15_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 14 : Channel 14 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH14_Pos (14UL) /*!< Position of CH14 field. */
#define DPPIC_CHENSET_CH14_Msk (0x1UL << DPPIC_CHENSET_CH14_Pos) /*!< Bit mask of CH14 field. */
#define DPPIC_CHENSET_CH14_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH14_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH14_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 13 : Channel 13 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH13_Pos (13UL) /*!< Position of CH13 field. */
#define DPPIC_CHENSET_CH13_Msk (0x1UL << DPPIC_CHENSET_CH13_Pos) /*!< Bit mask of CH13 field. */
#define DPPIC_CHENSET_CH13_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH13_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH13_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 12 : Channel 12 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH12_Pos (12UL) /*!< Position of CH12 field. */
#define DPPIC_CHENSET_CH12_Msk (0x1UL << DPPIC_CHENSET_CH12_Pos) /*!< Bit mask of CH12 field. */
#define DPPIC_CHENSET_CH12_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH12_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH12_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 11 : Channel 11 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH11_Pos (11UL) /*!< Position of CH11 field. */
#define DPPIC_CHENSET_CH11_Msk (0x1UL << DPPIC_CHENSET_CH11_Pos) /*!< Bit mask of CH11 field. */
#define DPPIC_CHENSET_CH11_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH11_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH11_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 10 : Channel 10 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH10_Pos (10UL) /*!< Position of CH10 field. */
#define DPPIC_CHENSET_CH10_Msk (0x1UL << DPPIC_CHENSET_CH10_Pos) /*!< Bit mask of CH10 field. */
#define DPPIC_CHENSET_CH10_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH10_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH10_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 9 : Channel 9 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH9_Pos (9UL) /*!< Position of CH9 field. */
#define DPPIC_CHENSET_CH9_Msk (0x1UL << DPPIC_CHENSET_CH9_Pos) /*!< Bit mask of CH9 field. */
#define DPPIC_CHENSET_CH9_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH9_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH9_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 8 : Channel 8 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH8_Pos (8UL) /*!< Position of CH8 field. */
#define DPPIC_CHENSET_CH8_Msk (0x1UL << DPPIC_CHENSET_CH8_Pos) /*!< Bit mask of CH8 field. */
#define DPPIC_CHENSET_CH8_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH8_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH8_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 7 : Channel 7 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH7_Pos (7UL) /*!< Position of CH7 field. */
#define DPPIC_CHENSET_CH7_Msk (0x1UL << DPPIC_CHENSET_CH7_Pos) /*!< Bit mask of CH7 field. */
#define DPPIC_CHENSET_CH7_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH7_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH7_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 6 : Channel 6 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH6_Pos (6UL) /*!< Position of CH6 field. */
#define DPPIC_CHENSET_CH6_Msk (0x1UL << DPPIC_CHENSET_CH6_Pos) /*!< Bit mask of CH6 field. */
#define DPPIC_CHENSET_CH6_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH6_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH6_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 5 : Channel 5 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH5_Pos (5UL) /*!< Position of CH5 field. */
#define DPPIC_CHENSET_CH5_Msk (0x1UL << DPPIC_CHENSET_CH5_Pos) /*!< Bit mask of CH5 field. */
#define DPPIC_CHENSET_CH5_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH5_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH5_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 4 : Channel 4 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH4_Pos (4UL) /*!< Position of CH4 field. */
#define DPPIC_CHENSET_CH4_Msk (0x1UL << DPPIC_CHENSET_CH4_Pos) /*!< Bit mask of CH4 field. */
#define DPPIC_CHENSET_CH4_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH4_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH4_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 3 : Channel 3 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH3_Pos (3UL) /*!< Position of CH3 field. */
#define DPPIC_CHENSET_CH3_Msk (0x1UL << DPPIC_CHENSET_CH3_Pos) /*!< Bit mask of CH3 field. */
#define DPPIC_CHENSET_CH3_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH3_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH3_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 2 : Channel 2 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH2_Pos (2UL) /*!< Position of CH2 field. */
#define DPPIC_CHENSET_CH2_Msk (0x1UL << DPPIC_CHENSET_CH2_Pos) /*!< Bit mask of CH2 field. */
#define DPPIC_CHENSET_CH2_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH2_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH2_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 1 : Channel 1 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH1_Pos (1UL) /*!< Position of CH1 field. */
#define DPPIC_CHENSET_CH1_Msk (0x1UL << DPPIC_CHENSET_CH1_Pos) /*!< Bit mask of CH1 field. */
#define DPPIC_CHENSET_CH1_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH1_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH1_Set (0x1UL) /*!< Write: Enable channel */

/* Bit 0 : Channel 0 enable set register. Writing 0 has no effect. */
#define DPPIC_CHENSET_CH0_Pos (0UL) /*!< Position of CH0 field. */
#define DPPIC_CHENSET_CH0_Msk (0x1UL << DPPIC_CHENSET_CH0_Pos) /*!< Bit mask of CH0 field. */
#define DPPIC_CHENSET_CH0_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENSET_CH0_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENSET_CH0_Set (0x1UL) /*!< Write: Enable channel */

/* Register: DPPIC_CHENCLR */
/* Description: Channel enable clear register */

/* Bit 15 : Channel 15 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH15_Pos (15UL) /*!< Position of CH15 field. */
#define DPPIC_CHENCLR_CH15_Msk (0x1UL << DPPIC_CHENCLR_CH15_Pos) /*!< Bit mask of CH15 field. */
#define DPPIC_CHENCLR_CH15_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH15_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH15_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 14 : Channel 14 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH14_Pos (14UL) /*!< Position of CH14 field. */
#define DPPIC_CHENCLR_CH14_Msk (0x1UL << DPPIC_CHENCLR_CH14_Pos) /*!< Bit mask of CH14 field. */
#define DPPIC_CHENCLR_CH14_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH14_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH14_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 13 : Channel 13 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH13_Pos (13UL) /*!< Position of CH13 field. */
#define DPPIC_CHENCLR_CH13_Msk (0x1UL << DPPIC_CHENCLR_CH13_Pos) /*!< Bit mask of CH13 field. */
#define DPPIC_CHENCLR_CH13_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH13_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH13_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 12 : Channel 12 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH12_Pos (12UL) /*!< Position of CH12 field. */
#define DPPIC_CHENCLR_CH12_Msk (0x1UL << DPPIC_CHENCLR_CH12_Pos) /*!< Bit mask of CH12 field. */
#define DPPIC_CHENCLR_CH12_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH12_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH12_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 11 : Channel 11 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH11_Pos (11UL) /*!< Position of CH11 field. */
#define DPPIC_CHENCLR_CH11_Msk (0x1UL << DPPIC_CHENCLR_CH11_Pos) /*!< Bit mask of CH11 field. */
#define DPPIC_CHENCLR_CH11_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH11_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH11_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 10 : Channel 10 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH10_Pos (10UL) /*!< Position of CH10 field. */
#define DPPIC_CHENCLR_CH10_Msk (0x1UL << DPPIC_CHENCLR_CH10_Pos) /*!< Bit mask of CH10 field. */
#define DPPIC_CHENCLR_CH10_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH10_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH10_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 9 : Channel 9 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH9_Pos (9UL) /*!< Position of CH9 field. */
#define DPPIC_CHENCLR_CH9_Msk (0x1UL << DPPIC_CHENCLR_CH9_Pos) /*!< Bit mask of CH9 field. */
#define DPPIC_CHENCLR_CH9_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH9_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH9_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 8 : Channel 8 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH8_Pos (8UL) /*!< Position of CH8 field. */
#define DPPIC_CHENCLR_CH8_Msk (0x1UL << DPPIC_CHENCLR_CH8_Pos) /*!< Bit mask of CH8 field. */
#define DPPIC_CHENCLR_CH8_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH8_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH8_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 7 : Channel 7 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH7_Pos (7UL) /*!< Position of CH7 field. */
#define DPPIC_CHENCLR_CH7_Msk (0x1UL << DPPIC_CHENCLR_CH7_Pos) /*!< Bit mask of CH7 field. */
#define DPPIC_CHENCLR_CH7_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH7_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH7_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 6 : Channel 6 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH6_Pos (6UL) /*!< Position of CH6 field. */
#define DPPIC_CHENCLR_CH6_Msk (0x1UL << DPPIC_CHENCLR_CH6_Pos) /*!< Bit mask of CH6 field. */
#define DPPIC_CHENCLR_CH6_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH6_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH6_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 5 : Channel 5 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH5_Pos (5UL) /*!< Position of CH5 field. */
#define DPPIC_CHENCLR_CH5_Msk (0x1UL << DPPIC_CHENCLR_CH5_Pos) /*!< Bit mask of CH5 field. */
#define DPPIC_CHENCLR_CH5_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH5_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH5_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 4 : Channel 4 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH4_Pos (4UL) /*!< Position of CH4 field. */
#define DPPIC_CHENCLR_CH4_Msk (0x1UL << DPPIC_CHENCLR_CH4_Pos) /*!< Bit mask of CH4 field. */
#define DPPIC_CHENCLR_CH4_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH4_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH4_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 3 : Channel 3 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH3_Pos (3UL) /*!< Position of CH3 field. */
#define DPPIC_CHENCLR_CH3_Msk (0x1UL << DPPIC_CHENCLR_CH3_Pos) /*!< Bit mask of CH3 field. */
#define DPPIC_CHENCLR_CH3_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH3_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH3_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 2 : Channel 2 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH2_Pos (2UL) /*!< Position of CH2 field. */
#define DPPIC_CHENCLR_CH2_Msk (0x1UL << DPPIC_CHENCLR_CH2_Pos) /*!< Bit mask of CH2 field. */
#define DPPIC_CHENCLR_CH2_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH2_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH2_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 1 : Channel 1 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH1_Pos (1UL) /*!< Position of CH1 field. */
#define DPPIC_CHENCLR_CH1_Msk (0x1UL << DPPIC_CHENCLR_CH1_Pos) /*!< Bit mask of CH1 field. */
#define DPPIC_CHENCLR_CH1_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH1_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH1_Clear (0x1UL) /*!< Write: Disable channel */

/* Bit 0 : Channel 0 enable clear register.  Writing 0 has no effect. */
#define DPPIC_CHENCLR_CH0_Pos (0UL) /*!< Position of CH0 field. */
#define DPPIC_CHENCLR_CH0_Msk (0x1UL << DPPIC_CHENCLR_CH0_Pos) /*!< Bit mask of CH0 field. */
#define DPPIC_CHENCLR_CH0_Disabled (0x0UL) /*!< Read: Channel disabled */
#define DPPIC_CHENCLR_CH0_Enabled (0x1UL) /*!< Read: Channel enabled */
#define DPPIC_CHENCLR_CH0_Clear (0x1UL) /*!< Write: Disable channel */

/* Register: DPPIC_CHG */
/* Description: Description collection: Channel group n Note: Writes to this register are ignored if either SUBSCRIBE_CHG[n].EN or SUBSCRIBE_CHG[n].DIS is enabled */

/* Bit 15 : Include or exclude channel 15 */
#define DPPIC_CHG_CH15_Pos (15UL) /*!< Position of CH15 field. */
#define DPPIC_CHG_CH15_Msk (0x1UL << DPPIC_CHG_CH15_Pos) /*!< Bit mask of CH15 field. */
#define DPPIC_CHG_CH15_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH15_Included (0x1UL) /*!< Include */

/* Bit 14 : Include or exclude channel 14 */
#define DPPIC_CHG_CH14_Pos (14UL) /*!< Position of CH14 field. */
#define DPPIC_CHG_CH14_Msk (0x1UL << DPPIC_CHG_CH14_Pos) /*!< Bit mask of CH14 field. */
#define DPPIC_CHG_CH14_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH14_Included (0x1UL) /*!< Include */

/* Bit 13 : Include or exclude channel 13 */
#define DPPIC_CHG_CH13_Pos (13UL) /*!< Position of CH13 field. */
#define DPPIC_CHG_CH13_Msk (0x1UL << DPPIC_CHG_CH13_Pos) /*!< Bit mask of CH13 field. */
#define DPPIC_CHG_CH13_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH13_Included (0x1UL) /*!< Include */

/* Bit 12 : Include or exclude channel 12 */
#define DPPIC_CHG_CH12_Pos (12UL) /*!< Position of CH12 field. */
#define DPPIC_CHG_CH12_Msk (0x1UL << DPPIC_CHG_CH12_Pos) /*!< Bit mask of CH12 field. */
#define DPPIC_CHG_CH12_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH12_Included (0x1UL) /*!< Include */

/* Bit 11 : Include or exclude channel 11 */
#define DPPIC_CHG_CH11_Pos (11UL) /*!< Position of CH11 field. */
#define DPPIC_CHG_CH11_Msk (0x1UL << DPPIC_CHG_CH11_Pos) /*!< Bit mask of CH11 field. */
#define DPPIC_CHG_CH11_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH11_Included (0x1UL) /*!< Include */

/* Bit 10 : Include or exclude channel 10 */
#define DPPIC_CHG_CH10_Pos (10UL) /*!< Position of CH10 field. */
#define DPPIC_CHG_CH10_Msk (0x1UL << DPPIC_CHG_CH10_Pos) /*!< Bit mask of CH10 field. */
#define DPPIC_CHG_CH10_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH10_Included (0x1UL) /*!< Include */

/* Bit 9 : Include or exclude channel 9 */
#define DPPIC_CHG_CH9_Pos (9UL) /*!< Position of CH9 field. */
#define DPPIC_CHG_CH9_Msk (0x1UL << DPPIC_CHG_CH9_Pos) /*!< Bit mask of CH9 field. */
#define DPPIC_CHG_CH9_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH9_Included (0x1UL) /*!< Include */

/* Bit 8 : Include or exclude channel 8 */
#define DPPIC_CHG_CH8_Pos (8UL) /*!< Position of CH8 field. */
#define DPPIC_CHG_CH8_Msk (0x1UL << DPPIC_CHG_CH8_Pos) /*!< Bit mask of CH8 field. */
#define DPPIC_CHG_CH8_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH8_Included (0x1UL) /*!< Include */

/* Bit 7 : Include or exclude channel 7 */
#define DPPIC_CHG_CH7_Pos (7UL) /*!< Position of CH7 field. */
#define DPPIC_CHG_CH7_Msk (0x1UL << DPPIC_CHG_CH7_Pos) /*!< Bit mask of CH7 field. */
#define DPPIC_CHG_CH7_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH7_Included (0x1UL) /*!< Include */

/* Bit 6 : Include or exclude channel 6 */
#define DPPIC_CHG_CH6_Pos (6UL) /*!< Position of CH6 field. */
#define DPPIC_CHG_CH6_Msk (0x1UL << DPPIC_CHG_CH6_Pos) /*!< Bit mask of CH6 field. */
#define DPPIC_CHG_CH6_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH6_Included (0x1UL) /*!< Include */

/* Bit 5 : Include or exclude channel 5 */
#define DPPIC_CHG_CH5_Pos (5UL) /*!< Position of CH5 field. */
#define DPPIC_CHG_CH5_Msk (0x1UL << DPPIC_CHG_CH5_Pos) /*!< Bit mask of CH5 field. */
#define DPPIC_CHG_CH5_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH5_Included (0x1UL) /*!< Include */

/* Bit 4 : Include or exclude channel 4 */
#define DPPIC_CHG_CH4_Pos (4UL) /*!< Position of CH4 field. */
#define DPPIC_CHG_CH4_Msk (0x1UL << DPPIC_CHG_CH4_Pos) /*!< Bit mask of CH4 field. */
#define DPPIC_CHG_CH4_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH4_Included (0x1UL) /*!< Include */

/* Bit 3 : Include or exclude channel 3 */
#define DPPIC_CHG_CH3_Pos (3UL) /*!< Position of CH3 field. */
#define DPPIC_CHG_CH3_Msk (0x1UL << DPPIC_CHG_CH3_Pos) /*!< Bit mask of CH3 field. */
#define DPPIC_CHG_CH3_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH3_Included (0x1UL) /*!< Include */

/* Bit 2 : Include or exclude channel 2 */
#define DPPIC_CHG_CH2_Pos (2UL) /*!< Position of CH2 field. */
#define DPPIC_CHG_CH2_Msk (0x1UL << DPPIC_CHG_CH2_Pos) /*!< Bit mask of CH2 field. */
#define DPPIC_CHG_CH2_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH2_Included (0x1UL) /*!< Include */

/* Bit 1 : Include or exclude channel 1 */
#define DPPIC_CHG_CH1_Pos (1UL) /*!< Position of CH1 field. */
#define DPPIC_CHG_CH1_Msk (0x1UL << DPPIC_CHG_CH1_Pos) /*!< Bit mask of CH1 field. */
#define DPPIC_CHG_CH1_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH1_Included (0x1UL) /*!< Include */

/* Bit 0 : Include or exclude channel 0 */
#define DPPIC_CHG_CH0_Pos (0UL) /*!< Position of CH0 field. */
#define DPPIC_CHG_CH0_Msk (0x1UL << DPPIC_CHG_CH0_Pos) /*!< Bit mask of CH0 field. */
#define DPPIC_CHG_CH0_Excluded (0x0UL) /*!< Exclude */
#define DPPIC_CHG_CH0_Included (0x1UL) /*!< Include */


/* Peripheral: ECB */
/* Description: AES ECB Mode Encryption */

/* Register: ECB_TASKS_STARTECB */
/* Description: Start ECB block encrypt */

/* Bit 0 : Start ECB block encrypt */
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Pos (0UL) /*!< Position of TASKS_STARTECB field. */
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Msk (0x1UL << ECB_TASKS_STARTECB_TASKS_STARTECB_Pos) /*!< Bit mask of TASKS_STARTECB field. */
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Trigger (0x1UL) /*!< Trigger task */

/* Register: ECB_TASKS_STOPECB */
/* Description: Abort a possible executing ECB operation */

/* Bit 0 : Abort a possible executing ECB operation */
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Pos (0UL) /*!< Position of TASKS_STOPECB field. */
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Msk (0x1UL << ECB_TASKS_STOPECB_TASKS_STOPECB_Pos) /*!< Bit mask of TASKS_STOPECB field. */
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Trigger (0x1UL) /*!< Trigger task */

/* Register: ECB_SUBSCRIBE_STARTECB */
/* Description: Subscribe configuration for task STARTECB */

/* Bit 31 :   */
#define ECB_SUBSCRIBE_STARTECB_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_SUBSCRIBE_STARTECB_EN_Msk (0x1UL << ECB_SUBSCRIBE_STARTECB_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_SUBSCRIBE_STARTECB_EN_Disabled (0x0UL) /*!< Disable subscription */
#define ECB_SUBSCRIBE_STARTECB_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STARTECB will subscribe to */
#define ECB_SUBSCRIBE_STARTECB_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_SUBSCRIBE_STARTECB_CHIDX_Msk (0xFFUL << ECB_SUBSCRIBE_STARTECB_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_SUBSCRIBE_STOPECB */
/* Description: Subscribe configuration for task STOPECB */

/* Bit 31 :   */
#define ECB_SUBSCRIBE_STOPECB_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_SUBSCRIBE_STOPECB_EN_Msk (0x1UL << ECB_SUBSCRIBE_STOPECB_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_SUBSCRIBE_STOPECB_EN_Disabled (0x0UL) /*!< Disable subscription */
#define ECB_SUBSCRIBE_STOPECB_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOPECB will subscribe to */
#define ECB_SUBSCRIBE_STOPECB_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_SUBSCRIBE_STOPECB_CHIDX_Msk (0xFFUL << ECB_SUBSCRIBE_STOPECB_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_EVENTS_ENDECB */
/* Description: ECB block encrypt complete */

/* Bit 0 : ECB block encrypt complete */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos (0UL) /*!< Position of EVENTS_ENDECB field. */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Msk (0x1UL << ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos) /*!< Bit mask of EVENTS_ENDECB field. */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_NotGenerated (0x0UL) /*!< Event not generated */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Generated (0x1UL) /*!< Event generated */

/* Register: ECB_EVENTS_ERRORECB */
/* Description: ECB block encrypt aborted because of a STOPECB task or due to an error */

/* Bit 0 : ECB block encrypt aborted because of a STOPECB task or due to an error */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos (0UL) /*!< Position of EVENTS_ERRORECB field. */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Msk (0x1UL << ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos) /*!< Bit mask of EVENTS_ERRORECB field. */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_NotGenerated (0x0UL) /*!< Event not generated */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Generated (0x1UL) /*!< Event generated */

/* Register: ECB_PUBLISH_ENDECB */
/* Description: Publish configuration for event ENDECB */

/* Bit 31 :   */
#define ECB_PUBLISH_ENDECB_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_PUBLISH_ENDECB_EN_Msk (0x1UL << ECB_PUBLISH_ENDECB_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_PUBLISH_ENDECB_EN_Disabled (0x0UL) /*!< Disable publishing */
#define ECB_PUBLISH_ENDECB_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDECB will publish to */
#define ECB_PUBLISH_ENDECB_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_PUBLISH_ENDECB_CHIDX_Msk (0xFFUL << ECB_PUBLISH_ENDECB_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_PUBLISH_ERRORECB */
/* Description: Publish configuration for event ERRORECB */

/* Bit 31 :   */
#define ECB_PUBLISH_ERRORECB_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_PUBLISH_ERRORECB_EN_Msk (0x1UL << ECB_PUBLISH_ERRORECB_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_PUBLISH_ERRORECB_EN_Disabled (0x0UL) /*!< Disable publishing */
#define ECB_PUBLISH_ERRORECB_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ERRORECB will publish to */
#define ECB_PUBLISH_ERRORECB_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_PUBLISH_ERRORECB_CHIDX_Msk (0xFFUL << ECB_PUBLISH_ERRORECB_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event ERRORECB */
#define ECB_INTENSET_ERRORECB_Pos (1UL) /*!< Position of ERRORECB field. */
#define ECB_INTENSET_ERRORECB_Msk (0x1UL << ECB_INTENSET_ERRORECB_Pos) /*!< Bit mask of ERRORECB field. */
#define ECB_INTENSET_ERRORECB_Disabled (0x0UL) /*!< Read: Disabled */
#define ECB_INTENSET_ERRORECB_Enabled (0x1UL) /*!< Read: Enabled */
#define ECB_INTENSET_ERRORECB_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event ENDECB */
#define ECB_INTENSET_ENDECB_Pos (0UL) /*!< Position of ENDECB field. */
#define ECB_INTENSET_ENDECB_Msk (0x1UL << ECB_INTENSET_ENDECB_Pos) /*!< Bit mask of ENDECB field. */
#define ECB_INTENSET_ENDECB_Disabled (0x0UL) /*!< Read: Disabled */
#define ECB_INTENSET_ENDECB_Enabled (0x1UL) /*!< Read: Enabled */
#define ECB_INTENSET_ENDECB_Set (0x1UL) /*!< Enable */

/* Register: ECB_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event ERRORECB */
#define ECB_INTENCLR_ERRORECB_Pos (1UL) /*!< Position of ERRORECB field. */
#define ECB_INTENCLR_ERRORECB_Msk (0x1UL << ECB_INTENCLR_ERRORECB_Pos) /*!< Bit mask of ERRORECB field. */
#define ECB_INTENCLR_ERRORECB_Disabled (0x0UL) /*!< Read: Disabled */
#define ECB_INTENCLR_ERRORECB_Enabled (0x1UL) /*!< Read: Enabled */
#define ECB_INTENCLR_ERRORECB_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event ENDECB */
#define ECB_INTENCLR_ENDECB_Pos (0UL) /*!< Position of ENDECB field. */
#define ECB_INTENCLR_ENDECB_Msk (0x1UL << ECB_INTENCLR_ENDECB_Pos) /*!< Bit mask of ENDECB field. */
#define ECB_INTENCLR_ENDECB_Disabled (0x0UL) /*!< Read: Disabled */
#define ECB_INTENCLR_ENDECB_Enabled (0x1UL) /*!< Read: Enabled */
#define ECB_INTENCLR_ENDECB_Clear (0x1UL) /*!< Disable */

/* Register: ECB_ECBDATAPTR */
/* Description: ECB block encrypt memory pointers */

/* Bits 31..0 : Pointer to the ECB data structure (see Table 1 ECB data structure overview) */
#define ECB_ECBDATAPTR_ECBDATAPTR_Pos (0UL) /*!< Position of ECBDATAPTR field. */
#define ECB_ECBDATAPTR_ECBDATAPTR_Msk (0xFFFFFFFFUL << ECB_ECBDATAPTR_ECBDATAPTR_Pos) /*!< Bit mask of ECBDATAPTR field. */


/* Peripheral: FICR */
/* Description: Factory Information Configuration Registers */

/* Register: FICR_CHIPCONF00 */
/* Description: Unspecified */

/* Bits 29..26 : Master bias bandgap trim */
#define FICR_CHIPCONF00_BGREFTRIM_Pos (26UL) /*!< Position of BGREFTRIM field. */
#define FICR_CHIPCONF00_BGREFTRIM_Msk (0xFUL << FICR_CHIPCONF00_BGREFTRIM_Pos) /*!< Bit mask of BGREFTRIM field. */

/* Bits 25..21 : Threshold trim, power on reset */
#define FICR_CHIPCONF00_RSTVTHTRIM_Pos (21UL) /*!< Position of RSTVTHTRIM field. */
#define FICR_CHIPCONF00_RSTVTHTRIM_Msk (0x1FUL << FICR_CHIPCONF00_RSTVTHTRIM_Pos) /*!< Bit mask of RSTVTHTRIM field. */

/* Bits 20..15 : RCOSC coarse calibration input */
#define FICR_CHIPCONF00_RCOSC32KICOARSEIN_Pos (15UL) /*!< Position of RCOSC32KICOARSEIN field. */
#define FICR_CHIPCONF00_RCOSC32KICOARSEIN_Msk (0x3FUL << FICR_CHIPCONF00_RCOSC32KICOARSEIN_Pos) /*!< Bit mask of RCOSC32KICOARSEIN field. */

/* Bits 14..13 : 32kHz RC oscillator calibration length in number of cycles */
#define FICR_CHIPCONF00_RCOSC32KICALLENGTH_Pos (13UL) /*!< Position of RCOSC32KICALLENGTH field. */
#define FICR_CHIPCONF00_RCOSC32KICALLENGTH_Msk (0x3UL << FICR_CHIPCONF00_RCOSC32KICALLENGTH_Pos) /*!< Bit mask of RCOSC32KICALLENGTH field. */
#define FICR_CHIPCONF00_RCOSC32KICALLENGTH_N64 (0x0UL) /*!< 64 cycles */
#define FICR_CHIPCONF00_RCOSC32KICALLENGTH_N128 (0x1UL) /*!< 128 cycles */
#define FICR_CHIPCONF00_RCOSC32KICALLENGTH_N256 (0x2UL) /*!< 256 cycles */
#define FICR_CHIPCONF00_RCOSC32KICALLENGTH_N512 (0x3UL) /*!< 512 cycles */

/* Bit 12 : Disable synchronizer on calibration clock request from Rc32kiGenerator. */
#define FICR_CHIPCONF00_RC32KICLOCKSYNCDISABLE_Pos (12UL) /*!< Position of RC32KICLOCKSYNCDISABLE field. */
#define FICR_CHIPCONF00_RC32KICLOCKSYNCDISABLE_Msk (0x1UL << FICR_CHIPCONF00_RC32KICLOCKSYNCDISABLE_Pos) /*!< Bit mask of RC32KICLOCKSYNCDISABLE field. */

/* Bit 11 :   */
#define FICR_CHIPCONF00_DISABLEREGULATORCLOCKFORCING_Pos (11UL) /*!< Position of DISABLEREGULATORCLOCKFORCING field. */
#define FICR_CHIPCONF00_DISABLEREGULATORCLOCKFORCING_Msk (0x1UL << FICR_CHIPCONF00_DISABLEREGULATORCLOCKFORCING_Pos) /*!< Bit mask of DISABLEREGULATORCLOCKFORCING field. */

/* Bits 10..6 : HFCLK ring oscillator trim codes. Previous name: HFROSCTRIM. */
#define FICR_CHIPCONF00_PLL_CALIB_ROSC_Pos (6UL) /*!< Position of PLL_CALIB_ROSC field. */
#define FICR_CHIPCONF00_PLL_CALIB_ROSC_Msk (0x1FUL << FICR_CHIPCONF00_PLL_CALIB_ROSC_Pos) /*!< Bit mask of PLL_CALIB_ROSC field. */

/* Bit 5 : Control the output voltage for LVLP */
#define FICR_CHIPCONF00_LVLPULPALWAYSHIGH_Pos (5UL) /*!< Position of LVLPULPALWAYSHIGH field. */
#define FICR_CHIPCONF00_LVLPULPALWAYSHIGH_Msk (0x1UL << FICR_CHIPCONF00_LVLPULPALWAYSHIGH_Pos) /*!< Bit mask of LVLPULPALWAYSHIGH field. */

/* Bits 4..2 : Disable glitch-filter on clock sources powerup and standby lines */
#define FICR_CHIPCONF00_CLOCKREQFILTERDISABLE_Pos (2UL) /*!< Position of CLOCKREQFILTERDISABLE field. */
#define FICR_CHIPCONF00_CLOCKREQFILTERDISABLE_Msk (0x7UL << FICR_CHIPCONF00_CLOCKREQFILTERDISABLE_Pos) /*!< Bit mask of CLOCKREQFILTERDISABLE field. */
#define FICR_CHIPCONF00_CLOCKREQFILTERDISABLE_XOSC32M (0x1UL) /*!< Disable glitch-filter on powerUp- and standby lines to XOSC32M */
#define FICR_CHIPCONF00_CLOCKREQFILTERDISABLE_32ki (0x2UL) /*!< Disable glitch-filter on powerUp line to Rosc/Xosc/Synth used in clock system A (32ki) */
#define FICR_CHIPCONF00_CLOCKREQFILTERDISABLE_64M (0x4UL) /*!< Disable glitch-filter on powerUp line to PLL used in clock system B (64M) */

/* Bit 1 : Enable clock gate in clock purifier. Should always be 1. */
#define FICR_CHIPCONF00_CKPUREEN_Pos (1UL) /*!< Position of CKPUREEN field. */
#define FICR_CHIPCONF00_CKPUREEN_Msk (0x1UL << FICR_CHIPCONF00_CKPUREEN_Pos) /*!< Bit mask of CKPUREEN field. */

/* Bit 0 : Force LVLP ULP regulators to be always on */
#define FICR_CHIPCONF00_LVLPULPALWAYSON_Pos (0UL) /*!< Position of LVLPULPALWAYSON field. */
#define FICR_CHIPCONF00_LVLPULPALWAYSON_Msk (0x1UL << FICR_CHIPCONF00_LVLPULPALWAYSON_Pos) /*!< Bit mask of LVLPULPALWAYSON field. */

/* Register: FICR_CHIPCONF01 */
/* Description: Unspecified */

/* Bits 30..15 : Control the stay-alive time for VDD2 current comparator */
#define FICR_CHIPCONF01_VREGMAINICMPTIMER_Pos (15UL) /*!< Position of VREGMAINICMPTIMER field. */
#define FICR_CHIPCONF01_VREGMAINICMPTIMER_Msk (0xFFFFUL << FICR_CHIPCONF01_VREGMAINICMPTIMER_Pos) /*!< Bit mask of VREGMAINICMPTIMER field. */

/* Bits 14..11 : Control the output voltage for VREGMAIN */
#define FICR_CHIPCONF01_VREGMAINVOLT_Pos (11UL) /*!< Position of VREGMAINVOLT field. */
#define FICR_CHIPCONF01_VREGMAINVOLT_Msk (0xFUL << FICR_CHIPCONF01_VREGMAINVOLT_Pos) /*!< Bit mask of VREGMAINVOLT field. */

/* Bits 10..6 : VREGANA ULP output voltage calibration */
#define FICR_CHIPCONF01_VREGANAULPCAL_Pos (6UL) /*!< Position of VREGANAULPCAL field. */
#define FICR_CHIPCONF01_VREGANAULPCAL_Msk (0x1FUL << FICR_CHIPCONF01_VREGANAULPCAL_Pos) /*!< Bit mask of VREGANAULPCAL field. */
#define FICR_CHIPCONF01_VREGANAULPCAL_DEF (0x00UL) /*!< Default voltage */
#define FICR_CHIPCONF01_VREGANAULPCAL_MAX (0x07UL) /*!< Max voltage */
#define FICR_CHIPCONF01_VREGANAULPCAL_MIN (0x08UL) /*!< Min voltage */

/* Bits 5..4 : Control the output voltage for VREGRADIO (AVDD_1V3) */
#define FICR_CHIPCONF01_VREGANAVOUT_Pos (4UL) /*!< Position of VREGANAVOUT field. */
#define FICR_CHIPCONF01_VREGANAVOUT_Msk (0x3UL << FICR_CHIPCONF01_VREGANAVOUT_Pos) /*!< Bit mask of VREGANAVOUT field. */

/* Bits 3..0 : RST low power voltage reference trim */
#define FICR_CHIPCONF01_VREFULPTRIM_Pos (0UL) /*!< Position of VREFULPTRIM field. */
#define FICR_CHIPCONF01_VREFULPTRIM_Msk (0xFUL << FICR_CHIPCONF01_VREFULPTRIM_Pos) /*!< Bit mask of VREFULPTRIM field. */

/* Register: FICR_CHIPCONF02 */
/* Description: Unspecified */

/* Bits 12..7 : Trim value for AMLI clock delay */
#define FICR_CHIPCONF02_AMLICLOCKDELAY_Pos (7UL) /*!< Position of AMLICLOCKDELAY field. */
#define FICR_CHIPCONF02_AMLICLOCKDELAY_Msk (0x3FUL << FICR_CHIPCONF02_AMLICLOCKDELAY_Pos) /*!< Bit mask of AMLICLOCKDELAY field. */

/* Bits 6..4 : Calibration of current comparator on VREGMAIN */
#define FICR_CHIPCONF02_VREGMAINULPICMPCAL_Pos (4UL) /*!< Position of VREGMAINULPICMPCAL field. */
#define FICR_CHIPCONF02_VREGMAINULPICMPCAL_Msk (0x7UL << FICR_CHIPCONF02_VREGMAINULPICMPCAL_Pos) /*!< Bit mask of VREGMAINULPICMPCAL field. */

/* Bits 3..0 : Calibration of ULP regulator on VREGMAIN */
#define FICR_CHIPCONF02_VREGMAINULPCAL_Pos (0UL) /*!< Position of VREGMAINULPCAL field. */
#define FICR_CHIPCONF02_VREGMAINULPCAL_Msk (0xFUL << FICR_CHIPCONF02_VREGMAINULPCAL_Pos) /*!< Bit mask of VREGMAINULPCAL field. */

/* Register: FICR_SOCINFO_PARTNO */
/* Description: Part number of the device. */

/* Bits 31..0 :   */
#define FICR_SOCINFO_PARTNO_PARTNO_Pos (0UL) /*!< Position of PARTNO field. */
#define FICR_SOCINFO_PARTNO_PARTNO_Msk (0xFFFFFFFFUL << FICR_SOCINFO_PARTNO_PARTNO_Pos) /*!< Bit mask of PARTNO field. */
#define FICR_SOCINFO_PARTNO_PARTNO_nRF5001 (0x00000014UL) /*!< nRF5001 (Dagger52) */
#define FICR_SOCINFO_PARTNO_PARTNO_nRF5002 (0x00000015UL) /*!< nRF5002 (Shoto) */
#define FICR_SOCINFO_PARTNO_PARTNO_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_SOCINFO_HWREVISION */
/* Description: Hardware Revision of the device. Will be updated in production test. */

/* Bits 31..0 :   */
#define FICR_SOCINFO_HWREVISION_HWREVISION_Pos (0UL) /*!< Position of HWREVISION field. */
#define FICR_SOCINFO_HWREVISION_HWREVISION_Msk (0xFFFFFFFFUL << FICR_SOCINFO_HWREVISION_HWREVISION_Pos) /*!< Bit mask of HWREVISION field. */
#define FICR_SOCINFO_HWREVISION_HWREVISION_Rev1 (0x00000000UL) /*!< Unspecified */

/* Register: FICR_INFO_CONFIGID */
/* Description: Configuration identifier */

/* Bits 15..0 : Identification number for the HW */
#define FICR_INFO_CONFIGID_HWID_Pos (0UL) /*!< Position of HWID field. */
#define FICR_INFO_CONFIGID_HWID_Msk (0xFFFFUL << FICR_INFO_CONFIGID_HWID_Pos) /*!< Bit mask of HWID field. */

/* Register: FICR_INFO_DEVICEID */
/* Description: Description collection: Device identifier */

/* Bits 31..0 : 64 bit unique device identifier */
#define FICR_INFO_DEVICEID_DEVICEID_Pos (0UL) /*!< Position of DEVICEID field. */
#define FICR_INFO_DEVICEID_DEVICEID_Msk (0xFFFFFFFFUL << FICR_INFO_DEVICEID_DEVICEID_Pos) /*!< Bit mask of DEVICEID field. */

/* Register: FICR_INFO_PART */
/* Description: Part code */

/* Bits 31..0 : Part code */
#define FICR_INFO_PART_PART_Pos (0UL) /*!< Position of PART field. */
#define FICR_INFO_PART_PART_Msk (0xFFFFFFFFUL << FICR_INFO_PART_PART_Pos) /*!< Bit mask of PART field. */
#define FICR_INFO_PART_PART_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_VARIANT */
/* Description: Part Variant, Hardware version and Production configuration */

/* Bits 31..0 : Part Variant, Hardware version and Production configuration, encoded as ASCII */
#define FICR_INFO_VARIANT_VARIANT_Pos (0UL) /*!< Position of VARIANT field. */
#define FICR_INFO_VARIANT_VARIANT_Msk (0xFFFFFFFFUL << FICR_INFO_VARIANT_VARIANT_Pos) /*!< Bit mask of VARIANT field. */
#define FICR_INFO_VARIANT_VARIANT_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_PACKAGE */
/* Description: Package option */

/* Bits 31..0 : Package option */
#define FICR_INFO_PACKAGE_PACKAGE_Pos (0UL) /*!< Position of PACKAGE field. */
#define FICR_INFO_PACKAGE_PACKAGE_Msk (0xFFFFFFFFUL << FICR_INFO_PACKAGE_PACKAGE_Pos) /*!< Bit mask of PACKAGE field. */
#define FICR_INFO_PACKAGE_PACKAGE_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_RAM */
/* Description: RAM variant */

/* Bits 31..0 : RAM variant */
#define FICR_INFO_RAM_RAM_Pos (0UL) /*!< Position of RAM field. */
#define FICR_INFO_RAM_RAM_Msk (0xFFFFFFFFUL << FICR_INFO_RAM_RAM_Pos) /*!< Bit mask of RAM field. */
#define FICR_INFO_RAM_RAM_K8 (0x00000008UL) /*!< 8 kByte RAM */
#define FICR_INFO_RAM_RAM_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_MTP */
/* Description: MTP variant */

/* Bits 31..0 : MTP variant */
#define FICR_INFO_MTP_MTP_Pos (0UL) /*!< Position of MTP field. */
#define FICR_INFO_MTP_MTP_Msk (0xFFFFFFFFUL << FICR_INFO_MTP_MTP_Pos) /*!< Bit mask of MTP field. */
#define FICR_INFO_MTP_MTP_K92 (0x0000005CUL) /*!< 92 kByte NVM */
#define FICR_INFO_MTP_MTP_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_CODEPAGESIZE */
/* Description: Code memory page size in bytes */

/* Bits 31..0 : Code memory page size in bytes */
#define FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_Pos (0UL) /*!< Position of CODEPAGESIZE field. */
#define FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_Msk (0xFFFFFFFFUL << FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_Pos) /*!< Bit mask of CODEPAGESIZE field. */
#define FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_K2048 (0x00000800UL) /*!< 2 kByte */
#define FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_CODESIZE */
/* Description: Code memory size */

/* Bits 31..0 : Code memory size in number of pages */
#define FICR_INFO_CODESIZE_CODESIZE_Pos (0UL) /*!< Position of CODESIZE field. */
#define FICR_INFO_CODESIZE_CODESIZE_Msk (0xFFFFFFFFUL << FICR_INFO_CODESIZE_CODESIZE_Pos) /*!< Bit mask of CODESIZE field. */
#define FICR_INFO_CODESIZE_CODESIZE_P46 (0x0000002EUL) /*!< 46 pages */
#define FICR_INFO_CODESIZE_CODESIZE_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_DEVICETYPE */
/* Description: Device type */

/* Bits 31..0 : Device type */
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Pos (0UL) /*!< Position of DEVICETYPE field. */
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Msk (0xFFFFFFFFUL << FICR_INFO_DEVICETYPE_DEVICETYPE_Pos) /*!< Bit mask of DEVICETYPE field. */
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Die (0x00000000UL) /*!< Device is an physical DIE */
#define FICR_INFO_DEVICETYPE_DEVICETYPE_FPGA (0xFFFFFFFFUL) /*!< Device is an FPGA */


/* Peripheral: GPIOTE */
/* Description: GPIO Tasks and Events */

/* Register: GPIOTE_TASKS_OUT */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is configured in CONFIG[n].POLARITY. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is configured in CONFIG[n].POLARITY. */
#define GPIOTE_TASKS_OUT_TASKS_OUT_Pos (0UL) /*!< Position of TASKS_OUT field. */
#define GPIOTE_TASKS_OUT_TASKS_OUT_Msk (0x1UL << GPIOTE_TASKS_OUT_TASKS_OUT_Pos) /*!< Bit mask of TASKS_OUT field. */
#define GPIOTE_TASKS_OUT_TASKS_OUT_Trigger (0x1UL) /*!< Trigger task */

/* Register: GPIOTE_TASKS_SET */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it high. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it high. */
#define GPIOTE_TASKS_SET_TASKS_SET_Pos (0UL) /*!< Position of TASKS_SET field. */
#define GPIOTE_TASKS_SET_TASKS_SET_Msk (0x1UL << GPIOTE_TASKS_SET_TASKS_SET_Pos) /*!< Bit mask of TASKS_SET field. */
#define GPIOTE_TASKS_SET_TASKS_SET_Trigger (0x1UL) /*!< Trigger task */

/* Register: GPIOTE_TASKS_CLR */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it low. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it low. */
#define GPIOTE_TASKS_CLR_TASKS_CLR_Pos (0UL) /*!< Position of TASKS_CLR field. */
#define GPIOTE_TASKS_CLR_TASKS_CLR_Msk (0x1UL << GPIOTE_TASKS_CLR_TASKS_CLR_Pos) /*!< Bit mask of TASKS_CLR field. */
#define GPIOTE_TASKS_CLR_TASKS_CLR_Trigger (0x1UL) /*!< Trigger task */

/* Register: GPIOTE_SUBSCRIBE_OUT */
/* Description: Description collection: Subscribe configuration for task OUT[n] */

/* Bit 31 :   */
#define GPIOTE_SUBSCRIBE_OUT_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_SUBSCRIBE_OUT_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_OUT_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_SUBSCRIBE_OUT_EN_Disabled (0x0UL) /*!< Disable subscription */
#define GPIOTE_SUBSCRIBE_OUT_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task OUT[n] will subscribe to */
#define GPIOTE_SUBSCRIBE_OUT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_SUBSCRIBE_OUT_CHIDX_Msk (0xFFUL << GPIOTE_SUBSCRIBE_OUT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_SUBSCRIBE_SET */
/* Description: Description collection: Subscribe configuration for task SET[n] */

/* Bit 31 :   */
#define GPIOTE_SUBSCRIBE_SET_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_SUBSCRIBE_SET_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_SET_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_SUBSCRIBE_SET_EN_Disabled (0x0UL) /*!< Disable subscription */
#define GPIOTE_SUBSCRIBE_SET_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task SET[n] will subscribe to */
#define GPIOTE_SUBSCRIBE_SET_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_SUBSCRIBE_SET_CHIDX_Msk (0xFFUL << GPIOTE_SUBSCRIBE_SET_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_SUBSCRIBE_CLR */
/* Description: Description collection: Subscribe configuration for task CLR[n] */

/* Bit 31 :   */
#define GPIOTE_SUBSCRIBE_CLR_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_SUBSCRIBE_CLR_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_CLR_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_SUBSCRIBE_CLR_EN_Disabled (0x0UL) /*!< Disable subscription */
#define GPIOTE_SUBSCRIBE_CLR_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CLR[n] will subscribe to */
#define GPIOTE_SUBSCRIBE_CLR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_SUBSCRIBE_CLR_CHIDX_Msk (0xFFUL << GPIOTE_SUBSCRIBE_CLR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_EVENTS_IN */
/* Description: Description collection: Event generated from pin specified in CONFIG[n].PSEL */

/* Bit 0 : Event generated from pin specified in CONFIG[n].PSEL */
#define GPIOTE_EVENTS_IN_EVENTS_IN_Pos (0UL) /*!< Position of EVENTS_IN field. */
#define GPIOTE_EVENTS_IN_EVENTS_IN_Msk (0x1UL << GPIOTE_EVENTS_IN_EVENTS_IN_Pos) /*!< Bit mask of EVENTS_IN field. */
#define GPIOTE_EVENTS_IN_EVENTS_IN_NotGenerated (0x0UL) /*!< Event not generated */
#define GPIOTE_EVENTS_IN_EVENTS_IN_Generated (0x1UL) /*!< Event generated */

/* Register: GPIOTE_EVENTS_PORT */
/* Description: Event generated from multiple input GPIO pins with SENSE mechanism enabled */

/* Bit 0 : Event generated from multiple input GPIO pins with SENSE mechanism enabled */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos (0UL) /*!< Position of EVENTS_PORT field. */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Msk (0x1UL << GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos) /*!< Bit mask of EVENTS_PORT field. */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_NotGenerated (0x0UL) /*!< Event not generated */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Generated (0x1UL) /*!< Event generated */

/* Register: GPIOTE_PUBLISH_IN */
/* Description: Description collection: Publish configuration for event IN[n] */

/* Bit 31 :   */
#define GPIOTE_PUBLISH_IN_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_PUBLISH_IN_EN_Msk (0x1UL << GPIOTE_PUBLISH_IN_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_PUBLISH_IN_EN_Disabled (0x0UL) /*!< Disable publishing */
#define GPIOTE_PUBLISH_IN_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event IN[n] will publish to */
#define GPIOTE_PUBLISH_IN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_PUBLISH_IN_CHIDX_Msk (0xFFUL << GPIOTE_PUBLISH_IN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_PUBLISH_PORT */
/* Description: Publish configuration for event PORT */

/* Bit 31 :   */
#define GPIOTE_PUBLISH_PORT_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_PUBLISH_PORT_EN_Msk (0x1UL << GPIOTE_PUBLISH_PORT_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_PUBLISH_PORT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define GPIOTE_PUBLISH_PORT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event PORT will publish to */
#define GPIOTE_PUBLISH_PORT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_PUBLISH_PORT_CHIDX_Msk (0xFFUL << GPIOTE_PUBLISH_PORT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 31 : Enable or disable interrupt for event PORT */
#define GPIOTE_INTEN_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTEN_PORT_Msk (0x1UL << GPIOTE_INTEN_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTEN_PORT_Disabled (0x0UL) /*!< Disable */
#define GPIOTE_INTEN_PORT_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event IN[1] */
#define GPIOTE_INTEN_IN1_Pos (1UL) /*!< Position of IN1 field. */
#define GPIOTE_INTEN_IN1_Msk (0x1UL << GPIOTE_INTEN_IN1_Pos) /*!< Bit mask of IN1 field. */
#define GPIOTE_INTEN_IN1_Disabled (0x0UL) /*!< Disable */
#define GPIOTE_INTEN_IN1_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event IN[0] */
#define GPIOTE_INTEN_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTEN_IN0_Msk (0x1UL << GPIOTE_INTEN_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTEN_IN0_Disabled (0x0UL) /*!< Disable */
#define GPIOTE_INTEN_IN0_Enabled (0x1UL) /*!< Enable */

/* Register: GPIOTE_INTENSET */
/* Description: Enable interrupt */

/* Bit 31 : Write '1' to enable interrupt for event PORT */
#define GPIOTE_INTENSET_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTENSET_PORT_Msk (0x1UL << GPIOTE_INTENSET_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTENSET_PORT_Disabled (0x0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_PORT_Enabled (0x1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_PORT_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event IN[1] */
#define GPIOTE_INTENSET_IN1_Pos (1UL) /*!< Position of IN1 field. */
#define GPIOTE_INTENSET_IN1_Msk (0x1UL << GPIOTE_INTENSET_IN1_Pos) /*!< Bit mask of IN1 field. */
#define GPIOTE_INTENSET_IN1_Disabled (0x0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN1_Enabled (0x1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN1_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event IN[0] */
#define GPIOTE_INTENSET_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTENSET_IN0_Msk (0x1UL << GPIOTE_INTENSET_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTENSET_IN0_Disabled (0x0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN0_Enabled (0x1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN0_Set (0x1UL) /*!< Enable */

/* Register: GPIOTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 31 : Write '1' to disable interrupt for event PORT */
#define GPIOTE_INTENCLR_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTENCLR_PORT_Msk (0x1UL << GPIOTE_INTENCLR_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTENCLR_PORT_Disabled (0x0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_PORT_Enabled (0x1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_PORT_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event IN[1] */
#define GPIOTE_INTENCLR_IN1_Pos (1UL) /*!< Position of IN1 field. */
#define GPIOTE_INTENCLR_IN1_Msk (0x1UL << GPIOTE_INTENCLR_IN1_Pos) /*!< Bit mask of IN1 field. */
#define GPIOTE_INTENCLR_IN1_Disabled (0x0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN1_Enabled (0x1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN1_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event IN[0] */
#define GPIOTE_INTENCLR_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTENCLR_IN0_Msk (0x1UL << GPIOTE_INTENCLR_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTENCLR_IN0_Disabled (0x0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN0_Enabled (0x1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN0_Clear (0x1UL) /*!< Disable */

/* Register: GPIOTE_CONFIG */
/* Description: Description collection: Configuration for OUT[n], SET[n], and CLR[n] tasks and IN[n] event */

/* Bit 20 : When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect. */
#define GPIOTE_CONFIG_OUTINIT_Pos (20UL) /*!< Position of OUTINIT field. */
#define GPIOTE_CONFIG_OUTINIT_Msk (0x1UL << GPIOTE_CONFIG_OUTINIT_Pos) /*!< Bit mask of OUTINIT field. */
#define GPIOTE_CONFIG_OUTINIT_Low (0x0UL) /*!< Task mode: Initial value of pin before task triggering is low */
#define GPIOTE_CONFIG_OUTINIT_High (0x1UL) /*!< Task mode: Initial value of pin before task triggering is high */

/* Bits 17..16 : When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event. */
#define GPIOTE_CONFIG_POLARITY_Pos (16UL) /*!< Position of POLARITY field. */
#define GPIOTE_CONFIG_POLARITY_Msk (0x3UL << GPIOTE_CONFIG_POLARITY_Pos) /*!< Bit mask of POLARITY field. */
#define GPIOTE_CONFIG_POLARITY_None (0x0UL) /*!< Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity. */
#define GPIOTE_CONFIG_POLARITY_LoToHi (0x1UL) /*!< Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin. */
#define GPIOTE_CONFIG_POLARITY_HiToLo (0x2UL) /*!< Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin. */
#define GPIOTE_CONFIG_POLARITY_Toggle (0x3UL) /*!< Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin. */

/* Bit 13 : Port number */
#define GPIOTE_CONFIG_PORT_Pos (13UL) /*!< Position of PORT field. */
#define GPIOTE_CONFIG_PORT_Msk (0x1UL << GPIOTE_CONFIG_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 12..8 : GPIO number associated with SET[n], CLR[n], and OUT[n] tasks and IN[n] event */
#define GPIOTE_CONFIG_PSEL_Pos (8UL) /*!< Position of PSEL field. */
#define GPIOTE_CONFIG_PSEL_Msk (0x1FUL << GPIOTE_CONFIG_PSEL_Pos) /*!< Bit mask of PSEL field. */

/* Bits 1..0 : Mode */
#define GPIOTE_CONFIG_MODE_Pos (0UL) /*!< Position of MODE field. */
#define GPIOTE_CONFIG_MODE_Msk (0x3UL << GPIOTE_CONFIG_MODE_Pos) /*!< Bit mask of MODE field. */
#define GPIOTE_CONFIG_MODE_Disabled (0x0UL) /*!< Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module. */
#define GPIOTE_CONFIG_MODE_Event (0x1UL) /*!< Event mode */
#define GPIOTE_CONFIG_MODE_Task (0x3UL) /*!< Task mode */

/* Register: GPIOTE_DEBOUNCE */
/* Description: Description collection: Debounce mode for GPIOTE channel n */

/* Bit 0 : Mode */
#define GPIOTE_DEBOUNCE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define GPIOTE_DEBOUNCE_MODE_Msk (0x1UL << GPIOTE_DEBOUNCE_MODE_Pos) /*!< Bit mask of MODE field. */
#define GPIOTE_DEBOUNCE_MODE_Mode0 (0x0UL) /*!< Mode 0: nRF52 debounce method */
#define GPIOTE_DEBOUNCE_MODE_Mode1 (0x1UL) /*!< Mode 1: nRF51 legacy debounce method */

/* Register: GPIOTE_TASKS_PCPPEN_LOW */
/* Description: Description cluster: Configure PCP[n] requests to have lowest possible penalty */

/* Bit 0 : Configure PCP[n] requests to have lowest possible penalty */
#define GPIOTE_TASKS_PCPPEN_LOW_LOW_Pos (0UL) /*!< Position of LOW field. */
#define GPIOTE_TASKS_PCPPEN_LOW_LOW_Msk (0x1UL << GPIOTE_TASKS_PCPPEN_LOW_LOW_Pos) /*!< Bit mask of LOW field. */
#define GPIOTE_TASKS_PCPPEN_LOW_LOW_Trigger (0x1UL) /*!< Trigger task */

/* Register: GPIOTE_TASKS_PCPPEN_HIGH */
/* Description: Description cluster: Configure PCP[n] requests to have highest possible penalty */

/* Bit 0 : Configure PCP[n] requests to have highest possible penalty */
#define GPIOTE_TASKS_PCPPEN_HIGH_HIGH_Pos (0UL) /*!< Position of HIGH field. */
#define GPIOTE_TASKS_PCPPEN_HIGH_HIGH_Msk (0x1UL << GPIOTE_TASKS_PCPPEN_HIGH_HIGH_Pos) /*!< Bit mask of HIGH field. */
#define GPIOTE_TASKS_PCPPEN_HIGH_HIGH_Trigger (0x1UL) /*!< Trigger task */

/* Register: GPIOTE_SUBSCRIBE_PCPPEN_LOW */
/* Description: Description cluster: Subscribe configuration for task PCPPEN[n].LOW */

/* Bit 31 :   */
#define GPIOTE_SUBSCRIBE_PCPPEN_LOW_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_SUBSCRIBE_PCPPEN_LOW_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_PCPPEN_LOW_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_SUBSCRIBE_PCPPEN_LOW_EN_Disabled (0x0UL) /*!< Disable subscription */
#define GPIOTE_SUBSCRIBE_PCPPEN_LOW_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PCPPEN[n].LOW will subscribe to */
#define GPIOTE_SUBSCRIBE_PCPPEN_LOW_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_SUBSCRIBE_PCPPEN_LOW_CHIDX_Msk (0xFFUL << GPIOTE_SUBSCRIBE_PCPPEN_LOW_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_SUBSCRIBE_PCPPEN_HIGH */
/* Description: Description cluster: Subscribe configuration for task PCPPEN[n].HIGH */

/* Bit 31 :   */
#define GPIOTE_SUBSCRIBE_PCPPEN_HIGH_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_SUBSCRIBE_PCPPEN_HIGH_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_PCPPEN_HIGH_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_SUBSCRIBE_PCPPEN_HIGH_EN_Disabled (0x0UL) /*!< Disable subscription */
#define GPIOTE_SUBSCRIBE_PCPPEN_HIGH_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PCPPEN[n].HIGH will subscribe to */
#define GPIOTE_SUBSCRIBE_PCPPEN_HIGH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_SUBSCRIBE_PCPPEN_HIGH_CHIDX_Msk (0xFFUL << GPIOTE_SUBSCRIBE_PCPPEN_HIGH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */


/* Peripheral: NVMC */
/* Description: Non Volatile Memory Controller */

/* Register: NVMC_READY */
/* Description: Ready flag */

/* Bit 0 : NVMC is ready or busy */
#define NVMC_READY_READY_Pos (0UL) /*!< Position of READY field. */
#define NVMC_READY_READY_Msk (0x1UL << NVMC_READY_READY_Pos) /*!< Bit mask of READY field. */
#define NVMC_READY_READY_Busy (0x0UL) /*!< NVMC is busy (on-going write or erase operation) */
#define NVMC_READY_READY_Ready (0x1UL) /*!< NVMC is ready */

/* Register: NVMC_READYNEXT */
/* Description: Ready flag */

/* Bit 0 : NVMC can accept a new write operation */
#define NVMC_READYNEXT_READYNEXT_Pos (0UL) /*!< Position of READYNEXT field. */
#define NVMC_READYNEXT_READYNEXT_Msk (0x1UL << NVMC_READYNEXT_READYNEXT_Pos) /*!< Bit mask of READYNEXT field. */
#define NVMC_READYNEXT_READYNEXT_Busy (0x0UL) /*!< NVMC cannot accept any write operation */
#define NVMC_READYNEXT_READYNEXT_Ready (0x1UL) /*!< NVMC is ready */

/* Register: NVMC_TESTWORDSTATE */
/* Description: Test word status */

/* Bits 1..0 : State of the least significant bit in the test word */
#define NVMC_TESTWORDSTATE_STATE_Pos (0UL) /*!< Position of STATE field. */
#define NVMC_TESTWORDSTATE_STATE_Msk (0x3UL << NVMC_TESTWORDSTATE_STATE_Pos) /*!< Bit mask of STATE field. */
#define NVMC_TESTWORDSTATE_STATE_Erased (0x0UL) /*!< Erased */
#define NVMC_TESTWORDSTATE_STATE_InvPgm (0x1UL) /*!< Inverse programmed */
#define NVMC_TESTWORDSTATE_STATE_Written0 (0x2UL) /*!< Written 0 */
#define NVMC_TESTWORDSTATE_STATE_Written1 (0x3UL) /*!< Written 1 */

/* Register: NVMC_CONFIG */
/* Description: Configuration register */

/* Bits 18..12 : MODE signals of the non-volatile memory macro */
#define NVMC_CONFIG_MODENVM_Pos (12UL) /*!< Position of MODENVM field. */
#define NVMC_CONFIG_MODENVM_Msk (0x7FUL << NVMC_CONFIG_MODENVM_Pos) /*!< Bit mask of MODENVM field. */

/* Bits 9..8 : Page erase configuration */
#define NVMC_CONFIG_ERASEPAGECONFIG_Pos (8UL) /*!< Position of ERASEPAGECONFIG field. */
#define NVMC_CONFIG_ERASEPAGECONFIG_Msk (0x3UL << NVMC_CONFIG_ERASEPAGECONFIG_Pos) /*!< Bit mask of ERASEPAGECONFIG field. */
#define NVMC_CONFIG_ERASEPAGECONFIG_ReProgramErase (0x0UL) /*!< Erase after re-programming the data read and inverse program */
#define NVMC_CONFIG_ERASEPAGECONFIG_InverseProgramErase (0x1UL) /*!< Erase after inverse program */
#define NVMC_CONFIG_ERASEPAGECONFIG_Erase (0x2UL) /*!< Just erase (no re-program and inverse program) */

/* Bit 5 : Handling MODE signals of the non-volatile memory macro */
#define NVMC_CONFIG_MODENVMAUTO_Pos (5UL) /*!< Position of MODENVMAUTO field. */
#define NVMC_CONFIG_MODENVMAUTO_Msk (0x1UL << NVMC_CONFIG_MODENVMAUTO_Pos) /*!< Bit mask of MODENVMAUTO field. */
#define NVMC_CONFIG_MODENVMAUTO_Auto (0x0UL) /*!< Handled automatically by the non-volatile memory controller */
#define NVMC_CONFIG_MODENVMAUTO_Manual (0x1UL) /*!< Set by CONFIG.MODENVM register */

/* Bit 4 : Enable external VPP for write and page erase operations */
#define NVMC_CONFIG_EXTERTNALVPP_Pos (4UL) /*!< Position of EXTERTNALVPP field. */
#define NVMC_CONFIG_EXTERTNALVPP_Msk (0x1UL << NVMC_CONFIG_EXTERTNALVPP_Pos) /*!< Bit mask of EXTERTNALVPP field. */
#define NVMC_CONFIG_EXTERTNALVPP_InternalVpp (0x0UL) /*!< Use internal charge pump */
#define NVMC_CONFIG_EXTERTNALVPP_ExternalVpp (0x1UL) /*!< Use external VPP */

/* Bits 1..0 : Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. */
#define NVMC_CONFIG_WEN_Pos (0UL) /*!< Position of WEN field. */
#define NVMC_CONFIG_WEN_Msk (0x3UL << NVMC_CONFIG_WEN_Pos) /*!< Bit mask of WEN field. */
#define NVMC_CONFIG_WEN_Ren (0x0UL) /*!< Read only access */
#define NVMC_CONFIG_WEN_Wen (0x1UL) /*!< Write enabled */
#define NVMC_CONFIG_WEN_Een (0x2UL) /*!< Erase enabled */

/* Register: NVMC_ERASEPAGE */
/* Description: Register for erasing a page in code area */

/* Bits 31..0 : Register for starting erase of a page in code area */
#define NVMC_ERASEPAGE_ERASEPAGE_Pos (0UL) /*!< Position of ERASEPAGE field. */
#define NVMC_ERASEPAGE_ERASEPAGE_Msk (0xFFFFFFFFUL << NVMC_ERASEPAGE_ERASEPAGE_Pos) /*!< Bit mask of ERASEPAGE field. */

/* Register: NVMC_ERASEALL */
/* Description: Register for erasing all non-volatile user memory */

/* Bit 0 : Erase all non-volatile memory including UICR registers. The erase must be enabled using CONFIG.WEN before the non-volatile memory can be erased. */
#define NVMC_ERASEALL_ERASEALL_Pos (0UL) /*!< Position of ERASEALL field. */
#define NVMC_ERASEALL_ERASEALL_Msk (0x1UL << NVMC_ERASEALL_ERASEALL_Pos) /*!< Bit mask of ERASEALL field. */
#define NVMC_ERASEALL_ERASEALL_NoOperation (0x0UL) /*!< No operation */
#define NVMC_ERASEALL_ERASEALL_Erase (0x1UL) /*!< Start chip erase */

/* Register: NVMC_ERASEUICR */
/* Description: Register for erasing whole UICR page */

/* Bit 0 : Erase UICR page. The erase must be enabled using CONFIG.WEN before the non-volatile memory can be erased. */
#define NVMC_ERASEUICR_ERASEUICR_Pos (0UL) /*!< Position of ERASEUICR field. */
#define NVMC_ERASEUICR_ERASEUICR_Msk (0x1UL << NVMC_ERASEUICR_ERASEUICR_Pos) /*!< Bit mask of ERASEUICR field. */
#define NVMC_ERASEUICR_ERASEUICR_NoOperation (0x0UL) /*!< No operation */
#define NVMC_ERASEUICR_ERASEUICR_Erase (0x1UL) /*!< Start chip erase */

/* Register: NVMC_WAITSTATENUM */
/* Description: Register to set the number of wait-state for non-volatile memory access. To update the WAITSTATENUM field, the ACCESSCODE must be correct. */

/* Bits 31..16 : Access code for modifying this register */
#define NVMC_WAITSTATENUM_ACCESSCODE_Pos (16UL) /*!< Position of ACCESSCODE field. */
#define NVMC_WAITSTATENUM_ACCESSCODE_Msk (0xFFFFUL << NVMC_WAITSTATENUM_ACCESSCODE_Pos) /*!< Bit mask of ACCESSCODE field. */

/* Bits 7..4 : Wait-states used while cell current test (set by CONFIG.MODENVM register) */
#define NVMC_WAITSTATENUM_WAITSTATENUMICELL_Pos (4UL) /*!< Position of WAITSTATENUMICELL field. */
#define NVMC_WAITSTATENUM_WAITSTATENUMICELL_Msk (0xFUL << NVMC_WAITSTATENUM_WAITSTATENUMICELL_Pos) /*!< Bit mask of WAITSTATENUMICELL field. */

/* Bits 3..0 : Non-volatile memory wait-states */
#define NVMC_WAITSTATENUM_WAITSTATENUM_Pos (0UL) /*!< Position of WAITSTATENUM field. */
#define NVMC_WAITSTATENUM_WAITSTATENUM_Msk (0xFUL << NVMC_WAITSTATENUM_WAITSTATENUM_Pos) /*!< Bit mask of WAITSTATENUM field. */

/* Register: NVMC_TESTWORD */
/* Description: Test the programming state of the least significant bit in a word */

/* Bits 31..0 : Address of the test word */
#define NVMC_TESTWORD_ADDRESS_Pos (0UL) /*!< Position of ADDRESS field. */
#define NVMC_TESTWORD_ADDRESS_Msk (0xFFFFFFFFUL << NVMC_TESTWORD_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Register: NVMC_VSELREAD */
/* Description: Select output voltage of power generator for read mode */

/* Bits 11..8 : Control the VEESEL signal */
#define NVMC_VSELREAD_VEESEL_Pos (8UL) /*!< Position of VEESEL field. */
#define NVMC_VSELREAD_VEESEL_Msk (0xFUL << NVMC_VSELREAD_VEESEL_Pos) /*!< Bit mask of VEESEL field. */

/* Bits 7..4 : Control the VPPSEL signal */
#define NVMC_VSELREAD_VPPSEL_Pos (4UL) /*!< Position of VPPSEL field. */
#define NVMC_VSELREAD_VPPSEL_Msk (0xFUL << NVMC_VSELREAD_VPPSEL_Pos) /*!< Bit mask of VPPSEL field. */

/* Bits 3..0 : Control the VWLSEL signal */
#define NVMC_VSELREAD_VWLSEL_Pos (0UL) /*!< Position of VWLSEL field. */
#define NVMC_VSELREAD_VWLSEL_Msk (0xFUL << NVMC_VSELREAD_VWLSEL_Pos) /*!< Bit mask of VWLSEL field. */

/* Register: NVMC_VSELWRITE */
/* Description: Select output voltage of power generator for write mode */

/* Bits 11..8 : Control the VEESEL signal */
#define NVMC_VSELWRITE_VEESEL_Pos (8UL) /*!< Position of VEESEL field. */
#define NVMC_VSELWRITE_VEESEL_Msk (0xFUL << NVMC_VSELWRITE_VEESEL_Pos) /*!< Bit mask of VEESEL field. */

/* Bits 7..4 : Control the VPPSEL signal */
#define NVMC_VSELWRITE_VPPSEL_Pos (4UL) /*!< Position of VPPSEL field. */
#define NVMC_VSELWRITE_VPPSEL_Msk (0xFUL << NVMC_VSELWRITE_VPPSEL_Pos) /*!< Bit mask of VPPSEL field. */

/* Bits 3..0 : Control the VWLSEL signal */
#define NVMC_VSELWRITE_VWLSEL_Pos (0UL) /*!< Position of VWLSEL field. */
#define NVMC_VSELWRITE_VWLSEL_Msk (0xFUL << NVMC_VSELWRITE_VWLSEL_Pos) /*!< Bit mask of VWLSEL field. */

/* Register: NVMC_VSELERASE */
/* Description: Select output voltage of power generator for erase mode */

/* Bits 11..8 : Control the VEESEL signal */
#define NVMC_VSELERASE_VEESEL_Pos (8UL) /*!< Position of VEESEL field. */
#define NVMC_VSELERASE_VEESEL_Msk (0xFUL << NVMC_VSELERASE_VEESEL_Pos) /*!< Bit mask of VEESEL field. */

/* Bits 7..4 : Control the VPPSEL signal */
#define NVMC_VSELERASE_VPPSEL_Pos (4UL) /*!< Position of VPPSEL field. */
#define NVMC_VSELERASE_VPPSEL_Msk (0xFUL << NVMC_VSELERASE_VPPSEL_Pos) /*!< Bit mask of VPPSEL field. */

/* Bits 3..0 : Control the VWLSEL signal */
#define NVMC_VSELERASE_VWLSEL_Pos (0UL) /*!< Position of VWLSEL field. */
#define NVMC_VSELERASE_VWLSEL_Msk (0xFUL << NVMC_VSELERASE_VWLSEL_Pos) /*!< Bit mask of VWLSEL field. */

/* Register: NVMC_TESTMODE */
/* Description: Register for entering test mode. Refer to the MTP IP test documentation for more details. */

/* Bits 15..0 : Register for entering test mode. Refer to the MTP IP test documentation for more details. This register does not return the same value as written. */
#define NVMC_TESTMODE_TESTMODE_Pos (0UL) /*!< Position of TESTMODE field. */
#define NVMC_TESTMODE_TESTMODE_Msk (0xFFFFUL << NVMC_TESTMODE_TESTMODE_Pos) /*!< Bit mask of TESTMODE field. */
#define NVMC_TESTMODE_TESTMODE_NORMAL (0x0000UL) /*!< Read: Not in test-mode. */
#define NVMC_TESTMODE_TESTMODE_TESTMODE1 (0x0001UL) /*!< Read: In test-mode 1. */
#define NVMC_TESTMODE_TESTMODE_TESTMODE2 (0x0002UL) /*!< Read: In test-mode 2. */
#define NVMC_TESTMODE_TESTMODE_TESTMODE3 (0x0004UL) /*!< Read: In test-mode 3. */
#define NVMC_TESTMODE_TESTMODE_SetNORMAL (0x0000UL) /*!< Write: Sets NORMAL mode. */
#define NVMC_TESTMODE_TESTMODE_SetTESTMODE2 (0xABCDUL) /*!< Write: Sets test-mode 2. */
#define NVMC_TESTMODE_TESTMODE_SetTESTMODE1 (0xBCDEUL) /*!< Write: Sets test-mode 1. */
#define NVMC_TESTMODE_TESTMODE_SetTESTMODE3 (0xCDEFUL) /*!< Write: Sets test-mode 3. */

/* Register: NVMC_TESTMASSERASE */
/* Description: Self-timed mass-erase operation */

/* Bits 1..0 : Self-timed mass-erase operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_Pos (0UL) /*!< Position of TESTMASSERASE field. */
#define NVMC_TESTMASSERASE_TESTMASSERASE_Msk (0x3UL << NVMC_TESTMASSERASE_TESTMASSERASE_Pos) /*!< Bit mask of TESTMASSERASE field. */
#define NVMC_TESTMASSERASE_TESTMASSERASE_NOOPERATION0 (0x0UL) /*!< No operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_NOOPERATION1 (0x1UL) /*!< No operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_NOOPERATION2 (0x2UL) /*!< No operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_EVERYTHING (0x3UL) /*!< Erase everything (all information pages and main block) */

/* Register: NVMC_TESTDATA128 */
/* Description: Description collection: Direct MTP test data word n */

/* Bits 31..0 : Returns data out from MTP when reading. Sets MTP data in when writing. */
#define NVMC_TESTDATA128_TESTDATA_Pos (0UL) /*!< Position of TESTDATA field. */
#define NVMC_TESTDATA128_TESTDATA_Msk (0xFFFFFFFFUL << NVMC_TESTDATA128_TESTDATA_Pos) /*!< Bit mask of TESTDATA field. */

/* Register: NVMC_TESTDATA128INC */
/* Description: Description collection: Direct MTP test data word n. Post-increments TESTCONTROLADDR */

/* Bits 31..0 : Returns data out from MTP when reading. Use TESTDATA128[1:0] registers to set the compared data. Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.CE is high, the read starts by pulsing the CE line low for tNRL. If TESTCONTROLLINES.CE is low, CE remains low for the whole access. */
#define NVMC_TESTDATA128INC_TESTDATA_Pos (0UL) /*!< Position of TESTDATA field. */
#define NVMC_TESTDATA128INC_TESTDATA_Msk (0xFFFFFFFFUL << NVMC_TESTDATA128INC_TESTDATA_Pos) /*!< Bit mask of TESTDATA field. */

/* Register: NVMC_TESTCMPINC */
/* Description: Reads and compares last MTP row to TESTDATA128 content. Post-increments TESTCONTROLADDR. */

/* Bit 1 : Reads and compares last MTP row (latched lines) to TESTDATA128 content. Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.CE is high, the read starts by pulsing the CE line low for tNRL. If TESTCONTROLLINES.CE is low, CE remains low for the whole access. */
#define NVMC_TESTCMPINC_LATCHED_Pos (1UL) /*!< Position of LATCHED field. */
#define NVMC_TESTCMPINC_LATCHED_Msk (0x1UL << NVMC_TESTCMPINC_LATCHED_Pos) /*!< Bit mask of LATCHED field. */
#define NVMC_TESTCMPINC_LATCHED_Equal (0x0UL) /*!< Latched TESTDATA128 content and MTP row read are equal */
#define NVMC_TESTCMPINC_LATCHED_NotEqual (0x1UL) /*!< Latched TESTDATA128 content and MTP row read are different */

/* Bit 0 : Reads and compares last MTP row (direct lines) to TESTDATA128 content. Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.CE is high, the read starts by pulsing the CE line low for tNRL. If TESTCONTROLLINES.CE is low, CE remains low for the whole access. */
#define NVMC_TESTCMPINC_DIRECT_Pos (0UL) /*!< Position of DIRECT field. */
#define NVMC_TESTCMPINC_DIRECT_Msk (0x1UL << NVMC_TESTCMPINC_DIRECT_Pos) /*!< Bit mask of DIRECT field. */
#define NVMC_TESTCMPINC_DIRECT_Equal (0x0UL) /*!< Direct TESTDATA128 content and MTP row read are equal */
#define NVMC_TESTCMPINC_DIRECT_NotEqual (0x1UL) /*!< Direct TESTDATA128 content and MTP row read are different */

/* Register: NVMC_TESTNCMPINC */
/* Description: Reads and compares last MTP row to complement of TESTDATA128 content. Post-increments TESTCONTROLADDR. */

/* Bit 1 : Reads and compares last MTP row (latched lines) to the complement of TESTDATA128 content (all bits inverted). Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.CE is high, the read starts by pulsing the CE line low for tNRL. If TESTCONTROLLINES.CE is low, CE remains low for the whole access. */
#define NVMC_TESTNCMPINC_LATCHED_Pos (1UL) /*!< Position of LATCHED field. */
#define NVMC_TESTNCMPINC_LATCHED_Msk (0x1UL << NVMC_TESTNCMPINC_LATCHED_Pos) /*!< Bit mask of LATCHED field. */
#define NVMC_TESTNCMPINC_LATCHED_Complement (0x0UL) /*!< Latched TESTDATA128 content and MTP row read are each-other's complement */
#define NVMC_TESTNCMPINC_LATCHED_NotComplement (0x1UL) /*!< Latched TESTDATA128 content and MTP row read are not each-other's complement */

/* Bit 0 : Reads and compares last MTP row (direct lines) to the complement of TESTDATA128 content (all bits inverted). Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.CE is high, the read starts by pulsing the CE line low for tNRL. If TESTCONTROLLINES.CE is low, CE remains low for the whole access. */
#define NVMC_TESTNCMPINC_DIRECT_Pos (0UL) /*!< Position of DIRECT field. */
#define NVMC_TESTNCMPINC_DIRECT_Msk (0x1UL << NVMC_TESTNCMPINC_DIRECT_Pos) /*!< Bit mask of DIRECT field. */
#define NVMC_TESTNCMPINC_DIRECT_Complement (0x0UL) /*!< Direct TESTDATA128 content and MTP row read are each-other's complement */
#define NVMC_TESTNCMPINC_DIRECT_NotComplement (0x1UL) /*!< Direct TESTDATA128 content and MTP row read are not each-other's complement */

/* Register: NVMC_TESTCONTROLLINES */
/* Description: Direct MTP test, control lines. Refer to the MTP IP documentation for more details. */

/* Bit 31 : Control the RSTB signal */
#define NVMC_TESTCONTROLLINES_RSTB_Pos (31UL) /*!< Position of RSTB field. */
#define NVMC_TESTCONTROLLINES_RSTB_Msk (0x1UL << NVMC_TESTCONTROLLINES_RSTB_Pos) /*!< Bit mask of RSTB field. */

/* Bit 30 : Control the CE signal */
#define NVMC_TESTCONTROLLINES_CE_Pos (30UL) /*!< Position of CE field. */
#define NVMC_TESTCONTROLLINES_CE_Msk (0x1UL << NVMC_TESTCONTROLLINES_CE_Pos) /*!< Bit mask of CE field. */

/* Bits 29..23 : Control the MODE signal */
#define NVMC_TESTCONTROLLINES_MODE_Pos (23UL) /*!< Position of MODE field. */
#define NVMC_TESTCONTROLLINES_MODE_Msk (0x7FUL << NVMC_TESTCONTROLLINES_MODE_Pos) /*!< Bit mask of MODE field. */

/* Register: NVMC_TESTCONTROLADDR */
/* Description: Direct MTP test control, address lines */

/* Bits 13..11 : Control the SADDR signal */
#define NVMC_TESTCONTROLADDR_SADDR_Pos (11UL) /*!< Position of SADDR field. */
#define NVMC_TESTCONTROLADDR_SADDR_Msk (0x7UL << NVMC_TESTCONTROLADDR_SADDR_Pos) /*!< Bit mask of SADDR field. */

/* Bits 10..8 : Control the YADDR signal */
#define NVMC_TESTCONTROLADDR_YADDR_Pos (8UL) /*!< Position of YADDR field. */
#define NVMC_TESTCONTROLADDR_YADDR_Msk (0x7UL << NVMC_TESTCONTROLADDR_YADDR_Pos) /*!< Bit mask of YADDR field. */

/* Bits 7..0 : Control the X address signal */
#define NVMC_TESTCONTROLADDR_XADDR_Pos (0UL) /*!< Position of XADDR field. */
#define NVMC_TESTCONTROLADDR_XADDR_Msk (0xFFUL << NVMC_TESTCONTROLADDR_XADDR_Pos) /*!< Bit mask of XADDR field. */

/* Register: NVMC_TESTCOUNTERRELOAD */
/* Description: Counter reload value, used when counting from CE rising edge to latching of data */

/* Bits 11..0 : Counter reload value, in MCU bus cycles, used when counting from CE rising edge to latching of data. Value of 0 has no effect (counter will not latch) */
#define NVMC_TESTCOUNTERRELOAD_RELOAD_Pos (0UL) /*!< Position of RELOAD field. */
#define NVMC_TESTCOUNTERRELOAD_RELOAD_Msk (0xFFFUL << NVMC_TESTCOUNTERRELOAD_RELOAD_Pos) /*!< Bit mask of RELOAD field. */

/* Register: NVMC_TESTCOUNTERRUNNING */
/* Description: Returns the state (counting or not) of the counter */

/* Bit 0 : Returns the state of the counter */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_Pos (0UL) /*!< Position of RUNNING field. */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_Msk (0x1UL << NVMC_TESTCOUNTERRUNNING_RUNNING_Pos) /*!< Bit mask of RUNNING field. */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_NotRunning (0x0UL) /*!< Counter is not running */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_Running (0x1UL) /*!< Counter is running */

/* Register: NVMC_TESTCONFIG */
/* Description: Mode of operation of the counter */

/* Bit 3 : Disables the address auto-increment or -decrement */
#define NVMC_TESTCONFIG_AUTOINCEN_Pos (3UL) /*!< Position of AUTOINCEN field. */
#define NVMC_TESTCONFIG_AUTOINCEN_Msk (0x1UL << NVMC_TESTCONFIG_AUTOINCEN_Pos) /*!< Bit mask of AUTOINCEN field. */
#define NVMC_TESTCONFIG_AUTOINCEN_Enable (0x0UL) /*!< Address auto-incrementing/decrementing is enabled */
#define NVMC_TESTCONFIG_AUTOINCEN_Disable (0x1UL) /*!< Address auto-incrementing/decrementing is disabled */

/* Bit 2 : Controls the address auto-increment or -decrement */
#define NVMC_TESTCONFIG_AUTOINC_Pos (2UL) /*!< Position of AUTOINC field. */
#define NVMC_TESTCONFIG_AUTOINC_Msk (0x1UL << NVMC_TESTCONFIG_AUTOINC_Pos) /*!< Bit mask of AUTOINC field. */
#define NVMC_TESTCONFIG_AUTOINC_Increment (0x0UL) /*!< Address is auto-incrementing */
#define NVMC_TESTCONFIG_AUTOINC_Decrement (0x1UL) /*!< Address is auto-decrementing */

/* Bit 1 : Defines the starting point of the counter */
#define NVMC_TESTCONFIG_START_Pos (1UL) /*!< Position of START field. */
#define NVMC_TESTCONFIG_START_Msk (0x1UL << NVMC_TESTCONFIG_START_Pos) /*!< Bit mask of START field. */
#define NVMC_TESTCONFIG_START_CE (0x0UL) /*!< Counter starts on CE rising edge */
#define NVMC_TESTCONFIG_START_None (0x1UL) /*!< None */

/* Bit 0 : Returns the state of the counter */
#define NVMC_TESTCONFIG_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define NVMC_TESTCONFIG_ENABLE_Msk (0x1UL << NVMC_TESTCONFIG_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define NVMC_TESTCONFIG_ENABLE_Disabled (0x0UL) /*!< Counter is disabled */
#define NVMC_TESTCONFIG_ENABLE_Enabled (0x1UL) /*!< Counter is enabled */

/* Register: NVMC_TESTMEASVPPEN */
/* Description: Controls analog signals for MTP measurements */

/* Bit 1 : Enable the analog test bus (ATB) connecting VEEE and VWLE from MTP. The VPP has dedicated pin called DECP. */
#define NVMC_TESTMEASVPPEN_ATBEN_Pos (1UL) /*!< Position of ATBEN field. */
#define NVMC_TESTMEASVPPEN_ATBEN_Msk (0x1UL << NVMC_TESTMEASVPPEN_ATBEN_Pos) /*!< Bit mask of ATBEN field. */
#define NVMC_TESTMEASVPPEN_ATBEN_Disabled (0x0UL) /*!< ATB disabled */
#define NVMC_TESTMEASVPPEN_ATBEN_Enabled (0x1UL) /*!< ATB enabled */

/* Bit 0 : Analog enable for Cell Current Measurement Port. Needs to be set when measuring MEAS on P0.00. */
#define NVMC_TESTMEASVPPEN_MEASEN_Pos (0UL) /*!< Position of MEASEN field. */
#define NVMC_TESTMEASVPPEN_MEASEN_Msk (0x1UL << NVMC_TESTMEASVPPEN_MEASEN_Pos) /*!< Bit mask of MEASEN field. */
#define NVMC_TESTMEASVPPEN_MEASEN_Disabled (0x0UL) /*!< MEAS pad disabled */
#define NVMC_TESTMEASVPPEN_MEASEN_Enabled (0x1UL) /*!< MEAS pad enabled */

/* Register: NVMC_TESTPOWERCONTROL */
/* Description: Direct test, control lines to the MTP power generator module. Refer to the MTP IP documentation for more details. */

/* Bit 31 : Control the RD (read enable) signal */
#define NVMC_TESTPOWERCONTROL_RD_Pos (31UL) /*!< Position of RD field. */
#define NVMC_TESTPOWERCONTROL_RD_Msk (0x1UL << NVMC_TESTPOWERCONTROL_RD_Pos) /*!< Bit mask of RD field. */

/* Bit 30 : Control the PGM (program enable) signal */
#define NVMC_TESTPOWERCONTROL_PGM_Pos (30UL) /*!< Position of PGM field. */
#define NVMC_TESTPOWERCONTROL_PGM_Msk (0x1UL << NVMC_TESTPOWERCONTROL_PGM_Pos) /*!< Bit mask of PGM field. */

/* Bit 29 : Control the ERS (erase enable) signal */
#define NVMC_TESTPOWERCONTROL_ERS_Pos (29UL) /*!< Position of ERS field. */
#define NVMC_TESTPOWERCONTROL_ERS_Msk (0x1UL << NVMC_TESTPOWERCONTROL_ERS_Pos) /*!< Bit mask of ERS field. */

/* Bit 28 : Enable clock from PCGC to the CLK signal */
#define NVMC_TESTPOWERCONTROL_CLKEN_Pos (28UL) /*!< Position of CLKEN field. */
#define NVMC_TESTPOWERCONTROL_CLKEN_Msk (0x1UL << NVMC_TESTPOWERCONTROL_CLKEN_Pos) /*!< Bit mask of CLKEN field. */

/* Bits 27..24 : Control the VMODE signal */
#define NVMC_TESTPOWERCONTROL_VMODE_Pos (24UL) /*!< Position of VMODE field. */
#define NVMC_TESTPOWERCONTROL_VMODE_Msk (0xFUL << NVMC_TESTPOWERCONTROL_VMODE_Pos) /*!< Bit mask of VMODE field. */

/* Bits 23..20 : Control the VWLSEL signal */
#define NVMC_TESTPOWERCONTROL_VWLSEL_Pos (20UL) /*!< Position of VWLSEL field. */
#define NVMC_TESTPOWERCONTROL_VWLSEL_Msk (0xFUL << NVMC_TESTPOWERCONTROL_VWLSEL_Pos) /*!< Bit mask of VWLSEL field. */

/* Bits 19..16 : Control the VPPSEL signal */
#define NVMC_TESTPOWERCONTROL_VPPSEL_Pos (16UL) /*!< Position of VPPSEL field. */
#define NVMC_TESTPOWERCONTROL_VPPSEL_Msk (0xFUL << NVMC_TESTPOWERCONTROL_VPPSEL_Pos) /*!< Bit mask of VPPSEL field. */

/* Bits 15..12 : Control the VEESEL signal */
#define NVMC_TESTPOWERCONTROL_VEESEL_Pos (12UL) /*!< Position of VEESEL field. */
#define NVMC_TESTPOWERCONTROL_VEESEL_Msk (0xFUL << NVMC_TESTPOWERCONTROL_VEESEL_Pos) /*!< Bit mask of VEESEL field. */

/* Register: NVMC_FORCEONNVM */
/* Description: Force on NVM supply */

/* Bit 0 : Force on NVM supply */
#define NVMC_FORCEONNVM_FORCEONNVM_Pos (0UL) /*!< Position of FORCEONNVM field. */
#define NVMC_FORCEONNVM_FORCEONNVM_Msk (0x1UL << NVMC_FORCEONNVM_FORCEONNVM_Pos) /*!< Bit mask of FORCEONNVM field. */
#define NVMC_FORCEONNVM_FORCEONNVM_DoNotForceOn (0x0UL) /*!< Do not force on NVM supply */
#define NVMC_FORCEONNVM_FORCEONNVM_ForceOn (0x1UL) /*!< Force on NVM supply */

/* Register: NVMC_FORCEOFFNVM */
/* Description: Force off NVM supply */

/* Bits 31..0 : Force off NVM supply */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM_Pos (0UL) /*!< Position of FORCEOFFNVM field. */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM_Msk (0xFFFFFFFFUL << NVMC_FORCEOFFNVM_FORCEOFFNVM_Pos) /*!< Bit mask of FORCEOFFNVM field. */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM_NotForcedOff (0x00000000UL) /*!< Read: NVM supply not forced off */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM_ForcedOff (0x00000001UL) /*!< Read: NVM supply force off */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM_DisableForceOff (0x00000000UL) /*!< Write: Do not force off NVM supply */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM_EnableForceOff (0xACCE5500UL) /*!< Write: Force off NVM supply */


/* Peripheral: OSCILLATORS */
/* Description: Oscillator control */

/* Register: OSCILLATORS_BYPASSHFXOSC */
/* Description: Enable or disable bypass of HFCLK crystal oscillator with external clock source */

/* Bit 0 : Enable or disable bypass of HFCLK crystal oscillator with external clock source */
#define OSCILLATORS_BYPASSHFXOSC_BYPASS_Pos (0UL) /*!< Position of BYPASS field. */
#define OSCILLATORS_BYPASSHFXOSC_BYPASS_Msk (0x1UL << OSCILLATORS_BYPASSHFXOSC_BYPASS_Pos) /*!< Bit mask of BYPASS field. */
#define OSCILLATORS_BYPASSHFXOSC_BYPASS_Disabled (0x0UL) /*!< Disable (use with crystal or low-swing external source) */
#define OSCILLATORS_BYPASSHFXOSC_BYPASS_Enabled (0x1UL) /*!< Enable (use with rail-to-rail external source) */

/* Register: OSCILLATORS_PLL64M_BYPASS */
/* Description: PLL64M bypass control */

/* Bit 0 : Enable or disable bypass of PLL64M by an external clock source */
#define OSCILLATORS_PLL64M_BYPASS_BYPASS_Pos (0UL) /*!< Position of BYPASS field. */
#define OSCILLATORS_PLL64M_BYPASS_BYPASS_Msk (0x1UL << OSCILLATORS_PLL64M_BYPASS_BYPASS_Pos) /*!< Bit mask of BYPASS field. */
#define OSCILLATORS_PLL64M_BYPASS_BYPASS_Disabled (0x0UL) /*!< Disable */
#define OSCILLATORS_PLL64M_BYPASS_BYPASS_Enabled (0x1UL) /*!< Enable */

/* Register: OSCILLATORS_PLL64M_MUTE */
/* Description: Mute the PLL64M */

/* Bit 0 : Mute output clock */
#define OSCILLATORS_PLL64M_MUTE_MUTE_Pos (0UL) /*!< Position of MUTE field. */
#define OSCILLATORS_PLL64M_MUTE_MUTE_Msk (0x1UL << OSCILLATORS_PLL64M_MUTE_MUTE_Pos) /*!< Bit mask of MUTE field. */
#define OSCILLATORS_PLL64M_MUTE_MUTE_Disabled (0x0UL) /*!< Disable */
#define OSCILLATORS_PLL64M_MUTE_MUTE_Enabled (0x1UL) /*!< Enable */

/* Register: OSCILLATORS_PLL64M_PROGCHPUMP */
/* Description: Program charge pump current */

/* Bit 0 : Program charge pump current (only used for debugging) */
#define OSCILLATORS_PLL64M_PROGCHPUMP_PROGCHPUMP_Pos (0UL) /*!< Position of PROGCHPUMP field. */
#define OSCILLATORS_PLL64M_PROGCHPUMP_PROGCHPUMP_Msk (0x1UL << OSCILLATORS_PLL64M_PROGCHPUMP_PROGCHPUMP_Pos) /*!< Bit mask of PROGCHPUMP field. */

/* Register: OSCILLATORS_PLL64M_VCOTRIM */
/* Description: VCO trim value for the 64 MHz PLL */

/* Bits 5..0 : VCO trim value for the 64 MHz PLL */
#define OSCILLATORS_PLL64M_VCOTRIM_VCOTRIM_Pos (0UL) /*!< Position of VCOTRIM field. */
#define OSCILLATORS_PLL64M_VCOTRIM_VCOTRIM_Msk (0x3FUL << OSCILLATORS_PLL64M_VCOTRIM_VCOTRIM_Pos) /*!< Bit mask of VCOTRIM field. */

/* Register: OSCILLATORS_PLL64M_VCOTRIMOVERRIDE */
/* Description: Control overriding of the VCO trim values */

/* Bit 0 : VCO trim value for the 64 MHz PLL */
#define OSCILLATORS_PLL64M_VCOTRIMOVERRIDE_VCOTRIMOVERRIDE_Pos (0UL) /*!< Position of VCOTRIMOVERRIDE field. */
#define OSCILLATORS_PLL64M_VCOTRIMOVERRIDE_VCOTRIMOVERRIDE_Msk (0x1UL << OSCILLATORS_PLL64M_VCOTRIMOVERRIDE_VCOTRIMOVERRIDE_Pos) /*!< Bit mask of VCOTRIMOVERRIDE field. */
#define OSCILLATORS_PLL64M_VCOTRIMOVERRIDE_VCOTRIMOVERRIDE_Disabled (0x0UL) /*!< VCO trim values are coming from FICR */
#define OSCILLATORS_PLL64M_VCOTRIMOVERRIDE_VCOTRIMOVERRIDE_Enabled (0x1UL) /*!< VCO trim values are coming from the VCOTRIM register */


/* Peripheral: GPIO */
/* Description: GPIO Port 0 */

/* Register: GPIO_OUT */
/* Description: Write GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUT_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_OUT_PIN31_Msk (0x1UL << GPIO_OUT_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_OUT_PIN31_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN31_High (0x1UL) /*!< Pin driver is high */

/* Bit 30 : Pin 30 */
#define GPIO_OUT_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_OUT_PIN30_Msk (0x1UL << GPIO_OUT_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_OUT_PIN30_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN30_High (0x1UL) /*!< Pin driver is high */

/* Bit 29 : Pin 29 */
#define GPIO_OUT_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_OUT_PIN29_Msk (0x1UL << GPIO_OUT_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_OUT_PIN29_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN29_High (0x1UL) /*!< Pin driver is high */

/* Bit 28 : Pin 28 */
#define GPIO_OUT_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_OUT_PIN28_Msk (0x1UL << GPIO_OUT_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_OUT_PIN28_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN28_High (0x1UL) /*!< Pin driver is high */

/* Bit 27 : Pin 27 */
#define GPIO_OUT_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_OUT_PIN27_Msk (0x1UL << GPIO_OUT_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_OUT_PIN27_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN27_High (0x1UL) /*!< Pin driver is high */

/* Bit 26 : Pin 26 */
#define GPIO_OUT_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_OUT_PIN26_Msk (0x1UL << GPIO_OUT_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_OUT_PIN26_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN26_High (0x1UL) /*!< Pin driver is high */

/* Bit 25 : Pin 25 */
#define GPIO_OUT_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_OUT_PIN25_Msk (0x1UL << GPIO_OUT_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_OUT_PIN25_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN25_High (0x1UL) /*!< Pin driver is high */

/* Bit 24 : Pin 24 */
#define GPIO_OUT_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_OUT_PIN24_Msk (0x1UL << GPIO_OUT_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_OUT_PIN24_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN24_High (0x1UL) /*!< Pin driver is high */

/* Bit 23 : Pin 23 */
#define GPIO_OUT_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_OUT_PIN23_Msk (0x1UL << GPIO_OUT_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_OUT_PIN23_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN23_High (0x1UL) /*!< Pin driver is high */

/* Bit 22 : Pin 22 */
#define GPIO_OUT_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_OUT_PIN22_Msk (0x1UL << GPIO_OUT_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_OUT_PIN22_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN22_High (0x1UL) /*!< Pin driver is high */

/* Bit 21 : Pin 21 */
#define GPIO_OUT_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_OUT_PIN21_Msk (0x1UL << GPIO_OUT_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_OUT_PIN21_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN21_High (0x1UL) /*!< Pin driver is high */

/* Bit 20 : Pin 20 */
#define GPIO_OUT_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_OUT_PIN20_Msk (0x1UL << GPIO_OUT_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_OUT_PIN20_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN20_High (0x1UL) /*!< Pin driver is high */

/* Bit 19 : Pin 19 */
#define GPIO_OUT_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_OUT_PIN19_Msk (0x1UL << GPIO_OUT_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_OUT_PIN19_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN19_High (0x1UL) /*!< Pin driver is high */

/* Bit 18 : Pin 18 */
#define GPIO_OUT_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_OUT_PIN18_Msk (0x1UL << GPIO_OUT_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_OUT_PIN18_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN18_High (0x1UL) /*!< Pin driver is high */

/* Bit 17 : Pin 17 */
#define GPIO_OUT_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_OUT_PIN17_Msk (0x1UL << GPIO_OUT_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_OUT_PIN17_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN17_High (0x1UL) /*!< Pin driver is high */

/* Bit 16 : Pin 16 */
#define GPIO_OUT_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_OUT_PIN16_Msk (0x1UL << GPIO_OUT_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_OUT_PIN16_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN16_High (0x1UL) /*!< Pin driver is high */

/* Bit 15 : Pin 15 */
#define GPIO_OUT_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_OUT_PIN15_Msk (0x1UL << GPIO_OUT_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_OUT_PIN15_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN15_High (0x1UL) /*!< Pin driver is high */

/* Bit 14 : Pin 14 */
#define GPIO_OUT_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_OUT_PIN14_Msk (0x1UL << GPIO_OUT_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_OUT_PIN14_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN14_High (0x1UL) /*!< Pin driver is high */

/* Bit 13 : Pin 13 */
#define GPIO_OUT_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_OUT_PIN13_Msk (0x1UL << GPIO_OUT_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_OUT_PIN13_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN13_High (0x1UL) /*!< Pin driver is high */

/* Bit 12 : Pin 12 */
#define GPIO_OUT_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_OUT_PIN12_Msk (0x1UL << GPIO_OUT_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_OUT_PIN12_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN12_High (0x1UL) /*!< Pin driver is high */

/* Bit 11 : Pin 11 */
#define GPIO_OUT_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_OUT_PIN11_Msk (0x1UL << GPIO_OUT_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_OUT_PIN11_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN11_High (0x1UL) /*!< Pin driver is high */

/* Bit 10 : Pin 10 */
#define GPIO_OUT_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_OUT_PIN10_Msk (0x1UL << GPIO_OUT_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_OUT_PIN10_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN10_High (0x1UL) /*!< Pin driver is high */

/* Bit 9 : Pin 9 */
#define GPIO_OUT_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUT_PIN9_Msk (0x1UL << GPIO_OUT_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUT_PIN9_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN9_High (0x1UL) /*!< Pin driver is high */

/* Bit 8 : Pin 8 */
#define GPIO_OUT_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUT_PIN8_Msk (0x1UL << GPIO_OUT_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUT_PIN8_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN8_High (0x1UL) /*!< Pin driver is high */

/* Bit 7 : Pin 7 */
#define GPIO_OUT_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUT_PIN7_Msk (0x1UL << GPIO_OUT_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUT_PIN7_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN7_High (0x1UL) /*!< Pin driver is high */

/* Bit 6 : Pin 6 */
#define GPIO_OUT_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUT_PIN6_Msk (0x1UL << GPIO_OUT_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUT_PIN6_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN6_High (0x1UL) /*!< Pin driver is high */

/* Bit 5 : Pin 5 */
#define GPIO_OUT_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUT_PIN5_Msk (0x1UL << GPIO_OUT_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUT_PIN5_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN5_High (0x1UL) /*!< Pin driver is high */

/* Bit 4 : Pin 4 */
#define GPIO_OUT_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUT_PIN4_Msk (0x1UL << GPIO_OUT_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUT_PIN4_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN4_High (0x1UL) /*!< Pin driver is high */

/* Bit 3 : Pin 3 */
#define GPIO_OUT_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUT_PIN3_Msk (0x1UL << GPIO_OUT_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUT_PIN3_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN3_High (0x1UL) /*!< Pin driver is high */

/* Bit 2 : Pin 2 */
#define GPIO_OUT_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUT_PIN2_Msk (0x1UL << GPIO_OUT_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUT_PIN2_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN2_High (0x1UL) /*!< Pin driver is high */

/* Bit 1 : Pin 1 */
#define GPIO_OUT_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUT_PIN1_Msk (0x1UL << GPIO_OUT_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUT_PIN1_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN1_High (0x1UL) /*!< Pin driver is high */

/* Bit 0 : Pin 0 */
#define GPIO_OUT_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUT_PIN0_Msk (0x1UL << GPIO_OUT_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUT_PIN0_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN0_High (0x1UL) /*!< Pin driver is high */

/* Register: GPIO_OUTSET */
/* Description: Set individual bits in GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUTSET_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_OUTSET_PIN31_Msk (0x1UL << GPIO_OUTSET_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_OUTSET_PIN31_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN31_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN31_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 30 : Pin 30 */
#define GPIO_OUTSET_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_OUTSET_PIN30_Msk (0x1UL << GPIO_OUTSET_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_OUTSET_PIN30_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN30_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN30_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 29 : Pin 29 */
#define GPIO_OUTSET_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_OUTSET_PIN29_Msk (0x1UL << GPIO_OUTSET_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_OUTSET_PIN29_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN29_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN29_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 28 : Pin 28 */
#define GPIO_OUTSET_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_OUTSET_PIN28_Msk (0x1UL << GPIO_OUTSET_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_OUTSET_PIN28_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN28_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN28_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 27 : Pin 27 */
#define GPIO_OUTSET_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_OUTSET_PIN27_Msk (0x1UL << GPIO_OUTSET_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_OUTSET_PIN27_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN27_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN27_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 26 : Pin 26 */
#define GPIO_OUTSET_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_OUTSET_PIN26_Msk (0x1UL << GPIO_OUTSET_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_OUTSET_PIN26_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN26_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN26_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 25 : Pin 25 */
#define GPIO_OUTSET_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_OUTSET_PIN25_Msk (0x1UL << GPIO_OUTSET_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_OUTSET_PIN25_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN25_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN25_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 24 : Pin 24 */
#define GPIO_OUTSET_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_OUTSET_PIN24_Msk (0x1UL << GPIO_OUTSET_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_OUTSET_PIN24_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN24_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN24_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 23 : Pin 23 */
#define GPIO_OUTSET_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_OUTSET_PIN23_Msk (0x1UL << GPIO_OUTSET_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_OUTSET_PIN23_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN23_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN23_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 22 : Pin 22 */
#define GPIO_OUTSET_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_OUTSET_PIN22_Msk (0x1UL << GPIO_OUTSET_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_OUTSET_PIN22_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN22_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN22_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 21 : Pin 21 */
#define GPIO_OUTSET_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_OUTSET_PIN21_Msk (0x1UL << GPIO_OUTSET_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_OUTSET_PIN21_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN21_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN21_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 20 : Pin 20 */
#define GPIO_OUTSET_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_OUTSET_PIN20_Msk (0x1UL << GPIO_OUTSET_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_OUTSET_PIN20_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN20_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN20_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 19 : Pin 19 */
#define GPIO_OUTSET_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_OUTSET_PIN19_Msk (0x1UL << GPIO_OUTSET_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_OUTSET_PIN19_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN19_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN19_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 18 : Pin 18 */
#define GPIO_OUTSET_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_OUTSET_PIN18_Msk (0x1UL << GPIO_OUTSET_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_OUTSET_PIN18_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN18_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN18_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 17 : Pin 17 */
#define GPIO_OUTSET_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_OUTSET_PIN17_Msk (0x1UL << GPIO_OUTSET_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_OUTSET_PIN17_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN17_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN17_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 16 : Pin 16 */
#define GPIO_OUTSET_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_OUTSET_PIN16_Msk (0x1UL << GPIO_OUTSET_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_OUTSET_PIN16_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN16_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN16_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 15 : Pin 15 */
#define GPIO_OUTSET_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_OUTSET_PIN15_Msk (0x1UL << GPIO_OUTSET_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_OUTSET_PIN15_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN15_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN15_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 14 : Pin 14 */
#define GPIO_OUTSET_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_OUTSET_PIN14_Msk (0x1UL << GPIO_OUTSET_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_OUTSET_PIN14_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN14_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN14_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 13 : Pin 13 */
#define GPIO_OUTSET_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_OUTSET_PIN13_Msk (0x1UL << GPIO_OUTSET_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_OUTSET_PIN13_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN13_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN13_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 12 : Pin 12 */
#define GPIO_OUTSET_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_OUTSET_PIN12_Msk (0x1UL << GPIO_OUTSET_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_OUTSET_PIN12_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN12_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN12_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 11 : Pin 11 */
#define GPIO_OUTSET_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_OUTSET_PIN11_Msk (0x1UL << GPIO_OUTSET_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_OUTSET_PIN11_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN11_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN11_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 10 : Pin 10 */
#define GPIO_OUTSET_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_OUTSET_PIN10_Msk (0x1UL << GPIO_OUTSET_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_OUTSET_PIN10_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN10_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN10_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 9 : Pin 9 */
#define GPIO_OUTSET_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUTSET_PIN9_Msk (0x1UL << GPIO_OUTSET_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUTSET_PIN9_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN9_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN9_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 8 : Pin 8 */
#define GPIO_OUTSET_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUTSET_PIN8_Msk (0x1UL << GPIO_OUTSET_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUTSET_PIN8_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN8_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN8_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 7 : Pin 7 */
#define GPIO_OUTSET_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUTSET_PIN7_Msk (0x1UL << GPIO_OUTSET_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUTSET_PIN7_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN7_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN7_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 6 : Pin 6 */
#define GPIO_OUTSET_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUTSET_PIN6_Msk (0x1UL << GPIO_OUTSET_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUTSET_PIN6_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN6_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN6_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 5 : Pin 5 */
#define GPIO_OUTSET_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUTSET_PIN5_Msk (0x1UL << GPIO_OUTSET_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUTSET_PIN5_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN5_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN5_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 4 : Pin 4 */
#define GPIO_OUTSET_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUTSET_PIN4_Msk (0x1UL << GPIO_OUTSET_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUTSET_PIN4_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN4_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN4_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 3 : Pin 3 */
#define GPIO_OUTSET_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUTSET_PIN3_Msk (0x1UL << GPIO_OUTSET_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUTSET_PIN3_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN3_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN3_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 2 : Pin 2 */
#define GPIO_OUTSET_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUTSET_PIN2_Msk (0x1UL << GPIO_OUTSET_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUTSET_PIN2_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN2_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN2_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 1 : Pin 1 */
#define GPIO_OUTSET_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUTSET_PIN1_Msk (0x1UL << GPIO_OUTSET_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUTSET_PIN1_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN1_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN1_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 0 : Pin 0 */
#define GPIO_OUTSET_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUTSET_PIN0_Msk (0x1UL << GPIO_OUTSET_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUTSET_PIN0_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN0_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN0_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Register: GPIO_OUTCLR */
/* Description: Clear individual bits in GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUTCLR_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_OUTCLR_PIN31_Msk (0x1UL << GPIO_OUTCLR_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_OUTCLR_PIN31_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN31_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN31_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 30 : Pin 30 */
#define GPIO_OUTCLR_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_OUTCLR_PIN30_Msk (0x1UL << GPIO_OUTCLR_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_OUTCLR_PIN30_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN30_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN30_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 29 : Pin 29 */
#define GPIO_OUTCLR_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_OUTCLR_PIN29_Msk (0x1UL << GPIO_OUTCLR_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_OUTCLR_PIN29_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN29_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN29_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 28 : Pin 28 */
#define GPIO_OUTCLR_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_OUTCLR_PIN28_Msk (0x1UL << GPIO_OUTCLR_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_OUTCLR_PIN28_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN28_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN28_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 27 : Pin 27 */
#define GPIO_OUTCLR_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_OUTCLR_PIN27_Msk (0x1UL << GPIO_OUTCLR_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_OUTCLR_PIN27_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN27_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN27_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 26 : Pin 26 */
#define GPIO_OUTCLR_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_OUTCLR_PIN26_Msk (0x1UL << GPIO_OUTCLR_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_OUTCLR_PIN26_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN26_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN26_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 25 : Pin 25 */
#define GPIO_OUTCLR_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_OUTCLR_PIN25_Msk (0x1UL << GPIO_OUTCLR_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_OUTCLR_PIN25_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN25_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN25_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 24 : Pin 24 */
#define GPIO_OUTCLR_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_OUTCLR_PIN24_Msk (0x1UL << GPIO_OUTCLR_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_OUTCLR_PIN24_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN24_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN24_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 23 : Pin 23 */
#define GPIO_OUTCLR_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_OUTCLR_PIN23_Msk (0x1UL << GPIO_OUTCLR_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_OUTCLR_PIN23_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN23_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN23_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 22 : Pin 22 */
#define GPIO_OUTCLR_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_OUTCLR_PIN22_Msk (0x1UL << GPIO_OUTCLR_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_OUTCLR_PIN22_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN22_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN22_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 21 : Pin 21 */
#define GPIO_OUTCLR_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_OUTCLR_PIN21_Msk (0x1UL << GPIO_OUTCLR_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_OUTCLR_PIN21_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN21_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN21_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 20 : Pin 20 */
#define GPIO_OUTCLR_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_OUTCLR_PIN20_Msk (0x1UL << GPIO_OUTCLR_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_OUTCLR_PIN20_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN20_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN20_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 19 : Pin 19 */
#define GPIO_OUTCLR_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_OUTCLR_PIN19_Msk (0x1UL << GPIO_OUTCLR_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_OUTCLR_PIN19_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN19_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN19_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 18 : Pin 18 */
#define GPIO_OUTCLR_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_OUTCLR_PIN18_Msk (0x1UL << GPIO_OUTCLR_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_OUTCLR_PIN18_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN18_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN18_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 17 : Pin 17 */
#define GPIO_OUTCLR_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_OUTCLR_PIN17_Msk (0x1UL << GPIO_OUTCLR_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_OUTCLR_PIN17_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN17_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN17_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 16 : Pin 16 */
#define GPIO_OUTCLR_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_OUTCLR_PIN16_Msk (0x1UL << GPIO_OUTCLR_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_OUTCLR_PIN16_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN16_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN16_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 15 : Pin 15 */
#define GPIO_OUTCLR_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_OUTCLR_PIN15_Msk (0x1UL << GPIO_OUTCLR_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_OUTCLR_PIN15_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN15_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN15_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 14 : Pin 14 */
#define GPIO_OUTCLR_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_OUTCLR_PIN14_Msk (0x1UL << GPIO_OUTCLR_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_OUTCLR_PIN14_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN14_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN14_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 13 : Pin 13 */
#define GPIO_OUTCLR_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_OUTCLR_PIN13_Msk (0x1UL << GPIO_OUTCLR_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_OUTCLR_PIN13_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN13_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN13_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 12 : Pin 12 */
#define GPIO_OUTCLR_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_OUTCLR_PIN12_Msk (0x1UL << GPIO_OUTCLR_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_OUTCLR_PIN12_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN12_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN12_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 11 : Pin 11 */
#define GPIO_OUTCLR_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_OUTCLR_PIN11_Msk (0x1UL << GPIO_OUTCLR_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_OUTCLR_PIN11_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN11_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN11_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 10 : Pin 10 */
#define GPIO_OUTCLR_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_OUTCLR_PIN10_Msk (0x1UL << GPIO_OUTCLR_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_OUTCLR_PIN10_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN10_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN10_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 9 : Pin 9 */
#define GPIO_OUTCLR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUTCLR_PIN9_Msk (0x1UL << GPIO_OUTCLR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUTCLR_PIN9_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN9_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN9_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 8 : Pin 8 */
#define GPIO_OUTCLR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUTCLR_PIN8_Msk (0x1UL << GPIO_OUTCLR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUTCLR_PIN8_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN8_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN8_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 7 : Pin 7 */
#define GPIO_OUTCLR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUTCLR_PIN7_Msk (0x1UL << GPIO_OUTCLR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUTCLR_PIN7_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN7_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN7_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 6 : Pin 6 */
#define GPIO_OUTCLR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUTCLR_PIN6_Msk (0x1UL << GPIO_OUTCLR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUTCLR_PIN6_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN6_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN6_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 5 : Pin 5 */
#define GPIO_OUTCLR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUTCLR_PIN5_Msk (0x1UL << GPIO_OUTCLR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUTCLR_PIN5_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN5_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN5_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 4 : Pin 4 */
#define GPIO_OUTCLR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUTCLR_PIN4_Msk (0x1UL << GPIO_OUTCLR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUTCLR_PIN4_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN4_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN4_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 3 : Pin 3 */
#define GPIO_OUTCLR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUTCLR_PIN3_Msk (0x1UL << GPIO_OUTCLR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUTCLR_PIN3_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN3_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN3_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 2 : Pin 2 */
#define GPIO_OUTCLR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUTCLR_PIN2_Msk (0x1UL << GPIO_OUTCLR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUTCLR_PIN2_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN2_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN2_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 1 : Pin 1 */
#define GPIO_OUTCLR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUTCLR_PIN1_Msk (0x1UL << GPIO_OUTCLR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUTCLR_PIN1_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN1_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN1_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 0 : Pin 0 */
#define GPIO_OUTCLR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUTCLR_PIN0_Msk (0x1UL << GPIO_OUTCLR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUTCLR_PIN0_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN0_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN0_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Register: GPIO_IN */
/* Description: Read GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_IN_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_IN_PIN31_Msk (0x1UL << GPIO_IN_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_IN_PIN31_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN31_High (0x1UL) /*!< Pin input is high */

/* Bit 30 : Pin 30 */
#define GPIO_IN_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_IN_PIN30_Msk (0x1UL << GPIO_IN_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_IN_PIN30_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN30_High (0x1UL) /*!< Pin input is high */

/* Bit 29 : Pin 29 */
#define GPIO_IN_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_IN_PIN29_Msk (0x1UL << GPIO_IN_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_IN_PIN29_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN29_High (0x1UL) /*!< Pin input is high */

/* Bit 28 : Pin 28 */
#define GPIO_IN_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_IN_PIN28_Msk (0x1UL << GPIO_IN_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_IN_PIN28_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN28_High (0x1UL) /*!< Pin input is high */

/* Bit 27 : Pin 27 */
#define GPIO_IN_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_IN_PIN27_Msk (0x1UL << GPIO_IN_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_IN_PIN27_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN27_High (0x1UL) /*!< Pin input is high */

/* Bit 26 : Pin 26 */
#define GPIO_IN_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_IN_PIN26_Msk (0x1UL << GPIO_IN_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_IN_PIN26_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN26_High (0x1UL) /*!< Pin input is high */

/* Bit 25 : Pin 25 */
#define GPIO_IN_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_IN_PIN25_Msk (0x1UL << GPIO_IN_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_IN_PIN25_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN25_High (0x1UL) /*!< Pin input is high */

/* Bit 24 : Pin 24 */
#define GPIO_IN_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_IN_PIN24_Msk (0x1UL << GPIO_IN_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_IN_PIN24_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN24_High (0x1UL) /*!< Pin input is high */

/* Bit 23 : Pin 23 */
#define GPIO_IN_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_IN_PIN23_Msk (0x1UL << GPIO_IN_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_IN_PIN23_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN23_High (0x1UL) /*!< Pin input is high */

/* Bit 22 : Pin 22 */
#define GPIO_IN_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_IN_PIN22_Msk (0x1UL << GPIO_IN_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_IN_PIN22_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN22_High (0x1UL) /*!< Pin input is high */

/* Bit 21 : Pin 21 */
#define GPIO_IN_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_IN_PIN21_Msk (0x1UL << GPIO_IN_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_IN_PIN21_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN21_High (0x1UL) /*!< Pin input is high */

/* Bit 20 : Pin 20 */
#define GPIO_IN_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_IN_PIN20_Msk (0x1UL << GPIO_IN_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_IN_PIN20_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN20_High (0x1UL) /*!< Pin input is high */

/* Bit 19 : Pin 19 */
#define GPIO_IN_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_IN_PIN19_Msk (0x1UL << GPIO_IN_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_IN_PIN19_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN19_High (0x1UL) /*!< Pin input is high */

/* Bit 18 : Pin 18 */
#define GPIO_IN_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_IN_PIN18_Msk (0x1UL << GPIO_IN_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_IN_PIN18_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN18_High (0x1UL) /*!< Pin input is high */

/* Bit 17 : Pin 17 */
#define GPIO_IN_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_IN_PIN17_Msk (0x1UL << GPIO_IN_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_IN_PIN17_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN17_High (0x1UL) /*!< Pin input is high */

/* Bit 16 : Pin 16 */
#define GPIO_IN_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_IN_PIN16_Msk (0x1UL << GPIO_IN_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_IN_PIN16_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN16_High (0x1UL) /*!< Pin input is high */

/* Bit 15 : Pin 15 */
#define GPIO_IN_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_IN_PIN15_Msk (0x1UL << GPIO_IN_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_IN_PIN15_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN15_High (0x1UL) /*!< Pin input is high */

/* Bit 14 : Pin 14 */
#define GPIO_IN_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_IN_PIN14_Msk (0x1UL << GPIO_IN_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_IN_PIN14_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN14_High (0x1UL) /*!< Pin input is high */

/* Bit 13 : Pin 13 */
#define GPIO_IN_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_IN_PIN13_Msk (0x1UL << GPIO_IN_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_IN_PIN13_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN13_High (0x1UL) /*!< Pin input is high */

/* Bit 12 : Pin 12 */
#define GPIO_IN_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_IN_PIN12_Msk (0x1UL << GPIO_IN_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_IN_PIN12_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN12_High (0x1UL) /*!< Pin input is high */

/* Bit 11 : Pin 11 */
#define GPIO_IN_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_IN_PIN11_Msk (0x1UL << GPIO_IN_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_IN_PIN11_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN11_High (0x1UL) /*!< Pin input is high */

/* Bit 10 : Pin 10 */
#define GPIO_IN_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_IN_PIN10_Msk (0x1UL << GPIO_IN_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_IN_PIN10_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN10_High (0x1UL) /*!< Pin input is high */

/* Bit 9 : Pin 9 */
#define GPIO_IN_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_IN_PIN9_Msk (0x1UL << GPIO_IN_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_IN_PIN9_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN9_High (0x1UL) /*!< Pin input is high */

/* Bit 8 : Pin 8 */
#define GPIO_IN_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_IN_PIN8_Msk (0x1UL << GPIO_IN_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_IN_PIN8_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN8_High (0x1UL) /*!< Pin input is high */

/* Bit 7 : Pin 7 */
#define GPIO_IN_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_IN_PIN7_Msk (0x1UL << GPIO_IN_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_IN_PIN7_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN7_High (0x1UL) /*!< Pin input is high */

/* Bit 6 : Pin 6 */
#define GPIO_IN_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_IN_PIN6_Msk (0x1UL << GPIO_IN_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_IN_PIN6_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN6_High (0x1UL) /*!< Pin input is high */

/* Bit 5 : Pin 5 */
#define GPIO_IN_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_IN_PIN5_Msk (0x1UL << GPIO_IN_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_IN_PIN5_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN5_High (0x1UL) /*!< Pin input is high */

/* Bit 4 : Pin 4 */
#define GPIO_IN_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_IN_PIN4_Msk (0x1UL << GPIO_IN_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_IN_PIN4_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN4_High (0x1UL) /*!< Pin input is high */

/* Bit 3 : Pin 3 */
#define GPIO_IN_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_IN_PIN3_Msk (0x1UL << GPIO_IN_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_IN_PIN3_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN3_High (0x1UL) /*!< Pin input is high */

/* Bit 2 : Pin 2 */
#define GPIO_IN_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_IN_PIN2_Msk (0x1UL << GPIO_IN_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_IN_PIN2_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN2_High (0x1UL) /*!< Pin input is high */

/* Bit 1 : Pin 1 */
#define GPIO_IN_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_IN_PIN1_Msk (0x1UL << GPIO_IN_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_IN_PIN1_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN1_High (0x1UL) /*!< Pin input is high */

/* Bit 0 : Pin 0 */
#define GPIO_IN_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_IN_PIN0_Msk (0x1UL << GPIO_IN_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_IN_PIN0_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN0_High (0x1UL) /*!< Pin input is high */

/* Register: GPIO_DIR */
/* Description: Direction of GPIO pins */

/* Bit 31 : Pin 31 */
#define GPIO_DIR_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_DIR_PIN31_Msk (0x1UL << GPIO_DIR_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_DIR_PIN31_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN31_Output (0x1UL) /*!< Pin set as output */

/* Bit 30 : Pin 30 */
#define GPIO_DIR_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_DIR_PIN30_Msk (0x1UL << GPIO_DIR_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_DIR_PIN30_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN30_Output (0x1UL) /*!< Pin set as output */

/* Bit 29 : Pin 29 */
#define GPIO_DIR_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_DIR_PIN29_Msk (0x1UL << GPIO_DIR_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_DIR_PIN29_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN29_Output (0x1UL) /*!< Pin set as output */

/* Bit 28 : Pin 28 */
#define GPIO_DIR_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_DIR_PIN28_Msk (0x1UL << GPIO_DIR_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_DIR_PIN28_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN28_Output (0x1UL) /*!< Pin set as output */

/* Bit 27 : Pin 27 */
#define GPIO_DIR_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_DIR_PIN27_Msk (0x1UL << GPIO_DIR_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_DIR_PIN27_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN27_Output (0x1UL) /*!< Pin set as output */

/* Bit 26 : Pin 26 */
#define GPIO_DIR_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_DIR_PIN26_Msk (0x1UL << GPIO_DIR_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_DIR_PIN26_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN26_Output (0x1UL) /*!< Pin set as output */

/* Bit 25 : Pin 25 */
#define GPIO_DIR_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_DIR_PIN25_Msk (0x1UL << GPIO_DIR_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_DIR_PIN25_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN25_Output (0x1UL) /*!< Pin set as output */

/* Bit 24 : Pin 24 */
#define GPIO_DIR_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_DIR_PIN24_Msk (0x1UL << GPIO_DIR_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_DIR_PIN24_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN24_Output (0x1UL) /*!< Pin set as output */

/* Bit 23 : Pin 23 */
#define GPIO_DIR_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_DIR_PIN23_Msk (0x1UL << GPIO_DIR_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_DIR_PIN23_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN23_Output (0x1UL) /*!< Pin set as output */

/* Bit 22 : Pin 22 */
#define GPIO_DIR_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_DIR_PIN22_Msk (0x1UL << GPIO_DIR_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_DIR_PIN22_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN22_Output (0x1UL) /*!< Pin set as output */

/* Bit 21 : Pin 21 */
#define GPIO_DIR_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_DIR_PIN21_Msk (0x1UL << GPIO_DIR_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_DIR_PIN21_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN21_Output (0x1UL) /*!< Pin set as output */

/* Bit 20 : Pin 20 */
#define GPIO_DIR_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_DIR_PIN20_Msk (0x1UL << GPIO_DIR_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_DIR_PIN20_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN20_Output (0x1UL) /*!< Pin set as output */

/* Bit 19 : Pin 19 */
#define GPIO_DIR_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_DIR_PIN19_Msk (0x1UL << GPIO_DIR_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_DIR_PIN19_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN19_Output (0x1UL) /*!< Pin set as output */

/* Bit 18 : Pin 18 */
#define GPIO_DIR_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_DIR_PIN18_Msk (0x1UL << GPIO_DIR_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_DIR_PIN18_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN18_Output (0x1UL) /*!< Pin set as output */

/* Bit 17 : Pin 17 */
#define GPIO_DIR_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_DIR_PIN17_Msk (0x1UL << GPIO_DIR_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_DIR_PIN17_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN17_Output (0x1UL) /*!< Pin set as output */

/* Bit 16 : Pin 16 */
#define GPIO_DIR_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_DIR_PIN16_Msk (0x1UL << GPIO_DIR_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_DIR_PIN16_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN16_Output (0x1UL) /*!< Pin set as output */

/* Bit 15 : Pin 15 */
#define GPIO_DIR_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_DIR_PIN15_Msk (0x1UL << GPIO_DIR_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_DIR_PIN15_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN15_Output (0x1UL) /*!< Pin set as output */

/* Bit 14 : Pin 14 */
#define GPIO_DIR_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_DIR_PIN14_Msk (0x1UL << GPIO_DIR_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_DIR_PIN14_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN14_Output (0x1UL) /*!< Pin set as output */

/* Bit 13 : Pin 13 */
#define GPIO_DIR_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_DIR_PIN13_Msk (0x1UL << GPIO_DIR_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_DIR_PIN13_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN13_Output (0x1UL) /*!< Pin set as output */

/* Bit 12 : Pin 12 */
#define GPIO_DIR_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_DIR_PIN12_Msk (0x1UL << GPIO_DIR_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_DIR_PIN12_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN12_Output (0x1UL) /*!< Pin set as output */

/* Bit 11 : Pin 11 */
#define GPIO_DIR_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_DIR_PIN11_Msk (0x1UL << GPIO_DIR_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_DIR_PIN11_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN11_Output (0x1UL) /*!< Pin set as output */

/* Bit 10 : Pin 10 */
#define GPIO_DIR_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_DIR_PIN10_Msk (0x1UL << GPIO_DIR_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_DIR_PIN10_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN10_Output (0x1UL) /*!< Pin set as output */

/* Bit 9 : Pin 9 */
#define GPIO_DIR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_DIR_PIN9_Msk (0x1UL << GPIO_DIR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_DIR_PIN9_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN9_Output (0x1UL) /*!< Pin set as output */

/* Bit 8 : Pin 8 */
#define GPIO_DIR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_DIR_PIN8_Msk (0x1UL << GPIO_DIR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_DIR_PIN8_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN8_Output (0x1UL) /*!< Pin set as output */

/* Bit 7 : Pin 7 */
#define GPIO_DIR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_DIR_PIN7_Msk (0x1UL << GPIO_DIR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_DIR_PIN7_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN7_Output (0x1UL) /*!< Pin set as output */

/* Bit 6 : Pin 6 */
#define GPIO_DIR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_DIR_PIN6_Msk (0x1UL << GPIO_DIR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_DIR_PIN6_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN6_Output (0x1UL) /*!< Pin set as output */

/* Bit 5 : Pin 5 */
#define GPIO_DIR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_DIR_PIN5_Msk (0x1UL << GPIO_DIR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_DIR_PIN5_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN5_Output (0x1UL) /*!< Pin set as output */

/* Bit 4 : Pin 4 */
#define GPIO_DIR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_DIR_PIN4_Msk (0x1UL << GPIO_DIR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_DIR_PIN4_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN4_Output (0x1UL) /*!< Pin set as output */

/* Bit 3 : Pin 3 */
#define GPIO_DIR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_DIR_PIN3_Msk (0x1UL << GPIO_DIR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_DIR_PIN3_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN3_Output (0x1UL) /*!< Pin set as output */

/* Bit 2 : Pin 2 */
#define GPIO_DIR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_DIR_PIN2_Msk (0x1UL << GPIO_DIR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_DIR_PIN2_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN2_Output (0x1UL) /*!< Pin set as output */

/* Bit 1 : Pin 1 */
#define GPIO_DIR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_DIR_PIN1_Msk (0x1UL << GPIO_DIR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_DIR_PIN1_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN1_Output (0x1UL) /*!< Pin set as output */

/* Bit 0 : Pin 0 */
#define GPIO_DIR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_DIR_PIN0_Msk (0x1UL << GPIO_DIR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_DIR_PIN0_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN0_Output (0x1UL) /*!< Pin set as output */

/* Register: GPIO_DIRSET */
/* Description: DIR set register */

/* Bit 31 : Set as output pin 31 */
#define GPIO_DIRSET_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_DIRSET_PIN31_Msk (0x1UL << GPIO_DIRSET_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_DIRSET_PIN31_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN31_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN31_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 30 : Set as output pin 30 */
#define GPIO_DIRSET_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_DIRSET_PIN30_Msk (0x1UL << GPIO_DIRSET_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_DIRSET_PIN30_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN30_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN30_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 29 : Set as output pin 29 */
#define GPIO_DIRSET_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_DIRSET_PIN29_Msk (0x1UL << GPIO_DIRSET_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_DIRSET_PIN29_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN29_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN29_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 28 : Set as output pin 28 */
#define GPIO_DIRSET_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_DIRSET_PIN28_Msk (0x1UL << GPIO_DIRSET_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_DIRSET_PIN28_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN28_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN28_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 27 : Set as output pin 27 */
#define GPIO_DIRSET_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_DIRSET_PIN27_Msk (0x1UL << GPIO_DIRSET_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_DIRSET_PIN27_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN27_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN27_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 26 : Set as output pin 26 */
#define GPIO_DIRSET_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_DIRSET_PIN26_Msk (0x1UL << GPIO_DIRSET_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_DIRSET_PIN26_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN26_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN26_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 25 : Set as output pin 25 */
#define GPIO_DIRSET_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_DIRSET_PIN25_Msk (0x1UL << GPIO_DIRSET_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_DIRSET_PIN25_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN25_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN25_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 24 : Set as output pin 24 */
#define GPIO_DIRSET_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_DIRSET_PIN24_Msk (0x1UL << GPIO_DIRSET_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_DIRSET_PIN24_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN24_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN24_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 23 : Set as output pin 23 */
#define GPIO_DIRSET_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_DIRSET_PIN23_Msk (0x1UL << GPIO_DIRSET_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_DIRSET_PIN23_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN23_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN23_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 22 : Set as output pin 22 */
#define GPIO_DIRSET_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_DIRSET_PIN22_Msk (0x1UL << GPIO_DIRSET_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_DIRSET_PIN22_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN22_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN22_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 21 : Set as output pin 21 */
#define GPIO_DIRSET_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_DIRSET_PIN21_Msk (0x1UL << GPIO_DIRSET_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_DIRSET_PIN21_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN21_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN21_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 20 : Set as output pin 20 */
#define GPIO_DIRSET_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_DIRSET_PIN20_Msk (0x1UL << GPIO_DIRSET_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_DIRSET_PIN20_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN20_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN20_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 19 : Set as output pin 19 */
#define GPIO_DIRSET_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_DIRSET_PIN19_Msk (0x1UL << GPIO_DIRSET_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_DIRSET_PIN19_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN19_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN19_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 18 : Set as output pin 18 */
#define GPIO_DIRSET_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_DIRSET_PIN18_Msk (0x1UL << GPIO_DIRSET_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_DIRSET_PIN18_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN18_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN18_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 17 : Set as output pin 17 */
#define GPIO_DIRSET_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_DIRSET_PIN17_Msk (0x1UL << GPIO_DIRSET_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_DIRSET_PIN17_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN17_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN17_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 16 : Set as output pin 16 */
#define GPIO_DIRSET_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_DIRSET_PIN16_Msk (0x1UL << GPIO_DIRSET_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_DIRSET_PIN16_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN16_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN16_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 15 : Set as output pin 15 */
#define GPIO_DIRSET_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_DIRSET_PIN15_Msk (0x1UL << GPIO_DIRSET_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_DIRSET_PIN15_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN15_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN15_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 14 : Set as output pin 14 */
#define GPIO_DIRSET_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_DIRSET_PIN14_Msk (0x1UL << GPIO_DIRSET_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_DIRSET_PIN14_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN14_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN14_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 13 : Set as output pin 13 */
#define GPIO_DIRSET_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_DIRSET_PIN13_Msk (0x1UL << GPIO_DIRSET_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_DIRSET_PIN13_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN13_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN13_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 12 : Set as output pin 12 */
#define GPIO_DIRSET_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_DIRSET_PIN12_Msk (0x1UL << GPIO_DIRSET_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_DIRSET_PIN12_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN12_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN12_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 11 : Set as output pin 11 */
#define GPIO_DIRSET_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_DIRSET_PIN11_Msk (0x1UL << GPIO_DIRSET_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_DIRSET_PIN11_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN11_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN11_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 10 : Set as output pin 10 */
#define GPIO_DIRSET_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_DIRSET_PIN10_Msk (0x1UL << GPIO_DIRSET_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_DIRSET_PIN10_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN10_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN10_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 9 : Set as output pin 9 */
#define GPIO_DIRSET_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_DIRSET_PIN9_Msk (0x1UL << GPIO_DIRSET_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_DIRSET_PIN9_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN9_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN9_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 8 : Set as output pin 8 */
#define GPIO_DIRSET_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_DIRSET_PIN8_Msk (0x1UL << GPIO_DIRSET_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_DIRSET_PIN8_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN8_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN8_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 7 : Set as output pin 7 */
#define GPIO_DIRSET_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_DIRSET_PIN7_Msk (0x1UL << GPIO_DIRSET_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_DIRSET_PIN7_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN7_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN7_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 6 : Set as output pin 6 */
#define GPIO_DIRSET_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_DIRSET_PIN6_Msk (0x1UL << GPIO_DIRSET_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_DIRSET_PIN6_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN6_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN6_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 5 : Set as output pin 5 */
#define GPIO_DIRSET_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_DIRSET_PIN5_Msk (0x1UL << GPIO_DIRSET_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_DIRSET_PIN5_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN5_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN5_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 4 : Set as output pin 4 */
#define GPIO_DIRSET_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_DIRSET_PIN4_Msk (0x1UL << GPIO_DIRSET_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_DIRSET_PIN4_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN4_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN4_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 3 : Set as output pin 3 */
#define GPIO_DIRSET_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_DIRSET_PIN3_Msk (0x1UL << GPIO_DIRSET_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_DIRSET_PIN3_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN3_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN3_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 2 : Set as output pin 2 */
#define GPIO_DIRSET_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_DIRSET_PIN2_Msk (0x1UL << GPIO_DIRSET_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_DIRSET_PIN2_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN2_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN2_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 1 : Set as output pin 1 */
#define GPIO_DIRSET_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_DIRSET_PIN1_Msk (0x1UL << GPIO_DIRSET_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_DIRSET_PIN1_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN1_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN1_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 0 : Set as output pin 0 */
#define GPIO_DIRSET_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_DIRSET_PIN0_Msk (0x1UL << GPIO_DIRSET_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_DIRSET_PIN0_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN0_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN0_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Register: GPIO_DIRCLR */
/* Description: DIR clear register */

/* Bit 31 : Set as input pin 31 */
#define GPIO_DIRCLR_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_DIRCLR_PIN31_Msk (0x1UL << GPIO_DIRCLR_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_DIRCLR_PIN31_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN31_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN31_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 30 : Set as input pin 30 */
#define GPIO_DIRCLR_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_DIRCLR_PIN30_Msk (0x1UL << GPIO_DIRCLR_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_DIRCLR_PIN30_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN30_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN30_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 29 : Set as input pin 29 */
#define GPIO_DIRCLR_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_DIRCLR_PIN29_Msk (0x1UL << GPIO_DIRCLR_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_DIRCLR_PIN29_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN29_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN29_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 28 : Set as input pin 28 */
#define GPIO_DIRCLR_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_DIRCLR_PIN28_Msk (0x1UL << GPIO_DIRCLR_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_DIRCLR_PIN28_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN28_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN28_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 27 : Set as input pin 27 */
#define GPIO_DIRCLR_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_DIRCLR_PIN27_Msk (0x1UL << GPIO_DIRCLR_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_DIRCLR_PIN27_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN27_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN27_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 26 : Set as input pin 26 */
#define GPIO_DIRCLR_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_DIRCLR_PIN26_Msk (0x1UL << GPIO_DIRCLR_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_DIRCLR_PIN26_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN26_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN26_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 25 : Set as input pin 25 */
#define GPIO_DIRCLR_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_DIRCLR_PIN25_Msk (0x1UL << GPIO_DIRCLR_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_DIRCLR_PIN25_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN25_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN25_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 24 : Set as input pin 24 */
#define GPIO_DIRCLR_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_DIRCLR_PIN24_Msk (0x1UL << GPIO_DIRCLR_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_DIRCLR_PIN24_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN24_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN24_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 23 : Set as input pin 23 */
#define GPIO_DIRCLR_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_DIRCLR_PIN23_Msk (0x1UL << GPIO_DIRCLR_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_DIRCLR_PIN23_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN23_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN23_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 22 : Set as input pin 22 */
#define GPIO_DIRCLR_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_DIRCLR_PIN22_Msk (0x1UL << GPIO_DIRCLR_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_DIRCLR_PIN22_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN22_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN22_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 21 : Set as input pin 21 */
#define GPIO_DIRCLR_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_DIRCLR_PIN21_Msk (0x1UL << GPIO_DIRCLR_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_DIRCLR_PIN21_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN21_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN21_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 20 : Set as input pin 20 */
#define GPIO_DIRCLR_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_DIRCLR_PIN20_Msk (0x1UL << GPIO_DIRCLR_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_DIRCLR_PIN20_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN20_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN20_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 19 : Set as input pin 19 */
#define GPIO_DIRCLR_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_DIRCLR_PIN19_Msk (0x1UL << GPIO_DIRCLR_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_DIRCLR_PIN19_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN19_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN19_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 18 : Set as input pin 18 */
#define GPIO_DIRCLR_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_DIRCLR_PIN18_Msk (0x1UL << GPIO_DIRCLR_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_DIRCLR_PIN18_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN18_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN18_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 17 : Set as input pin 17 */
#define GPIO_DIRCLR_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_DIRCLR_PIN17_Msk (0x1UL << GPIO_DIRCLR_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_DIRCLR_PIN17_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN17_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN17_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 16 : Set as input pin 16 */
#define GPIO_DIRCLR_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_DIRCLR_PIN16_Msk (0x1UL << GPIO_DIRCLR_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_DIRCLR_PIN16_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN16_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN16_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 15 : Set as input pin 15 */
#define GPIO_DIRCLR_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_DIRCLR_PIN15_Msk (0x1UL << GPIO_DIRCLR_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_DIRCLR_PIN15_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN15_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN15_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 14 : Set as input pin 14 */
#define GPIO_DIRCLR_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_DIRCLR_PIN14_Msk (0x1UL << GPIO_DIRCLR_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_DIRCLR_PIN14_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN14_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN14_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 13 : Set as input pin 13 */
#define GPIO_DIRCLR_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_DIRCLR_PIN13_Msk (0x1UL << GPIO_DIRCLR_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_DIRCLR_PIN13_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN13_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN13_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 12 : Set as input pin 12 */
#define GPIO_DIRCLR_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_DIRCLR_PIN12_Msk (0x1UL << GPIO_DIRCLR_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_DIRCLR_PIN12_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN12_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN12_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 11 : Set as input pin 11 */
#define GPIO_DIRCLR_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_DIRCLR_PIN11_Msk (0x1UL << GPIO_DIRCLR_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_DIRCLR_PIN11_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN11_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN11_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 10 : Set as input pin 10 */
#define GPIO_DIRCLR_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_DIRCLR_PIN10_Msk (0x1UL << GPIO_DIRCLR_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_DIRCLR_PIN10_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN10_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN10_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 9 : Set as input pin 9 */
#define GPIO_DIRCLR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_DIRCLR_PIN9_Msk (0x1UL << GPIO_DIRCLR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_DIRCLR_PIN9_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN9_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN9_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 8 : Set as input pin 8 */
#define GPIO_DIRCLR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_DIRCLR_PIN8_Msk (0x1UL << GPIO_DIRCLR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_DIRCLR_PIN8_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN8_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN8_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 7 : Set as input pin 7 */
#define GPIO_DIRCLR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_DIRCLR_PIN7_Msk (0x1UL << GPIO_DIRCLR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_DIRCLR_PIN7_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN7_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN7_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 6 : Set as input pin 6 */
#define GPIO_DIRCLR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_DIRCLR_PIN6_Msk (0x1UL << GPIO_DIRCLR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_DIRCLR_PIN6_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN6_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN6_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 5 : Set as input pin 5 */
#define GPIO_DIRCLR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_DIRCLR_PIN5_Msk (0x1UL << GPIO_DIRCLR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_DIRCLR_PIN5_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN5_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN5_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 4 : Set as input pin 4 */
#define GPIO_DIRCLR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_DIRCLR_PIN4_Msk (0x1UL << GPIO_DIRCLR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_DIRCLR_PIN4_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN4_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN4_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 3 : Set as input pin 3 */
#define GPIO_DIRCLR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_DIRCLR_PIN3_Msk (0x1UL << GPIO_DIRCLR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_DIRCLR_PIN3_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN3_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN3_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 2 : Set as input pin 2 */
#define GPIO_DIRCLR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_DIRCLR_PIN2_Msk (0x1UL << GPIO_DIRCLR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_DIRCLR_PIN2_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN2_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN2_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 1 : Set as input pin 1 */
#define GPIO_DIRCLR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_DIRCLR_PIN1_Msk (0x1UL << GPIO_DIRCLR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_DIRCLR_PIN1_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN1_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN1_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 0 : Set as input pin 0 */
#define GPIO_DIRCLR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_DIRCLR_PIN0_Msk (0x1UL << GPIO_DIRCLR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_DIRCLR_PIN0_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN0_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN0_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Register: GPIO_LATCH */
/* Description: Latch register indicating what GPIO pins that have met the criteria set in the PIN_CNF[n].SENSE registers */

/* Bit 31 : Status on whether PIN31 has met criteria set in PIN_CNF31.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_LATCH_PIN31_Msk (0x1UL << GPIO_LATCH_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_LATCH_PIN31_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN31_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 30 : Status on whether PIN30 has met criteria set in PIN_CNF30.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_LATCH_PIN30_Msk (0x1UL << GPIO_LATCH_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_LATCH_PIN30_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN30_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 29 : Status on whether PIN29 has met criteria set in PIN_CNF29.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_LATCH_PIN29_Msk (0x1UL << GPIO_LATCH_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_LATCH_PIN29_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN29_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 28 : Status on whether PIN28 has met criteria set in PIN_CNF28.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_LATCH_PIN28_Msk (0x1UL << GPIO_LATCH_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_LATCH_PIN28_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN28_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 27 : Status on whether PIN27 has met criteria set in PIN_CNF27.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_LATCH_PIN27_Msk (0x1UL << GPIO_LATCH_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_LATCH_PIN27_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN27_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 26 : Status on whether PIN26 has met criteria set in PIN_CNF26.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_LATCH_PIN26_Msk (0x1UL << GPIO_LATCH_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_LATCH_PIN26_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN26_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 25 : Status on whether PIN25 has met criteria set in PIN_CNF25.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_LATCH_PIN25_Msk (0x1UL << GPIO_LATCH_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_LATCH_PIN25_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN25_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 24 : Status on whether PIN24 has met criteria set in PIN_CNF24.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_LATCH_PIN24_Msk (0x1UL << GPIO_LATCH_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_LATCH_PIN24_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN24_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 23 : Status on whether PIN23 has met criteria set in PIN_CNF23.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_LATCH_PIN23_Msk (0x1UL << GPIO_LATCH_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_LATCH_PIN23_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN23_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 22 : Status on whether PIN22 has met criteria set in PIN_CNF22.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_LATCH_PIN22_Msk (0x1UL << GPIO_LATCH_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_LATCH_PIN22_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN22_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 21 : Status on whether PIN21 has met criteria set in PIN_CNF21.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_LATCH_PIN21_Msk (0x1UL << GPIO_LATCH_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_LATCH_PIN21_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN21_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 20 : Status on whether PIN20 has met criteria set in PIN_CNF20.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_LATCH_PIN20_Msk (0x1UL << GPIO_LATCH_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_LATCH_PIN20_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN20_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 19 : Status on whether PIN19 has met criteria set in PIN_CNF19.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_LATCH_PIN19_Msk (0x1UL << GPIO_LATCH_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_LATCH_PIN19_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN19_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 18 : Status on whether PIN18 has met criteria set in PIN_CNF18.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_LATCH_PIN18_Msk (0x1UL << GPIO_LATCH_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_LATCH_PIN18_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN18_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 17 : Status on whether PIN17 has met criteria set in PIN_CNF17.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_LATCH_PIN17_Msk (0x1UL << GPIO_LATCH_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_LATCH_PIN17_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN17_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 16 : Status on whether PIN16 has met criteria set in PIN_CNF16.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_LATCH_PIN16_Msk (0x1UL << GPIO_LATCH_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_LATCH_PIN16_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN16_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 15 : Status on whether PIN15 has met criteria set in PIN_CNF15.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_LATCH_PIN15_Msk (0x1UL << GPIO_LATCH_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_LATCH_PIN15_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN15_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 14 : Status on whether PIN14 has met criteria set in PIN_CNF14.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_LATCH_PIN14_Msk (0x1UL << GPIO_LATCH_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_LATCH_PIN14_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN14_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 13 : Status on whether PIN13 has met criteria set in PIN_CNF13.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_LATCH_PIN13_Msk (0x1UL << GPIO_LATCH_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_LATCH_PIN13_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN13_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 12 : Status on whether PIN12 has met criteria set in PIN_CNF12.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_LATCH_PIN12_Msk (0x1UL << GPIO_LATCH_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_LATCH_PIN12_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN12_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 11 : Status on whether PIN11 has met criteria set in PIN_CNF11.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_LATCH_PIN11_Msk (0x1UL << GPIO_LATCH_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_LATCH_PIN11_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN11_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 10 : Status on whether PIN10 has met criteria set in PIN_CNF10.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_LATCH_PIN10_Msk (0x1UL << GPIO_LATCH_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_LATCH_PIN10_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN10_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 9 : Status on whether PIN9 has met criteria set in PIN_CNF9.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_LATCH_PIN9_Msk (0x1UL << GPIO_LATCH_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_LATCH_PIN9_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN9_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 8 : Status on whether PIN8 has met criteria set in PIN_CNF8.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_LATCH_PIN8_Msk (0x1UL << GPIO_LATCH_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_LATCH_PIN8_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN8_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 7 : Status on whether PIN7 has met criteria set in PIN_CNF7.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_LATCH_PIN7_Msk (0x1UL << GPIO_LATCH_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_LATCH_PIN7_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN7_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 6 : Status on whether PIN6 has met criteria set in PIN_CNF6.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_LATCH_PIN6_Msk (0x1UL << GPIO_LATCH_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_LATCH_PIN6_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN6_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 5 : Status on whether PIN5 has met criteria set in PIN_CNF5.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_LATCH_PIN5_Msk (0x1UL << GPIO_LATCH_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_LATCH_PIN5_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN5_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 4 : Status on whether PIN4 has met criteria set in PIN_CNF4.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_LATCH_PIN4_Msk (0x1UL << GPIO_LATCH_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_LATCH_PIN4_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN4_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 3 : Status on whether PIN3 has met criteria set in PIN_CNF3.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_LATCH_PIN3_Msk (0x1UL << GPIO_LATCH_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_LATCH_PIN3_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN3_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 2 : Status on whether PIN2 has met criteria set in PIN_CNF2.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_LATCH_PIN2_Msk (0x1UL << GPIO_LATCH_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_LATCH_PIN2_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN2_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 1 : Status on whether PIN1 has met criteria set in PIN_CNF1.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_LATCH_PIN1_Msk (0x1UL << GPIO_LATCH_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_LATCH_PIN1_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN1_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 0 : Status on whether PIN0 has met criteria set in PIN_CNF0.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_LATCH_PIN0_Msk (0x1UL << GPIO_LATCH_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_LATCH_PIN0_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN0_Latched (0x1UL) /*!< Criteria has been met */

/* Register: GPIO_DETECTMODE */
/* Description: Select between default DETECT signal behaviour and LDETECT mode */

/* Bit 0 : Select between default DETECT signal behaviour and LDETECT mode */
#define GPIO_DETECTMODE_DETECTMODE_Pos (0UL) /*!< Position of DETECTMODE field. */
#define GPIO_DETECTMODE_DETECTMODE_Msk (0x1UL << GPIO_DETECTMODE_DETECTMODE_Pos) /*!< Bit mask of DETECTMODE field. */
#define GPIO_DETECTMODE_DETECTMODE_Default (0x0UL) /*!< DETECT directly connected to PIN DETECT signals */
#define GPIO_DETECTMODE_DETECTMODE_LDETECT (0x1UL) /*!< Use the latched LDETECT behaviour */

/* Register: GPIO_PIN_OUT */
/* Description: Description cluster: Pin n direct access output register */

/* Bit 0 : Direct access */
#define GPIO_PIN_OUT_OUT_Pos (0UL) /*!< Position of OUT field. */
#define GPIO_PIN_OUT_OUT_Msk (0x1UL << GPIO_PIN_OUT_OUT_Pos) /*!< Bit mask of OUT field. */

/* Register: GPIO_PIN_IN */
/* Description: Description cluster: Pin n direct access input register */

/* Bit 0 : Direct access */
#define GPIO_PIN_IN_IN_Pos (0UL) /*!< Position of IN field. */
#define GPIO_PIN_IN_IN_Msk (0x1UL << GPIO_PIN_IN_IN_Pos) /*!< Bit mask of IN field. */

/* Register: GPIO_PIN_CNF */
/* Description: Description collection: Configuration of GPIO pins */

/* Bit 24 : Override of analog mux enable signals for pads with analog functionality */
#define GPIO_PIN_CNF_ANAEN_Pos (24UL) /*!< Position of ANAEN field. */
#define GPIO_PIN_CNF_ANAEN_Msk (0x1UL << GPIO_PIN_CNF_ANAEN_Pos) /*!< Bit mask of ANAEN field. */
#define GPIO_PIN_CNF_ANAEN_Disabled (0x0UL) /*!< Override of analog mux is disabled */
#define GPIO_PIN_CNF_ANAEN_AE0 (0x1UL) /*!< Enable analog signal 0 (analog test bus) */

/* Bits 17..16 : Pin sensing mechanism */
#define GPIO_PIN_CNF_SENSE_Pos (16UL) /*!< Position of SENSE field. */
#define GPIO_PIN_CNF_SENSE_Msk (0x3UL << GPIO_PIN_CNF_SENSE_Pos) /*!< Bit mask of SENSE field. */
#define GPIO_PIN_CNF_SENSE_Disabled (0x0UL) /*!< Disabled */
#define GPIO_PIN_CNF_SENSE_High (0x2UL) /*!< Sense for high level */
#define GPIO_PIN_CNF_SENSE_Low (0x3UL) /*!< Sense for low level */

/* Bits 10..8 : Drive configuration */
#define GPIO_PIN_CNF_DRIVE_Pos (8UL) /*!< Position of DRIVE field. */
#define GPIO_PIN_CNF_DRIVE_Msk (0x7UL << GPIO_PIN_CNF_DRIVE_Pos) /*!< Bit mask of DRIVE field. */
#define GPIO_PIN_CNF_DRIVE_S0S1 (0x0UL) /*!< Standard '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE_H0S1 (0x1UL) /*!< High drive '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE_S0H1 (0x2UL) /*!< Standard '0', high drive '1' */
#define GPIO_PIN_CNF_DRIVE_H0H1 (0x3UL) /*!< High drive '0', high 'drive '1'' */
#define GPIO_PIN_CNF_DRIVE_D0S1 (0x4UL) /*!< Disconnect '0' standard '1' (normally used for wired-or connections) */
#define GPIO_PIN_CNF_DRIVE_D0H1 (0x5UL) /*!< Disconnect '0', high drive '1' (normally used for wired-or connections) */
#define GPIO_PIN_CNF_DRIVE_S0D1 (0x6UL) /*!< Standard '0'. disconnect '1' (normally used for wired-and connections) */
#define GPIO_PIN_CNF_DRIVE_H0D1 (0x7UL) /*!< High drive '0', disconnect '1' (normally used for wired-and connections) */

/* Bits 3..2 : Pull configuration */
#define GPIO_PIN_CNF_PULL_Pos (2UL) /*!< Position of PULL field. */
#define GPIO_PIN_CNF_PULL_Msk (0x3UL << GPIO_PIN_CNF_PULL_Pos) /*!< Bit mask of PULL field. */
#define GPIO_PIN_CNF_PULL_Disabled (0x0UL) /*!< No pull */
#define GPIO_PIN_CNF_PULL_Pulldown (0x1UL) /*!< Pull down on pin */
#define GPIO_PIN_CNF_PULL_Pullup (0x3UL) /*!< Pull up on pin */

/* Bit 1 : Connect or disconnect input buffer */
#define GPIO_PIN_CNF_INPUT_Pos (1UL) /*!< Position of INPUT field. */
#define GPIO_PIN_CNF_INPUT_Msk (0x1UL << GPIO_PIN_CNF_INPUT_Pos) /*!< Bit mask of INPUT field. */
#define GPIO_PIN_CNF_INPUT_Connect (0x0UL) /*!< Connect input buffer */
#define GPIO_PIN_CNF_INPUT_Disconnect (0x1UL) /*!< Disconnect input buffer */

/* Bit 0 : Pin direction. Same physical register as DIR register */
#define GPIO_PIN_CNF_DIR_Pos (0UL) /*!< Position of DIR field. */
#define GPIO_PIN_CNF_DIR_Msk (0x1UL << GPIO_PIN_CNF_DIR_Pos) /*!< Bit mask of DIR field. */
#define GPIO_PIN_CNF_DIR_Input (0x0UL) /*!< Configure pin as an input pin */
#define GPIO_PIN_CNF_DIR_Output (0x1UL) /*!< Configure pin as an output pin */


/* Peripheral: PAMLI */
/* Description: Peripheral AHB Multi-Layer Interface */

/* Register: PAMLI_RAMPRI_SERIAL0 */
/* Description: AHB bus master priority register for SPIM0, SPIS0, TWIM0, TWIS0 and UARTE0 */

/* Bit 3 : Priority register for RAM AHB slave 3 */
#define PAMLI_RAMPRI_SERIAL0_RAM3_Pos (3UL) /*!< Position of RAM3 field. */
#define PAMLI_RAMPRI_SERIAL0_RAM3_Msk (0x1UL << PAMLI_RAMPRI_SERIAL0_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define PAMLI_RAMPRI_SERIAL0_RAM3_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_SERIAL0_RAM3_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define PAMLI_RAMPRI_SERIAL0_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define PAMLI_RAMPRI_SERIAL0_RAM2_Msk (0x1UL << PAMLI_RAMPRI_SERIAL0_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define PAMLI_RAMPRI_SERIAL0_RAM2_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_SERIAL0_RAM2_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define PAMLI_RAMPRI_SERIAL0_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define PAMLI_RAMPRI_SERIAL0_RAM1_Msk (0x1UL << PAMLI_RAMPRI_SERIAL0_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define PAMLI_RAMPRI_SERIAL0_RAM1_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_SERIAL0_RAM1_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define PAMLI_RAMPRI_SERIAL0_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define PAMLI_RAMPRI_SERIAL0_RAM0_Msk (0x1UL << PAMLI_RAMPRI_SERIAL0_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define PAMLI_RAMPRI_SERIAL0_RAM0_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_SERIAL0_RAM0_Pri1 (0x1UL) /*!< Priority 1 */

/* Register: PAMLI_RAMPRI_RADIO */
/* Description: AHB bus master priority register for RADIO */

/* Bit 3 : Priority register for RAM AHB slave 3 */
#define PAMLI_RAMPRI_RADIO_RAM3_Pos (3UL) /*!< Position of RAM3 field. */
#define PAMLI_RAMPRI_RADIO_RAM3_Msk (0x1UL << PAMLI_RAMPRI_RADIO_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define PAMLI_RAMPRI_RADIO_RAM3_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_RADIO_RAM3_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define PAMLI_RAMPRI_RADIO_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define PAMLI_RAMPRI_RADIO_RAM2_Msk (0x1UL << PAMLI_RAMPRI_RADIO_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define PAMLI_RAMPRI_RADIO_RAM2_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_RADIO_RAM2_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define PAMLI_RAMPRI_RADIO_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define PAMLI_RAMPRI_RADIO_RAM1_Msk (0x1UL << PAMLI_RAMPRI_RADIO_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define PAMLI_RAMPRI_RADIO_RAM1_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_RADIO_RAM1_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define PAMLI_RAMPRI_RADIO_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define PAMLI_RAMPRI_RADIO_RAM0_Msk (0x1UL << PAMLI_RAMPRI_RADIO_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define PAMLI_RAMPRI_RADIO_RAM0_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_RADIO_RAM0_Pri1 (0x1UL) /*!< Priority 1 */

/* Register: PAMLI_RAMPRI_ECB */
/* Description: AHB bus master priority register for ECB */

/* Bit 3 : Priority register for RAM AHB slave 3 */
#define PAMLI_RAMPRI_ECB_RAM3_Pos (3UL) /*!< Position of RAM3 field. */
#define PAMLI_RAMPRI_ECB_RAM3_Msk (0x1UL << PAMLI_RAMPRI_ECB_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define PAMLI_RAMPRI_ECB_RAM3_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_ECB_RAM3_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define PAMLI_RAMPRI_ECB_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define PAMLI_RAMPRI_ECB_RAM2_Msk (0x1UL << PAMLI_RAMPRI_ECB_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define PAMLI_RAMPRI_ECB_RAM2_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_ECB_RAM2_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define PAMLI_RAMPRI_ECB_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define PAMLI_RAMPRI_ECB_RAM1_Msk (0x1UL << PAMLI_RAMPRI_ECB_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define PAMLI_RAMPRI_ECB_RAM1_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_ECB_RAM1_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define PAMLI_RAMPRI_ECB_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define PAMLI_RAMPRI_ECB_RAM0_Msk (0x1UL << PAMLI_RAMPRI_ECB_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define PAMLI_RAMPRI_ECB_RAM0_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_ECB_RAM0_Pri1 (0x1UL) /*!< Priority 1 */

/* Register: PAMLI_RAMPRI_CCM */
/* Description: AHB bus master priority register for CCM */

/* Bit 3 : Priority register for RAM AHB slave 3 */
#define PAMLI_RAMPRI_CCM_RAM3_Pos (3UL) /*!< Position of RAM3 field. */
#define PAMLI_RAMPRI_CCM_RAM3_Msk (0x1UL << PAMLI_RAMPRI_CCM_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define PAMLI_RAMPRI_CCM_RAM3_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_CCM_RAM3_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define PAMLI_RAMPRI_CCM_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define PAMLI_RAMPRI_CCM_RAM2_Msk (0x1UL << PAMLI_RAMPRI_CCM_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define PAMLI_RAMPRI_CCM_RAM2_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_CCM_RAM2_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define PAMLI_RAMPRI_CCM_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define PAMLI_RAMPRI_CCM_RAM1_Msk (0x1UL << PAMLI_RAMPRI_CCM_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define PAMLI_RAMPRI_CCM_RAM1_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_CCM_RAM1_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define PAMLI_RAMPRI_CCM_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define PAMLI_RAMPRI_CCM_RAM0_Msk (0x1UL << PAMLI_RAMPRI_CCM_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define PAMLI_RAMPRI_CCM_RAM0_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_CCM_RAM0_Pri1 (0x1UL) /*!< Priority 1 */

/* Register: PAMLI_RAMPRI_AAR */
/* Description: AHB bus master priority register for AAR */

/* Bit 3 : Priority register for RAM AHB slave 3 */
#define PAMLI_RAMPRI_AAR_RAM3_Pos (3UL) /*!< Position of RAM3 field. */
#define PAMLI_RAMPRI_AAR_RAM3_Msk (0x1UL << PAMLI_RAMPRI_AAR_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define PAMLI_RAMPRI_AAR_RAM3_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_AAR_RAM3_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define PAMLI_RAMPRI_AAR_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define PAMLI_RAMPRI_AAR_RAM2_Msk (0x1UL << PAMLI_RAMPRI_AAR_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define PAMLI_RAMPRI_AAR_RAM2_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_AAR_RAM2_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define PAMLI_RAMPRI_AAR_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define PAMLI_RAMPRI_AAR_RAM1_Msk (0x1UL << PAMLI_RAMPRI_AAR_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define PAMLI_RAMPRI_AAR_RAM1_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_AAR_RAM1_Pri1 (0x1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define PAMLI_RAMPRI_AAR_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define PAMLI_RAMPRI_AAR_RAM0_Msk (0x1UL << PAMLI_RAMPRI_AAR_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define PAMLI_RAMPRI_AAR_RAM0_Pri0 (0x0UL) /*!< Priority 0 */
#define PAMLI_RAMPRI_AAR_RAM0_Pri1 (0x1UL) /*!< Priority 1 */


/* Peripheral: PCGCMASTER */
/* Description: PCGC Master */

/* Register: PCGCMASTER_SETPWRCONTHRESHOLDBASE */
/* Description: Description collection: Set power consumption threshold base for power source / regulator n */

/* Bits 3..0 : SETPWRCONTHRESHOLDBASE */
#define PCGCMASTER_SETPWRCONTHRESHOLDBASE_SETPWRCONTHRESHOLDBASE_Pos (0UL) /*!< Position of SETPWRCONTHRESHOLDBASE field. */
#define PCGCMASTER_SETPWRCONTHRESHOLDBASE_SETPWRCONTHRESHOLDBASE_Msk (0xFUL << PCGCMASTER_SETPWRCONTHRESHOLDBASE_SETPWRCONTHRESHOLDBASE_Pos) /*!< Bit mask of SETPWRCONTHRESHOLDBASE field. */

/* Register: PCGCMASTER_SETPOWERCONSUMPTIONBASE */
/* Description: Description collection: Set power consumption base for power/clock pair n */

/* Bits 3..0 : POWERREQUIREMENT */
#define PCGCMASTER_SETPOWERCONSUMPTIONBASE_POWERREQUIREMENT_Pos (0UL) /*!< Position of POWERREQUIREMENT field. */
#define PCGCMASTER_SETPOWERCONSUMPTIONBASE_POWERREQUIREMENT_Msk (0xFUL << PCGCMASTER_SETPOWERCONSUMPTIONBASE_POWERREQUIREMENT_Pos) /*!< Bit mask of POWERREQUIREMENT field. */

/* Register: PCGCMASTER_UNLOCKBACKDOORS */
/* Description: Unlock backdoors */

/* Bits 15..0 : Write: 0x00009375 to lock/unlock backdoors Read:  0x00000001 if backdoors is enabled Read:  0x00000000 if backdoors is disabled */
#define PCGCMASTER_UNLOCKBACKDOORS_UNLOCKBACKDOORS_Pos (0UL) /*!< Position of UNLOCKBACKDOORS field. */
#define PCGCMASTER_UNLOCKBACKDOORS_UNLOCKBACKDOORS_Msk (0xFFFFUL << PCGCMASTER_UNLOCKBACKDOORS_UNLOCKBACKDOORS_Pos) /*!< Bit mask of UNLOCKBACKDOORS field. */

/* Register: PCGCMASTER_ENABLEPOWERREGFORCE */
/* Description: Enable power reg force */

/* Bits 2..0 : ENABLEPOWERREGFORCE */
#define PCGCMASTER_ENABLEPOWERREGFORCE_ENABLEPOWERREGFORCE_Pos (0UL) /*!< Position of ENABLEPOWERREGFORCE field. */
#define PCGCMASTER_ENABLEPOWERREGFORCE_ENABLEPOWERREGFORCE_Msk (0x7UL << PCGCMASTER_ENABLEPOWERREGFORCE_ENABLEPOWERREGFORCE_Pos) /*!< Bit mask of ENABLEPOWERREGFORCE field. */

/* Register: PCGCMASTER_POWERREGFORCE */
/* Description: Force reg */

/* Bits 2..0 : POWERREGFORCEREG */
#define PCGCMASTER_POWERREGFORCE_POWERREGFORCEREG_Pos (0UL) /*!< Position of POWERREGFORCEREG field. */
#define PCGCMASTER_POWERREGFORCE_POWERREGFORCEREG_Msk (0x7UL << PCGCMASTER_POWERREGFORCE_POWERREGFORCEREG_Pos) /*!< Bit mask of POWERREGFORCEREG field. */

/* Register: PCGCMASTER_MASTERFORCEREG */
/* Description: Force reg */

/* Bit 7 : POWERONFORCEPRE */
#define PCGCMASTER_MASTERFORCEREG_POWERONFORCEPRE_Pos (7UL) /*!< Position of POWERONFORCEPRE field. */
#define PCGCMASTER_MASTERFORCEREG_POWERONFORCEPRE_Msk (0x1UL << PCGCMASTER_MASTERFORCEREG_POWERONFORCEPRE_Pos) /*!< Bit mask of POWERONFORCEPRE field. */

/* Bit 6 : ENABLEPOWERONFORCE */
#define PCGCMASTER_MASTERFORCEREG_ENABLEPOWERONFORCE_Pos (6UL) /*!< Position of ENABLEPOWERONFORCE field. */
#define PCGCMASTER_MASTERFORCEREG_ENABLEPOWERONFORCE_Msk (0x1UL << PCGCMASTER_MASTERFORCEREG_ENABLEPOWERONFORCE_Pos) /*!< Bit mask of ENABLEPOWERONFORCE field. */

/* Bit 5 : VALUEARSTFORCEPRE */
#define PCGCMASTER_MASTERFORCEREG_VALUEARSTFORCEPRE_Pos (5UL) /*!< Position of VALUEARSTFORCEPRE field. */
#define PCGCMASTER_MASTERFORCEREG_VALUEARSTFORCEPRE_Msk (0x1UL << PCGCMASTER_MASTERFORCEREG_VALUEARSTFORCEPRE_Pos) /*!< Bit mask of VALUEARSTFORCEPRE field. */

/* Bit 4 : ENABLEARSTFORCE */
#define PCGCMASTER_MASTERFORCEREG_ENABLEARSTFORCE_Pos (4UL) /*!< Position of ENABLEARSTFORCE field. */
#define PCGCMASTER_MASTERFORCEREG_ENABLEARSTFORCE_Msk (0x1UL << PCGCMASTER_MASTERFORCEREG_ENABLEARSTFORCE_Pos) /*!< Bit mask of ENABLEARSTFORCE field. */

/* Bit 3 : ISOLATIONFORCEPRE */
#define PCGCMASTER_MASTERFORCEREG_ISOLATIONFORCEPRE_Pos (3UL) /*!< Position of ISOLATIONFORCEPRE field. */
#define PCGCMASTER_MASTERFORCEREG_ISOLATIONFORCEPRE_Msk (0x1UL << PCGCMASTER_MASTERFORCEREG_ISOLATIONFORCEPRE_Pos) /*!< Bit mask of ISOLATIONFORCEPRE field. */

/* Bit 2 : ENABLEISOLATIONFORCE */
#define PCGCMASTER_MASTERFORCEREG_ENABLEISOLATIONFORCE_Pos (2UL) /*!< Position of ENABLEISOLATIONFORCE field. */
#define PCGCMASTER_MASTERFORCEREG_ENABLEISOLATIONFORCE_Msk (0x1UL << PCGCMASTER_MASTERFORCEREG_ENABLEISOLATIONFORCE_Pos) /*!< Bit mask of ENABLEISOLATIONFORCE field. */

/* Bit 1 : PSWITCHFORCEPRE */
#define PCGCMASTER_MASTERFORCEREG_PSWITCHFORCEPRE_Pos (1UL) /*!< Position of PSWITCHFORCEPRE field. */
#define PCGCMASTER_MASTERFORCEREG_PSWITCHFORCEPRE_Msk (0x1UL << PCGCMASTER_MASTERFORCEREG_PSWITCHFORCEPRE_Pos) /*!< Bit mask of PSWITCHFORCEPRE field. */

/* Bit 0 : ENABLEPSWITCHFORCE */
#define PCGCMASTER_MASTERFORCEREG_ENABLEPSWITCHFORCE_Pos (0UL) /*!< Position of ENABLEPSWITCHFORCE field. */
#define PCGCMASTER_MASTERFORCEREG_ENABLEPSWITCHFORCE_Msk (0x1UL << PCGCMASTER_MASTERFORCEREG_ENABLEPSWITCHFORCE_Pos) /*!< Bit mask of ENABLEPSWITCHFORCE field. */

/* Register: PCGCMASTER_CLOCKFORCEREG */
/* Description: Description collection: Force clock n */

/* Bits 4..2 : CLOCKSOURCEFORCING */
#define PCGCMASTER_CLOCKFORCEREG_CLOCKSOURCEFORCING_Pos (2UL) /*!< Position of CLOCKSOURCEFORCING field. */
#define PCGCMASTER_CLOCKFORCEREG_CLOCKSOURCEFORCING_Msk (0x7UL << PCGCMASTER_CLOCKFORCEREG_CLOCKSOURCEFORCING_Pos) /*!< Bit mask of CLOCKSOURCEFORCING field. */

/* Bit 1 : CLOCKFORCING */
#define PCGCMASTER_CLOCKFORCEREG_CLOCKFORCING_Pos (1UL) /*!< Position of CLOCKFORCING field. */
#define PCGCMASTER_CLOCKFORCEREG_CLOCKFORCING_Msk (0x1UL << PCGCMASTER_CLOCKFORCEREG_CLOCKFORCING_Pos) /*!< Bit mask of CLOCKFORCING field. */

/* Bit 0 : Enable clock forcing */
#define PCGCMASTER_CLOCKFORCEREG_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define PCGCMASTER_CLOCKFORCEREG_ENABLE_Msk (0x1UL << PCGCMASTER_CLOCKFORCEREG_ENABLE_Pos) /*!< Bit mask of ENABLE field. */


/* Peripheral: PCGCSLAVE */
/* Description: PCGCSlave */

/* Register: PCGCSLAVE_TRIGZEROPENALTY */
/* Description: Trigger zero penalty */

/* Bit 0 : TRIGGER */
#define PCGCSLAVE_TRIGZEROPENALTY_TRIGGER_Pos (0UL) /*!< Position of TRIGGER field. */
#define PCGCSLAVE_TRIGZEROPENALTY_TRIGGER_Msk (0x1UL << PCGCSLAVE_TRIGZEROPENALTY_TRIGGER_Pos) /*!< Bit mask of TRIGGER field. */
#define PCGCSLAVE_TRIGZEROPENALTY_TRIGGER_Enable (0x1UL) /*!< Trigger zero penalty */

/* Register: PCGCSLAVE_TRIGFULLPENALTY */
/* Description: Trigger full penalty */

/* Bit 0 : TRIGGER */
#define PCGCSLAVE_TRIGFULLPENALTY_TRIGGER_Pos (0UL) /*!< Position of TRIGGER field. */
#define PCGCSLAVE_TRIGFULLPENALTY_TRIGGER_Msk (0x1UL << PCGCSLAVE_TRIGFULLPENALTY_TRIGGER_Pos) /*!< Bit mask of TRIGGER field. */
#define PCGCSLAVE_TRIGFULLPENALTY_TRIGGER_Enable (0x1UL) /*!< Trigger full penalty */

/* Register: PCGCSLAVE_PENALTY */
/* Description: Description collection: Penalty level for power/clock pair n */

/* Bits 7..0 : Penalty level */
#define PCGCSLAVE_PENALTY_PENALTY_Pos (0UL) /*!< Position of PENALTY field. */
#define PCGCSLAVE_PENALTY_PENALTY_Msk (0xFFUL << PCGCSLAVE_PENALTY_PENALTY_Pos) /*!< Bit mask of PENALTY field. */

/* Register: PCGCSLAVE_FORCEOVERRIDE */
/* Description: Description collection: Force override of power/clock pair n */

/* Bit 15 : DOFORCEPOWERPRE */
#define PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Pos (15UL) /*!< Position of DOFORCEPOWERPRE field. */
#define PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Msk (0x1UL << PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Pos) /*!< Bit mask of DOFORCEPOWERPRE field. */

/* Bits 9..8 : POWERFORCINGPRE */
#define PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Pos (8UL) /*!< Position of POWERFORCINGPRE field. */
#define PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Msk (0x3UL << PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Pos) /*!< Bit mask of POWERFORCINGPRE field. */

/* Bit 7 : DOFORCECLOCKPRE */
#define PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Pos (7UL) /*!< Position of DOFORCECLOCKPRE field. */
#define PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Msk (0x1UL << PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Pos) /*!< Bit mask of DOFORCECLOCKPRE field. */

/* Bits 3..0 : CLOCKFORCINGPRE */
#define PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Pos (0UL) /*!< Position of CLOCKFORCINGPRE field. */
#define PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Msk (0xFUL << PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Pos) /*!< Bit mask of CLOCKFORCINGPRE field. */


/* Peripheral: POWER */
/* Description: Power control */

/* Register: POWER_TASKS_CONSTLAT */
/* Description: Enable constant latency mode When going to sleep: CPU is clock gated, but regulators, oscillators and clock tree is kept on. */

/* Bit 0 : Enable constant latency mode When going to sleep: CPU is clock gated, but regulators, oscillators and clock tree is kept on. */
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos (0UL) /*!< Position of TASKS_CONSTLAT field. */
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Msk (0x1UL << POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos) /*!< Bit mask of TASKS_CONSTLAT field. */
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Trigger (0x1UL) /*!< Trigger task */

/* Register: POWER_TASKS_LOWPWR */
/* Description: Enable low power mode (variable latency) When going to sleep: Oscillators are switched off (if nothing else
      is requesting clocks). Regulators are switched off (if nothing else is requesting
      power). */

/* Bit 0 : Enable low power mode (variable latency) When going to sleep: Oscillators are switched off (if nothing else
      is requesting clocks). Regulators are switched off (if nothing else is requesting
      power). */
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos (0UL) /*!< Position of TASKS_LOWPWR field. */
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Msk (0x1UL << POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos) /*!< Bit mask of TASKS_LOWPWR field. */
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Trigger (0x1UL) /*!< Trigger task */

/* Register: POWER_SUBSCRIBE_CONSTLAT */
/* Description: Subscribe configuration for task CONSTLAT */

/* Bit 31 :   */
#define POWER_SUBSCRIBE_CONSTLAT_EN_Pos (31UL) /*!< Position of EN field. */
#define POWER_SUBSCRIBE_CONSTLAT_EN_Msk (0x1UL << POWER_SUBSCRIBE_CONSTLAT_EN_Pos) /*!< Bit mask of EN field. */
#define POWER_SUBSCRIBE_CONSTLAT_EN_Disabled (0x0UL) /*!< Disable subscription */
#define POWER_SUBSCRIBE_CONSTLAT_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CONSTLAT will subscribe to */
#define POWER_SUBSCRIBE_CONSTLAT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define POWER_SUBSCRIBE_CONSTLAT_CHIDX_Msk (0xFFUL << POWER_SUBSCRIBE_CONSTLAT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: POWER_SUBSCRIBE_LOWPWR */
/* Description: Subscribe configuration for task LOWPWR */

/* Bit 31 :   */
#define POWER_SUBSCRIBE_LOWPWR_EN_Pos (31UL) /*!< Position of EN field. */
#define POWER_SUBSCRIBE_LOWPWR_EN_Msk (0x1UL << POWER_SUBSCRIBE_LOWPWR_EN_Pos) /*!< Bit mask of EN field. */
#define POWER_SUBSCRIBE_LOWPWR_EN_Disabled (0x0UL) /*!< Disable subscription */
#define POWER_SUBSCRIBE_LOWPWR_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task LOWPWR will subscribe to */
#define POWER_SUBSCRIBE_LOWPWR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define POWER_SUBSCRIBE_LOWPWR_CHIDX_Msk (0xFFUL << POWER_SUBSCRIBE_LOWPWR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: POWER_EVENTS_POFWARN */
/* Description: Power failure warning */

/* Bit 0 : Power failure warning */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos (0UL) /*!< Position of EVENTS_POFWARN field. */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Msk (0x1UL << POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos) /*!< Bit mask of EVENTS_POFWARN field. */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_NotGenerated (0x0UL) /*!< Event not generated */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Generated (0x1UL) /*!< Event generated */

/* Register: POWER_EVENTS_SLEEPENTER */
/* Description: CPU entered WFI/WFE sleep */

/* Bit 0 : CPU entered WFI/WFE sleep */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos (0UL) /*!< Position of EVENTS_SLEEPENTER field. */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Msk (0x1UL << POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos) /*!< Bit mask of EVENTS_SLEEPENTER field. */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_NotGenerated (0x0UL) /*!< Event not generated */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Generated (0x1UL) /*!< Event generated */

/* Register: POWER_EVENTS_SLEEPEXIT */
/* Description: CPU exited WFI/WFE sleep */

/* Bit 0 : CPU exited WFI/WFE sleep */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos (0UL) /*!< Position of EVENTS_SLEEPEXIT field. */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Msk (0x1UL << POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos) /*!< Bit mask of EVENTS_SLEEPEXIT field. */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_NotGenerated (0x0UL) /*!< Event not generated */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Generated (0x1UL) /*!< Event generated */

/* Register: POWER_PUBLISH_POFWARN */
/* Description: Publish configuration for event POFWARN */

/* Bit 31 :   */
#define POWER_PUBLISH_POFWARN_EN_Pos (31UL) /*!< Position of EN field. */
#define POWER_PUBLISH_POFWARN_EN_Msk (0x1UL << POWER_PUBLISH_POFWARN_EN_Pos) /*!< Bit mask of EN field. */
#define POWER_PUBLISH_POFWARN_EN_Disabled (0x0UL) /*!< Disable publishing */
#define POWER_PUBLISH_POFWARN_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event POFWARN will publish to */
#define POWER_PUBLISH_POFWARN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define POWER_PUBLISH_POFWARN_CHIDX_Msk (0xFFUL << POWER_PUBLISH_POFWARN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: POWER_PUBLISH_SLEEPENTER */
/* Description: Publish configuration for event SLEEPENTER */

/* Bit 31 :   */
#define POWER_PUBLISH_SLEEPENTER_EN_Pos (31UL) /*!< Position of EN field. */
#define POWER_PUBLISH_SLEEPENTER_EN_Msk (0x1UL << POWER_PUBLISH_SLEEPENTER_EN_Pos) /*!< Bit mask of EN field. */
#define POWER_PUBLISH_SLEEPENTER_EN_Disabled (0x0UL) /*!< Disable publishing */
#define POWER_PUBLISH_SLEEPENTER_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event SLEEPENTER will publish to */
#define POWER_PUBLISH_SLEEPENTER_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define POWER_PUBLISH_SLEEPENTER_CHIDX_Msk (0xFFUL << POWER_PUBLISH_SLEEPENTER_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: POWER_PUBLISH_SLEEPEXIT */
/* Description: Publish configuration for event SLEEPEXIT */

/* Bit 31 :   */
#define POWER_PUBLISH_SLEEPEXIT_EN_Pos (31UL) /*!< Position of EN field. */
#define POWER_PUBLISH_SLEEPEXIT_EN_Msk (0x1UL << POWER_PUBLISH_SLEEPEXIT_EN_Pos) /*!< Bit mask of EN field. */
#define POWER_PUBLISH_SLEEPEXIT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define POWER_PUBLISH_SLEEPEXIT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event SLEEPEXIT will publish to */
#define POWER_PUBLISH_SLEEPEXIT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define POWER_PUBLISH_SLEEPEXIT_CHIDX_Msk (0xFFUL << POWER_PUBLISH_SLEEPEXIT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: POWER_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 6 : Enable or disable interrupt for event SLEEPEXIT */
#define POWER_INTEN_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define POWER_INTEN_SLEEPEXIT_Msk (0x1UL << POWER_INTEN_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define POWER_INTEN_SLEEPEXIT_Disabled (0x0UL) /*!< Disable */
#define POWER_INTEN_SLEEPEXIT_Enabled (0x1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event SLEEPENTER */
#define POWER_INTEN_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define POWER_INTEN_SLEEPENTER_Msk (0x1UL << POWER_INTEN_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define POWER_INTEN_SLEEPENTER_Disabled (0x0UL) /*!< Disable */
#define POWER_INTEN_SLEEPENTER_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event POFWARN */
#define POWER_INTEN_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define POWER_INTEN_POFWARN_Msk (0x1UL << POWER_INTEN_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define POWER_INTEN_POFWARN_Disabled (0x0UL) /*!< Disable */
#define POWER_INTEN_POFWARN_Enabled (0x1UL) /*!< Enable */

/* Register: POWER_INTENSET */
/* Description: Enable interrupt */

/* Bit 6 : Write '1' to enable interrupt for event SLEEPEXIT */
#define POWER_INTENSET_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define POWER_INTENSET_SLEEPEXIT_Msk (0x1UL << POWER_INTENSET_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define POWER_INTENSET_SLEEPEXIT_Disabled (0x0UL) /*!< Read: Disabled */
#define POWER_INTENSET_SLEEPEXIT_Enabled (0x1UL) /*!< Read: Enabled */
#define POWER_INTENSET_SLEEPEXIT_Set (0x1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event SLEEPENTER */
#define POWER_INTENSET_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define POWER_INTENSET_SLEEPENTER_Msk (0x1UL << POWER_INTENSET_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define POWER_INTENSET_SLEEPENTER_Disabled (0x0UL) /*!< Read: Disabled */
#define POWER_INTENSET_SLEEPENTER_Enabled (0x1UL) /*!< Read: Enabled */
#define POWER_INTENSET_SLEEPENTER_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event POFWARN */
#define POWER_INTENSET_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define POWER_INTENSET_POFWARN_Msk (0x1UL << POWER_INTENSET_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define POWER_INTENSET_POFWARN_Disabled (0x0UL) /*!< Read: Disabled */
#define POWER_INTENSET_POFWARN_Enabled (0x1UL) /*!< Read: Enabled */
#define POWER_INTENSET_POFWARN_Set (0x1UL) /*!< Enable */

/* Register: POWER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 6 : Write '1' to disable interrupt for event SLEEPEXIT */
#define POWER_INTENCLR_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define POWER_INTENCLR_SLEEPEXIT_Msk (0x1UL << POWER_INTENCLR_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define POWER_INTENCLR_SLEEPEXIT_Disabled (0x0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_SLEEPEXIT_Enabled (0x1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_SLEEPEXIT_Clear (0x1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event SLEEPENTER */
#define POWER_INTENCLR_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define POWER_INTENCLR_SLEEPENTER_Msk (0x1UL << POWER_INTENCLR_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define POWER_INTENCLR_SLEEPENTER_Disabled (0x0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_SLEEPENTER_Enabled (0x1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_SLEEPENTER_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event POFWARN */
#define POWER_INTENCLR_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define POWER_INTENCLR_POFWARN_Msk (0x1UL << POWER_INTENCLR_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define POWER_INTENCLR_POFWARN_Disabled (0x0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_POFWARN_Enabled (0x1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_POFWARN_Clear (0x1UL) /*!< Disable */

/* Register: POWER_GPREGRET */
/* Description: Description collection: General purpose retention register */

/* Bits 7..0 : General purpose retention register */
#define POWER_GPREGRET_GPREGRET_Pos (0UL) /*!< Position of GPREGRET field. */
#define POWER_GPREGRET_GPREGRET_Msk (0xFFUL << POWER_GPREGRET_GPREGRET_Pos) /*!< Bit mask of GPREGRET field. */


/* Peripheral: QDEC */
/* Description: Quadrature Decoder */

/* Register: QDEC_TASKS_START */
/* Description: Task starting the quadrature decoder */

/* Bit 0 : Task starting the quadrature decoder */
#define QDEC_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define QDEC_TASKS_START_TASKS_START_Msk (0x1UL << QDEC_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define QDEC_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: QDEC_TASKS_STOP */
/* Description: Task stopping the quadrature decoder */

/* Bit 0 : Task stopping the quadrature decoder */
#define QDEC_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define QDEC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << QDEC_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define QDEC_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: QDEC_TASKS_READCLRACC */
/* Description: Read and clear ACC and ACCDBL */

/* Bit 0 : Read and clear ACC and ACCDBL */
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Pos (0UL) /*!< Position of TASKS_READCLRACC field. */
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Msk (0x1UL << QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Pos) /*!< Bit mask of TASKS_READCLRACC field. */
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Trigger (0x1UL) /*!< Trigger task */

/* Register: QDEC_TASKS_RDCLRACC */
/* Description: Read and clear ACC */

/* Bit 0 : Read and clear ACC */
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Pos (0UL) /*!< Position of TASKS_RDCLRACC field. */
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Msk (0x1UL << QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Pos) /*!< Bit mask of TASKS_RDCLRACC field. */
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Trigger (0x1UL) /*!< Trigger task */

/* Register: QDEC_TASKS_RDCLRDBL */
/* Description: Read and clear ACCDBL */

/* Bit 0 : Read and clear ACCDBL */
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Pos (0UL) /*!< Position of TASKS_RDCLRDBL field. */
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Msk (0x1UL << QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Pos) /*!< Bit mask of TASKS_RDCLRDBL field. */
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Trigger (0x1UL) /*!< Trigger task */

/* Register: QDEC_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define QDEC_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define QDEC_SUBSCRIBE_START_EN_Msk (0x1UL << QDEC_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define QDEC_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define QDEC_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define QDEC_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define QDEC_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << QDEC_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: QDEC_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define QDEC_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define QDEC_SUBSCRIBE_STOP_EN_Msk (0x1UL << QDEC_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define QDEC_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define QDEC_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define QDEC_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define QDEC_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << QDEC_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: QDEC_SUBSCRIBE_READCLRACC */
/* Description: Subscribe configuration for task READCLRACC */

/* Bit 31 :   */
#define QDEC_SUBSCRIBE_READCLRACC_EN_Pos (31UL) /*!< Position of EN field. */
#define QDEC_SUBSCRIBE_READCLRACC_EN_Msk (0x1UL << QDEC_SUBSCRIBE_READCLRACC_EN_Pos) /*!< Bit mask of EN field. */
#define QDEC_SUBSCRIBE_READCLRACC_EN_Disabled (0x0UL) /*!< Disable subscription */
#define QDEC_SUBSCRIBE_READCLRACC_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task READCLRACC will subscribe to */
#define QDEC_SUBSCRIBE_READCLRACC_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define QDEC_SUBSCRIBE_READCLRACC_CHIDX_Msk (0xFFUL << QDEC_SUBSCRIBE_READCLRACC_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: QDEC_SUBSCRIBE_RDCLRACC */
/* Description: Subscribe configuration for task RDCLRACC */

/* Bit 31 :   */
#define QDEC_SUBSCRIBE_RDCLRACC_EN_Pos (31UL) /*!< Position of EN field. */
#define QDEC_SUBSCRIBE_RDCLRACC_EN_Msk (0x1UL << QDEC_SUBSCRIBE_RDCLRACC_EN_Pos) /*!< Bit mask of EN field. */
#define QDEC_SUBSCRIBE_RDCLRACC_EN_Disabled (0x0UL) /*!< Disable subscription */
#define QDEC_SUBSCRIBE_RDCLRACC_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RDCLRACC will subscribe to */
#define QDEC_SUBSCRIBE_RDCLRACC_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define QDEC_SUBSCRIBE_RDCLRACC_CHIDX_Msk (0xFFUL << QDEC_SUBSCRIBE_RDCLRACC_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: QDEC_SUBSCRIBE_RDCLRDBL */
/* Description: Subscribe configuration for task RDCLRDBL */

/* Bit 31 :   */
#define QDEC_SUBSCRIBE_RDCLRDBL_EN_Pos (31UL) /*!< Position of EN field. */
#define QDEC_SUBSCRIBE_RDCLRDBL_EN_Msk (0x1UL << QDEC_SUBSCRIBE_RDCLRDBL_EN_Pos) /*!< Bit mask of EN field. */
#define QDEC_SUBSCRIBE_RDCLRDBL_EN_Disabled (0x0UL) /*!< Disable subscription */
#define QDEC_SUBSCRIBE_RDCLRDBL_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RDCLRDBL will subscribe to */
#define QDEC_SUBSCRIBE_RDCLRDBL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define QDEC_SUBSCRIBE_RDCLRDBL_CHIDX_Msk (0xFFUL << QDEC_SUBSCRIBE_RDCLRDBL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: QDEC_EVENTS_SAMPLERDY */
/* Description: Event being generated for every new sample value written to the SAMPLE register */

/* Bit 0 : Event being generated for every new sample value written to the SAMPLE register */
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Pos (0UL) /*!< Position of EVENTS_SAMPLERDY field. */
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Msk (0x1UL << QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Pos) /*!< Bit mask of EVENTS_SAMPLERDY field. */
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_NotGenerated (0x0UL) /*!< Event not generated */
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Generated (0x1UL) /*!< Event generated */

/* Register: QDEC_EVENTS_REPORTRDY */
/* Description: Non-null report ready */

/* Bit 0 : Non-null report ready */
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Pos (0UL) /*!< Position of EVENTS_REPORTRDY field. */
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Msk (0x1UL << QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Pos) /*!< Bit mask of EVENTS_REPORTRDY field. */
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_NotGenerated (0x0UL) /*!< Event not generated */
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Generated (0x1UL) /*!< Event generated */

/* Register: QDEC_EVENTS_ACCOF */
/* Description: ACC or ACCDBL register overflow */

/* Bit 0 : ACC or ACCDBL register overflow */
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Pos (0UL) /*!< Position of EVENTS_ACCOF field. */
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Msk (0x1UL << QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Pos) /*!< Bit mask of EVENTS_ACCOF field. */
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_NotGenerated (0x0UL) /*!< Event not generated */
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Generated (0x1UL) /*!< Event generated */

/* Register: QDEC_EVENTS_DBLRDY */
/* Description: Double displacement(s) detected */

/* Bit 0 : Double displacement(s) detected */
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Pos (0UL) /*!< Position of EVENTS_DBLRDY field. */
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Msk (0x1UL << QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Pos) /*!< Bit mask of EVENTS_DBLRDY field. */
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_NotGenerated (0x0UL) /*!< Event not generated */
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Generated (0x1UL) /*!< Event generated */

/* Register: QDEC_EVENTS_STOPPED */
/* Description: QDEC has been stopped */

/* Bit 0 : QDEC has been stopped */
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL) /*!< Event not generated */
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL) /*!< Event generated */

/* Register: QDEC_PUBLISH_SAMPLERDY */
/* Description: Publish configuration for event SAMPLERDY */

/* Bit 31 :   */
#define QDEC_PUBLISH_SAMPLERDY_EN_Pos (31UL) /*!< Position of EN field. */
#define QDEC_PUBLISH_SAMPLERDY_EN_Msk (0x1UL << QDEC_PUBLISH_SAMPLERDY_EN_Pos) /*!< Bit mask of EN field. */
#define QDEC_PUBLISH_SAMPLERDY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define QDEC_PUBLISH_SAMPLERDY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event SAMPLERDY will publish to */
#define QDEC_PUBLISH_SAMPLERDY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define QDEC_PUBLISH_SAMPLERDY_CHIDX_Msk (0xFFUL << QDEC_PUBLISH_SAMPLERDY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: QDEC_PUBLISH_REPORTRDY */
/* Description: Publish configuration for event REPORTRDY */

/* Bit 31 :   */
#define QDEC_PUBLISH_REPORTRDY_EN_Pos (31UL) /*!< Position of EN field. */
#define QDEC_PUBLISH_REPORTRDY_EN_Msk (0x1UL << QDEC_PUBLISH_REPORTRDY_EN_Pos) /*!< Bit mask of EN field. */
#define QDEC_PUBLISH_REPORTRDY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define QDEC_PUBLISH_REPORTRDY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event REPORTRDY will publish to */
#define QDEC_PUBLISH_REPORTRDY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define QDEC_PUBLISH_REPORTRDY_CHIDX_Msk (0xFFUL << QDEC_PUBLISH_REPORTRDY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: QDEC_PUBLISH_ACCOF */
/* Description: Publish configuration for event ACCOF */

/* Bit 31 :   */
#define QDEC_PUBLISH_ACCOF_EN_Pos (31UL) /*!< Position of EN field. */
#define QDEC_PUBLISH_ACCOF_EN_Msk (0x1UL << QDEC_PUBLISH_ACCOF_EN_Pos) /*!< Bit mask of EN field. */
#define QDEC_PUBLISH_ACCOF_EN_Disabled (0x0UL) /*!< Disable publishing */
#define QDEC_PUBLISH_ACCOF_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ACCOF will publish to */
#define QDEC_PUBLISH_ACCOF_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define QDEC_PUBLISH_ACCOF_CHIDX_Msk (0xFFUL << QDEC_PUBLISH_ACCOF_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: QDEC_PUBLISH_DBLRDY */
/* Description: Publish configuration for event DBLRDY */

/* Bit 31 :   */
#define QDEC_PUBLISH_DBLRDY_EN_Pos (31UL) /*!< Position of EN field. */
#define QDEC_PUBLISH_DBLRDY_EN_Msk (0x1UL << QDEC_PUBLISH_DBLRDY_EN_Pos) /*!< Bit mask of EN field. */
#define QDEC_PUBLISH_DBLRDY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define QDEC_PUBLISH_DBLRDY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DBLRDY will publish to */
#define QDEC_PUBLISH_DBLRDY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define QDEC_PUBLISH_DBLRDY_CHIDX_Msk (0xFFUL << QDEC_PUBLISH_DBLRDY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: QDEC_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define QDEC_PUBLISH_STOPPED_EN_Pos (31UL) /*!< Position of EN field. */
#define QDEC_PUBLISH_STOPPED_EN_Msk (0x1UL << QDEC_PUBLISH_STOPPED_EN_Pos) /*!< Bit mask of EN field. */
#define QDEC_PUBLISH_STOPPED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define QDEC_PUBLISH_STOPPED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define QDEC_PUBLISH_STOPPED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define QDEC_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << QDEC_PUBLISH_STOPPED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: QDEC_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 6 : Shortcut between event SAMPLERDY and task READCLRACC */
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Pos (6UL) /*!< Position of SAMPLERDY_READCLRACC field. */
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_READCLRACC_Pos) /*!< Bit mask of SAMPLERDY_READCLRACC field. */
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Disabled (0x0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event DBLRDY and task STOP */
#define QDEC_SHORTS_DBLRDY_STOP_Pos (5UL) /*!< Position of DBLRDY_STOP field. */
#define QDEC_SHORTS_DBLRDY_STOP_Msk (0x1UL << QDEC_SHORTS_DBLRDY_STOP_Pos) /*!< Bit mask of DBLRDY_STOP field. */
#define QDEC_SHORTS_DBLRDY_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_DBLRDY_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event DBLRDY and task RDCLRDBL */
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Pos (4UL) /*!< Position of DBLRDY_RDCLRDBL field. */
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Msk (0x1UL << QDEC_SHORTS_DBLRDY_RDCLRDBL_Pos) /*!< Bit mask of DBLRDY_RDCLRDBL field. */
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Disabled (0x0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event REPORTRDY and task STOP */
#define QDEC_SHORTS_REPORTRDY_STOP_Pos (3UL) /*!< Position of REPORTRDY_STOP field. */
#define QDEC_SHORTS_REPORTRDY_STOP_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_STOP_Pos) /*!< Bit mask of REPORTRDY_STOP field. */
#define QDEC_SHORTS_REPORTRDY_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_REPORTRDY_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event REPORTRDY and task RDCLRACC */
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Pos (2UL) /*!< Position of REPORTRDY_RDCLRACC field. */
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_RDCLRACC_Pos) /*!< Bit mask of REPORTRDY_RDCLRACC field. */
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Disabled (0x0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event SAMPLERDY and task STOP */
#define QDEC_SHORTS_SAMPLERDY_STOP_Pos (1UL) /*!< Position of SAMPLERDY_STOP field. */
#define QDEC_SHORTS_SAMPLERDY_STOP_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_STOP_Pos) /*!< Bit mask of SAMPLERDY_STOP field. */
#define QDEC_SHORTS_SAMPLERDY_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_SAMPLERDY_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event REPORTRDY and task READCLRACC */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Pos (0UL) /*!< Position of REPORTRDY_READCLRACC field. */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_READCLRACC_Pos) /*!< Bit mask of REPORTRDY_READCLRACC field. */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Disabled (0x0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: QDEC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 4 : Enable or disable interrupt for event STOPPED */
#define QDEC_INTEN_STOPPED_Pos (4UL) /*!< Position of STOPPED field. */
#define QDEC_INTEN_STOPPED_Msk (0x1UL << QDEC_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define QDEC_INTEN_STOPPED_Disabled (0x0UL) /*!< Disable */
#define QDEC_INTEN_STOPPED_Enabled (0x1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event DBLRDY */
#define QDEC_INTEN_DBLRDY_Pos (3UL) /*!< Position of DBLRDY field. */
#define QDEC_INTEN_DBLRDY_Msk (0x1UL << QDEC_INTEN_DBLRDY_Pos) /*!< Bit mask of DBLRDY field. */
#define QDEC_INTEN_DBLRDY_Disabled (0x0UL) /*!< Disable */
#define QDEC_INTEN_DBLRDY_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event ACCOF */
#define QDEC_INTEN_ACCOF_Pos (2UL) /*!< Position of ACCOF field. */
#define QDEC_INTEN_ACCOF_Msk (0x1UL << QDEC_INTEN_ACCOF_Pos) /*!< Bit mask of ACCOF field. */
#define QDEC_INTEN_ACCOF_Disabled (0x0UL) /*!< Disable */
#define QDEC_INTEN_ACCOF_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event REPORTRDY */
#define QDEC_INTEN_REPORTRDY_Pos (1UL) /*!< Position of REPORTRDY field. */
#define QDEC_INTEN_REPORTRDY_Msk (0x1UL << QDEC_INTEN_REPORTRDY_Pos) /*!< Bit mask of REPORTRDY field. */
#define QDEC_INTEN_REPORTRDY_Disabled (0x0UL) /*!< Disable */
#define QDEC_INTEN_REPORTRDY_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event SAMPLERDY */
#define QDEC_INTEN_SAMPLERDY_Pos (0UL) /*!< Position of SAMPLERDY field. */
#define QDEC_INTEN_SAMPLERDY_Msk (0x1UL << QDEC_INTEN_SAMPLERDY_Pos) /*!< Bit mask of SAMPLERDY field. */
#define QDEC_INTEN_SAMPLERDY_Disabled (0x0UL) /*!< Disable */
#define QDEC_INTEN_SAMPLERDY_Enabled (0x1UL) /*!< Enable */

/* Register: QDEC_INTENSET */
/* Description: Enable interrupt */

/* Bit 4 : Write '1' to enable interrupt for event STOPPED */
#define QDEC_INTENSET_STOPPED_Pos (4UL) /*!< Position of STOPPED field. */
#define QDEC_INTENSET_STOPPED_Msk (0x1UL << QDEC_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define QDEC_INTENSET_STOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_STOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_STOPPED_Set (0x1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event DBLRDY */
#define QDEC_INTENSET_DBLRDY_Pos (3UL) /*!< Position of DBLRDY field. */
#define QDEC_INTENSET_DBLRDY_Msk (0x1UL << QDEC_INTENSET_DBLRDY_Pos) /*!< Bit mask of DBLRDY field. */
#define QDEC_INTENSET_DBLRDY_Disabled (0x0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_DBLRDY_Enabled (0x1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_DBLRDY_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event ACCOF */
#define QDEC_INTENSET_ACCOF_Pos (2UL) /*!< Position of ACCOF field. */
#define QDEC_INTENSET_ACCOF_Msk (0x1UL << QDEC_INTENSET_ACCOF_Pos) /*!< Bit mask of ACCOF field. */
#define QDEC_INTENSET_ACCOF_Disabled (0x0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_ACCOF_Enabled (0x1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_ACCOF_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event REPORTRDY */
#define QDEC_INTENSET_REPORTRDY_Pos (1UL) /*!< Position of REPORTRDY field. */
#define QDEC_INTENSET_REPORTRDY_Msk (0x1UL << QDEC_INTENSET_REPORTRDY_Pos) /*!< Bit mask of REPORTRDY field. */
#define QDEC_INTENSET_REPORTRDY_Disabled (0x0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_REPORTRDY_Enabled (0x1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_REPORTRDY_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event SAMPLERDY */
#define QDEC_INTENSET_SAMPLERDY_Pos (0UL) /*!< Position of SAMPLERDY field. */
#define QDEC_INTENSET_SAMPLERDY_Msk (0x1UL << QDEC_INTENSET_SAMPLERDY_Pos) /*!< Bit mask of SAMPLERDY field. */
#define QDEC_INTENSET_SAMPLERDY_Disabled (0x0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_SAMPLERDY_Enabled (0x1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_SAMPLERDY_Set (0x1UL) /*!< Enable */

/* Register: QDEC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 4 : Write '1' to disable interrupt for event STOPPED */
#define QDEC_INTENCLR_STOPPED_Pos (4UL) /*!< Position of STOPPED field. */
#define QDEC_INTENCLR_STOPPED_Msk (0x1UL << QDEC_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define QDEC_INTENCLR_STOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_STOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_STOPPED_Clear (0x1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event DBLRDY */
#define QDEC_INTENCLR_DBLRDY_Pos (3UL) /*!< Position of DBLRDY field. */
#define QDEC_INTENCLR_DBLRDY_Msk (0x1UL << QDEC_INTENCLR_DBLRDY_Pos) /*!< Bit mask of DBLRDY field. */
#define QDEC_INTENCLR_DBLRDY_Disabled (0x0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_DBLRDY_Enabled (0x1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_DBLRDY_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event ACCOF */
#define QDEC_INTENCLR_ACCOF_Pos (2UL) /*!< Position of ACCOF field. */
#define QDEC_INTENCLR_ACCOF_Msk (0x1UL << QDEC_INTENCLR_ACCOF_Pos) /*!< Bit mask of ACCOF field. */
#define QDEC_INTENCLR_ACCOF_Disabled (0x0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_ACCOF_Enabled (0x1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_ACCOF_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event REPORTRDY */
#define QDEC_INTENCLR_REPORTRDY_Pos (1UL) /*!< Position of REPORTRDY field. */
#define QDEC_INTENCLR_REPORTRDY_Msk (0x1UL << QDEC_INTENCLR_REPORTRDY_Pos) /*!< Bit mask of REPORTRDY field. */
#define QDEC_INTENCLR_REPORTRDY_Disabled (0x0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_REPORTRDY_Enabled (0x1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_REPORTRDY_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event SAMPLERDY */
#define QDEC_INTENCLR_SAMPLERDY_Pos (0UL) /*!< Position of SAMPLERDY field. */
#define QDEC_INTENCLR_SAMPLERDY_Msk (0x1UL << QDEC_INTENCLR_SAMPLERDY_Pos) /*!< Bit mask of SAMPLERDY field. */
#define QDEC_INTENCLR_SAMPLERDY_Disabled (0x0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_SAMPLERDY_Enabled (0x1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_SAMPLERDY_Clear (0x1UL) /*!< Disable */

/* Register: QDEC_ENABLE */
/* Description: Enable the quadrature decoder */

/* Bits 1..0 : Enable or disable the quadrature decoder */
#define QDEC_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define QDEC_ENABLE_ENABLE_Msk (0x3UL << QDEC_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define QDEC_ENABLE_ENABLE_Disabled (0x0UL) /*!< Disable */
#define QDEC_ENABLE_ENABLE_Enabled (0x1UL) /*!< Enable */
#define QDEC_ENABLE_ENABLE_Rambo5 (0x2UL) /*!< Enable with Rambo5 support */

/* Register: QDEC_LEDPOL */
/* Description: LED output pin polarity */

/* Bit 0 : LED output pin polarity */
#define QDEC_LEDPOL_LEDPOL_Pos (0UL) /*!< Position of LEDPOL field. */
#define QDEC_LEDPOL_LEDPOL_Msk (0x1UL << QDEC_LEDPOL_LEDPOL_Pos) /*!< Bit mask of LEDPOL field. */
#define QDEC_LEDPOL_LEDPOL_ActiveLow (0x0UL) /*!< Led active on output pin low */
#define QDEC_LEDPOL_LEDPOL_ActiveHigh (0x1UL) /*!< Led active on output pin high */

/* Register: QDEC_SAMPLEPER */
/* Description: Sample period */

/* Bits 3..0 : Sample period. The SAMPLE register will be updated for every new sample */
#define QDEC_SAMPLEPER_SAMPLEPER_Pos (0UL) /*!< Position of SAMPLEPER field. */
#define QDEC_SAMPLEPER_SAMPLEPER_Msk (0xFUL << QDEC_SAMPLEPER_SAMPLEPER_Pos) /*!< Bit mask of SAMPLEPER field. */
#define QDEC_SAMPLEPER_SAMPLEPER_128us (0x0UL) /*!< 128 us */
#define QDEC_SAMPLEPER_SAMPLEPER_256us (0x1UL) /*!< 256 us */
#define QDEC_SAMPLEPER_SAMPLEPER_512us (0x2UL) /*!< 512 us */
#define QDEC_SAMPLEPER_SAMPLEPER_1024us (0x3UL) /*!< 1024 us */
#define QDEC_SAMPLEPER_SAMPLEPER_2048us (0x4UL) /*!< 2048 us */
#define QDEC_SAMPLEPER_SAMPLEPER_4096us (0x5UL) /*!< 4096 us */
#define QDEC_SAMPLEPER_SAMPLEPER_8192us (0x6UL) /*!< 8192 us */
#define QDEC_SAMPLEPER_SAMPLEPER_16384us (0x7UL) /*!< 16384 us */
#define QDEC_SAMPLEPER_SAMPLEPER_32ms (0x8UL) /*!< 32768 us */
#define QDEC_SAMPLEPER_SAMPLEPER_65ms (0x9UL) /*!< 65536 us */
#define QDEC_SAMPLEPER_SAMPLEPER_131ms (0xAUL) /*!< 131072 us */

/* Register: QDEC_SAMPLE */
/* Description: Motion sample value */

/* Bits 31..0 : Last motion sample */
#define QDEC_SAMPLE_SAMPLE_Pos (0UL) /*!< Position of SAMPLE field. */
#define QDEC_SAMPLE_SAMPLE_Msk (0xFFFFFFFFUL << QDEC_SAMPLE_SAMPLE_Pos) /*!< Bit mask of SAMPLE field. */

/* Register: QDEC_REPORTPER */
/* Description: Number of samples to be taken before REPORTRDY and DBLRDY events can be generated */

/* Bits 3..0 : Specifies the number of samples to be accumulated in the ACC register before the REPORTRDY and DBLRDY events can be generated */
#define QDEC_REPORTPER_REPORTPER_Pos (0UL) /*!< Position of REPORTPER field. */
#define QDEC_REPORTPER_REPORTPER_Msk (0xFUL << QDEC_REPORTPER_REPORTPER_Pos) /*!< Bit mask of REPORTPER field. */
#define QDEC_REPORTPER_REPORTPER_10Smpl (0x0UL) /*!< 10 samples / report */
#define QDEC_REPORTPER_REPORTPER_40Smpl (0x1UL) /*!< 40 samples / report */
#define QDEC_REPORTPER_REPORTPER_80Smpl (0x2UL) /*!< 80 samples / report */
#define QDEC_REPORTPER_REPORTPER_120Smpl (0x3UL) /*!< 120 samples / report */
#define QDEC_REPORTPER_REPORTPER_160Smpl (0x4UL) /*!< 160 samples / report */
#define QDEC_REPORTPER_REPORTPER_200Smpl (0x5UL) /*!< 200 samples / report */
#define QDEC_REPORTPER_REPORTPER_240Smpl (0x6UL) /*!< 240 samples / report */
#define QDEC_REPORTPER_REPORTPER_280Smpl (0x7UL) /*!< 280 samples / report */
#define QDEC_REPORTPER_REPORTPER_1Smpl (0x8UL) /*!< 1 sample / report */

/* Register: QDEC_ACC */
/* Description: Register accumulating the valid transitions */

/* Bits 31..0 : Register accumulating all valid samples (not double transition) read from the SAMPLE register */
#define QDEC_ACC_ACC_Pos (0UL) /*!< Position of ACC field. */
#define QDEC_ACC_ACC_Msk (0xFFFFFFFFUL << QDEC_ACC_ACC_Pos) /*!< Bit mask of ACC field. */

/* Register: QDEC_ACCREAD */
/* Description: Snapshot of the ACC register, updated by the READCLRACC or RDCLRACC task */

/* Bits 31..0 : Snapshot of the ACC register. */
#define QDEC_ACCREAD_ACCREAD_Pos (0UL) /*!< Position of ACCREAD field. */
#define QDEC_ACCREAD_ACCREAD_Msk (0xFFFFFFFFUL << QDEC_ACCREAD_ACCREAD_Pos) /*!< Bit mask of ACCREAD field. */

/* Register: QDEC_PSEL_LED */
/* Description: Pin select for LED signal */

/* Bit 31 : Connection */
#define QDEC_PSEL_LED_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define QDEC_PSEL_LED_CONNECT_Msk (0x1UL << QDEC_PSEL_LED_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define QDEC_PSEL_LED_CONNECT_Connected (0x0UL) /*!< Connect */
#define QDEC_PSEL_LED_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define QDEC_PSEL_LED_PORT_Pos (5UL) /*!< Position of PORT field. */
#define QDEC_PSEL_LED_PORT_Msk (0x1UL << QDEC_PSEL_LED_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define QDEC_PSEL_LED_PIN_Pos (0UL) /*!< Position of PIN field. */
#define QDEC_PSEL_LED_PIN_Msk (0x1FUL << QDEC_PSEL_LED_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: QDEC_PSEL_A */
/* Description: Pin select for A signal */

/* Bit 31 : Connection */
#define QDEC_PSEL_A_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define QDEC_PSEL_A_CONNECT_Msk (0x1UL << QDEC_PSEL_A_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define QDEC_PSEL_A_CONNECT_Connected (0x0UL) /*!< Connect */
#define QDEC_PSEL_A_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define QDEC_PSEL_A_PORT_Pos (5UL) /*!< Position of PORT field. */
#define QDEC_PSEL_A_PORT_Msk (0x1UL << QDEC_PSEL_A_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define QDEC_PSEL_A_PIN_Pos (0UL) /*!< Position of PIN field. */
#define QDEC_PSEL_A_PIN_Msk (0x1FUL << QDEC_PSEL_A_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: QDEC_PSEL_B */
/* Description: Pin select for B signal */

/* Bit 31 : Connection */
#define QDEC_PSEL_B_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define QDEC_PSEL_B_CONNECT_Msk (0x1UL << QDEC_PSEL_B_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define QDEC_PSEL_B_CONNECT_Connected (0x0UL) /*!< Connect */
#define QDEC_PSEL_B_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define QDEC_PSEL_B_PORT_Pos (5UL) /*!< Position of PORT field. */
#define QDEC_PSEL_B_PORT_Msk (0x1UL << QDEC_PSEL_B_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define QDEC_PSEL_B_PIN_Pos (0UL) /*!< Position of PIN field. */
#define QDEC_PSEL_B_PIN_Msk (0x1FUL << QDEC_PSEL_B_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: QDEC_DBFEN */
/* Description: Enable input debounce filters */

/* Bit 0 : Enable input debounce filters */
#define QDEC_DBFEN_DBFEN_Pos (0UL) /*!< Position of DBFEN field. */
#define QDEC_DBFEN_DBFEN_Msk (0x1UL << QDEC_DBFEN_DBFEN_Pos) /*!< Bit mask of DBFEN field. */
#define QDEC_DBFEN_DBFEN_Disabled (0x0UL) /*!< Debounce input filters disabled */
#define QDEC_DBFEN_DBFEN_Enabled (0x1UL) /*!< Debounce input filters enabled */

/* Register: QDEC_LEDPRE */
/* Description: Time period the LED is switched ON prior to sampling */

/* Bits 8..0 : Period in us the LED is switched on prior to sampling */
#define QDEC_LEDPRE_LEDPRE_Pos (0UL) /*!< Position of LEDPRE field. */
#define QDEC_LEDPRE_LEDPRE_Msk (0x1FFUL << QDEC_LEDPRE_LEDPRE_Pos) /*!< Bit mask of LEDPRE field. */

/* Register: QDEC_ACCDBL */
/* Description: Register accumulating the number of detected double transitions */

/* Bits 3..0 : Register accumulating the number of detected double or illegal transitions. ( SAMPLE = 2 ). */
#define QDEC_ACCDBL_ACCDBL_Pos (0UL) /*!< Position of ACCDBL field. */
#define QDEC_ACCDBL_ACCDBL_Msk (0xFUL << QDEC_ACCDBL_ACCDBL_Pos) /*!< Bit mask of ACCDBL field. */

/* Register: QDEC_ACCDBLREAD */
/* Description: Snapshot of the ACCDBL, updated by the READCLRACC or RDCLRDBL task */

/* Bits 3..0 : Snapshot of the ACCDBL register. This field is updated when the READCLRACC or RDCLRDBL task is triggered. */
#define QDEC_ACCDBLREAD_ACCDBLREAD_Pos (0UL) /*!< Position of ACCDBLREAD field. */
#define QDEC_ACCDBLREAD_ACCDBLREAD_Msk (0xFUL << QDEC_ACCDBLREAD_ACCDBLREAD_Pos) /*!< Bit mask of ACCDBLREAD field. */


/* Peripheral: RADIO */
/* Description: 2.4 GHz radio */

/* Register: RADIO_TASKS_TXEN */
/* Description: Enable RADIO in TX mode */

/* Bit 0 : Enable RADIO in TX mode */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Pos (0UL) /*!< Position of TASKS_TXEN field. */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Msk (0x1UL << RADIO_TASKS_TXEN_TASKS_TXEN_Pos) /*!< Bit mask of TASKS_TXEN field. */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RXEN */
/* Description: Enable RADIO in RX mode */

/* Bit 0 : Enable RADIO in RX mode */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Pos (0UL) /*!< Position of TASKS_RXEN field. */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Msk (0x1UL << RADIO_TASKS_RXEN_TASKS_RXEN_Pos) /*!< Bit mask of TASKS_RXEN field. */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_START */
/* Description: Start RADIO */

/* Bit 0 : Start RADIO */
#define RADIO_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define RADIO_TASKS_START_TASKS_START_Msk (0x1UL << RADIO_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define RADIO_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_STOP */
/* Description: Stop RADIO */

/* Bit 0 : Stop RADIO */
#define RADIO_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define RADIO_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RADIO_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define RADIO_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DISABLE */
/* Description: Disable RADIO */

/* Bit 0 : Disable RADIO */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos (0UL) /*!< Position of TASKS_DISABLE field. */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Msk (0x1UL << RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos) /*!< Bit mask of TASKS_DISABLE field. */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RSSISTART */
/* Description: Start the RSSI and take one single sample of the receive signal strength */

/* Bit 0 : Start the RSSI and take one single sample of the receive signal strength */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos (0UL) /*!< Position of TASKS_RSSISTART field. */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Msk (0x1UL << RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos) /*!< Bit mask of TASKS_RSSISTART field. */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RSSISTOP */
/* Description: Stop the RSSI measurement */

/* Bit 0 : Stop the RSSI measurement */
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Pos (0UL) /*!< Position of TASKS_RSSISTOP field. */
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Msk (0x1UL << RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Pos) /*!< Bit mask of TASKS_RSSISTOP field. */
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_BCSTART */
/* Description: Start the bit counter */

/* Bit 0 : Start the bit counter */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos (0UL) /*!< Position of TASKS_BCSTART field. */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Msk (0x1UL << RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos) /*!< Bit mask of TASKS_BCSTART field. */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_BCSTOP */
/* Description: Stop the bit counter */

/* Bit 0 : Stop the bit counter */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos (0UL) /*!< Position of TASKS_BCSTOP field. */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Msk (0x1UL << RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos) /*!< Bit mask of TASKS_BCSTOP field. */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CNTP_START */
/* Description: Start packet counter */

/* Bit 0 : Start packet counter */
#define RADIO_TASKS_CNTP_START_TASKS_CNTP_START_Pos (0UL) /*!< Position of TASKS_CNTP_START field. */
#define RADIO_TASKS_CNTP_START_TASKS_CNTP_START_Msk (0x1UL << RADIO_TASKS_CNTP_START_TASKS_CNTP_START_Pos) /*!< Bit mask of TASKS_CNTP_START field. */
#define RADIO_TASKS_CNTP_START_TASKS_CNTP_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CNTP_STOP */
/* Description: Stop packet counter */

/* Bit 0 : Stop packet counter */
#define RADIO_TASKS_CNTP_STOP_TASKS_CNTP_STOP_Pos (0UL) /*!< Position of TASKS_CNTP_STOP field. */
#define RADIO_TASKS_CNTP_STOP_TASKS_CNTP_STOP_Msk (0x1UL << RADIO_TASKS_CNTP_STOP_TASKS_CNTP_STOP_Pos) /*!< Bit mask of TASKS_CNTP_STOP field. */
#define RADIO_TASKS_CNTP_STOP_TASKS_CNTP_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CNTP_CLEAR */
/* Description: Clear packet counter */

/* Bit 0 : Clear packet counter */
#define RADIO_TASKS_CNTP_CLEAR_TASKS_CNTP_CLEAR_Pos (0UL) /*!< Position of TASKS_CNTP_CLEAR field. */
#define RADIO_TASKS_CNTP_CLEAR_TASKS_CNTP_CLEAR_Msk (0x1UL << RADIO_TASKS_CNTP_CLEAR_TASKS_CNTP_CLEAR_Pos) /*!< Bit mask of TASKS_CNTP_CLEAR field. */
#define RADIO_TASKS_CNTP_CLEAR_TASKS_CNTP_CLEAR_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DFESTART */
/* Description: Start an AoA/AoD procedure (antenna switching and baseband sampling) */

/* Bit 0 : Start an AoA/AoD procedure (antenna switching and baseband sampling) */
#define RADIO_TASKS_DFESTART_TASKS_DFESTART_Pos (0UL) /*!< Position of TASKS_DFESTART field. */
#define RADIO_TASKS_DFESTART_TASKS_DFESTART_Msk (0x1UL << RADIO_TASKS_DFESTART_TASKS_DFESTART_Pos) /*!< Bit mask of TASKS_DFESTART field. */
#define RADIO_TASKS_DFESTART_TASKS_DFESTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DFESTOP */
/* Description: Stop an AoA/AoD procedure */

/* Bit 0 : Stop an AoA/AoD procedure */
#define RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Pos (0UL) /*!< Position of TASKS_DFESTOP field. */
#define RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Msk (0x1UL << RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Pos) /*!< Bit mask of TASKS_DFESTOP field. */
#define RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DMA_START */
/* Description: Start DMA transaction */

/* Bit 0 : Start DMA transaction */
#define RADIO_TASKS_DMA_START_TASKS_DMA_START_Pos (0UL) /*!< Position of TASKS_DMA_START field. */
#define RADIO_TASKS_DMA_START_TASKS_DMA_START_Msk (0x1UL << RADIO_TASKS_DMA_START_TASKS_DMA_START_Pos) /*!< Bit mask of TASKS_DMA_START field. */
#define RADIO_TASKS_DMA_START_TASKS_DMA_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DMA_STOP */
/* Description: Stop ongoing DMA transaction */

/* Bit 0 : Stop ongoing DMA transaction */
#define RADIO_TASKS_DMA_STOP_TASKS_DMA_STOP_Pos (0UL) /*!< Position of TASKS_DMA_STOP field. */
#define RADIO_TASKS_DMA_STOP_TASKS_DMA_STOP_Msk (0x1UL << RADIO_TASKS_DMA_STOP_TASKS_DMA_STOP_Pos) /*!< Bit mask of TASKS_DMA_STOP field. */
#define RADIO_TASKS_DMA_STOP_TASKS_DMA_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_ACQSTART */
/* Description: Start data acquisition */

/* Bit 0 : Start data acquisition */
#define RADIO_TASKS_ACQSTART_TASKS_ACQSTART_Pos (0UL) /*!< Position of TASKS_ACQSTART field. */
#define RADIO_TASKS_ACQSTART_TASKS_ACQSTART_Msk (0x1UL << RADIO_TASKS_ACQSTART_TASKS_ACQSTART_Pos) /*!< Bit mask of TASKS_ACQSTART field. */
#define RADIO_TASKS_ACQSTART_TASKS_ACQSTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_ACQSTOP */
/* Description: Stop data acquisition */

/* Bit 0 : Stop data acquisition */
#define RADIO_TASKS_ACQSTOP_TASKS_ACQSTOP_Pos (0UL) /*!< Position of TASKS_ACQSTOP field. */
#define RADIO_TASKS_ACQSTOP_TASKS_ACQSTOP_Msk (0x1UL << RADIO_TASKS_ACQSTOP_TASKS_ACQSTOP_Pos) /*!< Bit mask of TASKS_ACQSTOP field. */
#define RADIO_TASKS_ACQSTOP_TASKS_ACQSTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_PCGC_PCP2_ZERO */
/* Description: Zero penalty */

/* Bit 0 : Zero penalty */
#define RADIO_TASKS_PCGC_PCP2_ZERO_TASKS_PCGC_PCP2_ZERO_Pos (0UL) /*!< Position of TASKS_PCGC_PCP2_ZERO field. */
#define RADIO_TASKS_PCGC_PCP2_ZERO_TASKS_PCGC_PCP2_ZERO_Msk (0x1UL << RADIO_TASKS_PCGC_PCP2_ZERO_TASKS_PCGC_PCP2_ZERO_Pos) /*!< Bit mask of TASKS_PCGC_PCP2_ZERO field. */
#define RADIO_TASKS_PCGC_PCP2_ZERO_TASKS_PCGC_PCP2_ZERO_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_PCGC_PCP2_FULL */
/* Description: Full penalty */

/* Bit 0 : Full penalty */
#define RADIO_TASKS_PCGC_PCP2_FULL_TASKS_PCGC_PCP2_FULL_Pos (0UL) /*!< Position of TASKS_PCGC_PCP2_FULL field. */
#define RADIO_TASKS_PCGC_PCP2_FULL_TASKS_PCGC_PCP2_FULL_Msk (0x1UL << RADIO_TASKS_PCGC_PCP2_FULL_TASKS_PCGC_PCP2_FULL_Pos) /*!< Bit mask of TASKS_PCGC_PCP2_FULL field. */
#define RADIO_TASKS_PCGC_PCP2_FULL_TASKS_PCGC_PCP2_FULL_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_PCGC_PCP1_ZERO */
/* Description: Zero penalty */

/* Bit 0 : Zero penalty */
#define RADIO_TASKS_PCGC_PCP1_ZERO_TASKS_PCGC_PCP1_ZERO_Pos (0UL) /*!< Position of TASKS_PCGC_PCP1_ZERO field. */
#define RADIO_TASKS_PCGC_PCP1_ZERO_TASKS_PCGC_PCP1_ZERO_Msk (0x1UL << RADIO_TASKS_PCGC_PCP1_ZERO_TASKS_PCGC_PCP1_ZERO_Pos) /*!< Bit mask of TASKS_PCGC_PCP1_ZERO field. */
#define RADIO_TASKS_PCGC_PCP1_ZERO_TASKS_PCGC_PCP1_ZERO_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_PCGC_PCP1_FULL */
/* Description: Full penalty */

/* Bit 0 : Full penalty */
#define RADIO_TASKS_PCGC_PCP1_FULL_TASKS_PCGC_PCP1_FULL_Pos (0UL) /*!< Position of TASKS_PCGC_PCP1_FULL field. */
#define RADIO_TASKS_PCGC_PCP1_FULL_TASKS_PCGC_PCP1_FULL_Msk (0x1UL << RADIO_TASKS_PCGC_PCP1_FULL_TASKS_PCGC_PCP1_FULL_Pos) /*!< Bit mask of TASKS_PCGC_PCP1_FULL field. */
#define RADIO_TASKS_PCGC_PCP1_FULL_TASKS_PCGC_PCP1_FULL_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_PCGC_PCP0_ZERO */
/* Description: Zero penalty */

/* Bit 0 : Zero penalty */
#define RADIO_TASKS_PCGC_PCP0_ZERO_TASKS_PCGC_PCP0_ZERO_Pos (0UL) /*!< Position of TASKS_PCGC_PCP0_ZERO field. */
#define RADIO_TASKS_PCGC_PCP0_ZERO_TASKS_PCGC_PCP0_ZERO_Msk (0x1UL << RADIO_TASKS_PCGC_PCP0_ZERO_TASKS_PCGC_PCP0_ZERO_Pos) /*!< Bit mask of TASKS_PCGC_PCP0_ZERO field. */
#define RADIO_TASKS_PCGC_PCP0_ZERO_TASKS_PCGC_PCP0_ZERO_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_PCGC_PCP0_FULL */
/* Description: Full penalty */

/* Bit 0 : Full penalty */
#define RADIO_TASKS_PCGC_PCP0_FULL_TASKS_PCGC_PCP0_FULL_Pos (0UL) /*!< Position of TASKS_PCGC_PCP0_FULL field. */
#define RADIO_TASKS_PCGC_PCP0_FULL_TASKS_PCGC_PCP0_FULL_Msk (0x1UL << RADIO_TASKS_PCGC_PCP0_FULL_TASKS_PCGC_PCP0_FULL_Pos) /*!< Bit mask of TASKS_PCGC_PCP0_FULL field. */
#define RADIO_TASKS_PCGC_PCP0_FULL_TASKS_PCGC_PCP0_FULL_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_SUBSCRIBE_TXEN */
/* Description: Subscribe configuration for task TXEN */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_TXEN_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_TXEN_EN_Msk (0x1UL << RADIO_SUBSCRIBE_TXEN_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_TXEN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_TXEN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task TXEN will subscribe to */
#define RADIO_SUBSCRIBE_TXEN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_TXEN_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_TXEN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_RXEN */
/* Description: Subscribe configuration for task RXEN */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RXEN_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_RXEN_EN_Msk (0x1UL << RADIO_SUBSCRIBE_RXEN_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_RXEN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_RXEN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RXEN will subscribe to */
#define RADIO_SUBSCRIBE_RXEN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_RXEN_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_RXEN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_START_EN_Msk (0x1UL << RADIO_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define RADIO_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_STOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define RADIO_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DISABLE */
/* Description: Subscribe configuration for task DISABLE */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DISABLE_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DISABLE_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DISABLE_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DISABLE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DISABLE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DISABLE will subscribe to */
#define RADIO_SUBSCRIBE_DISABLE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DISABLE_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DISABLE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_RSSISTART */
/* Description: Subscribe configuration for task RSSISTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RSSISTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_RSSISTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_RSSISTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_RSSISTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_RSSISTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RSSISTART will subscribe to */
#define RADIO_SUBSCRIBE_RSSISTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_RSSISTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_RSSISTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_RSSISTOP */
/* Description: Subscribe configuration for task RSSISTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RSSISTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_RSSISTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_RSSISTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_RSSISTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_RSSISTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RSSISTOP will subscribe to */
#define RADIO_SUBSCRIBE_RSSISTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_RSSISTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_RSSISTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_BCSTART */
/* Description: Subscribe configuration for task BCSTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_BCSTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_BCSTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_BCSTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_BCSTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_BCSTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task BCSTART will subscribe to */
#define RADIO_SUBSCRIBE_BCSTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_BCSTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_BCSTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_BCSTOP */
/* Description: Subscribe configuration for task BCSTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_BCSTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_BCSTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_BCSTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_BCSTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_BCSTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task BCSTOP will subscribe to */
#define RADIO_SUBSCRIBE_BCSTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_BCSTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_BCSTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CNTP_START */
/* Description: Subscribe configuration for task CNTP_START */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CNTP_START_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CNTP_START_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CNTP_START_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CNTP_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CNTP_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CNTP_START will subscribe to */
#define RADIO_SUBSCRIBE_CNTP_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CNTP_START_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CNTP_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CNTP_STOP */
/* Description: Subscribe configuration for task CNTP_STOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CNTP_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CNTP_STOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CNTP_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CNTP_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CNTP_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CNTP_STOP will subscribe to */
#define RADIO_SUBSCRIBE_CNTP_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CNTP_STOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CNTP_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CNTP_CLEAR */
/* Description: Subscribe configuration for task CNTP_CLEAR */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CNTP_CLEAR_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CNTP_CLEAR_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CNTP_CLEAR_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CNTP_CLEAR_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CNTP_CLEAR_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CNTP_CLEAR will subscribe to */
#define RADIO_SUBSCRIBE_CNTP_CLEAR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CNTP_CLEAR_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CNTP_CLEAR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DFESTART */
/* Description: Subscribe configuration for task DFESTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DFESTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DFESTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DFESTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DFESTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DFESTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DFESTART will subscribe to */
#define RADIO_SUBSCRIBE_DFESTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DFESTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DFESTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DFESTOP */
/* Description: Subscribe configuration for task DFESTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DFESTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DFESTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DFESTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DFESTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DFESTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DFESTOP will subscribe to */
#define RADIO_SUBSCRIBE_DFESTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DFESTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DFESTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DMA_START */
/* Description: Subscribe configuration for task DMA_START */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DMA_START_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DMA_START_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DMA_START_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DMA_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DMA_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DMA_START will subscribe to */
#define RADIO_SUBSCRIBE_DMA_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DMA_START_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DMA_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DMA_STOP */
/* Description: Subscribe configuration for task DMA_STOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DMA_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DMA_STOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DMA_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DMA_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DMA_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DMA_STOP will subscribe to */
#define RADIO_SUBSCRIBE_DMA_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DMA_STOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DMA_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_ACQSTART */
/* Description: Subscribe configuration for task ACQSTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_ACQSTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_ACQSTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_ACQSTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_ACQSTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_ACQSTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task ACQSTART will subscribe to */
#define RADIO_SUBSCRIBE_ACQSTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_ACQSTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_ACQSTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_ACQSTOP */
/* Description: Subscribe configuration for task ACQSTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_ACQSTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_ACQSTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_ACQSTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_ACQSTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_ACQSTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task ACQSTOP will subscribe to */
#define RADIO_SUBSCRIBE_ACQSTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_ACQSTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_ACQSTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_PCGC_PCP2_ZERO */
/* Description: Subscribe configuration for task PCGC_PCP2_ZERO */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_PCGC_PCP2_ZERO_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP2_ZERO_EN_Msk (0x1UL << RADIO_SUBSCRIBE_PCGC_PCP2_ZERO_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP2_ZERO_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_PCGC_PCP2_ZERO_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PCGC_PCP2_ZERO will subscribe to */
#define RADIO_SUBSCRIBE_PCGC_PCP2_ZERO_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_PCGC_PCP2_ZERO_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_PCGC_PCP2_ZERO_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_PCGC_PCP2_FULL */
/* Description: Subscribe configuration for task PCGC_PCP2_FULL */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_PCGC_PCP2_FULL_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP2_FULL_EN_Msk (0x1UL << RADIO_SUBSCRIBE_PCGC_PCP2_FULL_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP2_FULL_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_PCGC_PCP2_FULL_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PCGC_PCP2_FULL will subscribe to */
#define RADIO_SUBSCRIBE_PCGC_PCP2_FULL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_PCGC_PCP2_FULL_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_PCGC_PCP2_FULL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_PCGC_PCP1_ZERO */
/* Description: Subscribe configuration for task PCGC_PCP1_ZERO */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_PCGC_PCP1_ZERO_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP1_ZERO_EN_Msk (0x1UL << RADIO_SUBSCRIBE_PCGC_PCP1_ZERO_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP1_ZERO_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_PCGC_PCP1_ZERO_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PCGC_PCP1_ZERO will subscribe to */
#define RADIO_SUBSCRIBE_PCGC_PCP1_ZERO_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_PCGC_PCP1_ZERO_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_PCGC_PCP1_ZERO_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_PCGC_PCP1_FULL */
/* Description: Subscribe configuration for task PCGC_PCP1_FULL */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_PCGC_PCP1_FULL_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP1_FULL_EN_Msk (0x1UL << RADIO_SUBSCRIBE_PCGC_PCP1_FULL_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP1_FULL_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_PCGC_PCP1_FULL_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PCGC_PCP1_FULL will subscribe to */
#define RADIO_SUBSCRIBE_PCGC_PCP1_FULL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_PCGC_PCP1_FULL_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_PCGC_PCP1_FULL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_PCGC_PCP0_ZERO */
/* Description: Subscribe configuration for task PCGC_PCP0_ZERO */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_PCGC_PCP0_ZERO_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP0_ZERO_EN_Msk (0x1UL << RADIO_SUBSCRIBE_PCGC_PCP0_ZERO_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP0_ZERO_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_PCGC_PCP0_ZERO_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PCGC_PCP0_ZERO will subscribe to */
#define RADIO_SUBSCRIBE_PCGC_PCP0_ZERO_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_PCGC_PCP0_ZERO_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_PCGC_PCP0_ZERO_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_PCGC_PCP0_FULL */
/* Description: Subscribe configuration for task PCGC_PCP0_FULL */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_PCGC_PCP0_FULL_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP0_FULL_EN_Msk (0x1UL << RADIO_SUBSCRIBE_PCGC_PCP0_FULL_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_PCGC_PCP0_FULL_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_PCGC_PCP0_FULL_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PCGC_PCP0_FULL will subscribe to */
#define RADIO_SUBSCRIBE_PCGC_PCP0_FULL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_PCGC_PCP0_FULL_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_PCGC_PCP0_FULL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_EVENTS_READY */
/* Description: RADIO has ramped up and is ready to be started */

/* Bit 0 : RADIO has ramped up and is ready to be started */
#define RADIO_EVENTS_READY_EVENTS_READY_Pos (0UL) /*!< Position of EVENTS_READY field. */
#define RADIO_EVENTS_READY_EVENTS_READY_Msk (0x1UL << RADIO_EVENTS_READY_EVENTS_READY_Pos) /*!< Bit mask of EVENTS_READY field. */
#define RADIO_EVENTS_READY_EVENTS_READY_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_READY_EVENTS_READY_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_ADDRESS */
/* Description: Address sent or received */

/* Bit 0 : Address sent or received */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos (0UL) /*!< Position of EVENTS_ADDRESS field. */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Msk (0x1UL << RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos) /*!< Bit mask of EVENTS_ADDRESS field. */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_PAYLOAD */
/* Description: Packet payload sent or received */

/* Bit 0 : Packet payload sent or received */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos (0UL) /*!< Position of EVENTS_PAYLOAD field. */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Msk (0x1UL << RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos) /*!< Bit mask of EVENTS_PAYLOAD field. */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_END */
/* Description: Packet sent or received */

/* Bit 0 : Packet sent or received */
#define RADIO_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define RADIO_EVENTS_END_EVENTS_END_Msk (0x1UL << RADIO_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define RADIO_EVENTS_END_EVENTS_END_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_END_EVENTS_END_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DISABLED */
/* Description: RADIO has been disabled */

/* Bit 0 : RADIO has been disabled */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos (0UL) /*!< Position of EVENTS_DISABLED field. */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Msk (0x1UL << RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos) /*!< Bit mask of EVENTS_DISABLED field. */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEVMATCH */
/* Description: A device address match occurred on the last received packet */

/* Bit 0 : A device address match occurred on the last received packet */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos (0UL) /*!< Position of EVENTS_DEVMATCH field. */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Msk (0x1UL << RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos) /*!< Bit mask of EVENTS_DEVMATCH field. */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEVMISS */
/* Description: No device address match occurred on the last received packet */

/* Bit 0 : No device address match occurred on the last received packet */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos (0UL) /*!< Position of EVENTS_DEVMISS field. */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Msk (0x1UL << RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos) /*!< Bit mask of EVENTS_DEVMISS field. */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RSSIEND */
/* Description: Sampling of receive signal strength complete */

/* Bit 0 : Sampling of receive signal strength complete */
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Pos (0UL) /*!< Position of EVENTS_RSSIEND field. */
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Msk (0x1UL << RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Pos) /*!< Bit mask of EVENTS_RSSIEND field. */
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_BCMATCH */
/* Description: Bit counter reached bit count value */

/* Bit 0 : Bit counter reached bit count value */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos (0UL) /*!< Position of EVENTS_BCMATCH field. */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Msk (0x1UL << RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos) /*!< Bit mask of EVENTS_BCMATCH field. */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CTEEND */
/* Description: End of CTE */

/* Bit 0 : End of CTE */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Pos (0UL) /*!< Position of EVENTS_CTEEND field. */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Msk (0x1UL << RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Pos) /*!< Bit mask of EVENTS_CTEEND field. */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CRCOK */
/* Description: Packet received with CRC ok */

/* Bit 0 : Packet received with CRC ok */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos (0UL) /*!< Position of EVENTS_CRCOK field. */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Msk (0x1UL << RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos) /*!< Bit mask of EVENTS_CRCOK field. */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CRCERROR */
/* Description: Packet received with CRC error */

/* Bit 0 : Packet received with CRC error */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos (0UL) /*!< Position of EVENTS_CRCERROR field. */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Msk (0x1UL << RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos) /*!< Bit mask of EVENTS_CRCERROR field. */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_TXREADY */
/* Description: RADIO has ramped up and is ready to be started TX path */

/* Bit 0 : RADIO has ramped up and is ready to be started TX path */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos (0UL) /*!< Position of EVENTS_TXREADY field. */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Msk (0x1UL << RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos) /*!< Bit mask of EVENTS_TXREADY field. */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RXREADY */
/* Description: RADIO has ramped up and is ready to be started RX path */

/* Bit 0 : RADIO has ramped up and is ready to be started RX path */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos (0UL) /*!< Position of EVENTS_RXREADY field. */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Msk (0x1UL << RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos) /*!< Bit mask of EVENTS_RXREADY field. */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_MHRMATCH */
/* Description: MAC header match found */

/* Bit 0 : MAC header match found */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos (0UL) /*!< Position of EVENTS_MHRMATCH field. */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Msk (0x1UL << RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos) /*!< Bit mask of EVENTS_MHRMATCH field. */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_ACQEND */
/* Description: ACQDMA EasyDMA buffer full */

/* Bit 0 : ACQDMA EasyDMA buffer full */
#define RADIO_EVENTS_ACQEND_EVENTS_ACQEND_Pos (0UL) /*!< Position of EVENTS_ACQEND field. */
#define RADIO_EVENTS_ACQEND_EVENTS_ACQEND_Msk (0x1UL << RADIO_EVENTS_ACQEND_EVENTS_ACQEND_Pos) /*!< Bit mask of EVENTS_ACQEND field. */
#define RADIO_EVENTS_ACQEND_EVENTS_ACQEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_ACQEND_EVENTS_ACQEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_ACQREADY */
/* Description: ACQDMA EasyDMA sample ready */

/* Bit 0 : ACQDMA EasyDMA sample ready */
#define RADIO_EVENTS_ACQREADY_EVENTS_ACQREADY_Pos (0UL) /*!< Position of EVENTS_ACQREADY field. */
#define RADIO_EVENTS_ACQREADY_EVENTS_ACQREADY_Msk (0x1UL << RADIO_EVENTS_ACQREADY_EVENTS_ACQREADY_Pos) /*!< Bit mask of EVENTS_ACQREADY field. */
#define RADIO_EVENTS_ACQREADY_EVENTS_ACQREADY_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_ACQREADY_EVENTS_ACQREADY_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_PHYEND */
/* Description: Generated when last bit is sent on air, or received from air */

/* Bit 0 : Generated when last bit is sent on air, or received from air */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos (0UL) /*!< Position of EVENTS_PHYEND field. */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Msk (0x1UL << RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos) /*!< Bit mask of EVENTS_PHYEND field. */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CTEPRESENT */
/* Description: CTE is present (early warning right after receiving CTEInfo byte) */

/* Bit 0 : CTE is present (early warning right after receiving CTEInfo byte) */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Pos (0UL) /*!< Position of EVENTS_CTEPRESENT field. */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Msk (0x1UL << RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Pos) /*!< Bit mask of EVENTS_CTEPRESENT field. */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CTEWARNING */
/* Description: CTE is present, but CTEType or CTETime is out of valid range (early warning right after receiving CTEinfo byte) */

/* Bit 0 : CTE is present, but CTEType or CTETime is out of valid range (early warning right after receiving CTEinfo byte) */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Pos (0UL) /*!< Position of EVENTS_CTEWARNING field. */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Msk (0x1UL << RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Pos) /*!< Bit mask of EVENTS_CTEWARNING field. */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DFEEND */
/* Description: When both antenna switching AND direction finding sampling have completed */

/* Bit 0 : When both antenna switching AND direction finding sampling have completed */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Pos (0UL) /*!< Position of EVENTS_DFEEND field. */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Msk (0x1UL << RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Pos) /*!< Bit mask of EVENTS_DFEEND field. */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_PUBLISH_READY */
/* Description: Publish configuration for event READY */

/* Bit 31 :   */
#define RADIO_PUBLISH_READY_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_READY_EN_Msk (0x1UL << RADIO_PUBLISH_READY_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_READY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_READY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event READY will publish to */
#define RADIO_PUBLISH_READY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_READY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_READY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_ADDRESS */
/* Description: Publish configuration for event ADDRESS */

/* Bit 31 :   */
#define RADIO_PUBLISH_ADDRESS_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_ADDRESS_EN_Msk (0x1UL << RADIO_PUBLISH_ADDRESS_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_ADDRESS_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_ADDRESS_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ADDRESS will publish to */
#define RADIO_PUBLISH_ADDRESS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_ADDRESS_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_ADDRESS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_PAYLOAD */
/* Description: Publish configuration for event PAYLOAD */

/* Bit 31 :   */
#define RADIO_PUBLISH_PAYLOAD_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_PAYLOAD_EN_Msk (0x1UL << RADIO_PUBLISH_PAYLOAD_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_PAYLOAD_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_PAYLOAD_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event PAYLOAD will publish to */
#define RADIO_PUBLISH_PAYLOAD_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_PAYLOAD_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_PAYLOAD_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define RADIO_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_END_EN_Msk (0x1UL << RADIO_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_END_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_END_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to */
#define RADIO_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_END_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DISABLED */
/* Description: Publish configuration for event DISABLED */

/* Bit 31 :   */
#define RADIO_PUBLISH_DISABLED_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DISABLED_EN_Msk (0x1UL << RADIO_PUBLISH_DISABLED_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DISABLED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DISABLED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DISABLED will publish to */
#define RADIO_PUBLISH_DISABLED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DISABLED_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DISABLED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DEVMATCH */
/* Description: Publish configuration for event DEVMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEVMATCH_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DEVMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_DEVMATCH_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DEVMATCH_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DEVMATCH_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DEVMATCH will publish to */
#define RADIO_PUBLISH_DEVMATCH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DEVMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DEVMATCH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DEVMISS */
/* Description: Publish configuration for event DEVMISS */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEVMISS_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DEVMISS_EN_Msk (0x1UL << RADIO_PUBLISH_DEVMISS_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DEVMISS_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DEVMISS_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DEVMISS will publish to */
#define RADIO_PUBLISH_DEVMISS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DEVMISS_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DEVMISS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_RSSIEND */
/* Description: Publish configuration for event RSSIEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_RSSIEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_RSSIEND_EN_Msk (0x1UL << RADIO_PUBLISH_RSSIEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_RSSIEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_RSSIEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RSSIEND will publish to */
#define RADIO_PUBLISH_RSSIEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_RSSIEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_RSSIEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_BCMATCH */
/* Description: Publish configuration for event BCMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_BCMATCH_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_BCMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_BCMATCH_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_BCMATCH_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_BCMATCH_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event BCMATCH will publish to */
#define RADIO_PUBLISH_BCMATCH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_BCMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_BCMATCH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CTEEND */
/* Description: Publish configuration for event CTEEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_CTEEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CTEEND_EN_Msk (0x1UL << RADIO_PUBLISH_CTEEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CTEEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CTEEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CTEEND will publish to */
#define RADIO_PUBLISH_CTEEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CTEEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CTEEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CRCOK */
/* Description: Publish configuration for event CRCOK */

/* Bit 31 :   */
#define RADIO_PUBLISH_CRCOK_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CRCOK_EN_Msk (0x1UL << RADIO_PUBLISH_CRCOK_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CRCOK_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CRCOK_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CRCOK will publish to */
#define RADIO_PUBLISH_CRCOK_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CRCOK_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CRCOK_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CRCERROR */
/* Description: Publish configuration for event CRCERROR */

/* Bit 31 :   */
#define RADIO_PUBLISH_CRCERROR_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CRCERROR_EN_Msk (0x1UL << RADIO_PUBLISH_CRCERROR_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CRCERROR_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CRCERROR_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CRCERROR will publish to */
#define RADIO_PUBLISH_CRCERROR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CRCERROR_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CRCERROR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_TXREADY */
/* Description: Publish configuration for event TXREADY */

/* Bit 31 :   */
#define RADIO_PUBLISH_TXREADY_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_TXREADY_EN_Msk (0x1UL << RADIO_PUBLISH_TXREADY_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_TXREADY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_TXREADY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event TXREADY will publish to */
#define RADIO_PUBLISH_TXREADY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_TXREADY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_TXREADY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_RXREADY */
/* Description: Publish configuration for event RXREADY */

/* Bit 31 :   */
#define RADIO_PUBLISH_RXREADY_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_RXREADY_EN_Msk (0x1UL << RADIO_PUBLISH_RXREADY_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_RXREADY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_RXREADY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RXREADY will publish to */
#define RADIO_PUBLISH_RXREADY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_RXREADY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_RXREADY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_MHRMATCH */
/* Description: Publish configuration for event MHRMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_MHRMATCH_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_MHRMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_MHRMATCH_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_MHRMATCH_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_MHRMATCH_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event MHRMATCH will publish to */
#define RADIO_PUBLISH_MHRMATCH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_MHRMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_MHRMATCH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_ACQEND */
/* Description: Publish configuration for event ACQEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_ACQEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_ACQEND_EN_Msk (0x1UL << RADIO_PUBLISH_ACQEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_ACQEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_ACQEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ACQEND will publish to */
#define RADIO_PUBLISH_ACQEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_ACQEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_ACQEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_ACQREADY */
/* Description: Publish configuration for event ACQREADY */

/* Bit 31 :   */
#define RADIO_PUBLISH_ACQREADY_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_ACQREADY_EN_Msk (0x1UL << RADIO_PUBLISH_ACQREADY_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_ACQREADY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_ACQREADY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ACQREADY will publish to */
#define RADIO_PUBLISH_ACQREADY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_ACQREADY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_ACQREADY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_PHYEND */
/* Description: Publish configuration for event PHYEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_PHYEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_PHYEND_EN_Msk (0x1UL << RADIO_PUBLISH_PHYEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_PHYEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_PHYEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event PHYEND will publish to */
#define RADIO_PUBLISH_PHYEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_PHYEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_PHYEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CTEPRESENT */
/* Description: Publish configuration for event CTEPRESENT */

/* Bit 31 :   */
#define RADIO_PUBLISH_CTEPRESENT_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CTEPRESENT_EN_Msk (0x1UL << RADIO_PUBLISH_CTEPRESENT_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CTEPRESENT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CTEPRESENT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CTEPRESENT will publish to */
#define RADIO_PUBLISH_CTEPRESENT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CTEPRESENT_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CTEPRESENT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CTEWARNING */
/* Description: Publish configuration for event CTEWARNING */

/* Bit 31 :   */
#define RADIO_PUBLISH_CTEWARNING_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CTEWARNING_EN_Msk (0x1UL << RADIO_PUBLISH_CTEWARNING_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CTEWARNING_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CTEWARNING_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CTEWARNING will publish to */
#define RADIO_PUBLISH_CTEWARNING_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CTEWARNING_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CTEWARNING_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DFEEND */
/* Description: Publish configuration for event DFEEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_DFEEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DFEEND_EN_Msk (0x1UL << RADIO_PUBLISH_DFEEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DFEEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DFEEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DFEEND will publish to */
#define RADIO_PUBLISH_DFEEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DFEEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DFEEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 21 : Shortcut between event PHYEND and task START */
#define RADIO_SHORTS_PHYEND_START_Pos (21UL) /*!< Position of PHYEND_START field. */
#define RADIO_SHORTS_PHYEND_START_Msk (0x1UL << RADIO_SHORTS_PHYEND_START_Pos) /*!< Bit mask of PHYEND_START field. */
#define RADIO_SHORTS_PHYEND_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_PHYEND_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 20 : Shortcut between event PHYEND and task DISABLE */
#define RADIO_SHORTS_PHYEND_DISABLE_Pos (20UL) /*!< Position of PHYEND_DISABLE field. */
#define RADIO_SHORTS_PHYEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_PHYEND_DISABLE_Pos) /*!< Bit mask of PHYEND_DISABLE field. */
#define RADIO_SHORTS_PHYEND_DISABLE_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_PHYEND_DISABLE_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 19 : Shortcut between event RXREADY and task START */
#define RADIO_SHORTS_RXREADY_START_Pos (19UL) /*!< Position of RXREADY_START field. */
#define RADIO_SHORTS_RXREADY_START_Msk (0x1UL << RADIO_SHORTS_RXREADY_START_Pos) /*!< Bit mask of RXREADY_START field. */
#define RADIO_SHORTS_RXREADY_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_RXREADY_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 18 : Shortcut between event TXREADY and task START */
#define RADIO_SHORTS_TXREADY_START_Pos (18UL) /*!< Position of TXREADY_START field. */
#define RADIO_SHORTS_TXREADY_START_Msk (0x1UL << RADIO_SHORTS_TXREADY_START_Pos) /*!< Bit mask of TXREADY_START field. */
#define RADIO_SHORTS_TXREADY_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_TXREADY_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 8 : Shortcut between event DISABLED and task RSSISTOP */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Pos (8UL) /*!< Position of DISABLED_RSSISTOP field. */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Msk (0x1UL << RADIO_SHORTS_DISABLED_RSSISTOP_Pos) /*!< Bit mask of DISABLED_RSSISTOP field. */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 6 : Shortcut between event ADDRESS and task BCSTART */
#define RADIO_SHORTS_ADDRESS_BCSTART_Pos (6UL) /*!< Position of ADDRESS_BCSTART field. */
#define RADIO_SHORTS_ADDRESS_BCSTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_BCSTART_Pos) /*!< Bit mask of ADDRESS_BCSTART field. */
#define RADIO_SHORTS_ADDRESS_BCSTART_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_ADDRESS_BCSTART_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event END and task START */
#define RADIO_SHORTS_END_START_Pos (5UL) /*!< Position of END_START field. */
#define RADIO_SHORTS_END_START_Msk (0x1UL << RADIO_SHORTS_END_START_Pos) /*!< Bit mask of END_START field. */
#define RADIO_SHORTS_END_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_END_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event ADDRESS and task RSSISTART */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Pos (4UL) /*!< Position of ADDRESS_RSSISTART field. */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_RSSISTART_Pos) /*!< Bit mask of ADDRESS_RSSISTART field. */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event DISABLED and task RXEN */
#define RADIO_SHORTS_DISABLED_RXEN_Pos (3UL) /*!< Position of DISABLED_RXEN field. */
#define RADIO_SHORTS_DISABLED_RXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_RXEN_Pos) /*!< Bit mask of DISABLED_RXEN field. */
#define RADIO_SHORTS_DISABLED_RXEN_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_RXEN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event DISABLED and task TXEN */
#define RADIO_SHORTS_DISABLED_TXEN_Pos (2UL) /*!< Position of DISABLED_TXEN field. */
#define RADIO_SHORTS_DISABLED_TXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_TXEN_Pos) /*!< Bit mask of DISABLED_TXEN field. */
#define RADIO_SHORTS_DISABLED_TXEN_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_TXEN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event END and task DISABLE */
#define RADIO_SHORTS_END_DISABLE_Pos (1UL) /*!< Position of END_DISABLE field. */
#define RADIO_SHORTS_END_DISABLE_Msk (0x1UL << RADIO_SHORTS_END_DISABLE_Pos) /*!< Bit mask of END_DISABLE field. */
#define RADIO_SHORTS_END_DISABLE_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_END_DISABLE_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event READY and task START */
#define RADIO_SHORTS_READY_START_Pos (0UL) /*!< Position of READY_START field. */
#define RADIO_SHORTS_READY_START_Msk (0x1UL << RADIO_SHORTS_READY_START_Pos) /*!< Bit mask of READY_START field. */
#define RADIO_SHORTS_READY_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_READY_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: RADIO_INTENSET */
/* Description: Enable interrupt */

/* Bit 30 : Write '1' to enable interrupt for event DFEEND */
#define RADIO_INTENSET_DFEEND_Pos (30UL) /*!< Position of DFEEND field. */
#define RADIO_INTENSET_DFEEND_Msk (0x1UL << RADIO_INTENSET_DFEEND_Pos) /*!< Bit mask of DFEEND field. */
#define RADIO_INTENSET_DFEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_DFEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_DFEEND_Set (0x1UL) /*!< Enable */

/* Bit 29 : Write '1' to enable interrupt for event CTEWARNING */
#define RADIO_INTENSET_CTEWARNING_Pos (29UL) /*!< Position of CTEWARNING field. */
#define RADIO_INTENSET_CTEWARNING_Msk (0x1UL << RADIO_INTENSET_CTEWARNING_Pos) /*!< Bit mask of CTEWARNING field. */
#define RADIO_INTENSET_CTEWARNING_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_CTEWARNING_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_CTEWARNING_Set (0x1UL) /*!< Enable */

/* Bit 28 : Write '1' to enable interrupt for event CTEPRESENT */
#define RADIO_INTENSET_CTEPRESENT_Pos (28UL) /*!< Position of CTEPRESENT field. */
#define RADIO_INTENSET_CTEPRESENT_Msk (0x1UL << RADIO_INTENSET_CTEPRESENT_Pos) /*!< Bit mask of CTEPRESENT field. */
#define RADIO_INTENSET_CTEPRESENT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_CTEPRESENT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_CTEPRESENT_Set (0x1UL) /*!< Enable */

/* Bit 27 : Write '1' to enable interrupt for event PHYEND */
#define RADIO_INTENSET_PHYEND_Pos (27UL) /*!< Position of PHYEND field. */
#define RADIO_INTENSET_PHYEND_Msk (0x1UL << RADIO_INTENSET_PHYEND_Pos) /*!< Bit mask of PHYEND field. */
#define RADIO_INTENSET_PHYEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_PHYEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_PHYEND_Set (0x1UL) /*!< Enable */

/* Bit 25 : Write '1' to enable interrupt for event ACQREADY */
#define RADIO_INTENSET_ACQREADY_Pos (25UL) /*!< Position of ACQREADY field. */
#define RADIO_INTENSET_ACQREADY_Msk (0x1UL << RADIO_INTENSET_ACQREADY_Pos) /*!< Bit mask of ACQREADY field. */
#define RADIO_INTENSET_ACQREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_ACQREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_ACQREADY_Set (0x1UL) /*!< Enable */

/* Bit 24 : Write '1' to enable interrupt for event ACQEND */
#define RADIO_INTENSET_ACQEND_Pos (24UL) /*!< Position of ACQEND field. */
#define RADIO_INTENSET_ACQEND_Msk (0x1UL << RADIO_INTENSET_ACQEND_Pos) /*!< Bit mask of ACQEND field. */
#define RADIO_INTENSET_ACQEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_ACQEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_ACQEND_Set (0x1UL) /*!< Enable */

/* Bit 23 : Write '1' to enable interrupt for event MHRMATCH */
#define RADIO_INTENSET_MHRMATCH_Pos (23UL) /*!< Position of MHRMATCH field. */
#define RADIO_INTENSET_MHRMATCH_Msk (0x1UL << RADIO_INTENSET_MHRMATCH_Pos) /*!< Bit mask of MHRMATCH field. */
#define RADIO_INTENSET_MHRMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_MHRMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_MHRMATCH_Set (0x1UL) /*!< Enable */

/* Bit 22 : Write '1' to enable interrupt for event RXREADY */
#define RADIO_INTENSET_RXREADY_Pos (22UL) /*!< Position of RXREADY field. */
#define RADIO_INTENSET_RXREADY_Msk (0x1UL << RADIO_INTENSET_RXREADY_Pos) /*!< Bit mask of RXREADY field. */
#define RADIO_INTENSET_RXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_RXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_RXREADY_Set (0x1UL) /*!< Enable */

/* Bit 21 : Write '1' to enable interrupt for event TXREADY */
#define RADIO_INTENSET_TXREADY_Pos (21UL) /*!< Position of TXREADY field. */
#define RADIO_INTENSET_TXREADY_Msk (0x1UL << RADIO_INTENSET_TXREADY_Pos) /*!< Bit mask of TXREADY field. */
#define RADIO_INTENSET_TXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_TXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_TXREADY_Set (0x1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for event CRCERROR */
#define RADIO_INTENSET_CRCERROR_Pos (13UL) /*!< Position of CRCERROR field. */
#define RADIO_INTENSET_CRCERROR_Msk (0x1UL << RADIO_INTENSET_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTENSET_CRCERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_CRCERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_CRCERROR_Set (0x1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for event CRCOK */
#define RADIO_INTENSET_CRCOK_Pos (12UL) /*!< Position of CRCOK field. */
#define RADIO_INTENSET_CRCOK_Msk (0x1UL << RADIO_INTENSET_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTENSET_CRCOK_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_CRCOK_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_CRCOK_Set (0x1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for event CTEEND */
#define RADIO_INTENSET_CTEEND_Pos (11UL) /*!< Position of CTEEND field. */
#define RADIO_INTENSET_CTEEND_Msk (0x1UL << RADIO_INTENSET_CTEEND_Pos) /*!< Bit mask of CTEEND field. */
#define RADIO_INTENSET_CTEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_CTEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_CTEEND_Set (0x1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event BCMATCH */
#define RADIO_INTENSET_BCMATCH_Pos (10UL) /*!< Position of BCMATCH field. */
#define RADIO_INTENSET_BCMATCH_Msk (0x1UL << RADIO_INTENSET_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTENSET_BCMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_BCMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_BCMATCH_Set (0x1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event RSSIEND */
#define RADIO_INTENSET_RSSIEND_Pos (7UL) /*!< Position of RSSIEND field. */
#define RADIO_INTENSET_RSSIEND_Msk (0x1UL << RADIO_INTENSET_RSSIEND_Pos) /*!< Bit mask of RSSIEND field. */
#define RADIO_INTENSET_RSSIEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_RSSIEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_RSSIEND_Set (0x1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event DEVMISS */
#define RADIO_INTENSET_DEVMISS_Pos (6UL) /*!< Position of DEVMISS field. */
#define RADIO_INTENSET_DEVMISS_Msk (0x1UL << RADIO_INTENSET_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTENSET_DEVMISS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_DEVMISS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_DEVMISS_Set (0x1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event DEVMATCH */
#define RADIO_INTENSET_DEVMATCH_Pos (5UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTENSET_DEVMATCH_Msk (0x1UL << RADIO_INTENSET_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTENSET_DEVMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_DEVMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_DEVMATCH_Set (0x1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event DISABLED */
#define RADIO_INTENSET_DISABLED_Pos (4UL) /*!< Position of DISABLED field. */
#define RADIO_INTENSET_DISABLED_Msk (0x1UL << RADIO_INTENSET_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTENSET_DISABLED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_DISABLED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_DISABLED_Set (0x1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event END */
#define RADIO_INTENSET_END_Pos (3UL) /*!< Position of END field. */
#define RADIO_INTENSET_END_Msk (0x1UL << RADIO_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTENSET_END_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_END_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_END_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event PAYLOAD */
#define RADIO_INTENSET_PAYLOAD_Pos (2UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTENSET_PAYLOAD_Msk (0x1UL << RADIO_INTENSET_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTENSET_PAYLOAD_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_PAYLOAD_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_PAYLOAD_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event ADDRESS */
#define RADIO_INTENSET_ADDRESS_Pos (1UL) /*!< Position of ADDRESS field. */
#define RADIO_INTENSET_ADDRESS_Msk (0x1UL << RADIO_INTENSET_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTENSET_ADDRESS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_ADDRESS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_ADDRESS_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define RADIO_INTENSET_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTENSET_READY_Msk (0x1UL << RADIO_INTENSET_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTENSET_READY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_READY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_READY_Set (0x1UL) /*!< Enable */

/* Register: RADIO_INTENCLR */
/* Description: Disable interrupt */

/* Bit 30 : Write '1' to disable interrupt for event DFEEND */
#define RADIO_INTENCLR_DFEEND_Pos (30UL) /*!< Position of DFEEND field. */
#define RADIO_INTENCLR_DFEEND_Msk (0x1UL << RADIO_INTENCLR_DFEEND_Pos) /*!< Bit mask of DFEEND field. */
#define RADIO_INTENCLR_DFEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_DFEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_DFEEND_Clear (0x1UL) /*!< Disable */

/* Bit 29 : Write '1' to disable interrupt for event CTEWARNING */
#define RADIO_INTENCLR_CTEWARNING_Pos (29UL) /*!< Position of CTEWARNING field. */
#define RADIO_INTENCLR_CTEWARNING_Msk (0x1UL << RADIO_INTENCLR_CTEWARNING_Pos) /*!< Bit mask of CTEWARNING field. */
#define RADIO_INTENCLR_CTEWARNING_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_CTEWARNING_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_CTEWARNING_Clear (0x1UL) /*!< Disable */

/* Bit 28 : Write '1' to disable interrupt for event CTEPRESENT */
#define RADIO_INTENCLR_CTEPRESENT_Pos (28UL) /*!< Position of CTEPRESENT field. */
#define RADIO_INTENCLR_CTEPRESENT_Msk (0x1UL << RADIO_INTENCLR_CTEPRESENT_Pos) /*!< Bit mask of CTEPRESENT field. */
#define RADIO_INTENCLR_CTEPRESENT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_CTEPRESENT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_CTEPRESENT_Clear (0x1UL) /*!< Disable */

/* Bit 27 : Write '1' to disable interrupt for event PHYEND */
#define RADIO_INTENCLR_PHYEND_Pos (27UL) /*!< Position of PHYEND field. */
#define RADIO_INTENCLR_PHYEND_Msk (0x1UL << RADIO_INTENCLR_PHYEND_Pos) /*!< Bit mask of PHYEND field. */
#define RADIO_INTENCLR_PHYEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_PHYEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_PHYEND_Clear (0x1UL) /*!< Disable */

/* Bit 25 : Write '1' to disable interrupt for event ACQREADY */
#define RADIO_INTENCLR_ACQREADY_Pos (25UL) /*!< Position of ACQREADY field. */
#define RADIO_INTENCLR_ACQREADY_Msk (0x1UL << RADIO_INTENCLR_ACQREADY_Pos) /*!< Bit mask of ACQREADY field. */
#define RADIO_INTENCLR_ACQREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_ACQREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_ACQREADY_Clear (0x1UL) /*!< Disable */

/* Bit 24 : Write '1' to disable interrupt for event ACQEND */
#define RADIO_INTENCLR_ACQEND_Pos (24UL) /*!< Position of ACQEND field. */
#define RADIO_INTENCLR_ACQEND_Msk (0x1UL << RADIO_INTENCLR_ACQEND_Pos) /*!< Bit mask of ACQEND field. */
#define RADIO_INTENCLR_ACQEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_ACQEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_ACQEND_Clear (0x1UL) /*!< Disable */

/* Bit 23 : Write '1' to disable interrupt for event MHRMATCH */
#define RADIO_INTENCLR_MHRMATCH_Pos (23UL) /*!< Position of MHRMATCH field. */
#define RADIO_INTENCLR_MHRMATCH_Msk (0x1UL << RADIO_INTENCLR_MHRMATCH_Pos) /*!< Bit mask of MHRMATCH field. */
#define RADIO_INTENCLR_MHRMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_MHRMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_MHRMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 22 : Write '1' to disable interrupt for event RXREADY */
#define RADIO_INTENCLR_RXREADY_Pos (22UL) /*!< Position of RXREADY field. */
#define RADIO_INTENCLR_RXREADY_Msk (0x1UL << RADIO_INTENCLR_RXREADY_Pos) /*!< Bit mask of RXREADY field. */
#define RADIO_INTENCLR_RXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_RXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_RXREADY_Clear (0x1UL) /*!< Disable */

/* Bit 21 : Write '1' to disable interrupt for event TXREADY */
#define RADIO_INTENCLR_TXREADY_Pos (21UL) /*!< Position of TXREADY field. */
#define RADIO_INTENCLR_TXREADY_Msk (0x1UL << RADIO_INTENCLR_TXREADY_Pos) /*!< Bit mask of TXREADY field. */
#define RADIO_INTENCLR_TXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_TXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_TXREADY_Clear (0x1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for event CRCERROR */
#define RADIO_INTENCLR_CRCERROR_Pos (13UL) /*!< Position of CRCERROR field. */
#define RADIO_INTENCLR_CRCERROR_Msk (0x1UL << RADIO_INTENCLR_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTENCLR_CRCERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_CRCERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_CRCERROR_Clear (0x1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for event CRCOK */
#define RADIO_INTENCLR_CRCOK_Pos (12UL) /*!< Position of CRCOK field. */
#define RADIO_INTENCLR_CRCOK_Msk (0x1UL << RADIO_INTENCLR_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTENCLR_CRCOK_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_CRCOK_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_CRCOK_Clear (0x1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for event CTEEND */
#define RADIO_INTENCLR_CTEEND_Pos (11UL) /*!< Position of CTEEND field. */
#define RADIO_INTENCLR_CTEEND_Msk (0x1UL << RADIO_INTENCLR_CTEEND_Pos) /*!< Bit mask of CTEEND field. */
#define RADIO_INTENCLR_CTEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_CTEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_CTEEND_Clear (0x1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event BCMATCH */
#define RADIO_INTENCLR_BCMATCH_Pos (10UL) /*!< Position of BCMATCH field. */
#define RADIO_INTENCLR_BCMATCH_Msk (0x1UL << RADIO_INTENCLR_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTENCLR_BCMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_BCMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_BCMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event RSSIEND */
#define RADIO_INTENCLR_RSSIEND_Pos (7UL) /*!< Position of RSSIEND field. */
#define RADIO_INTENCLR_RSSIEND_Msk (0x1UL << RADIO_INTENCLR_RSSIEND_Pos) /*!< Bit mask of RSSIEND field. */
#define RADIO_INTENCLR_RSSIEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_RSSIEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_RSSIEND_Clear (0x1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event DEVMISS */
#define RADIO_INTENCLR_DEVMISS_Pos (6UL) /*!< Position of DEVMISS field. */
#define RADIO_INTENCLR_DEVMISS_Msk (0x1UL << RADIO_INTENCLR_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTENCLR_DEVMISS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_DEVMISS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_DEVMISS_Clear (0x1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event DEVMATCH */
#define RADIO_INTENCLR_DEVMATCH_Pos (5UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTENCLR_DEVMATCH_Msk (0x1UL << RADIO_INTENCLR_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTENCLR_DEVMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_DEVMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_DEVMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event DISABLED */
#define RADIO_INTENCLR_DISABLED_Pos (4UL) /*!< Position of DISABLED field. */
#define RADIO_INTENCLR_DISABLED_Msk (0x1UL << RADIO_INTENCLR_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTENCLR_DISABLED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_DISABLED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_DISABLED_Clear (0x1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event END */
#define RADIO_INTENCLR_END_Pos (3UL) /*!< Position of END field. */
#define RADIO_INTENCLR_END_Msk (0x1UL << RADIO_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTENCLR_END_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_END_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_END_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event PAYLOAD */
#define RADIO_INTENCLR_PAYLOAD_Pos (2UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTENCLR_PAYLOAD_Msk (0x1UL << RADIO_INTENCLR_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTENCLR_PAYLOAD_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_PAYLOAD_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_PAYLOAD_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event ADDRESS */
#define RADIO_INTENCLR_ADDRESS_Pos (1UL) /*!< Position of ADDRESS field. */
#define RADIO_INTENCLR_ADDRESS_Msk (0x1UL << RADIO_INTENCLR_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTENCLR_ADDRESS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_ADDRESS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_ADDRESS_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define RADIO_INTENCLR_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTENCLR_READY_Msk (0x1UL << RADIO_INTENCLR_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTENCLR_READY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_READY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_READY_Clear (0x1UL) /*!< Disable */

/* Register: RADIO_CRCSTATUS */
/* Description: CRC status */

/* Bit 0 : CRC status of packet received */
#define RADIO_CRCSTATUS_CRCSTATUS_Pos (0UL) /*!< Position of CRCSTATUS field. */
#define RADIO_CRCSTATUS_CRCSTATUS_Msk (0x1UL << RADIO_CRCSTATUS_CRCSTATUS_Pos) /*!< Bit mask of CRCSTATUS field. */
#define RADIO_CRCSTATUS_CRCSTATUS_CRCError (0x0UL) /*!< Packet received with CRC error */
#define RADIO_CRCSTATUS_CRCSTATUS_CRCOk (0x1UL) /*!< Packet received with CRC ok */

/* Register: RADIO_RXMATCH */
/* Description: Received address */

/* Bits 2..0 : Received address */
#define RADIO_RXMATCH_RXMATCH_Pos (0UL) /*!< Position of RXMATCH field. */
#define RADIO_RXMATCH_RXMATCH_Msk (0x7UL << RADIO_RXMATCH_RXMATCH_Pos) /*!< Bit mask of RXMATCH field. */

/* Register: RADIO_RXCRC */
/* Description: CRC field of previously received packet */

/* Bits 23..0 : CRC field of previously received packet */
#define RADIO_RXCRC_RXCRC_Pos (0UL) /*!< Position of RXCRC field. */
#define RADIO_RXCRC_RXCRC_Msk (0xFFFFFFUL << RADIO_RXCRC_RXCRC_Pos) /*!< Bit mask of RXCRC field. */

/* Register: RADIO_DAI */
/* Description: Device address match index */

/* Bits 2..0 : Device address match index */
#define RADIO_DAI_DAI_Pos (0UL) /*!< Position of DAI field. */
#define RADIO_DAI_DAI_Msk (0x7UL << RADIO_DAI_DAI_Pos) /*!< Bit mask of DAI field. */

/* Register: RADIO_PDUSTAT */
/* Description: Payload status */

/* Bit 0 : Status on payload length vs. PCNF1.MAXLEN */
#define RADIO_PDUSTAT_PDUSTAT_Pos (0UL) /*!< Position of PDUSTAT field. */
#define RADIO_PDUSTAT_PDUSTAT_Msk (0x1UL << RADIO_PDUSTAT_PDUSTAT_Pos) /*!< Bit mask of PDUSTAT field. */
#define RADIO_PDUSTAT_PDUSTAT_LessThan (0x0UL) /*!< Payload less than PCNF1.MAXLEN */
#define RADIO_PDUSTAT_PDUSTAT_GreaterThan (0x1UL) /*!< Payload greater than PCNF1.MAXLEN */

/* Register: RADIO_DMA_STAT */
/* Description: DMA byte count */

/* Bits 7..0 : Number of bytes in previous DMA transfer. */
#define RADIO_DMA_STAT_DMA_STAT_Pos (0UL) /*!< Position of DMA_STAT field. */
#define RADIO_DMA_STAT_DMA_STAT_Msk (0xFFUL << RADIO_DMA_STAT_DMA_STAT_Pos) /*!< Bit mask of DMA_STAT field. */

/* Register: RADIO_PLL_CAL_VCO */
/* Description: PLL Calibration */

/* Bits 4..0 : Holds capacitance-setting for PLL after automatic setting has been performed. This value is updated at the end of the calibration interval. */
#define RADIO_PLL_CAL_VCO_PLL_CAL_VCO_Pos (0UL) /*!< Position of PLL_CAL_VCO field. */
#define RADIO_PLL_CAL_VCO_PLL_CAL_VCO_Msk (0x1FUL << RADIO_PLL_CAL_VCO_PLL_CAL_VCO_Pos) /*!< Bit mask of PLL_CAL_VCO field. */

/* Register: RADIO_LNB_OUT_SPI */
/* Description: Readout of gain settings set by the AGC. They are sampled at EVENTS_ADDRESS and when triggering TASKS_RSSISTART */

/* Bits 11..8 :   */
#define RADIO_LNB_OUT_SPI_AAF_GAIN_Pos (8UL) /*!< Position of AAF_GAIN field. */
#define RADIO_LNB_OUT_SPI_AAF_GAIN_Msk (0xFUL << RADIO_LNB_OUT_SPI_AAF_GAIN_Pos) /*!< Bit mask of AAF_GAIN field. */

/* Bits 5..4 :   */
#define RADIO_LNB_OUT_SPI_MIX_GAIN_Pos (4UL) /*!< Position of MIX_GAIN field. */
#define RADIO_LNB_OUT_SPI_MIX_GAIN_Msk (0x3UL << RADIO_LNB_OUT_SPI_MIX_GAIN_Pos) /*!< Bit mask of MIX_GAIN field. */

/* Bits 2..0 : Readout of LNA gain setting. This is a function of received signal strength. */
#define RADIO_LNB_OUT_SPI_LNA_GAIN_Pos (0UL) /*!< Position of LNA_GAIN field. */
#define RADIO_LNB_OUT_SPI_LNA_GAIN_Msk (0x7UL << RADIO_LNB_OUT_SPI_LNA_GAIN_Pos) /*!< Bit mask of LNA_GAIN field. */

/* Register: RADIO_MISC_CAL_OUT1 */
/* Description: Misc cal readouts */

/* Bit 1 : High when AAF Q channel offset is positive : compare signal for calibration */
#define RADIO_MISC_CAL_OUT1_AAFDCCALQ_Pos (1UL) /*!< Position of AAFDCCALQ field. */
#define RADIO_MISC_CAL_OUT1_AAFDCCALQ_Msk (0x1UL << RADIO_MISC_CAL_OUT1_AAFDCCALQ_Pos) /*!< Bit mask of AAFDCCALQ field. */

/* Bit 0 : High when AAF I channel offset is positive : compare signal for calibration */
#define RADIO_MISC_CAL_OUT1_AAFDCCALI_Pos (0UL) /*!< Position of AAFDCCALI field. */
#define RADIO_MISC_CAL_OUT1_AAFDCCALI_Msk (0x1UL << RADIO_MISC_CAL_OUT1_AAFDCCALI_Pos) /*!< Bit mask of AAFDCCALI field. */

/* Register: RADIO_MISC_CAL_OUT2 */
/* Description: Misc cal readouts */

/* Bits 13..7 : dc calibration of I channel when aafCalOvrEn = 1 */
#define RADIO_MISC_CAL_OUT2_RFMIXDCCALISTATUS_Pos (7UL) /*!< Position of RFMIXDCCALISTATUS field. */
#define RADIO_MISC_CAL_OUT2_RFMIXDCCALISTATUS_Msk (0x7FUL << RADIO_MISC_CAL_OUT2_RFMIXDCCALISTATUS_Pos) /*!< Bit mask of RFMIXDCCALISTATUS field. */

/* Bits 6..0 : dc calibration of Q channel when aafCalOvrEn = 1 */
#define RADIO_MISC_CAL_OUT2_RFMIXDCCALQSTATUS_Pos (0UL) /*!< Position of RFMIXDCCALQSTATUS field. */
#define RADIO_MISC_CAL_OUT2_RFMIXDCCALQSTATUS_Msk (0x7FUL << RADIO_MISC_CAL_OUT2_RFMIXDCCALQSTATUS_Pos) /*!< Bit mask of RFMIXDCCALQSTATUS field. */

/* Register: RADIO_CFO_STAT */
/* Description: Carrier freq. offset estimate */

/* Bits 28..16 : Readout of last valid phase set in correlator (hypermode only) (signed) */
#define RADIO_CFO_STAT_PHASE_Pos (16UL) /*!< Position of PHASE field. */
#define RADIO_CFO_STAT_PHASE_Msk (0x1FFFUL << RADIO_CFO_STAT_PHASE_Pos) /*!< Bit mask of PHASE field. */

/* Bit 12 : 0: Standard mode was used last 1: Hypermode was last used */
#define RADIO_CFO_STAT_LASTDEMODACTIVE_Pos (12UL) /*!< Position of LASTDEMODACTIVE field. */
#define RADIO_CFO_STAT_LASTDEMODACTIVE_Msk (0x1UL << RADIO_CFO_STAT_LASTDEMODACTIVE_Pos) /*!< Bit mask of LASTDEMODACTIVE field. */

/* Bits 8..0 : Readout of last valid decision level set in BitSlicer (signed) */
#define RADIO_CFO_STAT_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_CFO_STAT_VALUE_Msk (0x1FFUL << RADIO_CFO_STAT_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_IQCAL_OUT */
/* Description: Test: IandQ gain/phase mismatch calibration values out */

/* Bit 12 : Mode last used */
#define RADIO_IQCAL_OUT_LASTDEMODACTIVE_Pos (12UL) /*!< Position of LASTDEMODACTIVE field. */
#define RADIO_IQCAL_OUT_LASTDEMODACTIVE_Msk (0x1UL << RADIO_IQCAL_OUT_LASTDEMODACTIVE_Pos) /*!< Bit mask of LASTDEMODACTIVE field. */
#define RADIO_IQCAL_OUT_LASTDEMODACTIVE_StandardMode (0x0UL) /*!< Standard mode last used */
#define RADIO_IQCAL_OUT_LASTDEMODACTIVE_HyperMode (0x1UL) /*!< Hyper mode last used */

/* Bit 11 : calibration succeed */
#define RADIO_IQCAL_OUT_CALOK_Pos (11UL) /*!< Position of CALOK field. */
#define RADIO_IQCAL_OUT_CALOK_Msk (0x1UL << RADIO_IQCAL_OUT_CALOK_Pos) /*!< Bit mask of CALOK field. */

/* Bit 10 : calibration finished */
#define RADIO_IQCAL_OUT_CALFIN_Pos (10UL) /*!< Position of CALFIN field. */
#define RADIO_IQCAL_OUT_CALFIN_Msk (0x1UL << RADIO_IQCAL_OUT_CALFIN_Pos) /*!< Bit mask of CALFIN field. */

/* Bits 9..5 : readout of IandQ gain calibration value */
#define RADIO_IQCAL_OUT_CALAMPOUT_Pos (5UL) /*!< Position of CALAMPOUT field. */
#define RADIO_IQCAL_OUT_CALAMPOUT_Msk (0x1FUL << RADIO_IQCAL_OUT_CALAMPOUT_Pos) /*!< Bit mask of CALAMPOUT field. */

/* Bits 4..0 : readout of IandQ phase calibration value */
#define RADIO_IQCAL_OUT_CALPHIOUT_Pos (0UL) /*!< Position of CALPHIOUT field. */
#define RADIO_IQCAL_OUT_CALPHIOUT_Msk (0x1FUL << RADIO_IQCAL_OUT_CALPHIOUT_Pos) /*!< Bit mask of CALPHIOUT field. */

/* Register: RADIO_PBCAL_OUT */
/* Description: Test: PB calibration values out */

/* Bit 0 : PBIAS ready flag (bias outputs stable) */
#define RADIO_PBCAL_OUT_PBREADY_Pos (0UL) /*!< Position of PBREADY field. */
#define RADIO_PBCAL_OUT_PBREADY_Msk (0x1UL << RADIO_PBCAL_OUT_PBREADY_Pos) /*!< Bit mask of PBREADY field. */

/* Register: RADIO_CTESTATUS */
/* Description: CTEInfo parsed from received packet */

/* Bits 7..6 : CTEType parsed from packet */
#define RADIO_CTESTATUS_CTETYPE_Pos (6UL) /*!< Position of CTETYPE field. */
#define RADIO_CTESTATUS_CTETYPE_Msk (0x3UL << RADIO_CTESTATUS_CTETYPE_Pos) /*!< Bit mask of CTETYPE field. */

/* Bit 5 : RFU parsed from packet */
#define RADIO_CTESTATUS_RFU_Pos (5UL) /*!< Position of RFU field. */
#define RADIO_CTESTATUS_RFU_Msk (0x1UL << RADIO_CTESTATUS_RFU_Pos) /*!< Bit mask of RFU field. */

/* Bits 4..0 : CTETime parsed from packet */
#define RADIO_CTESTATUS_CTETIME_Pos (0UL) /*!< Position of CTETIME field. */
#define RADIO_CTESTATUS_CTETIME_Msk (0x1FUL << RADIO_CTESTATUS_CTETIME_Pos) /*!< Bit mask of CTETIME field. */

/* Register: RADIO_HYPSTDCHECKSTAT */
/* Description: Address Check Override */

/* Bit 24 : Valid flag bit */
#define RADIO_HYPSTDCHECKSTAT_VALID_Pos (24UL) /*!< Position of VALID field. */
#define RADIO_HYPSTDCHECKSTAT_VALID_Msk (0x1UL << RADIO_HYPSTDCHECKSTAT_VALID_Pos) /*!< Bit mask of VALID field. */

/* Bits 23..21 : Time distance #bit clock cycles from AAmatchHyp. */
#define RADIO_HYPSTDCHECKSTAT_SPAM_Pos (21UL) /*!< Position of SPAM field. */
#define RADIO_HYPSTDCHECKSTAT_SPAM_Msk (0x7UL << RADIO_HYPSTDCHECKSTAT_SPAM_Pos) /*!< Bit mask of SPAM field. */

/* Bits 20..16 : Hamming distance between std demod AA15:0 and expected AA15:0. */
#define RADIO_HYPSTDCHECKSTAT_HAM_Pos (16UL) /*!< Position of HAM field. */
#define RADIO_HYPSTDCHECKSTAT_HAM_Msk (0x1FUL << RADIO_HYPSTDCHECKSTAT_HAM_Pos) /*!< Bit mask of HAM field. */

/* Bits 11..8 : Number of bits where Std and Hyper demodulator disagrees for maximum latency. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK2_Pos (8UL) /*!< Position of PDUCHECK2 field. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK2_Msk (0xFUL << RADIO_HYPSTDCHECKSTAT_PDUCHECK2_Pos) /*!< Bit mask of PDUCHECK2 field. */

/* Bits 7..4 : Number of bits where Std and Hyper demodulator disagrees for medium latency. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK1_Pos (4UL) /*!< Position of PDUCHECK1 field. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK1_Msk (0xFUL << RADIO_HYPSTDCHECKSTAT_PDUCHECK1_Pos) /*!< Bit mask of PDUCHECK1 field. */

/* Bits 3..0 : Number of bits where Std and Hyper demodulator disagrees for minimum latency. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK0_Pos (0UL) /*!< Position of PDUCHECK0 field. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK0_Msk (0xFUL << RADIO_HYPSTDCHECKSTAT_PDUCHECK0_Pos) /*!< Bit mask of PDUCHECK0 field. */

/* Register: RADIO_HYPSTDAADIFFVEC */
/* Description: Address Diff Vector */

/* Bits 15..0 : Hyper AA15:0 and Std AA15:0 differs. */
#define RADIO_HYPSTDAADIFFVEC_DIFF_Pos (0UL) /*!< Position of DIFF field. */
#define RADIO_HYPSTDAADIFFVEC_DIFF_Msk (0xFFFFUL << RADIO_HYPSTDAADIFFVEC_DIFF_Pos) /*!< Bit mask of DIFF field. */

/* Register: RADIO_DFESTATUS */
/* Description: DFE status information */

/* Bit 4 : Internal state of sampling state machine */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Pos (4UL) /*!< Position of SAMPLINGSTATE field. */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Msk (0x1UL << RADIO_DFESTATUS_SAMPLINGSTATE_Pos) /*!< Bit mask of SAMPLINGSTATE field. */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Idle (0x0UL) /*!< Sampling state Idle */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Sampling (0x1UL) /*!< Sampling state Sampling */

/* Bits 2..0 : Internal state of switching state machine */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Pos (0UL) /*!< Position of SWITCHINGSTATE field. */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Msk (0x7UL << RADIO_DFESTATUS_SWITCHINGSTATE_Pos) /*!< Bit mask of SWITCHINGSTATE field. */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Idle (0x0UL) /*!< Switching state Idle */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Offset (0x1UL) /*!< Switching state Offset */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Guard (0x2UL) /*!< Switching state Guard */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Ref (0x3UL) /*!< Switching state Ref */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Switching (0x4UL) /*!< Switching state Switching */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Ending (0x5UL) /*!< Switching state Ending */

/* Register: RADIO_PACKETPTR */
/* Description: Packet pointer */

/* Bits 31..0 : Packet pointer */
#define RADIO_PACKETPTR_PACKETPTR_Pos (0UL) /*!< Position of PACKETPTR field. */
#define RADIO_PACKETPTR_PACKETPTR_Msk (0xFFFFFFFFUL << RADIO_PACKETPTR_PACKETPTR_Pos) /*!< Bit mask of PACKETPTR field. */

/* Register: RADIO_FREQUENCY */
/* Description: Frequency */

/* Bit 8 : Channel map selection. */
#define RADIO_FREQUENCY_MAP_Pos (8UL) /*!< Position of MAP field. */
#define RADIO_FREQUENCY_MAP_Msk (0x1UL << RADIO_FREQUENCY_MAP_Pos) /*!< Bit mask of MAP field. */
#define RADIO_FREQUENCY_MAP_Default (0x0UL) /*!< Channel map between 2400 MHZ .. 2500 MHz */
#define RADIO_FREQUENCY_MAP_Low (0x1UL) /*!< Channel map between 2360 MHZ .. 2460 MHz */

/* Bits 6..0 : Radio channel frequency */
#define RADIO_FREQUENCY_FREQUENCY_Pos (0UL) /*!< Position of FREQUENCY field. */
#define RADIO_FREQUENCY_FREQUENCY_Msk (0x7FUL << RADIO_FREQUENCY_FREQUENCY_Pos) /*!< Bit mask of FREQUENCY field. */

/* Register: RADIO_TXPOWER */
/* Description: Output power */

/* Bit 16 : Reduce output power by 0.5 dB relative to the setting in TXPOWER. */
#define RADIO_TXPOWER_TXBACKOFF_Pos (16UL) /*!< Position of TXBACKOFF field. */
#define RADIO_TXPOWER_TXBACKOFF_Msk (0x1UL << RADIO_TXPOWER_TXBACKOFF_Pos) /*!< Bit mask of TXBACKOFF field. */
#define RADIO_TXPOWER_TXBACKOFF_DISABLE (0x0UL) /*!< Output power will be as specified in TXPOWER. */
#define RADIO_TXPOWER_TXBACKOFF_ENABLE (0x1UL) /*!< Output power will equal TXPOWER - 0.5 dB. */

/* Bits 7..0 : RADIO output power */
#define RADIO_TXPOWER_TXPOWER_Pos (0UL) /*!< Position of TXPOWER field. */
#define RADIO_TXPOWER_TXPOWER_Msk (0xFFUL << RADIO_TXPOWER_TXPOWER_Pos) /*!< Bit mask of TXPOWER field. */
#define RADIO_TXPOWER_TXPOWER_0dBm (0x00UL) /*!< 0 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos2dBm (0x02UL) /*!< +2 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos3dBm (0x03UL) /*!< +3 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos4dBm (0x04UL) /*!< +4 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos5dBm (0x05UL) /*!< +5 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos6dBm (0x06UL) /*!< +6 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos7dBm (0x07UL) /*!< +7 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos8dBm (0x08UL) /*!< +8 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos9dBm (0x09UL) /*!< +9 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg40dBm (0xD8UL) /*!< -40 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg30dBm (0xE2UL) /*!< Deprecated enumerator -  -40 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg20dBm (0xECUL) /*!< -20 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg16dBm (0xF0UL) /*!< -16 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg12dBm (0xF4UL) /*!< -12 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg8dBm (0xF8UL) /*!< -8 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg4dBm (0xFCUL) /*!< -4 dBm */

/* Register: RADIO_MODE */
/* Description: Data rate and modulation */

/* Bits 3..0 : Radio data rate and modulation setting. The radio supports frequency-shift keying (FSK) modulation. */
#define RADIO_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define RADIO_MODE_MODE_Msk (0xFUL << RADIO_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define RADIO_MODE_MODE_Nrf_1Mbit (0x0UL) /*!< 1 Mbps Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Nrf_2Mbit (0x1UL) /*!< 2 Mbps Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Nrf_250Kbit (0x2UL) /*!< Deprecated enumerator -  250 kbps Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Ble_1Mbit (0x3UL) /*!< 1 Mbps BLE */
#define RADIO_MODE_MODE_Ble_2Mbit (0x4UL) /*!< 2 Mbps BLE */

/* Register: RADIO_PCNF0 */
/* Description: Packet configuration register 0 */

/* Bit 26 : Indicates if LENGTH field contains CRC or not */
#define RADIO_PCNF0_CRCINC_Pos (26UL) /*!< Position of CRCINC field. */
#define RADIO_PCNF0_CRCINC_Msk (0x1UL << RADIO_PCNF0_CRCINC_Pos) /*!< Bit mask of CRCINC field. */
#define RADIO_PCNF0_CRCINC_Exclude (0x0UL) /*!< LENGTH does not contain CRC */
#define RADIO_PCNF0_CRCINC_Include (0x1UL) /*!< LENGTH includes CRC */

/* Bits 25..24 : Length of preamble on air. Decision point: TASKS_START task */
#define RADIO_PCNF0_PLEN_Pos (24UL) /*!< Position of PLEN field. */
#define RADIO_PCNF0_PLEN_Msk (0x3UL << RADIO_PCNF0_PLEN_Pos) /*!< Bit mask of PLEN field. */
#define RADIO_PCNF0_PLEN_8bit (0x0UL) /*!< 8-bit preamble */
#define RADIO_PCNF0_PLEN_16bit (0x1UL) /*!< 16-bit preamble */

/* Bit 20 : Include or exclude S1 field in RAM */
#define RADIO_PCNF0_S1INCL_Pos (20UL) /*!< Position of S1INCL field. */
#define RADIO_PCNF0_S1INCL_Msk (0x1UL << RADIO_PCNF0_S1INCL_Pos) /*!< Bit mask of S1INCL field. */
#define RADIO_PCNF0_S1INCL_Automatic (0x0UL) /*!< Include S1 field in RAM only if S1LEN &gt; 0 */
#define RADIO_PCNF0_S1INCL_Include (0x1UL) /*!< Always include S1 field in RAM independent of S1LEN */

/* Bits 19..16 : Length on air of S1 field in number of bits. */
#define RADIO_PCNF0_S1LEN_Pos (16UL) /*!< Position of S1LEN field. */
#define RADIO_PCNF0_S1LEN_Msk (0xFUL << RADIO_PCNF0_S1LEN_Pos) /*!< Bit mask of S1LEN field. */

/* Bit 12 : Include or exclude S0 field in RAM */
#define RADIO_PCNF0_S0INCL_Pos (12UL) /*!< Position of S0INCL field. */
#define RADIO_PCNF0_S0INCL_Msk (0x1UL << RADIO_PCNF0_S0INCL_Pos) /*!< Bit mask of S0INCL field. */
#define RADIO_PCNF0_S0INCL_Automatic (0x0UL) /*!< Include S0 field only if S0LEN &gt; 0 */

/* Bit 8 : Length on air of S0 field in number of bytes. */
#define RADIO_PCNF0_S0LEN_Pos (8UL) /*!< Position of S0LEN field. */
#define RADIO_PCNF0_S0LEN_Msk (0x1UL << RADIO_PCNF0_S0LEN_Pos) /*!< Bit mask of S0LEN field. */

/* Bit 4 : Include or exclude LENGTH field in RAM */
#define RADIO_PCNF0_LENGTHINCL_Pos (4UL) /*!< Position of LENGTHINCL field. */
#define RADIO_PCNF0_LENGTHINCL_Msk (0x1UL << RADIO_PCNF0_LENGTHINCL_Pos) /*!< Bit mask of LENGTHINCL field. */
#define RADIO_PCNF0_LENGTHINCL_Automatic (0x0UL) /*!< Include LENGTH field in RAM only if LFLEN &gt; 0 */

/* Bits 3..0 : Length on air of LENGTH field in number of bits. */
#define RADIO_PCNF0_LFLEN_Pos (0UL) /*!< Position of LFLEN field. */
#define RADIO_PCNF0_LFLEN_Msk (0xFUL << RADIO_PCNF0_LFLEN_Pos) /*!< Bit mask of LFLEN field. */

/* Register: RADIO_PCNF1 */
/* Description: Packet configuration register 1 */

/* Bit 25 : Enable or disable packet whitening */
#define RADIO_PCNF1_WHITEEN_Pos (25UL) /*!< Position of WHITEEN field. */
#define RADIO_PCNF1_WHITEEN_Msk (0x1UL << RADIO_PCNF1_WHITEEN_Pos) /*!< Bit mask of WHITEEN field. */
#define RADIO_PCNF1_WHITEEN_Disabled (0x0UL) /*!< Disable */
#define RADIO_PCNF1_WHITEEN_Enabled (0x1UL) /*!< Enable */

/* Bit 24 : On-air endianness of packet, this applies to the S0, LENGTH, S1, and the PAYLOAD fields. */
#define RADIO_PCNF1_ENDIAN_Pos (24UL) /*!< Position of ENDIAN field. */
#define RADIO_PCNF1_ENDIAN_Msk (0x1UL << RADIO_PCNF1_ENDIAN_Pos) /*!< Bit mask of ENDIAN field. */
#define RADIO_PCNF1_ENDIAN_Little (0x0UL) /*!< Least significant bit on air first */
#define RADIO_PCNF1_ENDIAN_Big (0x1UL) /*!< Most significant bit on air first */

/* Bits 18..16 : Base address length in number of bytes */
#define RADIO_PCNF1_BALEN_Pos (16UL) /*!< Position of BALEN field. */
#define RADIO_PCNF1_BALEN_Msk (0x7UL << RADIO_PCNF1_BALEN_Pos) /*!< Bit mask of BALEN field. */

/* Bits 15..8 : Static length in number of bytes */
#define RADIO_PCNF1_STATLEN_Pos (8UL) /*!< Position of STATLEN field. */
#define RADIO_PCNF1_STATLEN_Msk (0xFFUL << RADIO_PCNF1_STATLEN_Pos) /*!< Bit mask of STATLEN field. */

/* Bits 7..0 : Maximum length of packet payload. If the packet payload is larger than MAXLEN, the radio will truncate the payload to MAXLEN. */
#define RADIO_PCNF1_MAXLEN_Pos (0UL) /*!< Position of MAXLEN field. */
#define RADIO_PCNF1_MAXLEN_Msk (0xFFUL << RADIO_PCNF1_MAXLEN_Pos) /*!< Bit mask of MAXLEN field. */

/* Register: RADIO_BASE0 */
/* Description: Base address 0 */

/* Bits 31..0 : Base address 0 */
#define RADIO_BASE0_BASE0_Pos (0UL) /*!< Position of BASE0 field. */
#define RADIO_BASE0_BASE0_Msk (0xFFFFFFFFUL << RADIO_BASE0_BASE0_Pos) /*!< Bit mask of BASE0 field. */

/* Register: RADIO_BASE1 */
/* Description: Base address 1 */

/* Bits 31..0 : Base address 1 */
#define RADIO_BASE1_BASE1_Pos (0UL) /*!< Position of BASE1 field. */
#define RADIO_BASE1_BASE1_Msk (0xFFFFFFFFUL << RADIO_BASE1_BASE1_Pos) /*!< Bit mask of BASE1 field. */

/* Register: RADIO_PREFIX0 */
/* Description: Prefixes bytes for logical addresses 0-3 */

/* Bits 31..24 : Address prefix 3. */
#define RADIO_PREFIX0_AP3_Pos (24UL) /*!< Position of AP3 field. */
#define RADIO_PREFIX0_AP3_Msk (0xFFUL << RADIO_PREFIX0_AP3_Pos) /*!< Bit mask of AP3 field. */

/* Bits 23..16 : Address prefix 2. */
#define RADIO_PREFIX0_AP2_Pos (16UL) /*!< Position of AP2 field. */
#define RADIO_PREFIX0_AP2_Msk (0xFFUL << RADIO_PREFIX0_AP2_Pos) /*!< Bit mask of AP2 field. */

/* Bits 15..8 : Address prefix 1. */
#define RADIO_PREFIX0_AP1_Pos (8UL) /*!< Position of AP1 field. */
#define RADIO_PREFIX0_AP1_Msk (0xFFUL << RADIO_PREFIX0_AP1_Pos) /*!< Bit mask of AP1 field. */

/* Bits 7..0 : Address prefix 0. */
#define RADIO_PREFIX0_AP0_Pos (0UL) /*!< Position of AP0 field. */
#define RADIO_PREFIX0_AP0_Msk (0xFFUL << RADIO_PREFIX0_AP0_Pos) /*!< Bit mask of AP0 field. */

/* Register: RADIO_PREFIX1 */
/* Description: Prefixes bytes for logical addresses 4-7 */

/* Bits 31..24 : Address prefix 7. */
#define RADIO_PREFIX1_AP7_Pos (24UL) /*!< Position of AP7 field. */
#define RADIO_PREFIX1_AP7_Msk (0xFFUL << RADIO_PREFIX1_AP7_Pos) /*!< Bit mask of AP7 field. */

/* Bits 23..16 : Address prefix 6. */
#define RADIO_PREFIX1_AP6_Pos (16UL) /*!< Position of AP6 field. */
#define RADIO_PREFIX1_AP6_Msk (0xFFUL << RADIO_PREFIX1_AP6_Pos) /*!< Bit mask of AP6 field. */

/* Bits 15..8 : Address prefix 5. */
#define RADIO_PREFIX1_AP5_Pos (8UL) /*!< Position of AP5 field. */
#define RADIO_PREFIX1_AP5_Msk (0xFFUL << RADIO_PREFIX1_AP5_Pos) /*!< Bit mask of AP5 field. */

/* Bits 7..0 : Address prefix 4. */
#define RADIO_PREFIX1_AP4_Pos (0UL) /*!< Position of AP4 field. */
#define RADIO_PREFIX1_AP4_Msk (0xFFUL << RADIO_PREFIX1_AP4_Pos) /*!< Bit mask of AP4 field. */

/* Register: RADIO_TXADDRESS */
/* Description: Transmit address select */

/* Bits 2..0 : Transmit address select */
#define RADIO_TXADDRESS_TXADDRESS_Pos (0UL) /*!< Position of TXADDRESS field. */
#define RADIO_TXADDRESS_TXADDRESS_Msk (0x7UL << RADIO_TXADDRESS_TXADDRESS_Pos) /*!< Bit mask of TXADDRESS field. */

/* Register: RADIO_RXADDRESSES */
/* Description: Receive address select */

/* Bit 16 : Hypermode settings */
#define RADIO_RXADDRESSES_HYPER_Pos (16UL) /*!< Position of HYPER field. */
#define RADIO_RXADDRESSES_HYPER_Msk (0x1UL << RADIO_RXADDRESSES_HYPER_Pos) /*!< Bit mask of HYPER field. */
#define RADIO_RXADDRESSES_HYPER_B0 (0x0UL) /*!< Use hypermode for address ADDR0 (base address 0 RADIO.BASE0) */
#define RADIO_RXADDRESSES_HYPER_B1 (0x1UL) /*!< From all of the enabled addresses among ADDR1 through ADDR7, the address ADDRn with the highest index number 'n' will use hypermode (base address 1 RADIO.BASE1) */

/* Bit 7 : Enable or disable reception on logical address 7. */
#define RADIO_RXADDRESSES_ADDR7_Pos (7UL) /*!< Position of ADDR7 field. */
#define RADIO_RXADDRESSES_ADDR7_Msk (0x1UL << RADIO_RXADDRESSES_ADDR7_Pos) /*!< Bit mask of ADDR7 field. */
#define RADIO_RXADDRESSES_ADDR7_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR7_Enabled (0x1UL) /*!< Enable */

/* Bit 6 : Enable or disable reception on logical address 6. */
#define RADIO_RXADDRESSES_ADDR6_Pos (6UL) /*!< Position of ADDR6 field. */
#define RADIO_RXADDRESSES_ADDR6_Msk (0x1UL << RADIO_RXADDRESSES_ADDR6_Pos) /*!< Bit mask of ADDR6 field. */
#define RADIO_RXADDRESSES_ADDR6_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR6_Enabled (0x1UL) /*!< Enable */

/* Bit 5 : Enable or disable reception on logical address 5. */
#define RADIO_RXADDRESSES_ADDR5_Pos (5UL) /*!< Position of ADDR5 field. */
#define RADIO_RXADDRESSES_ADDR5_Msk (0x1UL << RADIO_RXADDRESSES_ADDR5_Pos) /*!< Bit mask of ADDR5 field. */
#define RADIO_RXADDRESSES_ADDR5_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR5_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable reception on logical address 4. */
#define RADIO_RXADDRESSES_ADDR4_Pos (4UL) /*!< Position of ADDR4 field. */
#define RADIO_RXADDRESSES_ADDR4_Msk (0x1UL << RADIO_RXADDRESSES_ADDR4_Pos) /*!< Bit mask of ADDR4 field. */
#define RADIO_RXADDRESSES_ADDR4_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR4_Enabled (0x1UL) /*!< Enable */

/* Bit 3 : Enable or disable reception on logical address 3. */
#define RADIO_RXADDRESSES_ADDR3_Pos (3UL) /*!< Position of ADDR3 field. */
#define RADIO_RXADDRESSES_ADDR3_Msk (0x1UL << RADIO_RXADDRESSES_ADDR3_Pos) /*!< Bit mask of ADDR3 field. */
#define RADIO_RXADDRESSES_ADDR3_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR3_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable reception on logical address 2. */
#define RADIO_RXADDRESSES_ADDR2_Pos (2UL) /*!< Position of ADDR2 field. */
#define RADIO_RXADDRESSES_ADDR2_Msk (0x1UL << RADIO_RXADDRESSES_ADDR2_Pos) /*!< Bit mask of ADDR2 field. */
#define RADIO_RXADDRESSES_ADDR2_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR2_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable reception on logical address 1. */
#define RADIO_RXADDRESSES_ADDR1_Pos (1UL) /*!< Position of ADDR1 field. */
#define RADIO_RXADDRESSES_ADDR1_Msk (0x1UL << RADIO_RXADDRESSES_ADDR1_Pos) /*!< Bit mask of ADDR1 field. */
#define RADIO_RXADDRESSES_ADDR1_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR1_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable reception on logical address 0. */
#define RADIO_RXADDRESSES_ADDR0_Pos (0UL) /*!< Position of ADDR0 field. */
#define RADIO_RXADDRESSES_ADDR0_Msk (0x1UL << RADIO_RXADDRESSES_ADDR0_Pos) /*!< Bit mask of ADDR0 field. */
#define RADIO_RXADDRESSES_ADDR0_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR0_Enabled (0x1UL) /*!< Enable */

/* Register: RADIO_CRCCNF */
/* Description: CRC configuration */

/* Bits 9..8 : Include or exclude packet address field out of CRC calculation. */
#define RADIO_CRCCNF_SKIPADDR_Pos (8UL) /*!< Position of SKIPADDR field. */
#define RADIO_CRCCNF_SKIPADDR_Msk (0x3UL << RADIO_CRCCNF_SKIPADDR_Pos) /*!< Bit mask of SKIPADDR field. */
#define RADIO_CRCCNF_SKIPADDR_Include (0x0UL) /*!< CRC calculation includes address field */
#define RADIO_CRCCNF_SKIPADDR_Skip (0x1UL) /*!< CRC calculation does not include address field. The CRC calculation will start at the first byte after the address. */

/* Bits 1..0 : CRC length in number of bytes. */
#define RADIO_CRCCNF_LEN_Pos (0UL) /*!< Position of LEN field. */
#define RADIO_CRCCNF_LEN_Msk (0x3UL << RADIO_CRCCNF_LEN_Pos) /*!< Bit mask of LEN field. */
#define RADIO_CRCCNF_LEN_Disabled (0x0UL) /*!< CRC length is zero and CRC calculation is disabled */
#define RADIO_CRCCNF_LEN_One (0x1UL) /*!< CRC length is one byte and CRC calculation is enabled */
#define RADIO_CRCCNF_LEN_Two (0x2UL) /*!< CRC length is two bytes and CRC calculation is enabled */
#define RADIO_CRCCNF_LEN_Three (0x3UL) /*!< CRC length is three bytes and CRC calculation is enabled */

/* Register: RADIO_CRCPOLY */
/* Description: CRC polynomial */

/* Bits 23..0 : CRC polynomial */
#define RADIO_CRCPOLY_CRCPOLY_Pos (0UL) /*!< Position of CRCPOLY field. */
#define RADIO_CRCPOLY_CRCPOLY_Msk (0xFFFFFFUL << RADIO_CRCPOLY_CRCPOLY_Pos) /*!< Bit mask of CRCPOLY field. */

/* Register: RADIO_CRCINIT */
/* Description: CRC initial value */

/* Bits 23..0 : CRC initial value */
#define RADIO_CRCINIT_CRCINIT_Pos (0UL) /*!< Position of CRCINIT field. */
#define RADIO_CRCINIT_CRCINIT_Msk (0xFFFFFFUL << RADIO_CRCINIT_CRCINIT_Pos) /*!< Bit mask of CRCINIT field. */

/* Register: RADIO_TIFS */
/* Description: Interframe spacing in us */

/* Bits 9..0 : Interframe spacing in us */
#define RADIO_TIFS_TIFS_Pos (0UL) /*!< Position of TIFS field. */
#define RADIO_TIFS_TIFS_Msk (0x3FFUL << RADIO_TIFS_TIFS_Pos) /*!< Bit mask of TIFS field. */

/* Register: RADIO_RSSISAMPLE */
/* Description: RSSI sample */

/* Bits 6..0 : RSSI sample */
#define RADIO_RSSISAMPLE_RSSISAMPLE_Pos (0UL) /*!< Position of RSSISAMPLE field. */
#define RADIO_RSSISAMPLE_RSSISAMPLE_Msk (0x7FUL << RADIO_RSSISAMPLE_RSSISAMPLE_Pos) /*!< Bit mask of RSSISAMPLE field. */

/* Register: RADIO_RSSI_CONFIG */
/* Description: RSSI resolution */

/* Bit 31 : if '1' enable override for this register */
#define RADIO_RSSI_CONFIG_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_RSSI_CONFIG_ENABLE_Msk (0x1UL << RADIO_RSSI_CONFIG_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 14..8 : RSSI calibration value */
#define RADIO_RSSI_CONFIG_RSSICAL_Pos (8UL) /*!< Position of RSSICAL field. */
#define RADIO_RSSI_CONFIG_RSSICAL_Msk (0x7FUL << RADIO_RSSI_CONFIG_RSSICAL_Pos) /*!< Bit mask of RSSICAL field. */

/* Register: RADIO_STATE */
/* Description: Current radio state */

/* Bits 3..0 : Current radio state */
#define RADIO_STATE_STATE_Pos (0UL) /*!< Position of STATE field. */
#define RADIO_STATE_STATE_Msk (0xFUL << RADIO_STATE_STATE_Pos) /*!< Bit mask of STATE field. */
#define RADIO_STATE_STATE_Disabled (0x0UL) /*!< RADIO is in the Disabled state */
#define RADIO_STATE_STATE_RxRu (0x1UL) /*!< RADIO is in the RXRU state */
#define RADIO_STATE_STATE_RxIdle (0x2UL) /*!< RADIO is in the RXIDLE state */
#define RADIO_STATE_STATE_Rx (0x3UL) /*!< RADIO is in the RX state */
#define RADIO_STATE_STATE_RxDisable (0x4UL) /*!< RADIO is in the RXDISABLED state */
#define RADIO_STATE_STATE_TxRu (0x9UL) /*!< RADIO is in the TXRU state */
#define RADIO_STATE_STATE_TxIdle (0xAUL) /*!< RADIO is in the TXIDLE state */
#define RADIO_STATE_STATE_Tx (0xBUL) /*!< RADIO is in the TX state */
#define RADIO_STATE_STATE_TxDisable (0xCUL) /*!< RADIO is in the TXDISABLED state */

/* Register: RADIO_DATAWHITEIV */
/* Description: Data whitening initial value */

/* Bits 6..0 : Data whitening initial value. Bit 6 is hardwired to '1', writing '0' to it has no effect, and it will always be read back and used by the device as '1'. */
#define RADIO_DATAWHITEIV_DATAWHITEIV_Pos (0UL) /*!< Position of DATAWHITEIV field. */
#define RADIO_DATAWHITEIV_DATAWHITEIV_Msk (0x7FUL << RADIO_DATAWHITEIV_DATAWHITEIV_Pos) /*!< Bit mask of DATAWHITEIV field. */

/* Register: RADIO_DMA_MAXLEN */
/* Description: DMA max length */

/* Bits 8..0 : Maximum size of DMA transfer in number of bytes */
#define RADIO_DMA_MAXLEN_DMA_MAXLEN_Pos (0UL) /*!< Position of DMA_MAXLEN field. */
#define RADIO_DMA_MAXLEN_DMA_MAXLEN_Msk (0x1FFUL << RADIO_DMA_MAXLEN_DMA_MAXLEN_Pos) /*!< Bit mask of DMA_MAXLEN field. */

/* Register: RADIO_BCC */
/* Description: Bit counter compare */

/* Bits 31..0 : Bit counter compare */
#define RADIO_BCC_BCC_Pos (0UL) /*!< Position of BCC field. */
#define RADIO_BCC_BCC_Msk (0xFFFFFFFFUL << RADIO_BCC_BCC_Pos) /*!< Bit mask of BCC field. */

/* Register: RADIO_AACHKOVERRIDE */
/* Description: Address Check Override */

/* Bits 29..28 : Enable concurrent RX AA match mechanism */
#define RADIO_AACHKOVERRIDE_ENCONCRX_Pos (28UL) /*!< Position of ENCONCRX field. */
#define RADIO_AACHKOVERRIDE_ENCONCRX_Msk (0x3UL << RADIO_AACHKOVERRIDE_ENCONCRX_Pos) /*!< Bit mask of ENCONCRX field. */
#define RADIO_AACHKOVERRIDE_ENCONCRX_BleLR (0x0UL) /*!< AA match to primary advertising packets on BLE LR */
#define RADIO_AACHKOVERRIDE_ENCONCRX_Concurrent (0x1UL) /*!< Concurrent AA match to primary advertising packets on both BLE LR (hyper) and BLE 1M (standard), the winner takes over the packet parser */
#define RADIO_AACHKOVERRIDE_ENCONCRX_Ble1Mbit (0x2UL) /*!< AA match to primary advertising packets on BLE 1M only */
#define RADIO_AACHKOVERRIDE_ENCONCRX_DoNotUse (0x3UL) /*!< Illegal combination */

/* Bits 26..24 : Number of preamble symbols before SFD to match, by default 2 symbols. */
#define RADIO_AACHKOVERRIDE_SYMSBEFORESFD_Pos (24UL) /*!< Position of SYMSBEFORESFD field. */
#define RADIO_AACHKOVERRIDE_SYMSBEFORESFD_Msk (0x7UL << RADIO_AACHKOVERRIDE_SYMSBEFORESFD_Pos) /*!< Bit mask of SYMSBEFORESFD field. */

/* Bit 21 : Enable timing accurate address match window in demodulator */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_Pos (21UL) /*!< Position of PERFECTADDRWINDOW field. */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_Msk (0x1UL << RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_Pos) /*!< Bit mask of PERFECTADDRWINDOW field. */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_DISABLE (0x0UL) /*!< The address window has some margin */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_ENABLE (0x1UL) /*!< The address window spans only one bit */

/* Bit 20 : Enable ignore std AA checker before shift register filled */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_Pos (20UL) /*!< Position of ALLOWADDRMATCHEARLY field. */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_Msk (0x1UL << RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_Pos) /*!< Bit mask of ALLOWADDRMATCHEARLY field. */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_ENABLE (0x0UL) /*!< Enable */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_DISABLE (0x1UL) /*!< Disable */

/* Bit 19 : Disable std AA checker */
#define RADIO_AACHKOVERRIDE_DISABLE_Pos (19UL) /*!< Position of DISABLE field. */
#define RADIO_AACHKOVERRIDE_DISABLE_Msk (0x1UL << RADIO_AACHKOVERRIDE_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define RADIO_AACHKOVERRIDE_DISABLE_ENABLE (0x0UL) /*!< Enable std AA checker */
#define RADIO_AACHKOVERRIDE_DISABLE_DISABLE (0x1UL) /*!< Disable std AA checker */

/* Bit 18 : Bypass majority vote */
#define RADIO_AACHKOVERRIDE_BYPASS_Pos (18UL) /*!< Position of BYPASS field. */
#define RADIO_AACHKOVERRIDE_BYPASS_Msk (0x1UL << RADIO_AACHKOVERRIDE_BYPASS_Pos) /*!< Bit mask of BYPASS field. */
#define RADIO_AACHKOVERRIDE_BYPASS_PASS (0x0UL) /*!< Majority vote */
#define RADIO_AACHKOVERRIDE_BYPASS_BYPASS (0x1UL) /*!< Bypass through majority vote */

/* Bit 17 : Enable AA bit 15 check */
#define RADIO_AACHKOVERRIDE_ENABLE_Pos (17UL) /*!< Position of ENABLE field. */
#define RADIO_AACHKOVERRIDE_ENABLE_Msk (0x1UL << RADIO_AACHKOVERRIDE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_AACHKOVERRIDE_ENABLE_AA16_31 (0x0UL) /*!< Enable AA16..31 */
#define RADIO_AACHKOVERRIDE_ENABLE_AA15_31 (0x1UL) /*!< Enable AA15..31 */

/* Bits 9..0 : Defines maximum number of PDU bits to compare between Hyper and Std demodulator */
#define RADIO_AACHKOVERRIDE_ENDCOUNTHYPSTD_Pos (0UL) /*!< Position of ENDCOUNTHYPSTD field. */
#define RADIO_AACHKOVERRIDE_ENDCOUNTHYPSTD_Msk (0x3FFUL << RADIO_AACHKOVERRIDE_ENDCOUNTHYPSTD_Pos) /*!< Bit mask of ENDCOUNTHYPSTD field. */

/* Register: RADIO_PB_TEST */
/* Description: Test: PB calibration */

/* Bit 31 : if '1' enable override for VBGTRIM */
#define RADIO_PB_TEST_OVRENVBGTRIM_Pos (31UL) /*!< Position of OVRENVBGTRIM field. */
#define RADIO_PB_TEST_OVRENVBGTRIM_Msk (0x1UL << RADIO_PB_TEST_OVRENVBGTRIM_Pos) /*!< Bit mask of OVRENVBGTRIM field. */

/* Bit 30 : if '1' enable override for PBIBPSTRIM */
#define RADIO_PB_TEST_OVRENPBIBPSTRIM_Pos (30UL) /*!< Position of OVRENPBIBPSTRIM field. */
#define RADIO_PB_TEST_OVRENPBIBPSTRIM_Msk (0x1UL << RADIO_PB_TEST_OVRENPBIBPSTRIM_Pos) /*!< Bit mask of OVRENPBIBPSTRIM field. */

/* Bits 11..8 : Trim code for VBG to FS_VCOREG */
#define RADIO_PB_TEST_VBGTRIM_Pos (8UL) /*!< Position of VBGTRIM field. */
#define RADIO_PB_TEST_VBGTRIM_Msk (0xFUL << RADIO_PB_TEST_VBGTRIM_Pos) /*!< Bit mask of VBGTRIM field. */

/* Bits 7..4 : Trim code for IBPS currents */
#define RADIO_PB_TEST_PBIBPSTRIM_Pos (4UL) /*!< Position of PBIBPSTRIM field. */
#define RADIO_PB_TEST_PBIBPSTRIM_Msk (0xFUL << RADIO_PB_TEST_PBIBPSTRIM_Pos) /*!< Bit mask of PBIBPSTRIM field. */

/* Register: RADIO_PACKET_CNTR1 */
/* Description: Test: PER msrmnts */

/* Bits 15..0 : Packet counter value */
#define RADIO_PACKET_CNTR1_COUNTER_Pos (0UL) /*!< Position of COUNTER field. */
#define RADIO_PACKET_CNTR1_COUNTER_Msk (0xFFFFUL << RADIO_PACKET_CNTR1_COUNTER_Pos) /*!< Bit mask of COUNTER field. */

/* Register: RADIO_PACKET_CNTR2 */
/* Description: Test: PER msrmnts */

/* Bits 31..16 : Packet counter value (number of packets with addressmatch ok) */
#define RADIO_PACKET_CNTR2_NORMAL_Pos (16UL) /*!< Position of NORMAL field. */
#define RADIO_PACKET_CNTR2_NORMAL_Msk (0xFFFFUL << RADIO_PACKET_CNTR2_NORMAL_Pos) /*!< Bit mask of NORMAL field. */

/* Bits 15..0 : Number of detected correlator syncs */
#define RADIO_PACKET_CNTR2_HYPER_Pos (0UL) /*!< Position of HYPER field. */
#define RADIO_PACKET_CNTR2_HYPER_Msk (0xFFFFUL << RADIO_PACKET_CNTR2_HYPER_Pos) /*!< Bit mask of HYPER field. */

/* Register: RADIO_IQCAL_TEST */
/* Description: Test: IandQ gain/phase mismatch calibration control */

/* Bits 15..8 : Settling time (in number of 16 MHz clock periods) for rssi input to stabilize */
#define RADIO_IQCAL_TEST_IQCALWAIT_Pos (8UL) /*!< Position of IQCALWAIT field. */
#define RADIO_IQCAL_TEST_IQCALWAIT_Msk (0xFFUL << RADIO_IQCAL_TEST_IQCALWAIT_Pos) /*!< Bit mask of IQCALWAIT field. */

/* Bits 2..1 : IQCal search mode */
#define RADIO_IQCAL_TEST_MODE_Pos (1UL) /*!< Position of MODE field. */
#define RADIO_IQCAL_TEST_MODE_Msk (0x3UL << RADIO_IQCAL_TEST_MODE_Pos) /*!< Bit mask of MODE field. */

/* Bit 0 : Run IanQ calibration procedure */
#define RADIO_IQCAL_TEST_RUN_Pos (0UL) /*!< Position of RUN field. */
#define RADIO_IQCAL_TEST_RUN_Msk (0x1UL << RADIO_IQCAL_TEST_RUN_Pos) /*!< Bit mask of RUN field. */

/* Register: RADIO_DBC_COEFFS */
/* Description: Test and Debug: DBC coefficients override */

/* Bit 12 : Zero means coefficients only updated when needed (default), set to 1 coefficients are always updated when the radio is enabled. */
#define RADIO_DBC_COEFFS_OVRALWAYSUPDATE_Pos (12UL) /*!< Position of OVRALWAYSUPDATE field. */
#define RADIO_DBC_COEFFS_OVRALWAYSUPDATE_Msk (0x1UL << RADIO_DBC_COEFFS_OVRALWAYSUPDATE_Pos) /*!< Bit mask of OVRALWAYSUPDATE field. */

/* Bit 11 : paddrUpdateOvrVal */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVRVAL_Pos (11UL) /*!< Position of PADDRUPDATEOVRVAL field. */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVRVAL_Msk (0x1UL << RADIO_DBC_COEFFS_PADDRUPDATEOVRVAL_Pos) /*!< Bit mask of PADDRUPDATEOVRVAL field. */

/* Bit 10 : paddrUpdateOvrEn */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVREN_Pos (10UL) /*!< Position of PADDRUPDATEOVREN field. */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVREN_Msk (0x1UL << RADIO_DBC_COEFFS_PADDRUPDATEOVREN_Pos) /*!< Bit mask of PADDRUPDATEOVREN field. */

/* Register: RADIO_FS_CONFIG */
/* Description: Fs config (ana+dig) */

/* Bit 31 : if '1' enable override for FSMODULATORDELAY */
#define RADIO_FS_CONFIG_OVRENFSMODULATORDELAY_Pos (31UL) /*!< Position of OVRENFSMODULATORDELAY field. */
#define RADIO_FS_CONFIG_OVRENFSMODULATORDELAY_Msk (0x1UL << RADIO_FS_CONFIG_OVRENFSMODULATORDELAY_Pos) /*!< Bit mask of OVRENFSMODULATORDELAY field. */

/* Bit 30 : if '1' enable override for FSGFSKBYPASS */
#define RADIO_FS_CONFIG_OVRENFSGFSKBYPASS_Pos (30UL) /*!< Position of OVRENFSGFSKBYPASS field. */
#define RADIO_FS_CONFIG_OVRENFSGFSKBYPASS_Msk (0x1UL << RADIO_FS_CONFIG_OVRENFSGFSKBYPASS_Pos) /*!< Bit mask of OVRENFSGFSKBYPASS field. */

/* Bit 29 : Use 1v3 supply for FS_VCO power */
#define RADIO_FS_CONFIG_OVRVCOVDD_Pos (29UL) /*!< Position of OVRVCOVDD field. */
#define RADIO_FS_CONFIG_OVRVCOVDD_Msk (0x1UL << RADIO_FS_CONFIG_OVRVCOVDD_Pos) /*!< Bit mask of OVRVCOVDD field. */
#define RADIO_FS_CONFIG_OVRVCOVDD_Ficr (0x0UL) /*!< Value of FICR.RADIOTRIM01-&gt;FSPFDCPREG is used in stead of FS_CONFIG.VCOVDD */
#define RADIO_FS_CONFIG_OVRVCOVDD_Par (0x1UL) /*!< Use FS_CONFIG.VCOVDD */

/* Bits 28..24 : Override value for external control of VCO calibration, 0x00 for off */
#define RADIO_FS_CONFIG_FSVCOCAPOVRD_Pos (24UL) /*!< Position of FSVCOCAPOVRD field. */
#define RADIO_FS_CONFIG_FSVCOCAPOVRD_Msk (0x1FUL << RADIO_FS_CONFIG_FSVCOCAPOVRD_Pos) /*!< Bit mask of FSVCOCAPOVRD field. */

/* Bits 23..22 : Override modulator gain distribution (between analog/digital) */
#define RADIO_FS_CONFIG_FSVCOKMODOVRD_Pos (22UL) /*!< Position of FSVCOKMODOVRD field. */
#define RADIO_FS_CONFIG_FSVCOKMODOVRD_Msk (0x3UL << RADIO_FS_CONFIG_FSVCOKMODOVRD_Pos) /*!< Bit mask of FSVCOKMODOVRD field. */

/* Bits 21..18 : programmable delay */
#define RADIO_FS_CONFIG_FSMODULATORDELAY_Pos (18UL) /*!< Position of FSMODULATORDELAY field. */
#define RADIO_FS_CONFIG_FSMODULATORDELAY_Msk (0xFUL << RADIO_FS_CONFIG_FSMODULATORDELAY_Pos) /*!< Bit mask of FSMODULATORDELAY field. */

/* Bit 17 : '1': Unfiltered FSK transmission */
#define RADIO_FS_CONFIG_FSGFSKBYPASS_Pos (17UL) /*!< Position of FSGFSKBYPASS field. */
#define RADIO_FS_CONFIG_FSGFSKBYPASS_Msk (0x1UL << RADIO_FS_CONFIG_FSGFSKBYPASS_Pos) /*!< Bit mask of FSGFSKBYPASS field. */

/* Bit 16 : Adjust GFSK bandwidth. '1': 0.6, '0': 0.55 */
#define RADIO_FS_CONFIG_FSGFSKBT_Pos (16UL) /*!< Position of FSGFSKBT field. */
#define RADIO_FS_CONFIG_FSGFSKBT_Msk (0x1UL << RADIO_FS_CONFIG_FSGFSKBT_Pos) /*!< Bit mask of FSGFSKBT field. */

/* Bits 15..12 : Analog configuration register: Phase detector current */
#define RADIO_FS_CONFIG_FSPDCURR_Pos (12UL) /*!< Position of FSPDCURR field. */
#define RADIO_FS_CONFIG_FSPDCURR_Msk (0xFUL << RADIO_FS_CONFIG_FSPDCURR_Pos) /*!< Bit mask of FSPDCURR field. */

/* Bits 11..8 : Analog configuration register: VCO current */
#define RADIO_FS_CONFIG_FSVCOCURR_Pos (8UL) /*!< Position of FSVCOCURR field. */
#define RADIO_FS_CONFIG_FSVCOCURR_Msk (0xFUL << RADIO_FS_CONFIG_FSVCOCURR_Pos) /*!< Bit mask of FSVCOCURR field. */

/* Bit 5 : fsVcoShutup */
#define RADIO_FS_CONFIG_FSVCOSHUTUP_Pos (5UL) /*!< Position of FSVCOSHUTUP field. */
#define RADIO_FS_CONFIG_FSVCOSHUTUP_Msk (0x1UL << RADIO_FS_CONFIG_FSVCOSHUTUP_Pos) /*!< Bit mask of FSVCOSHUTUP field. */

/* Bits 4..3 : configuration register: Phase detector delay */
#define RADIO_FS_CONFIG_FSPDDLY_Pos (3UL) /*!< Position of FSPDDLY field. */
#define RADIO_FS_CONFIG_FSPDDLY_Msk (0x3UL << RADIO_FS_CONFIG_FSPDDLY_Pos) /*!< Bit mask of FSPDDLY field. */

/* Bit 2 : Shut off FS_PD by clamping the clocks */
#define RADIO_FS_CONFIG_FSPDCKDISABLE_Pos (2UL) /*!< Position of FSPDCKDISABLE field. */
#define RADIO_FS_CONFIG_FSPDCKDISABLE_Msk (0x1UL << RADIO_FS_CONFIG_FSPDCKDISABLE_Pos) /*!< Bit mask of FSPDCKDISABLE field. */

/* Bit 1 : Value used for RADIO-&gt;FS_CONFIG.VCOVDD when RADIO-&gt;FS_CONFIG.OVRVCOVDD = 0 */
#define RADIO_FS_CONFIG_FSPFDCPREG_Pos (1UL) /*!< Position of FSPFDCPREG field. */
#define RADIO_FS_CONFIG_FSPFDCPREG_Msk (0x1UL << RADIO_FS_CONFIG_FSPFDCPREG_Pos) /*!< Bit mask of FSPFDCPREG field. */
#define RADIO_FS_CONFIG_FSPFDCPREG_Disable (0x0UL) /*!< Use power filter on PFD and charge pump in radio */
#define RADIO_FS_CONFIG_FSPFDCPREG_Enable (0x1UL) /*!< Use LDO and PFD and charge pump in radio */

/* Bit 0 : Deprecated field -  Sideband select (1=upper/0=lower) */
#define RADIO_FS_CONFIG_SSEL_Pos (0UL) /*!< Position of SSEL field. */
#define RADIO_FS_CONFIG_SSEL_Msk (0x1UL << RADIO_FS_CONFIG_SSEL_Pos) /*!< Bit mask of SSEL field. */

/* Register: RADIO_FS_TEST */
/* Description: Fs misc test */

/* Bit 31 : if '1' enable override for FSDEVOVERRIDE */
#define RADIO_FS_TEST_OVRENFSDEVOVERRIDE_Pos (31UL) /*!< Position of OVRENFSDEVOVERRIDE field. */
#define RADIO_FS_TEST_OVRENFSDEVOVERRIDE_Msk (0x1UL << RADIO_FS_TEST_OVRENFSDEVOVERRIDE_Pos) /*!< Bit mask of OVRENFSDEVOVERRIDE field. */

/* Bit 30 : if '1' enable override for FSTXMODULATORGAIN */
#define RADIO_FS_TEST_OVRENFSTXMODULATORGAIN_Pos (30UL) /*!< Position of OVRENFSTXMODULATORGAIN field. */
#define RADIO_FS_TEST_OVRENFSTXMODULATORGAIN_Msk (0x1UL << RADIO_FS_TEST_OVRENFSTXMODULATORGAIN_Pos) /*!< Bit mask of OVRENFSTXMODULATORGAIN field. */

/* Bit 27 : 0 : TxSDM on only in TX mode. 1 : TxSDM on in both TX and RX mode */
#define RADIO_FS_TEST_FSTXSDMALWAYSON_Pos (27UL) /*!< Position of FSTXSDMALWAYSON field. */
#define RADIO_FS_TEST_FSTXSDMALWAYSON_Msk (0x1UL << RADIO_FS_TEST_FSTXSDMALWAYSON_Pos) /*!< Bit mask of FSTXSDMALWAYSON field. */

/* Bit 26 : 0 : 1 MHz. 1 : 2 MHz */
#define RADIO_FS_TEST_LOIFOVERRIDEFREQUENCY_Pos (26UL) /*!< Position of LOIFOVERRIDEFREQUENCY field. */
#define RADIO_FS_TEST_LOIFOVERRIDEFREQUENCY_Msk (0x1UL << RADIO_FS_TEST_LOIFOVERRIDEFREQUENCY_Pos) /*!< Bit mask of LOIFOVERRIDEFREQUENCY field. */

/* Bit 25 : 1 : Upper sideband of LO. 0 : Lower sideband of LO */
#define RADIO_FS_TEST_LOIFOVERRIDESIDEBAND_Pos (25UL) /*!< Position of LOIFOVERRIDESIDEBAND field. */
#define RADIO_FS_TEST_LOIFOVERRIDESIDEBAND_Msk (0x1UL << RADIO_FS_TEST_LOIFOVERRIDESIDEBAND_Pos) /*!< Bit mask of LOIFOVERRIDESIDEBAND field. */

/* Bit 24 : 1 : LO IF override is on. 0 : LO IF override is off */
#define RADIO_FS_TEST_LOIFOVERRIDEON_Pos (24UL) /*!< Position of LOIFOVERRIDEON field. */
#define RADIO_FS_TEST_LOIFOVERRIDEON_Msk (0x1UL << RADIO_FS_TEST_LOIFOVERRIDEON_Pos) /*!< Bit mask of LOIFOVERRIDEON field. */

/* Bits 21..16 : External control of frequency deviation, value overrides calculated FS and TX multipliers, 0x00 for off */
#define RADIO_FS_TEST_FSDEVOVERRIDE_Pos (16UL) /*!< Position of FSDEVOVERRIDE field. */
#define RADIO_FS_TEST_FSDEVOVERRIDE_Msk (0x3FUL << RADIO_FS_TEST_FSDEVOVERRIDE_Pos) /*!< Bit mask of FSDEVOVERRIDE field. */

/* Bits 14..8 : Adjust TX path modulation gain */
#define RADIO_FS_TEST_FSTXMODULATORGAIN_Pos (8UL) /*!< Position of FSTXMODULATORGAIN field. */
#define RADIO_FS_TEST_FSTXMODULATORGAIN_Msk (0x7FUL << RADIO_FS_TEST_FSTXMODULATORGAIN_Pos) /*!< Bit mask of FSTXMODULATORGAIN field. */

/* Bit 7 : 1: Disables TX path during LO modulation test. 0: Normal mode */
#define RADIO_FS_TEST_FSTESTMODULATOR_Pos (7UL) /*!< Position of FSTESTMODULATOR field. */
#define RADIO_FS_TEST_FSTESTMODULATOR_Msk (0x1UL << RADIO_FS_TEST_FSTESTMODULATOR_Pos) /*!< Bit mask of FSTESTMODULATOR field. */

/* Bit 6 : 1: Switch to single loop SDM in FsSDM */
#define RADIO_FS_TEST_FSTESTUSE2NDSDM_Pos (6UL) /*!< Position of FSTESTUSE2NDSDM field. */
#define RADIO_FS_TEST_FSTESTUSE2NDSDM_Msk (0x1UL << RADIO_FS_TEST_FSTESTUSE2NDSDM_Pos) /*!< Bit mask of FSTESTUSE2NDSDM field. */

/* Bit 5 : 1: Shutoff dither in FsSDM */
#define RADIO_FS_TEST_FSTESTFSDITHEROFF_Pos (5UL) /*!< Position of FSTESTFSDITHEROFF field. */
#define RADIO_FS_TEST_FSTESTFSDITHEROFF_Msk (0x1UL << RADIO_FS_TEST_FSTESTFSDITHEROFF_Pos) /*!< Bit mask of FSTESTFSDITHEROFF field. */

/* Bit 4 : 1: Shutoff dither in TxSDM */
#define RADIO_FS_TEST_FSTESTTXDITHEROFF_Pos (4UL) /*!< Position of FSTESTTXDITHEROFF field. */
#define RADIO_FS_TEST_FSTESTTXDITHEROFF_Msk (0x1UL << RADIO_FS_TEST_FSTESTTXDITHEROFF_Pos) /*!< Bit mask of FSTESTTXDITHEROFF field. */

/* Bits 3..0 : FS deviation scale factor gradient over channel no */
#define RADIO_FS_TEST_FSDEVCHANNELGRADIENT_Pos (0UL) /*!< Position of FSDEVCHANNELGRADIENT field. */
#define RADIO_FS_TEST_FSDEVCHANNELGRADIENT_Msk (0xFUL << RADIO_FS_TEST_FSDEVCHANNELGRADIENT_Pos) /*!< Bit mask of FSDEVCHANNELGRADIENT field. */

/* Register: RADIO_FS_TRIM */
/* Description: Fs misc trim */

/* Bit 31 : if '1' enable override for FSDIVTUNE */
#define RADIO_FS_TRIM_OVRENFSDIVTUNE_Pos (31UL) /*!< Position of OVRENFSDIVTUNE field. */
#define RADIO_FS_TRIM_OVRENFSDIVTUNE_Msk (0x1UL << RADIO_FS_TRIM_OVRENFSDIVTUNE_Pos) /*!< Bit mask of OVRENFSDIVTUNE field. */

/* Bits 27..24 : Internal register to set FSPDCURR differently for some channels if FICR FSPDCURROPT is set to 1 */
#define RADIO_FS_TRIM_FSPDCURRALT_Pos (24UL) /*!< Position of FSPDCURRALT field. */
#define RADIO_FS_TRIM_FSPDCURRALT_Msk (0xFUL << RADIO_FS_TRIM_FSPDCURRALT_Pos) /*!< Bit mask of FSPDCURRALT field. */

/* Bits 23..16 : RF frequency adjustment (signed), LSB corresponds to 2 kHz, i.e. a range of +/-256 kHz */
#define RADIO_FS_TRIM_FSFINETUNE_Pos (16UL) /*!< Position of FSFINETUNE field. */
#define RADIO_FS_TRIM_FSFINETUNE_Msk (0xFFUL << RADIO_FS_TRIM_FSFINETUNE_Pos) /*!< Bit mask of FSFINETUNE field. */

/* Bit 14 : fsTestFsSdmShutoff. 1: Shutoff FsSDM, highest priority */
#define RADIO_FS_TRIM_FSTESTFSSDMSHUTOFF_Pos (14UL) /*!< Position of FSTESTFSSDMSHUTOFF field. */
#define RADIO_FS_TRIM_FSTESTFSSDMSHUTOFF_Msk (0x1UL << RADIO_FS_TRIM_FSTESTFSSDMSHUTOFF_Pos) /*!< Bit mask of FSTESTFSSDMSHUTOFF field. */

/* Bit 13 : fsTestTxSdmShutoff. 1: Shutoff TxSDM, e.g. for testing RX phase noise, highest priority */
#define RADIO_FS_TRIM_FSTESTTXSDMSHUTOFF_Pos (13UL) /*!< Position of FSTESTTXSDMSHUTOFF field. */
#define RADIO_FS_TRIM_FSTESTTXSDMSHUTOFF_Msk (0x1UL << RADIO_FS_TRIM_FSTESTTXSDMSHUTOFF_Pos) /*!< Bit mask of FSTESTTXSDMSHUTOFF field. */

/* Bit 12 : fsTxSdmCkSelect. 0: ck64MFs, 1: ck32M */
#define RADIO_FS_TRIM_FSTXSDMCKSELECT_Pos (12UL) /*!< Position of FSTXSDMCKSELECT field. */
#define RADIO_FS_TRIM_FSTXSDMCKSELECT_Msk (0x1UL << RADIO_FS_TRIM_FSTXSDMCKSELECT_Pos) /*!< Bit mask of FSTXSDMCKSELECT field. */

/* Bits 11..8 : Trim value for R in loop filter */
#define RADIO_FS_TRIM_RTRIM_Pos (8UL) /*!< Position of RTRIM field. */
#define RADIO_FS_TRIM_RTRIM_Msk (0xFUL << RADIO_FS_TRIM_RTRIM_Pos) /*!< Bit mask of RTRIM field. */

/* Bits 7..4 : Trim value for C in loop filter */
#define RADIO_FS_TRIM_CTRIM_Pos (4UL) /*!< Position of CTRIM field. */
#define RADIO_FS_TRIM_CTRIM_Msk (0xFUL << RADIO_FS_TRIM_CTRIM_Pos) /*!< Bit mask of CTRIM field. */

/* Bits 3..0 : Trim value for DIV2_4 */
#define RADIO_FS_TRIM_FSDIVTUNE_Pos (0UL) /*!< Position of FSDIVTUNE field. */
#define RADIO_FS_TRIM_FSDIVTUNE_Msk (0xFUL << RADIO_FS_TRIM_FSDIVTUNE_Pos) /*!< Bit mask of FSDIVTUNE field. */

/* Register: RADIO_MISC_TRIM1 */
/* Description: Misc Aaf/ADC trim related */

/* Bit 31 : if '1' enable override for LNACFREQ */
#define RADIO_MISC_TRIM1_OVRENLNACFREQ_Pos (31UL) /*!< Position of OVRENLNACFREQ field. */
#define RADIO_MISC_TRIM1_OVRENLNACFREQ_Msk (0x1UL << RADIO_MISC_TRIM1_OVRENLNACFREQ_Pos) /*!< Bit mask of OVRENLNACFREQ field. */

/* Bit 30 : if '1' enable override for AAFRCTRIM */
#define RADIO_MISC_TRIM1_OVRENAAFRCTRIM_Pos (30UL) /*!< Position of OVRENAAFRCTRIM field. */
#define RADIO_MISC_TRIM1_OVRENAAFRCTRIM_Msk (0x1UL << RADIO_MISC_TRIM1_OVRENAAFRCTRIM_Pos) /*!< Bit mask of OVRENAAFRCTRIM field. */

/* Bits 29..24 : Deprecated field -  Sets number of clock pulses in the SETTLE state (calEngineTsettle) */
#define RADIO_MISC_TRIM1_AAFRCCALTSETTLE_Pos (24UL) /*!< Position of AAFRCCALTSETTLE field. */
#define RADIO_MISC_TRIM1_AAFRCCALTSETTLE_Msk (0x3FUL << RADIO_MISC_TRIM1_AAFRCCALTSETTLE_Pos) /*!< Bit mask of AAFRCCALTSETTLE field. */

/* Bit 20 : LNACFREQ automatically set based on selected channel */
#define RADIO_MISC_TRIM1_LNACFREQAUTOEN_Pos (20UL) /*!< Position of LNACFREQAUTOEN field. */
#define RADIO_MISC_TRIM1_LNACFREQAUTOEN_Msk (0x1UL << RADIO_MISC_TRIM1_LNACFREQAUTOEN_Pos) /*!< Bit mask of LNACFREQAUTOEN field. */

/* Bit 19 : Enable high drive on RADIO_CK module */
#define RADIO_MISC_TRIM1_RADIOCKHIGHDRV_Pos (19UL) /*!< Position of RADIOCKHIGHDRV field. */
#define RADIO_MISC_TRIM1_RADIOCKHIGHDRV_Msk (0x1UL << RADIO_MISC_TRIM1_RADIOCKHIGHDRV_Pos) /*!< Bit mask of RADIOCKHIGHDRV field. */

/* Bits 18..16 : Change centre frequency of LNA LC tank */
#define RADIO_MISC_TRIM1_LNACFREQ_Pos (16UL) /*!< Position of LNACFREQ field. */
#define RADIO_MISC_TRIM1_LNACFREQ_Msk (0x7UL << RADIO_MISC_TRIM1_LNACFREQ_Pos) /*!< Bit mask of LNACFREQ field. */

/* Bits 7..4 : Process compensation for R and C */
#define RADIO_MISC_TRIM1_AAFRCTRIM_Pos (4UL) /*!< Position of AAFRCTRIM field. */
#define RADIO_MISC_TRIM1_AAFRCTRIM_Msk (0xFUL << RADIO_MISC_TRIM1_AAFRCTRIM_Pos) /*!< Bit mask of AAFRCTRIM field. */

/* Register: RADIO_MISC_TEST1 */
/* Description: Misc Aaf/ADC trim related */

/* Bit 31 : if '1' enable override for RFMIXDCCALI/Q. RfMix calibration must only be run after the radio is fully powered up. */
#define RADIO_MISC_TEST1_OVRENRFMIXDCCAL_Pos (31UL) /*!< Position of OVRENRFMIXDCCAL field. */
#define RADIO_MISC_TEST1_OVRENRFMIXDCCAL_Msk (0x1UL << RADIO_MISC_TEST1_OVRENRFMIXDCCAL_Pos) /*!< Bit mask of OVRENRFMIXDCCAL field. */

/* Bit 21 : Enable DCCAL */
#define RADIO_MISC_TEST1_AAFENDCCAL_Pos (21UL) /*!< Position of AAFENDCCAL field. */
#define RADIO_MISC_TEST1_AAFENDCCAL_Msk (0x1UL << RADIO_MISC_TEST1_AAFENDCCAL_Pos) /*!< Bit mask of AAFENDCCAL field. */

/* Bit 20 : 0: override with values in PAR1 1: use values from CalibrationEngineCore */
#define RADIO_MISC_TEST1_AAFCALOVREN_Pos (20UL) /*!< Position of AAFCALOVREN field. */
#define RADIO_MISC_TEST1_AAFCALOVREN_Msk (0x1UL << RADIO_MISC_TEST1_AAFCALOVREN_Pos) /*!< Bit mask of AAFCALOVREN field. */

/* Bits 19..13 : AAF/RFMIX dc calibration of Q channel */
#define RADIO_MISC_TEST1_RFMIXDCCALQ_Pos (13UL) /*!< Position of RFMIXDCCALQ field. */
#define RADIO_MISC_TEST1_RFMIXDCCALQ_Msk (0x7FUL << RADIO_MISC_TEST1_RFMIXDCCALQ_Pos) /*!< Bit mask of RFMIXDCCALQ field. */

/* Bits 12..6 : AAF/RFMIX dc calibration of I channel */
#define RADIO_MISC_TEST1_RFMIXDCCALI_Pos (6UL) /*!< Position of RFMIXDCCALI field. */
#define RADIO_MISC_TEST1_RFMIXDCCALI_Msk (0x7FUL << RADIO_MISC_TEST1_RFMIXDCCALI_Pos) /*!< Bit mask of RFMIXDCCALI field. */

/* Register: RADIO_MISC_TEST2 */
/* Description: Misc Aaf/ADC trim related */

/* Bit 16 : txModOvrEn */
#define RADIO_MISC_TEST2_TXMODOVREN_Pos (16UL) /*!< Position of TXMODOVREN field. */
#define RADIO_MISC_TEST2_TXMODOVREN_Msk (0x1UL << RADIO_MISC_TEST2_TXMODOVREN_Pos) /*!< Bit mask of TXMODOVREN field. */

/* Bits 15..14 : txModOvrVal */
#define RADIO_MISC_TEST2_TXMODOVRVAL_Pos (14UL) /*!< Position of TXMODOVRVAL field. */
#define RADIO_MISC_TEST2_TXMODOVRVAL_Msk (0x3UL << RADIO_MISC_TEST2_TXMODOVRVAL_Pos) /*!< Bit mask of TXMODOVRVAL field. */

/* Bit 13 : 1: override with values in SPI 0: use values from CalibrationEngineCore */
#define RADIO_MISC_TEST2_ADCRINGOSCCALOVREN_Pos (13UL) /*!< Position of ADCRINGOSCCALOVREN field. */
#define RADIO_MISC_TEST2_ADCRINGOSCCALOVREN_Msk (0x1UL << RADIO_MISC_TEST2_ADCRINGOSCCALOVREN_Pos) /*!< Bit mask of ADCRINGOSCCALOVREN field. */

/* Bit 12 : 1: override with values in SPI 0: use values from CalibrationEngineCore */
#define RADIO_MISC_TEST2_ADCOFFSETCALOVREN_Pos (12UL) /*!< Position of ADCOFFSETCALOVREN field. */
#define RADIO_MISC_TEST2_ADCOFFSETCALOVREN_Msk (0x1UL << RADIO_MISC_TEST2_ADCOFFSETCALOVREN_Pos) /*!< Bit mask of ADCOFFSETCALOVREN field. */

/* Bit 11 : ADC cal sign for Q */
#define RADIO_MISC_TEST2_ADCCALSIGNQ_Pos (11UL) /*!< Position of ADCCALSIGNQ field. */
#define RADIO_MISC_TEST2_ADCCALSIGNQ_Msk (0x1UL << RADIO_MISC_TEST2_ADCCALSIGNQ_Pos) /*!< Bit mask of ADCCALSIGNQ field. */

/* Bits 10..6 : ADC calibration current in 'Q' comparator. */
#define RADIO_MISC_TEST2_ADCCALCIQ_Pos (6UL) /*!< Position of ADCCALCIQ field. */
#define RADIO_MISC_TEST2_ADCCALCIQ_Msk (0x1FUL << RADIO_MISC_TEST2_ADCCALCIQ_Pos) /*!< Bit mask of ADCCALCIQ field. */

/* Bit 5 : ADC cal sign for I */
#define RADIO_MISC_TEST2_ADCCALSIGNI_Pos (5UL) /*!< Position of ADCCALSIGNI field. */
#define RADIO_MISC_TEST2_ADCCALSIGNI_Msk (0x1UL << RADIO_MISC_TEST2_ADCCALSIGNI_Pos) /*!< Bit mask of ADCCALSIGNI field. */

/* Bits 4..0 : ADC calibration current in 'I' comparator. */
#define RADIO_MISC_TEST2_ADCCALCII_Pos (0UL) /*!< Position of ADCCALCII field. */
#define RADIO_MISC_TEST2_ADCCALCII_Msk (0x1FUL << RADIO_MISC_TEST2_ADCCALCII_Pos) /*!< Bit mask of ADCCALCII field. */

/* Register: RADIO_RX_CONFIG */
/* Description: Misc RX config */

/* Bit 28 : if '1', the channel filter is slightly narrowed */
#define RADIO_RX_CONFIG_NARROWCHFILT_Pos (28UL) /*!< Position of NARROWCHFILT field. */
#define RADIO_RX_CONFIG_NARROWCHFILT_Msk (0x1UL << RADIO_RX_CONFIG_NARROWCHFILT_Pos) /*!< Bit mask of NARROWCHFILT field. */

/* Bit 24 : If '1', then the sign of the phase correction value in RxIQMix is inverted */
#define RADIO_RX_CONFIG_CALPHISIGN_Pos (24UL) /*!< Position of CALPHISIGN field. */
#define RADIO_RX_CONFIG_CALPHISIGN_Msk (0x1UL << RADIO_RX_CONFIG_CALPHISIGN_Pos) /*!< Bit mask of CALPHISIGN field. */

/* Bits 21..16 : adcCur */
#define RADIO_RX_CONFIG_ADCCUR_Pos (16UL) /*!< Position of ADCCUR field. */
#define RADIO_RX_CONFIG_ADCCUR_Msk (0x3FUL << RADIO_RX_CONFIG_ADCCUR_Pos) /*!< Bit mask of ADCCUR field. */

/* Bit 5 : Swap MIX_In and MIX_IP outputs if high (enables use of 'high side' mixing) */
#define RADIO_RX_CONFIG_RFMIXHIGHSIDE_Pos (5UL) /*!< Position of RFMIXHIGHSIDE field. */
#define RADIO_RX_CONFIG_RFMIXHIGHSIDE_Msk (0x1UL << RADIO_RX_CONFIG_RFMIXHIGHSIDE_Pos) /*!< Bit mask of RFMIXHIGHSIDE field. */

/* Bit 0 : Deprecated field -  Set to '1' if high-side LO */
#define RADIO_RX_CONFIG_TBD_Pos (0UL) /*!< Position of TBD field. */
#define RADIO_RX_CONFIG_TBD_Msk (0x1UL << RADIO_RX_CONFIG_TBD_Pos) /*!< Bit mask of TBD field. */

/* Register: RADIO_DAB */
/* Description: Description collection: Device address base segment n */

/* Bits 31..0 : Device address base segment n */
#define RADIO_DAB_DAB_Pos (0UL) /*!< Position of DAB field. */
#define RADIO_DAB_DAB_Msk (0xFFFFFFFFUL << RADIO_DAB_DAB_Pos) /*!< Bit mask of DAB field. */

/* Register: RADIO_DAP */
/* Description: Description collection: Device address prefix n */

/* Bits 15..0 : Device address prefix n */
#define RADIO_DAP_DAP_Pos (0UL) /*!< Position of DAP field. */
#define RADIO_DAP_DAP_Msk (0xFFFFUL << RADIO_DAP_DAP_Pos) /*!< Bit mask of DAP field. */

/* Register: RADIO_DACNF */
/* Description: Device address match configuration */

/* Bit 15 : TxAdd for device address 7 */
#define RADIO_DACNF_TXADD7_Pos (15UL) /*!< Position of TXADD7 field. */
#define RADIO_DACNF_TXADD7_Msk (0x1UL << RADIO_DACNF_TXADD7_Pos) /*!< Bit mask of TXADD7 field. */

/* Bit 14 : TxAdd for device address 6 */
#define RADIO_DACNF_TXADD6_Pos (14UL) /*!< Position of TXADD6 field. */
#define RADIO_DACNF_TXADD6_Msk (0x1UL << RADIO_DACNF_TXADD6_Pos) /*!< Bit mask of TXADD6 field. */

/* Bit 13 : TxAdd for device address 5 */
#define RADIO_DACNF_TXADD5_Pos (13UL) /*!< Position of TXADD5 field. */
#define RADIO_DACNF_TXADD5_Msk (0x1UL << RADIO_DACNF_TXADD5_Pos) /*!< Bit mask of TXADD5 field. */

/* Bit 12 : TxAdd for device address 4 */
#define RADIO_DACNF_TXADD4_Pos (12UL) /*!< Position of TXADD4 field. */
#define RADIO_DACNF_TXADD4_Msk (0x1UL << RADIO_DACNF_TXADD4_Pos) /*!< Bit mask of TXADD4 field. */

/* Bit 11 : TxAdd for device address 3 */
#define RADIO_DACNF_TXADD3_Pos (11UL) /*!< Position of TXADD3 field. */
#define RADIO_DACNF_TXADD3_Msk (0x1UL << RADIO_DACNF_TXADD3_Pos) /*!< Bit mask of TXADD3 field. */

/* Bit 10 : TxAdd for device address 2 */
#define RADIO_DACNF_TXADD2_Pos (10UL) /*!< Position of TXADD2 field. */
#define RADIO_DACNF_TXADD2_Msk (0x1UL << RADIO_DACNF_TXADD2_Pos) /*!< Bit mask of TXADD2 field. */

/* Bit 9 : TxAdd for device address 1 */
#define RADIO_DACNF_TXADD1_Pos (9UL) /*!< Position of TXADD1 field. */
#define RADIO_DACNF_TXADD1_Msk (0x1UL << RADIO_DACNF_TXADD1_Pos) /*!< Bit mask of TXADD1 field. */

/* Bit 8 : TxAdd for device address 0 */
#define RADIO_DACNF_TXADD0_Pos (8UL) /*!< Position of TXADD0 field. */
#define RADIO_DACNF_TXADD0_Msk (0x1UL << RADIO_DACNF_TXADD0_Pos) /*!< Bit mask of TXADD0 field. */

/* Bit 7 : Enable or disable device address matching using device address 7 */
#define RADIO_DACNF_ENA7_Pos (7UL) /*!< Position of ENA7 field. */
#define RADIO_DACNF_ENA7_Msk (0x1UL << RADIO_DACNF_ENA7_Pos) /*!< Bit mask of ENA7 field. */
#define RADIO_DACNF_ENA7_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA7_Enabled (0x1UL) /*!< Enabled */

/* Bit 6 : Enable or disable device address matching using device address 6 */
#define RADIO_DACNF_ENA6_Pos (6UL) /*!< Position of ENA6 field. */
#define RADIO_DACNF_ENA6_Msk (0x1UL << RADIO_DACNF_ENA6_Pos) /*!< Bit mask of ENA6 field. */
#define RADIO_DACNF_ENA6_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA6_Enabled (0x1UL) /*!< Enabled */

/* Bit 5 : Enable or disable device address matching using device address 5 */
#define RADIO_DACNF_ENA5_Pos (5UL) /*!< Position of ENA5 field. */
#define RADIO_DACNF_ENA5_Msk (0x1UL << RADIO_DACNF_ENA5_Pos) /*!< Bit mask of ENA5 field. */
#define RADIO_DACNF_ENA5_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA5_Enabled (0x1UL) /*!< Enabled */

/* Bit 4 : Enable or disable device address matching using device address 4 */
#define RADIO_DACNF_ENA4_Pos (4UL) /*!< Position of ENA4 field. */
#define RADIO_DACNF_ENA4_Msk (0x1UL << RADIO_DACNF_ENA4_Pos) /*!< Bit mask of ENA4 field. */
#define RADIO_DACNF_ENA4_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA4_Enabled (0x1UL) /*!< Enabled */

/* Bit 3 : Enable or disable device address matching using device address 3 */
#define RADIO_DACNF_ENA3_Pos (3UL) /*!< Position of ENA3 field. */
#define RADIO_DACNF_ENA3_Msk (0x1UL << RADIO_DACNF_ENA3_Pos) /*!< Bit mask of ENA3 field. */
#define RADIO_DACNF_ENA3_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA3_Enabled (0x1UL) /*!< Enabled */

/* Bit 2 : Enable or disable device address matching using device address 2 */
#define RADIO_DACNF_ENA2_Pos (2UL) /*!< Position of ENA2 field. */
#define RADIO_DACNF_ENA2_Msk (0x1UL << RADIO_DACNF_ENA2_Pos) /*!< Bit mask of ENA2 field. */
#define RADIO_DACNF_ENA2_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA2_Enabled (0x1UL) /*!< Enabled */

/* Bit 1 : Enable or disable device address matching using device address 1 */
#define RADIO_DACNF_ENA1_Pos (1UL) /*!< Position of ENA1 field. */
#define RADIO_DACNF_ENA1_Msk (0x1UL << RADIO_DACNF_ENA1_Pos) /*!< Bit mask of ENA1 field. */
#define RADIO_DACNF_ENA1_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA1_Enabled (0x1UL) /*!< Enabled */

/* Bit 0 : Enable or disable device address matching using device address 0 */
#define RADIO_DACNF_ENA0_Pos (0UL) /*!< Position of ENA0 field. */
#define RADIO_DACNF_ENA0_Msk (0x1UL << RADIO_DACNF_ENA0_Pos) /*!< Bit mask of ENA0 field. */
#define RADIO_DACNF_ENA0_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA0_Enabled (0x1UL) /*!< Enabled */

/* Register: RADIO_ADDRWINSIZE */
/* Description: address match safe window size (the number of bits after detect is asserted, before starting to look for address match). Only valid when OVERRIDE22.DISABLEADDRWINDOW is '0' */

/* Bits 28..24 : Number of bits after detect to start search address/SFD in ESB mode */
#define RADIO_ADDRWINSIZE_ESB_Pos (24UL) /*!< Position of ESB field. */
#define RADIO_ADDRWINSIZE_ESB_Msk (0x1FUL << RADIO_ADDRWINSIZE_ESB_Pos) /*!< Bit mask of ESB field. */

/* Bits 12..8 : Number of bits after detect to start search address/SFD in BLE mode */
#define RADIO_ADDRWINSIZE_BLE_Pos (8UL) /*!< Position of BLE field. */
#define RADIO_ADDRWINSIZE_BLE_Msk (0x1FUL << RADIO_ADDRWINSIZE_BLE_Pos) /*!< Bit mask of BLE field. */

/* Register: RADIO_MODECNF0 */
/* Description: Radio mode configuration register 0 */

/* Bits 28..24 : Transition time from RXDISABLE state to DISABLED state */
#define RADIO_MODECNF0_RXDISABLETIME_Pos (24UL) /*!< Position of RXDISABLETIME field. */
#define RADIO_MODECNF0_RXDISABLETIME_Msk (0x1FUL << RADIO_MODECNF0_RXDISABLETIME_Pos) /*!< Bit mask of RXDISABLETIME field. */

/* Bits 20..16 : Transition time from TXDISABLE state to DISABLED state */
#define RADIO_MODECNF0_TXDISABLETIME_Pos (16UL) /*!< Position of TXDISABLETIME field. */
#define RADIO_MODECNF0_TXDISABLETIME_Msk (0x1FUL << RADIO_MODECNF0_TXDISABLETIME_Pos) /*!< Bit mask of TXDISABLETIME field. */

/* Bits 9..8 : Default TX value */
#define RADIO_MODECNF0_DTX_Pos (8UL) /*!< Position of DTX field. */
#define RADIO_MODECNF0_DTX_Msk (0x3UL << RADIO_MODECNF0_DTX_Pos) /*!< Bit mask of DTX field. */
#define RADIO_MODECNF0_DTX_B1 (0x0UL) /*!< Transmit '1' */
#define RADIO_MODECNF0_DTX_B0 (0x1UL) /*!< Transmit '0' */
#define RADIO_MODECNF0_DTX_Center (0x2UL) /*!< Transmit center frequency */

/* Bit 4 : Energy mode */
#define RADIO_MODECNF0_ECO_Pos (4UL) /*!< Position of ECO field. */
#define RADIO_MODECNF0_ECO_Msk (0x1UL << RADIO_MODECNF0_ECO_Pos) /*!< Bit mask of ECO field. */
#define RADIO_MODECNF0_ECO_Default (0x0UL) /*!< Default energy mode */
#define RADIO_MODECNF0_ECO_Eco (0x1UL) /*!< Eco (energy) mode */

/* Bit 0 : Radio ramp-up time */
#define RADIO_MODECNF0_RU_Pos (0UL) /*!< Position of RU field. */
#define RADIO_MODECNF0_RU_Msk (0x1UL << RADIO_MODECNF0_RU_Pos) /*!< Bit mask of RU field. */
#define RADIO_MODECNF0_RU_Default (0x0UL) /*!< Default ramp-up time (tRXEN and tTXEN), compatible with firmware written for nRF51 */
#define RADIO_MODECNF0_RU_Fast (0x1UL) /*!< Fast ramp-up (tRXEN,FAST and tTXEN,FAST), see electrical specification for more information */

/* Register: RADIO_MODECNF1 */
/* Description: Radio mode configuration register 1 */

/* Bit 8 : Sideband select */
#define RADIO_MODECNF1_SSEL_Pos (8UL) /*!< Position of SSEL field. */
#define RADIO_MODECNF1_SSEL_Msk (0x1UL << RADIO_MODECNF1_SSEL_Pos) /*!< Bit mask of SSEL field. */
#define RADIO_MODECNF1_SSEL_Low (0x0UL) /*!< Low-side LO */
#define RADIO_MODECNF1_SSEL_High (0x1UL) /*!< High-side LO */

/* Bit 0 : TBD */
#define RADIO_MODECNF1_ZEROIF_Pos (0UL) /*!< Position of ZEROIF field. */
#define RADIO_MODECNF1_ZEROIF_Msk (0x1UL << RADIO_MODECNF1_ZEROIF_Pos) /*!< Bit mask of ZEROIF field. */
#define RADIO_MODECNF1_ZEROIF_Default (0x0UL) /*!< Default mode (heterodyne) */
#define RADIO_MODECNF1_ZEROIF_ZeroIF (0x1UL) /*!< Zero-IF mode */

/* Register: RADIO_AGC_TOGGLE */
/* Description: Constant AGC Gain switching, Debug */

/* Bits 1..0 : Enable or disable functional testmode for AGC */
#define RADIO_AGC_TOGGLE_AGC_TOGGLE_Pos (0UL) /*!< Position of AGC_TOGGLE field. */
#define RADIO_AGC_TOGGLE_AGC_TOGGLE_Msk (0x3UL << RADIO_AGC_TOGGLE_AGC_TOGGLE_Pos) /*!< Bit mask of AGC_TOGGLE field. */
#define RADIO_AGC_TOGGLE_AGC_TOGGLE_Disabled (0x0UL) /*!< Disable */
#define RADIO_AGC_TOGGLE_AGC_TOGGLE_Enabled (0x1UL) /*!< Enable */

/* Register: RADIO_AGC_EN */
/* Description: AGC enable */

/* Bit 0 : Enable or disable AGC */
#define RADIO_AGC_EN_AGC_EN_Pos (0UL) /*!< Position of AGC_EN field. */
#define RADIO_AGC_EN_AGC_EN_Msk (0x1UL << RADIO_AGC_EN_AGC_EN_Pos) /*!< Bit mask of AGC_EN field. */
#define RADIO_AGC_EN_AGC_EN_Disabled (0x0UL) /*!< Disable */
#define RADIO_AGC_EN_AGC_EN_Enabled (0x1UL) /*!< Enable */

/* Register: RADIO_AGC_OVERRIDE */
/* Description: Gain setting */

/* Bits 11..8 : Override for Aaf gain */
#define RADIO_AGC_OVERRIDE_AGCAAFOVERRIDE_Pos (8UL) /*!< Position of AGCAAFOVERRIDE field. */
#define RADIO_AGC_OVERRIDE_AGCAAFOVERRIDE_Msk (0xFUL << RADIO_AGC_OVERRIDE_AGCAAFOVERRIDE_Pos) /*!< Bit mask of AGCAAFOVERRIDE field. */

/* Bits 5..4 : Override for Mix gain */
#define RADIO_AGC_OVERRIDE_AGCMIXOVERRIDE_Pos (4UL) /*!< Position of AGCMIXOVERRIDE field. */
#define RADIO_AGC_OVERRIDE_AGCMIXOVERRIDE_Msk (0x3UL << RADIO_AGC_OVERRIDE_AGCMIXOVERRIDE_Pos) /*!< Bit mask of AGCMIXOVERRIDE field. */

/* Bits 2..0 : Override for Lna gain */
#define RADIO_AGC_OVERRIDE_AGCLNAOVERRIDE_Pos (0UL) /*!< Position of AGCLNAOVERRIDE field. */
#define RADIO_AGC_OVERRIDE_AGCLNAOVERRIDE_Msk (0x7UL << RADIO_AGC_OVERRIDE_AGCLNAOVERRIDE_Pos) /*!< Bit mask of AGCLNAOVERRIDE field. */

/* Register: RADIO_QOVERRIDE0 */
/* Description: Trim value override register 0 for nRF52 */

/* Bits 23..16 : Override for tPWRUP_PB_0V9 */
#define RADIO_QOVERRIDE0_TPWRUP_PB_0V9_Pos (16UL) /*!< Position of TPWRUP_PB_0V9 field. */
#define RADIO_QOVERRIDE0_TPWRUP_PB_0V9_Msk (0xFFUL << RADIO_QOVERRIDE0_TPWRUP_PB_0V9_Pos) /*!< Bit mask of TPWRUP_PB_0V9 field. */

/* Bits 15..8 : Override for tPwrupTxPa */
#define RADIO_QOVERRIDE0_TPWRUPTXPA_Pos (8UL) /*!< Position of TPWRUPTXPA field. */
#define RADIO_QOVERRIDE0_TPWRUPTXPA_Msk (0xFFUL << RADIO_QOVERRIDE0_TPWRUPTXPA_Pos) /*!< Bit mask of TPWRUPTXPA field. */

/* Bits 7..0 : Override for tPwrupFs */
#define RADIO_QOVERRIDE0_TPWRUPFS_Pos (0UL) /*!< Position of TPWRUPFS field. */
#define RADIO_QOVERRIDE0_TPWRUPFS_Msk (0xFFUL << RADIO_QOVERRIDE0_TPWRUPFS_Pos) /*!< Bit mask of TPWRUPFS field. */

/* Register: RADIO_QOVERRIDE1 */
/* Description: Trim value override register 1 for nRF52 */

/* Bits 23..16 : Override for tPwrupTx */
#define RADIO_QOVERRIDE1_TPWRUPTX_Pos (16UL) /*!< Position of TPWRUPTX field. */
#define RADIO_QOVERRIDE1_TPWRUPTX_Msk (0xFFUL << RADIO_QOVERRIDE1_TPWRUPTX_Pos) /*!< Bit mask of TPWRUPTX field. */

/* Register: RADIO_QOVERRIDE2 */
/* Description: Trim value override register 2 for nRF52 */

/* Bit 31 : if '1' enable override for TIFSDELTA */
#define RADIO_QOVERRIDE2_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE2_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE2_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 15..8 : Override for tPllSettled */
#define RADIO_QOVERRIDE2_TPLLSETTLED_Pos (8UL) /*!< Position of TPLLSETTLED field. */
#define RADIO_QOVERRIDE2_TPLLSETTLED_Msk (0xFFUL << RADIO_QOVERRIDE2_TPLLSETTLED_Pos) /*!< Bit mask of TPLLSETTLED field. */

/* Bits 7..0 : Override for tIfsDelta */
#define RADIO_QOVERRIDE2_TIFSDELTA_Pos (0UL) /*!< Position of TIFSDELTA field. */
#define RADIO_QOVERRIDE2_TIFSDELTA_Msk (0xFFUL << RADIO_QOVERRIDE2_TIFSDELTA_Pos) /*!< Bit mask of TIFSDELTA field. */

/* Register: RADIO_QOVERRIDE3 */
/* Description: Trim value override register 3 for nRF52 */

/* Bits 31..24 : Override for tRxDigEn */
#define RADIO_QOVERRIDE3_TRXDIGEN_Pos (24UL) /*!< Position of TRXDIGEN field. */
#define RADIO_QOVERRIDE3_TRXDIGEN_Msk (0xFFUL << RADIO_QOVERRIDE3_TRXDIGEN_Pos) /*!< Bit mask of TRXDIGEN field. */

/* Bits 15..8 : Override for tRxAgcEn */
#define RADIO_QOVERRIDE3_TRXAGCEN_Pos (8UL) /*!< Position of TRXAGCEN field. */
#define RADIO_QOVERRIDE3_TRXAGCEN_Msk (0xFFUL << RADIO_QOVERRIDE3_TRXAGCEN_Pos) /*!< Bit mask of TRXAGCEN field. */

/* Register: RADIO_QOVERRIDE4 */
/* Description: Trim value override register 4 for nRF52 */

/* Bit 31 : Enable or disable override of default trim values */
#define RADIO_QOVERRIDE4_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE4_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE4_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_QOVERRIDE4_ENABLE_Disabled (0x0UL) /*!< Disable */
#define RADIO_QOVERRIDE4_ENABLE_Enabled (0x1UL) /*!< Enable */

/* Bit 25 : Enable preamble filter */
#define RADIO_QOVERRIDE4_ENPREAMBFILT_Pos (25UL) /*!< Position of ENPREAMBFILT field. */
#define RADIO_QOVERRIDE4_ENPREAMBFILT_Msk (0x1UL << RADIO_QOVERRIDE4_ENPREAMBFILT_Pos) /*!< Bit mask of ENPREAMBFILT field. */

/* Bits 24..16 : Threshold for the preamble filter */
#define RADIO_QOVERRIDE4_PREAMBFILTTH_Pos (16UL) /*!< Position of PREAMBFILTTH field. */
#define RADIO_QOVERRIDE4_PREAMBFILTTH_Msk (0x1FFUL << RADIO_QOVERRIDE4_PREAMBFILTTH_Pos) /*!< Bit mask of PREAMBFILTTH field. */

/* Bit 15 : Override for bsYlevAlg */
#define RADIO_QOVERRIDE4_BSYLEVALG_Pos (15UL) /*!< Position of BSYLEVALG field. */
#define RADIO_QOVERRIDE4_BSYLEVALG_Msk (0x1UL << RADIO_QOVERRIDE4_BSYLEVALG_Pos) /*!< Bit mask of BSYLEVALG field. */

/* Bits 14..12 : Override for bsStrobeDelay */
#define RADIO_QOVERRIDE4_BSSTROBEDELAY_Pos (12UL) /*!< Position of BSSTROBEDELAY field. */
#define RADIO_QOVERRIDE4_BSSTROBEDELAY_Msk (0x7UL << RADIO_QOVERRIDE4_BSSTROBEDELAY_Pos) /*!< Bit mask of BSSTROBEDELAY field. */

/* Bit 11 : Override for bsStrobeDataIn */
#define RADIO_QOVERRIDE4_BSSTROBEDATAIN_Pos (11UL) /*!< Position of BSSTROBEDATAIN field. */
#define RADIO_QOVERRIDE4_BSSTROBEDATAIN_Msk (0x1UL << RADIO_QOVERRIDE4_BSSTROBEDATAIN_Pos) /*!< Bit mask of BSSTROBEDATAIN field. */

/* Bits 10..4 : Override for bsDataPeak2Peak */
#define RADIO_QOVERRIDE4_BSDATAPEAK2PEAK_Pos (4UL) /*!< Position of BSDATAPEAK2PEAK field. */
#define RADIO_QOVERRIDE4_BSDATAPEAK2PEAK_Msk (0x7FUL << RADIO_QOVERRIDE4_BSDATAPEAK2PEAK_Pos) /*!< Bit mask of BSDATAPEAK2PEAK field. */

/* Bit 3 : Override for bsEnableThresholdAdjust */
#define RADIO_QOVERRIDE4_BSENABLETHRESHOLDADJUST_Pos (3UL) /*!< Position of BSENABLETHRESHOLDADJUST field. */
#define RADIO_QOVERRIDE4_BSENABLETHRESHOLDADJUST_Msk (0x1UL << RADIO_QOVERRIDE4_BSENABLETHRESHOLDADJUST_Pos) /*!< Bit mask of BSENABLETHRESHOLDADJUST field. */

/* Bit 2 : Override for bsDisablePreambleBlock */
#define RADIO_QOVERRIDE4_BSDISABLEPREAMBLEBLOCK_Pos (2UL) /*!< Position of BSDISABLEPREAMBLEBLOCK field. */
#define RADIO_QOVERRIDE4_BSDISABLEPREAMBLEBLOCK_Msk (0x1UL << RADIO_QOVERRIDE4_BSDISABLEPREAMBLEBLOCK_Pos) /*!< Bit mask of BSDISABLEPREAMBLEBLOCK field. */

/* Bits 1..0 : Override for bsBitLengthToleranse */
#define RADIO_QOVERRIDE4_BSBITLENGTHTOLERANSE_Pos (0UL) /*!< Position of BSBITLENGTHTOLERANSE field. */
#define RADIO_QOVERRIDE4_BSBITLENGTHTOLERANSE_Msk (0x3UL << RADIO_QOVERRIDE4_BSBITLENGTHTOLERANSE_Pos) /*!< Bit mask of BSBITLENGTHTOLERANSE field. */

/* Register: RADIO_QOVERRIDE5 */
/* Description: Trim value override register 5 for nRF52 */

/* Bits 18..16 : Override value for preambFiltMinStrLen */
#define RADIO_QOVERRIDE5_PREAMBFILTMINSTRLEN_Pos (16UL) /*!< Position of PREAMBFILTMINSTRLEN field. */
#define RADIO_QOVERRIDE5_PREAMBFILTMINSTRLEN_Msk (0x7UL << RADIO_QOVERRIDE5_PREAMBFILTMINSTRLEN_Pos) /*!< Bit mask of PREAMBFILTMINSTRLEN field. */

/* Bits 15..8 : Override value for bitSlicerSwingTh */
#define RADIO_QOVERRIDE5_BITSLICERSWINGTH_Pos (8UL) /*!< Position of BITSLICERSWINGTH field. */
#define RADIO_QOVERRIDE5_BITSLICERSWINGTH_Msk (0xFFUL << RADIO_QOVERRIDE5_BITSLICERSWINGTH_Pos) /*!< Bit mask of BITSLICERSWINGTH field. */

/* Bits 7..0 : Override value for preambFiltCycles */
#define RADIO_QOVERRIDE5_PREAMBFILTCYCLES_Pos (0UL) /*!< Position of PREAMBFILTCYCLES field. */
#define RADIO_QOVERRIDE5_PREAMBFILTCYCLES_Msk (0xFFUL << RADIO_QOVERRIDE5_PREAMBFILTCYCLES_Pos) /*!< Bit mask of PREAMBFILTCYCLES field. */

/* Register: RADIO_QOVERRIDE6 */
/* Description: Trim value override register 6 for nRF52 */

/* Bit 31 : Override value enable for DBCCORRTH and MFBSTRBOFFSET */
#define RADIO_QOVERRIDE6_DBCCORRTHEN_Pos (31UL) /*!< Position of DBCCORRTHEN field. */
#define RADIO_QOVERRIDE6_DBCCORRTHEN_Msk (0x1UL << RADIO_QOVERRIDE6_DBCCORRTHEN_Pos) /*!< Bit mask of DBCCORRTHEN field. */

/* Bit 30 : Enable checking of several correlator peaks in hypermode */
#define RADIO_QOVERRIDE6_ENCHECKMULTIPEAKS_Pos (30UL) /*!< Position of ENCHECKMULTIPEAKS field. */
#define RADIO_QOVERRIDE6_ENCHECKMULTIPEAKS_Msk (0x1UL << RADIO_QOVERRIDE6_ENCHECKMULTIPEAKS_Pos) /*!< Bit mask of ENCHECKMULTIPEAKS field. */

/* Bits 29..24 : Override value for correlator enable threshold */
#define RADIO_QOVERRIDE6_DBCENABLETH_Pos (24UL) /*!< Position of DBCENABLETH field. */
#define RADIO_QOVERRIDE6_DBCENABLETH_Msk (0x3FUL << RADIO_QOVERRIDE6_DBCENABLETH_Pos) /*!< Bit mask of DBCENABLETH field. */

/* Bits 23..16 : Override value for correlator timeout,in bit periods (hypermode) */
#define RADIO_QOVERRIDE6_DBCTIMEOUT_Pos (16UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_QOVERRIDE6_DBCTIMEOUT_Msk (0xFFUL << RADIO_QOVERRIDE6_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */

/* Bits 14..12 : Override value for strobe offset */
#define RADIO_QOVERRIDE6_MFBSTRBOFFSET_Pos (12UL) /*!< Position of MFBSTRBOFFSET field. */
#define RADIO_QOVERRIDE6_MFBSTRBOFFSET_Msk (0x7UL << RADIO_QOVERRIDE6_MFBSTRBOFFSET_Pos) /*!< Bit mask of MFBSTRBOFFSET field. */

/* Bits 9..8 : Override value for dbcEnableSrc */
#define RADIO_QOVERRIDE6_DBCENABLESRC_Pos (8UL) /*!< Position of DBCENABLESRC field. */
#define RADIO_QOVERRIDE6_DBCENABLESRC_Msk (0x3UL << RADIO_QOVERRIDE6_DBCENABLESRC_Pos) /*!< Bit mask of DBCENABLESRC field. */
#define RADIO_QOVERRIDE6_DBCENABLESRC_AlwaysOn (0x0UL) /*!< Always on when not address match */
#define RADIO_QOVERRIDE6_DBCENABLESRC_BBLogMag (0x1UL) /*!< When bbLogMag is above a threshold */
#define RADIO_QOVERRIDE6_DBCENABLESRC_BitSlicerSwing (0x2UL) /*!< When a certain time has gone since the input to the bitslicer was above BITSLICERSWINGTH */
#define RADIO_QOVERRIDE6_DBCENABLESRC_Both (0x3UL) /*!< Both BBLogMag and BitSlicerSwing */

/* Bits 7..0 : Override value for correlation Threshold */
#define RADIO_QOVERRIDE6_DBCCORRTH_Pos (0UL) /*!< Position of DBCCORRTH field. */
#define RADIO_QOVERRIDE6_DBCCORRTH_Msk (0xFFUL << RADIO_QOVERRIDE6_DBCCORRTH_Pos) /*!< Bit mask of DBCCORRTH field. */

/* Register: RADIO_QOVERRIDE7 */
/* Description: Trim value override register 7 for nRF52 */

/* Bit 31 : Override enable for DRIFTALPHA, DBCADDRTIMEOUT and DRIFTVALIDTH */
#define RADIO_QOVERRIDE7_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE7_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE7_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bit 25 : Disable framesync timeout (early address match timeout) for BLE LR mode. No override-enable to set for this (hypermode) */
#define RADIO_QOVERRIDE7_DISABLEFRAMESYNCLRTIMEOUT_Pos (25UL) /*!< Position of DISABLEFRAMESYNCLRTIMEOUT field. */
#define RADIO_QOVERRIDE7_DISABLEFRAMESYNCLRTIMEOUT_Msk (0x1UL << RADIO_QOVERRIDE7_DISABLEFRAMESYNCLRTIMEOUT_Pos) /*!< Bit mask of DISABLEFRAMESYNCLRTIMEOUT field. */

/* Bits 24..16 : Override value for driftValidTh, drift estimator (hypermode) */
#define RADIO_QOVERRIDE7_DRIFTVALIDTH_Pos (16UL) /*!< Position of DRIFTVALIDTH field. */
#define RADIO_QOVERRIDE7_DRIFTVALIDTH_Msk (0x1FFUL << RADIO_QOVERRIDE7_DRIFTVALIDTH_Pos) /*!< Bit mask of DRIFTVALIDTH field. */

/* Bits 15..8 : Override value for address match timeout, [in bit periods] (hypermode) */
#define RADIO_QOVERRIDE7_DBCADDRTIMEOUT_Pos (8UL) /*!< Position of DBCADDRTIMEOUT field. */
#define RADIO_QOVERRIDE7_DBCADDRTIMEOUT_Msk (0xFFUL << RADIO_QOVERRIDE7_DBCADDRTIMEOUT_Pos) /*!< Bit mask of DBCADDRTIMEOUT field. */

/* Bits 7..0 : Override value for IIR feedback , drift estimator (hypermode) */
#define RADIO_QOVERRIDE7_DRIFTALPHA_Pos (0UL) /*!< Position of DRIFTALPHA field. */
#define RADIO_QOVERRIDE7_DRIFTALPHA_Msk (0xFFUL << RADIO_QOVERRIDE7_DRIFTALPHA_Pos) /*!< Bit mask of DRIFTALPHA field. */

/* Register: RADIO_QOVERRIDE8 */
/* Description: Trim value override register 8 for nRF52 */

/* Bit 31 : Override value enable for override register 8 */
#define RADIO_QOVERRIDE8_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE8_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE8_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 28..20 : Override value for driftDelayTh, drift estimator (hypermode) */
#define RADIO_QOVERRIDE8_DRIFTDELAYTH_Pos (20UL) /*!< Position of DRIFTDELAYTH field. */
#define RADIO_QOVERRIDE8_DRIFTDELAYTH_Msk (0x1FFUL << RADIO_QOVERRIDE8_DRIFTDELAYTH_Pos) /*!< Bit mask of DRIFTDELAYTH field. */

/* Bits 19..16 : Override value for driftMaxDist, drift estimator (hypermode) */
#define RADIO_QOVERRIDE8_DRIFTMAXDIST_Pos (16UL) /*!< Position of DRIFTMAXDIST field. */
#define RADIO_QOVERRIDE8_DRIFTMAXDIST_Msk (0xFUL << RADIO_QOVERRIDE8_DRIFTMAXDIST_Pos) /*!< Bit mask of DRIFTMAXDIST field. */

/* Bits 8..0 : Override value for driftLowTh, drift estimator (hypermode) */
#define RADIO_QOVERRIDE8_DRIFTLOWTH_Pos (0UL) /*!< Position of DRIFTLOWTH field. */
#define RADIO_QOVERRIDE8_DRIFTLOWTH_Msk (0x1FFUL << RADIO_QOVERRIDE8_DRIFTLOWTH_Pos) /*!< Bit mask of DRIFTLOWTH field. */

/* Register: RADIO_QOVERRIDE9 */
/* Description: Trim value override register 9 for nRF52 */

/* Bits 25..20 : Decay delay for the IQ scaler */
#define RADIO_QOVERRIDE9_SCALERDECAYDELAY_Pos (20UL) /*!< Position of SCALERDECAYDELAY field. */
#define RADIO_QOVERRIDE9_SCALERDECAYDELAY_Msk (0x3FUL << RADIO_QOVERRIDE9_SCALERDECAYDELAY_Pos) /*!< Bit mask of SCALERDECAYDELAY field. */

/* Bit 17 : modIndexOvrVal */
#define RADIO_QOVERRIDE9_MODINDEXOVRVAL_Pos (17UL) /*!< Position of MODINDEXOVRVAL field. */
#define RADIO_QOVERRIDE9_MODINDEXOVRVAL_Msk (0x1UL << RADIO_QOVERRIDE9_MODINDEXOVRVAL_Pos) /*!< Bit mask of MODINDEXOVRVAL field. */

/* Bit 16 : modIndexOvrEn */
#define RADIO_QOVERRIDE9_MODINDEXOVREN_Pos (16UL) /*!< Position of MODINDEXOVREN field. */
#define RADIO_QOVERRIDE9_MODINDEXOVREN_Msk (0x1UL << RADIO_QOVERRIDE9_MODINDEXOVREN_Pos) /*!< Bit mask of MODINDEXOVREN field. */

/* Bits 15..8 : Bit slicer swing time */
#define RADIO_QOVERRIDE9_BITSLICERSWINGTIME_Pos (8UL) /*!< Position of BITSLICERSWINGTIME field. */
#define RADIO_QOVERRIDE9_BITSLICERSWINGTIME_Msk (0xFFUL << RADIO_QOVERRIDE9_BITSLICERSWINGTIME_Pos) /*!< Bit mask of BITSLICERSWINGTIME field. */

/* Bit 2 : Override value for demodInvert (standard and hyper) */
#define RADIO_QOVERRIDE9_DEMODINVERT_Pos (2UL) /*!< Position of DEMODINVERT field. */
#define RADIO_QOVERRIDE9_DEMODINVERT_Msk (0x1UL << RADIO_QOVERRIDE9_DEMODINVERT_Pos) /*!< Bit mask of DEMODINVERT field. */

/* Bits 1..0 : Override value for psdDemodDelay (standard mode) */
#define RADIO_QOVERRIDE9_PSDDEMODDELAY_Pos (0UL) /*!< Position of PSDDEMODDELAY field. */
#define RADIO_QOVERRIDE9_PSDDEMODDELAY_Msk (0x3UL << RADIO_QOVERRIDE9_PSDDEMODDELAY_Pos) /*!< Bit mask of PSDDEMODDELAY field. */

/* Register: RADIO_QOVERRIDE10 */
/* Description: Trim value override register 10 for nRF52 */

/* Bits 31..28 : Override value for agcRFGainMin */
#define RADIO_QOVERRIDE10_AGCRFGAINMIN_Pos (28UL) /*!< Position of AGCRFGAINMIN field. */
#define RADIO_QOVERRIDE10_AGCRFGAINMIN_Msk (0xFUL << RADIO_QOVERRIDE10_AGCRFGAINMIN_Pos) /*!< Bit mask of AGCRFGAINMIN field. */

/* Bits 27..24 : Override value for agcRFGainMax */
#define RADIO_QOVERRIDE10_AGCRFGAINMAX_Pos (24UL) /*!< Position of AGCRFGAINMAX field. */
#define RADIO_QOVERRIDE10_AGCRFGAINMAX_Msk (0xFUL << RADIO_QOVERRIDE10_AGCRFGAINMAX_Pos) /*!< Bit mask of AGCRFGAINMAX field. */

/* Bit 20 : Override value for agcEnableGainSwitch */
#define RADIO_QOVERRIDE10_AGCENABLEGAINSWITCH_Pos (20UL) /*!< Position of AGCENABLEGAINSWITCH field. */
#define RADIO_QOVERRIDE10_AGCENABLEGAINSWITCH_Msk (0x1UL << RADIO_QOVERRIDE10_AGCENABLEGAINSWITCH_Pos) /*!< Bit mask of AGCENABLEGAINSWITCH field. */

/* Bit 19 : Modifier bit for AGCFREEZEGAINENABLE */
#define RADIO_QOVERRIDE10_AGCFREEZEAFTERREF_Pos (19UL) /*!< Position of AGCFREEZEAFTERREF field. */
#define RADIO_QOVERRIDE10_AGCFREEZEAFTERREF_Msk (0x1UL << RADIO_QOVERRIDE10_AGCFREEZEAFTERREF_Pos) /*!< Bit mask of AGCFREEZEAFTERREF field. */
#define RADIO_QOVERRIDE10_AGCFREEZEAFTERREF_EntireCTE (0x0UL) /*!< Gain freeze will apply to whole CTE */
#define RADIO_QOVERRIDE10_AGCFREEZEAFTERREF_AfterRefPeriod (0x1UL) /*!< Gain freeze will apply only after the reference period of the CTE */

/* Bit 18 : Override AGC gain setting during CTE */
#define RADIO_QOVERRIDE10_AGCFREEZEGAINENABLE_Pos (18UL) /*!< Position of AGCFREEZEGAINENABLE field. */
#define RADIO_QOVERRIDE10_AGCFREEZEGAINENABLE_Msk (0x1UL << RADIO_QOVERRIDE10_AGCFREEZEGAINENABLE_Pos) /*!< Bit mask of AGCFREEZEGAINENABLE field. */
#define RADIO_QOVERRIDE10_AGCFREEZEGAINENABLE_Adjust (0x0UL) /*!< AGC gain settings will keep adjusting during CTE */
#define RADIO_QOVERRIDE10_AGCFREEZEGAINENABLE_Freeze (0x1UL) /*!< AGC gain settings will freeze (not keep adjusting) during CTE */

/* Bits 17..12 : Override value for agcWaitPacket */
#define RADIO_QOVERRIDE10_AGCWAITPACKET_Pos (12UL) /*!< Position of AGCWAITPACKET field. */
#define RADIO_QOVERRIDE10_AGCWAITPACKET_Msk (0x3FUL << RADIO_QOVERRIDE10_AGCWAITPACKET_Pos) /*!< Bit mask of AGCWAITPACKET field. */

/* Bits 11..8 : Override value for agcRFpkDetResetCount */
#define RADIO_QOVERRIDE10_AGCRFPKDETRESETCOUNT_Pos (8UL) /*!< Position of AGCRFPKDETRESETCOUNT field. */
#define RADIO_QOVERRIDE10_AGCRFPKDETRESETCOUNT_Msk (0xFUL << RADIO_QOVERRIDE10_AGCRFPKDETRESETCOUNT_Pos) /*!< Bit mask of AGCRFPKDETRESETCOUNT field. */

/* Bits 5..0 : Override value for agcWait */
#define RADIO_QOVERRIDE10_AGCWAIT_Pos (0UL) /*!< Position of AGCWAIT field. */
#define RADIO_QOVERRIDE10_AGCWAIT_Msk (0x3FUL << RADIO_QOVERRIDE10_AGCWAIT_Pos) /*!< Bit mask of AGCWAIT field. */

/* Register: RADIO_QOVERRIDE11 */
/* Description: Trim value override register 11 for nRF52 */

/* Bits 31..24 : used in Rssi moving exponential averager */
#define RADIO_QOVERRIDE11_ALPHA_Pos (24UL) /*!< Position of ALPHA field. */
#define RADIO_QOVERRIDE11_ALPHA_Msk (0xFFUL << RADIO_QOVERRIDE11_ALPHA_Pos) /*!< Bit mask of ALPHA field. */

/* Bits 21..19 : Override value for aggIFgainStepDown */
#define RADIO_QOVERRIDE11_AGGIFGAINSTEPDOWN_Pos (19UL) /*!< Position of AGGIFGAINSTEPDOWN field. */
#define RADIO_QOVERRIDE11_AGGIFGAINSTEPDOWN_Msk (0x7UL << RADIO_QOVERRIDE11_AGGIFGAINSTEPDOWN_Pos) /*!< Bit mask of AGGIFGAINSTEPDOWN field. */

/* Bits 18..16 : Override value for aggIFgainStepUp */
#define RADIO_QOVERRIDE11_AGGIFGAINSTEPUP_Pos (16UL) /*!< Position of AGGIFGAINSTEPUP field. */
#define RADIO_QOVERRIDE11_AGGIFGAINSTEPUP_Msk (0x7UL << RADIO_QOVERRIDE11_AGGIFGAINSTEPUP_Pos) /*!< Bit mask of AGGIFGAINSTEPUP field. */

/* Bits 13..11 : Override value for agcIFgainMin */
#define RADIO_QOVERRIDE11_AGCIFGAINMIN_Pos (11UL) /*!< Position of AGCIFGAINMIN field. */
#define RADIO_QOVERRIDE11_AGCIFGAINMIN_Msk (0x7UL << RADIO_QOVERRIDE11_AGCIFGAINMIN_Pos) /*!< Bit mask of AGCIFGAINMIN field. */

/* Bits 10..8 : Override value for agcIFgainMax */
#define RADIO_QOVERRIDE11_AGCIFGAINMAX_Pos (8UL) /*!< Position of AGCIFGAINMAX field. */
#define RADIO_QOVERRIDE11_AGCIFGAINMAX_Msk (0x7UL << RADIO_QOVERRIDE11_AGCIFGAINMAX_Pos) /*!< Bit mask of AGCIFGAINMAX field. */

/* Bits 7..4 : Override value for agcRFgainStepDown */
#define RADIO_QOVERRIDE11_AGCRFGAINSTEPDOWN_Pos (4UL) /*!< Position of AGCRFGAINSTEPDOWN field. */
#define RADIO_QOVERRIDE11_AGCRFGAINSTEPDOWN_Msk (0xFUL << RADIO_QOVERRIDE11_AGCRFGAINSTEPDOWN_Pos) /*!< Bit mask of AGCRFGAINSTEPDOWN field. */

/* Bits 3..0 : Override value for agcRFgainStepUp */
#define RADIO_QOVERRIDE11_AGCRFGAINSTEPUP_Pos (0UL) /*!< Position of AGCRFGAINSTEPUP field. */
#define RADIO_QOVERRIDE11_AGCRFGAINSTEPUP_Msk (0xFUL << RADIO_QOVERRIDE11_AGCRFGAINSTEPUP_Pos) /*!< Bit mask of AGCRFGAINSTEPUP field. */

/* Register: RADIO_QOVERRIDE12 */
/* Description: Trim value override register 12 for nRF52 */

/* Bits 27..16 : Override value for IfpkDetLowThres */
#define RADIO_QOVERRIDE12_IFPKDETLOWTHRES_Pos (16UL) /*!< Position of IFPKDETLOWTHRES field. */
#define RADIO_QOVERRIDE12_IFPKDETLOWTHRES_Msk (0xFFFUL << RADIO_QOVERRIDE12_IFPKDETLOWTHRES_Pos) /*!< Bit mask of IFPKDETLOWTHRES field. */

/* Bits 15..12 : Signed correction value for how much the saturation information is delayed from the input ADC samples to the samples being stored to RAM in direction finding operation */
#define RADIO_QOVERRIDE12_SATDELAYCORRECTION_Pos (12UL) /*!< Position of SATDELAYCORRECTION field. */
#define RADIO_QOVERRIDE12_SATDELAYCORRECTION_Msk (0xFUL << RADIO_QOVERRIDE12_SATDELAYCORRECTION_Pos) /*!< Bit mask of SATDELAYCORRECTION field. */

/* Bits 11..0 : Override value for IfpkDetHighThres */
#define RADIO_QOVERRIDE12_IFPKDETHIGHTHRES_Pos (0UL) /*!< Position of IFPKDETHIGHTHRES field. */
#define RADIO_QOVERRIDE12_IFPKDETHIGHTHRES_Msk (0xFFFUL << RADIO_QOVERRIDE12_IFPKDETHIGHTHRES_Pos) /*!< Bit mask of IFPKDETHIGHTHRES field. */

/* Register: RADIO_QOVERRIDE13 */
/* Description: Trim value override register 13 for nRF52 */

/* Bits 27..16 : Override value for BbpkDetLowThres */
#define RADIO_QOVERRIDE13_BBPKDETLOWTHRES_Pos (16UL) /*!< Position of BBPKDETLOWTHRES field. */
#define RADIO_QOVERRIDE13_BBPKDETLOWTHRES_Msk (0xFFFUL << RADIO_QOVERRIDE13_BBPKDETLOWTHRES_Pos) /*!< Bit mask of BBPKDETLOWTHRES field. */

/* Bits 11..0 : Override value for BbpkDetHighThres */
#define RADIO_QOVERRIDE13_BBPKDETHIGHTHRES_Pos (0UL) /*!< Position of BBPKDETHIGHTHRES field. */
#define RADIO_QOVERRIDE13_BBPKDETHIGHTHRES_Msk (0xFFFUL << RADIO_QOVERRIDE13_BBPKDETHIGHTHRES_Pos) /*!< Bit mask of BBPKDETHIGHTHRES field. */

/* Register: RADIO_QOVERRIDE14 */
/* Description: Trim value override register 14 for nRF52 */

/* Bit 31 : if '1' enable override for CALPHI/CALAMP */
#define RADIO_QOVERRIDE14_OVRENCALPHICALAMP_Pos (31UL) /*!< Position of OVRENCALPHICALAMP field. */
#define RADIO_QOVERRIDE14_OVRENCALPHICALAMP_Msk (0x1UL << RADIO_QOVERRIDE14_OVRENCALPHICALAMP_Pos) /*!< Bit mask of OVRENCALPHICALAMP field. */

/* Bits 25..21 : Override value for calamp (programmable IandQ gain mismatch correction) */
#define RADIO_QOVERRIDE14_CALAMP_Pos (21UL) /*!< Position of CALAMP field. */
#define RADIO_QOVERRIDE14_CALAMP_Msk (0x1FUL << RADIO_QOVERRIDE14_CALAMP_Pos) /*!< Bit mask of CALAMP field. */

/* Bits 20..16 : Override value for calphi (programmable IandQ phase mismatch correction) */
#define RADIO_QOVERRIDE14_CALPHI_Pos (16UL) /*!< Position of CALPHI field. */
#define RADIO_QOVERRIDE14_CALPHI_Msk (0x1FUL << RADIO_QOVERRIDE14_CALPHI_Pos) /*!< Bit mask of CALPHI field. */

/* Bits 13..8 : Override value for BbpkDetDecayStep */
#define RADIO_QOVERRIDE14_BBPKDETDECAYSTEP_Pos (8UL) /*!< Position of BBPKDETDECAYSTEP field. */
#define RADIO_QOVERRIDE14_BBPKDETDECAYSTEP_Msk (0x3FUL << RADIO_QOVERRIDE14_BBPKDETDECAYSTEP_Pos) /*!< Bit mask of BBPKDETDECAYSTEP field. */

/* Bits 5..0 : Override value for IfpkDetDecayStep */
#define RADIO_QOVERRIDE14_IFPKDETDECAYSTEP_Pos (0UL) /*!< Position of IFPKDETDECAYSTEP field. */
#define RADIO_QOVERRIDE14_IFPKDETDECAYSTEP_Msk (0x3FUL << RADIO_QOVERRIDE14_IFPKDETDECAYSTEP_Pos) /*!< Bit mask of IFPKDETDECAYSTEP field. */

/* Register: RADIO_QOVERRIDE15 */
/* Description: Trim value override register 15 for nRF52 */

/* Bits 31..24 : Override value for tCalStart */
#define RADIO_QOVERRIDE15_TCALSTART_Pos (24UL) /*!< Position of TCALSTART field. */
#define RADIO_QOVERRIDE15_TCALSTART_Msk (0xFFUL << RADIO_QOVERRIDE15_TCALSTART_Pos) /*!< Bit mask of TCALSTART field. */

/* Bits 23..16 : Override value for tPwrupAdc */
#define RADIO_QOVERRIDE15_TPWRUPADC_Pos (16UL) /*!< Position of TPWRUPADC field. */
#define RADIO_QOVERRIDE15_TPWRUPADC_Msk (0xFFUL << RADIO_QOVERRIDE15_TPWRUPADC_Pos) /*!< Bit mask of TPWRUPADC field. */

/* Bits 15..8 : Override value for tFsStart */
#define RADIO_QOVERRIDE15_TFSSTART_Pos (8UL) /*!< Position of TFSSTART field. */
#define RADIO_QOVERRIDE15_TFSSTART_Msk (0xFFUL << RADIO_QOVERRIDE15_TFSSTART_Pos) /*!< Bit mask of TFSSTART field. */

/* Bits 7..0 : Override value for tArstFs */
#define RADIO_QOVERRIDE15_TARSTFS_Pos (0UL) /*!< Position of TARSTFS field. */
#define RADIO_QOVERRIDE15_TARSTFS_Msk (0xFFUL << RADIO_QOVERRIDE15_TARSTFS_Pos) /*!< Bit mask of TARSTFS field. */

/* Register: RADIO_QOVERRIDE16 */
/* Description: Trim value override register 16 for nRF52 */

/* Bits 31..24 : Override value for tPwrupPkd */
#define RADIO_QOVERRIDE16_TPWRUPPKD_Pos (24UL) /*!< Position of TPWRUPPKD field. */
#define RADIO_QOVERRIDE16_TPWRUPPKD_Msk (0xFFUL << RADIO_QOVERRIDE16_TPWRUPPKD_Pos) /*!< Bit mask of TPWRUPPKD field. */

/* Bits 23..16 : Override value for tPwrupLna */
#define RADIO_QOVERRIDE16_TPWRUPLNA_Pos (16UL) /*!< Position of TPWRUPLNA field. */
#define RADIO_QOVERRIDE16_TPWRUPLNA_Msk (0xFFUL << RADIO_QOVERRIDE16_TPWRUPLNA_Pos) /*!< Bit mask of TPWRUPLNA field. */

/* Bits 15..8 : Override value for tPwrupMix */
#define RADIO_QOVERRIDE16_TPWRUPMIX_Pos (8UL) /*!< Position of TPWRUPMIX field. */
#define RADIO_QOVERRIDE16_TPWRUPMIX_Msk (0xFFUL << RADIO_QOVERRIDE16_TPWRUPMIX_Pos) /*!< Bit mask of TPWRUPMIX field. */

/* Bits 7..0 : Override value for tPwrupAaf */
#define RADIO_QOVERRIDE16_TPWRUPAAF_Pos (0UL) /*!< Position of TPWRUPAAF field. */
#define RADIO_QOVERRIDE16_TPWRUPAAF_Msk (0xFFUL << RADIO_QOVERRIDE16_TPWRUPAAF_Pos) /*!< Bit mask of TPWRUPAAF field. */

/* Register: RADIO_QOVERRIDE17 */
/* Description: Trim value override register 17 for nRF52 */

/* Bits 31..24 : Override value for tPwrupTxDac */
#define RADIO_QOVERRIDE17_TPWRUPTXDAC_Pos (24UL) /*!< Position of TPWRUPTXDAC field. */
#define RADIO_QOVERRIDE17_TPWRUPTXDAC_Msk (0xFFUL << RADIO_QOVERRIDE17_TPWRUPTXDAC_Pos) /*!< Bit mask of TPWRUPTXDAC field. */

/* Bits 23..16 : Override value for tArstAdcEnd */
#define RADIO_QOVERRIDE17_TARSTADCEND_Pos (16UL) /*!< Position of TARSTADCEND field. */
#define RADIO_QOVERRIDE17_TARSTADCEND_Msk (0xFFUL << RADIO_QOVERRIDE17_TARSTADCEND_Pos) /*!< Bit mask of TARSTADCEND field. */

/* Bits 15..8 : Override value for tArstAdc */
#define RADIO_QOVERRIDE17_TARSTADC_Pos (8UL) /*!< Position of TARSTADC field. */
#define RADIO_QOVERRIDE17_TARSTADC_Msk (0xFFUL << RADIO_QOVERRIDE17_TARSTADC_Pos) /*!< Bit mask of TARSTADC field. */

/* Bits 7..0 : Override value for tRfMixEn */
#define RADIO_QOVERRIDE17_TRFMIXEN_Pos (0UL) /*!< Position of TRFMIXEN field. */
#define RADIO_QOVERRIDE17_TRFMIXEN_Msk (0xFFUL << RADIO_QOVERRIDE17_TRFMIXEN_Pos) /*!< Bit mask of TRFMIXEN field. */

/* Register: RADIO_QOVERRIDE18 */
/* Description: Trim value override register 18 for nRF52 */

/* Bits 31..30 : Override enable: ovrEnPwrupTxDac */
#define RADIO_QOVERRIDE18_OVRENPWRUPTXDAC_Pos (30UL) /*!< Position of OVRENPWRUPTXDAC field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPTXDAC_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPTXDAC_Pos) /*!< Bit mask of OVRENPWRUPTXDAC field. */

/* Bit 29 : Override enable: ovrEnPwrupTxPa */
#define RADIO_QOVERRIDE18_OVRENPWRUPTXPA_Pos (29UL) /*!< Position of OVRENPWRUPTXPA field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPTXPA_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENPWRUPTXPA_Pos) /*!< Bit mask of OVRENPWRUPTXPA field. */

/* Bits 28..27 : Override enable: ovrEnPwrupTx */
#define RADIO_QOVERRIDE18_OVRENPWRUPTX_Pos (27UL) /*!< Position of OVRENPWRUPTX field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPTX_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPTX_Pos) /*!< Bit mask of OVRENPWRUPTX field. */

/* Bit 26 : Override enable: ovrEnArstAdc */
#define RADIO_QOVERRIDE18_OVRENARSTADC_Pos (26UL) /*!< Position of OVRENARSTADC field. */
#define RADIO_QOVERRIDE18_OVRENARSTADC_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENARSTADC_Pos) /*!< Bit mask of OVRENARSTADC field. */

/* Bit 25 : Override enable: ovrEnRfMixEn */
#define RADIO_QOVERRIDE18_OVRENRFMIXEN_Pos (25UL) /*!< Position of OVRENRFMIXEN field. */
#define RADIO_QOVERRIDE18_OVRENRFMIXEN_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENRFMIXEN_Pos) /*!< Bit mask of OVRENRFMIXEN field. */

/* Bit 24 : Override enable: ovrEnPwrupPkd */
#define RADIO_QOVERRIDE18_OVRENPWRUPPKD_Pos (24UL) /*!< Position of OVRENPWRUPPKD field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPPKD_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENPWRUPPKD_Pos) /*!< Bit mask of OVRENPWRUPPKD field. */

/* Bits 23..22 : Override enable: ovrEnPwrupLna */
#define RADIO_QOVERRIDE18_OVRENPWRUPLNA_Pos (22UL) /*!< Position of OVRENPWRUPLNA field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPLNA_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPLNA_Pos) /*!< Bit mask of OVRENPWRUPLNA field. */

/* Bits 21..20 : Override enable: ovrEnPwrupMix */
#define RADIO_QOVERRIDE18_OVRENPWRUPMIX_Pos (20UL) /*!< Position of OVRENPWRUPMIX field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPMIX_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPMIX_Pos) /*!< Bit mask of OVRENPWRUPMIX field. */

/* Bits 19..18 : Override enable: ovrEnPwrupAaf */
#define RADIO_QOVERRIDE18_OVRENPWRUPAAF_Pos (18UL) /*!< Position of OVRENPWRUPAAF field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPAAF_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPAAF_Pos) /*!< Bit mask of OVRENPWRUPAAF field. */

/* Bits 17..16 : Override enable: ovrEnPwrupAdc */
#define RADIO_QOVERRIDE18_OVRENPWRUPADC_Pos (16UL) /*!< Position of OVRENPWRUPADC field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPADC_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPADC_Pos) /*!< Bit mask of OVRENPWRUPADC field. */

/* Bit 15 : Override enable: ovrEnPwrupPbias */
#define RADIO_QOVERRIDE18_OVRENPWRUPPBIAS_Pos (15UL) /*!< Position of OVRENPWRUPPBIAS field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPPBIAS_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENPWRUPPBIAS_Pos) /*!< Bit mask of OVRENPWRUPPBIAS field. */

/* Bits 14..13 : Override enable: ovrEnPwrupFs */
#define RADIO_QOVERRIDE18_OVRENPWRUPFS_Pos (13UL) /*!< Position of OVRENPWRUPFS field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPFS_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPFS_Pos) /*!< Bit mask of OVRENPWRUPFS field. */

/* Bit 12 : Override enable: ovrEnFsStart */
#define RADIO_QOVERRIDE18_OVRENFSSTART_Pos (12UL) /*!< Position of OVRENFSSTART field. */
#define RADIO_QOVERRIDE18_OVRENFSSTART_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENFSSTART_Pos) /*!< Bit mask of OVRENFSSTART field. */

/* Bit 11 : Override enable: ovrEnArstFs */
#define RADIO_QOVERRIDE18_OVRENARSTFS_Pos (11UL) /*!< Position of OVRENARSTFS field. */
#define RADIO_QOVERRIDE18_OVRENARSTFS_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENARSTFS_Pos) /*!< Bit mask of OVRENARSTFS field. */

/* Bit 10 : Override enable: ovrEnRxDigEn */
#define RADIO_QOVERRIDE18_OVRENRXDIGEN_Pos (10UL) /*!< Position of OVRENRXDIGEN field. */
#define RADIO_QOVERRIDE18_OVRENRXDIGEN_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENRXDIGEN_Pos) /*!< Bit mask of OVRENRXDIGEN field. */

/* Bit 9 : Override enable: ovrEnAdcCkEn */
#define RADIO_QOVERRIDE18_OVRENADCCKEN_Pos (9UL) /*!< Position of OVRENADCCKEN field. */
#define RADIO_QOVERRIDE18_OVRENADCCKEN_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENADCCKEN_Pos) /*!< Bit mask of OVRENADCCKEN field. */

/* Bit 8 : Override enable: ovrEnFsCkEn */
#define RADIO_QOVERRIDE18_OVRENFSCKEN_Pos (8UL) /*!< Position of OVRENFSCKEN field. */
#define RADIO_QOVERRIDE18_OVRENFSCKEN_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENFSCKEN_Pos) /*!< Bit mask of OVRENFSCKEN field. */

/* Register: RADIO_QOVERRIDE19 */
/* Description: Trim value override register 19 for nRF52 */

/* Bits 31..30 : Override value: ovrValPwrupTxDac */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTXDAC_Pos (30UL) /*!< Position of OVRVALPWRUPTXDAC field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTXDAC_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPTXDAC_Pos) /*!< Bit mask of OVRVALPWRUPTXDAC field. */

/* Bit 29 : Override value: ovrValPwrupTxPa */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTXPA_Pos (29UL) /*!< Position of OVRVALPWRUPTXPA field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTXPA_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALPWRUPTXPA_Pos) /*!< Bit mask of OVRVALPWRUPTXPA field. */

/* Bits 28..27 : Override value: ovrValPwrupTx */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTX_Pos (27UL) /*!< Position of OVRVALPWRUPTX field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTX_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPTX_Pos) /*!< Bit mask of OVRVALPWRUPTX field. */

/* Bit 26 : Override value: ovrValArstAdc */
#define RADIO_QOVERRIDE19_OVRVALARSTADC_Pos (26UL) /*!< Position of OVRVALARSTADC field. */
#define RADIO_QOVERRIDE19_OVRVALARSTADC_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALARSTADC_Pos) /*!< Bit mask of OVRVALARSTADC field. */

/* Bit 25 : Override value: ovrValRfMixEn */
#define RADIO_QOVERRIDE19_OVRVALRFMIXEN_Pos (25UL) /*!< Position of OVRVALRFMIXEN field. */
#define RADIO_QOVERRIDE19_OVRVALRFMIXEN_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALRFMIXEN_Pos) /*!< Bit mask of OVRVALRFMIXEN field. */

/* Bit 24 : Override value: ovrValPwrupPkd */
#define RADIO_QOVERRIDE19_OVRVALPWRUPPKD_Pos (24UL) /*!< Position of OVRVALPWRUPPKD field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPPKD_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALPWRUPPKD_Pos) /*!< Bit mask of OVRVALPWRUPPKD field. */

/* Bits 23..22 : Override value: ovrValPwrupLna */
#define RADIO_QOVERRIDE19_OVRVALPWRUPLNA_Pos (22UL) /*!< Position of OVRVALPWRUPLNA field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPLNA_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPLNA_Pos) /*!< Bit mask of OVRVALPWRUPLNA field. */

/* Bits 21..20 : Override value: ovrValPwrupMix */
#define RADIO_QOVERRIDE19_OVRVALPWRUPMIX_Pos (20UL) /*!< Position of OVRVALPWRUPMIX field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPMIX_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPMIX_Pos) /*!< Bit mask of OVRVALPWRUPMIX field. */

/* Bits 19..18 : Override value: ovrValPwrupAaf */
#define RADIO_QOVERRIDE19_OVRVALPWRUPAAF_Pos (18UL) /*!< Position of OVRVALPWRUPAAF field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPAAF_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPAAF_Pos) /*!< Bit mask of OVRVALPWRUPAAF field. */

/* Bits 17..16 : Override value: ovrVlPwrupAdc */
#define RADIO_QOVERRIDE19_OVRVLPWRUPADC_Pos (16UL) /*!< Position of OVRVLPWRUPADC field. */
#define RADIO_QOVERRIDE19_OVRVLPWRUPADC_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVLPWRUPADC_Pos) /*!< Bit mask of OVRVLPWRUPADC field. */

/* Bit 15 : Override value: ovrValPwrupPbias */
#define RADIO_QOVERRIDE19_OVRVALPWRUPPBIAS_Pos (15UL) /*!< Position of OVRVALPWRUPPBIAS field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPPBIAS_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALPWRUPPBIAS_Pos) /*!< Bit mask of OVRVALPWRUPPBIAS field. */

/* Bits 14..13 : Override value: ovrValPwrupFs */
#define RADIO_QOVERRIDE19_OVRVALPWRUPFS_Pos (13UL) /*!< Position of OVRVALPWRUPFS field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPFS_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPFS_Pos) /*!< Bit mask of OVRVALPWRUPFS field. */

/* Bit 12 : Override value: ovrValFsStart */
#define RADIO_QOVERRIDE19_OVRVALFSSTART_Pos (12UL) /*!< Position of OVRVALFSSTART field. */
#define RADIO_QOVERRIDE19_OVRVALFSSTART_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALFSSTART_Pos) /*!< Bit mask of OVRVALFSSTART field. */

/* Bit 11 : Override value: ovrValArstFs */
#define RADIO_QOVERRIDE19_OVRVALARSTFS_Pos (11UL) /*!< Position of OVRVALARSTFS field. */
#define RADIO_QOVERRIDE19_OVRVALARSTFS_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALARSTFS_Pos) /*!< Bit mask of OVRVALARSTFS field. */

/* Bit 10 : Override value:  ovrValRxDigEn */
#define RADIO_QOVERRIDE19_OVRVALRXDIGEN_Pos (10UL) /*!< Position of OVRVALRXDIGEN field. */
#define RADIO_QOVERRIDE19_OVRVALRXDIGEN_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALRXDIGEN_Pos) /*!< Bit mask of OVRVALRXDIGEN field. */

/* Bit 9 : Override value: ovrValAdcCkEn */
#define RADIO_QOVERRIDE19_OVRVALADCCKEN_Pos (9UL) /*!< Position of OVRVALADCCKEN field. */
#define RADIO_QOVERRIDE19_OVRVALADCCKEN_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALADCCKEN_Pos) /*!< Bit mask of OVRVALADCCKEN field. */

/* Bit 8 : Override value: ovrValFsCkEn */
#define RADIO_QOVERRIDE19_OVRVALFSCKEN_Pos (8UL) /*!< Position of OVRVALFSCKEN field. */
#define RADIO_QOVERRIDE19_OVRVALFSCKEN_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALFSCKEN_Pos) /*!< Bit mask of OVRVALFSCKEN field. */

/* Bits 7..0 : Override value: tReduceTrxSwitch */
#define RADIO_QOVERRIDE19_TREDUCETRXSWITCH_Pos (0UL) /*!< Position of TREDUCETRXSWITCH field. */
#define RADIO_QOVERRIDE19_TREDUCETRXSWITCH_Msk (0xFFUL << RADIO_QOVERRIDE19_TREDUCETRXSWITCH_Pos) /*!< Bit mask of TREDUCETRXSWITCH field. */

/* Register: RADIO_QOVERRIDE20 */
/* Description: Trim value override register 20 for nRF52 */

/* Bit 31 : if '1' enable override for LNACURR */
#define RADIO_QOVERRIDE20_OVRENLNACURR_Pos (31UL) /*!< Position of OVRENLNACURR field. */
#define RADIO_QOVERRIDE20_OVRENLNACURR_Msk (0x1UL << RADIO_QOVERRIDE20_OVRENLNACURR_Pos) /*!< Bit mask of OVRENLNACURR field. */

/* Bit 26 : if '1' enable override for AAFENSTAGE */
#define RADIO_QOVERRIDE20_OVRENAAFENSTAGE_Pos (26UL) /*!< Position of OVRENAAFENSTAGE field. */
#define RADIO_QOVERRIDE20_OVRENAAFENSTAGE_Msk (0x1UL << RADIO_QOVERRIDE20_OVRENAAFENSTAGE_Pos) /*!< Bit mask of OVRENAAFENSTAGE field. */

/* Bit 25 : if '1' enable override for AAFFREQ */
#define RADIO_QOVERRIDE20_OVRENAAFFREQ_Pos (25UL) /*!< Position of OVRENAAFFREQ field. */
#define RADIO_QOVERRIDE20_OVRENAAFFREQ_Msk (0x1UL << RADIO_QOVERRIDE20_OVRENAAFFREQ_Pos) /*!< Bit mask of OVRENAAFFREQ field. */

/* Bit 24 : if '1' enable override for DEMOD */
#define RADIO_QOVERRIDE20_OVRENDEMOD_Pos (24UL) /*!< Position of OVRENDEMOD field. */
#define RADIO_QOVERRIDE20_OVRENDEMOD_Msk (0x1UL << RADIO_QOVERRIDE20_OVRENDEMOD_Pos) /*!< Bit mask of OVRENDEMOD field. */

/* Bit 2 : Enable extra AAF filter stage */
#define RADIO_QOVERRIDE20_AAFENSTAGE_Pos (2UL) /*!< Position of AAFENSTAGE field. */
#define RADIO_QOVERRIDE20_AAFENSTAGE_Msk (0x1UL << RADIO_QOVERRIDE20_AAFENSTAGE_Pos) /*!< Bit mask of AAFENSTAGE field. */

/* Bit 1 : IF frequency, 0=1MHz (for &lt; =1Mbps), 1=2MHz (for 2Mbps) */
#define RADIO_QOVERRIDE20_AAFFREQ_Pos (1UL) /*!< Position of AAFFREQ field. */
#define RADIO_QOVERRIDE20_AAFFREQ_Msk (0x1UL << RADIO_QOVERRIDE20_AAFFREQ_Pos) /*!< Bit mask of AAFFREQ field. */

/* Bit 0 : Demodulator mode override value. 1=hyper,0=standard */
#define RADIO_QOVERRIDE20_DEMOD_Pos (0UL) /*!< Position of DEMOD field. */
#define RADIO_QOVERRIDE20_DEMOD_Msk (0x1UL << RADIO_QOVERRIDE20_DEMOD_Pos) /*!< Bit mask of DEMOD field. */
#define RADIO_QOVERRIDE20_DEMOD_Standard (0x0UL) /*!< Hypermode disabled (override value) */
#define RADIO_QOVERRIDE20_DEMOD_Hyper (0x1UL) /*!< Hypermode enabled (override value) */

/* Register: RADIO_QOVERRIDE21 */
/* Description: Trim value override register 21 for nRF52 */

/* Bit 31 : Enable or disable override of default trim values */
#define RADIO_QOVERRIDE21_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE21_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE21_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_QOVERRIDE21_ENABLE_Disabled (0x0UL) /*!< Disable */
#define RADIO_QOVERRIDE21_ENABLE_Enabled (0x1UL) /*!< Enable */

/* Bits 30..28 : Tuning of radio turn around timing */
#define RADIO_QOVERRIDE21_TXRXTURNAROUNDDELTA_Pos (28UL) /*!< Position of TXRXTURNAROUNDDELTA field. */
#define RADIO_QOVERRIDE21_TXRXTURNAROUNDDELTA_Msk (0x7UL << RADIO_QOVERRIDE21_TXRXTURNAROUNDDELTA_Pos) /*!< Bit mask of TXRXTURNAROUNDDELTA field. */

/* Bits 27..26 : Debug: Control of PA RAMP time, Up/ down */
#define RADIO_QOVERRIDE21_TXPASRAMP0V9_Pos (26UL) /*!< Position of TXPASRAMP0V9 field. */
#define RADIO_QOVERRIDE21_TXPASRAMP0V9_Msk (0x3UL << RADIO_QOVERRIDE21_TXPASRAMP0V9_Pos) /*!< Bit mask of TXPASRAMP0V9 field. */

/* Bit 24 : Override enable */
#define RADIO_QOVERRIDE21_TDELTAOVREN_Pos (24UL) /*!< Position of TDELTAOVREN field. */
#define RADIO_QOVERRIDE21_TDELTAOVREN_Msk (0x1UL << RADIO_QOVERRIDE21_TDELTAOVREN_Pos) /*!< Bit mask of TDELTAOVREN field. */

/* Bits 23..16 : Override for tDeltaTxSend (full resolution) */
#define RADIO_QOVERRIDE21_TDELTATXSEND_Pos (16UL) /*!< Position of TDELTATXSEND field. */
#define RADIO_QOVERRIDE21_TDELTATXSEND_Msk (0xFFUL << RADIO_QOVERRIDE21_TDELTATXSEND_Pos) /*!< Bit mask of TDELTATXSEND field. */

/* Bits 15..8 : Override for tDeltaPipe (full resolution) */
#define RADIO_QOVERRIDE21_TDELTAPIPE_Pos (8UL) /*!< Position of TDELTAPIPE field. */
#define RADIO_QOVERRIDE21_TDELTAPIPE_Msk (0xFFUL << RADIO_QOVERRIDE21_TDELTAPIPE_Pos) /*!< Bit mask of TDELTAPIPE field. */

/* Bits 7..0 : Override for tDeltaPwrdnPa (full resolution) */
#define RADIO_QOVERRIDE21_TDELTAPWRDNPA_Pos (0UL) /*!< Position of TDELTAPWRDNPA field. */
#define RADIO_QOVERRIDE21_TDELTAPWRDNPA_Msk (0xFFUL << RADIO_QOVERRIDE21_TDELTAPWRDNPA_Pos) /*!< Bit mask of TDELTAPWRDNPA field. */

/* Register: RADIO_QOVERRIDE22 */
/* Description: Trim value override register 22 for nRF52 */

/* Bit 31 : Enable or disable override for DSSSPEAKDISTTOL and DSSSMINPEAKCOUNT */
#define RADIO_QOVERRIDE22_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE22_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE22_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_QOVERRIDE22_ENABLE_Disabled (0x0UL) /*!< Disable */
#define RADIO_QOVERRIDE22_ENABLE_Enabled (0x1UL) /*!< Enable */

/* Bits 30..26 : TIFS positive offset when the mode is switched from 2M to 1M */
#define RADIO_QOVERRIDE22_TRXTXASYM2M1MHOLD_Pos (26UL) /*!< Position of TRXTXASYM2M1MHOLD field. */
#define RADIO_QOVERRIDE22_TRXTXASYM2M1MHOLD_Msk (0x1FUL << RADIO_QOVERRIDE22_TRXTXASYM2M1MHOLD_Pos) /*!< Bit mask of TRXTXASYM2M1MHOLD field. */

/* Bits 25..16 : Additional delay to hold Tx/Rx turnaround, full resolution [250ns] */
#define RADIO_QOVERRIDE22_TRXTXTURNAROUNDHOLD_Pos (16UL) /*!< Position of TRXTXTURNAROUNDHOLD field. */
#define RADIO_QOVERRIDE22_TRXTXTURNAROUNDHOLD_Msk (0x3FFUL << RADIO_QOVERRIDE22_TRXTXTURNAROUNDHOLD_Pos) /*!< Bit mask of TRXTXTURNAROUNDHOLD field. */

/* Bits 15..11 : TIFS negative offset when the mode is switched from 1M to 2M */
#define RADIO_QOVERRIDE22_TRXTXASYM1M2MHOLD_Pos (11UL) /*!< Position of TRXTXASYM1M2MHOLD field. */
#define RADIO_QOVERRIDE22_TRXTXASYM1M2MHOLD_Msk (0x1FUL << RADIO_QOVERRIDE22_TRXTXASYM1M2MHOLD_Pos) /*!< Bit mask of TRXTXASYM1M2MHOLD field. */

/* Bit 9 : Disable or enable the qualification of addressMatch vs. detect */
#define RADIO_QOVERRIDE22_DISABLEADDRWINDOW_Pos (9UL) /*!< Position of DISABLEADDRWINDOW field. */
#define RADIO_QOVERRIDE22_DISABLEADDRWINDOW_Msk (0x1UL << RADIO_QOVERRIDE22_DISABLEADDRWINDOW_Pos) /*!< Bit mask of DISABLEADDRWINDOW field. */
#define RADIO_QOVERRIDE22_DISABLEADDRWINDOW_Enabled (0x0UL) /*!< Enable */
#define RADIO_QOVERRIDE22_DISABLEADDRWINDOW_Disabled (0x1UL) /*!< Disable */

/* Bit 8 : Disable or enable hypermode fix for ANT */
#define RADIO_QOVERRIDE22_DISABLEHYPERANT_Pos (8UL) /*!< Position of DISABLEHYPERANT field. */
#define RADIO_QOVERRIDE22_DISABLEHYPERANT_Msk (0x1UL << RADIO_QOVERRIDE22_DISABLEHYPERANT_Pos) /*!< Bit mask of DISABLEHYPERANT field. */
#define RADIO_QOVERRIDE22_DISABLEHYPERANT_Enabled (0x0UL) /*!< Enable */
#define RADIO_QOVERRIDE22_DISABLEHYPERANT_Disabled (0x1UL) /*!< Disable */

/* Bits 6..4 : Override for dsssMinPeakCount */
#define RADIO_QOVERRIDE22_DSSSMINPEAKCOUNT_Pos (4UL) /*!< Position of DSSSMINPEAKCOUNT field. */
#define RADIO_QOVERRIDE22_DSSSMINPEAKCOUNT_Msk (0x7UL << RADIO_QOVERRIDE22_DSSSMINPEAKCOUNT_Pos) /*!< Bit mask of DSSSMINPEAKCOUNT field. */

/* Bits 2..0 : Override for dsssPeakDistanceTolerance */
#define RADIO_QOVERRIDE22_DSSSPEAKDISTTOL_Pos (0UL) /*!< Position of DSSSPEAKDISTTOL field. */
#define RADIO_QOVERRIDE22_DSSSPEAKDISTTOL_Msk (0x7UL << RADIO_QOVERRIDE22_DSSSPEAKDISTTOL_Pos) /*!< Bit mask of DSSSPEAKDISTTOL field. */

/* Register: RADIO_QOVERRIDE23 */
/* Description: Trim value override register 23 for nRF52 */

/* Bit 31 : Enable override for OVERRIDE23 (except HIGHERTHANMARGINDBC and OVRENCNRIPPLEWARNCFG) */
#define RADIO_QOVERRIDE23_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE23_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE23_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bit 16 : Keep standard demod in DSSS mode */
#define RADIO_QOVERRIDE23_KEEPSTDINDSSS_Pos (16UL) /*!< Position of KEEPSTDINDSSS field. */
#define RADIO_QOVERRIDE23_KEEPSTDINDSSS_Msk (0x1UL << RADIO_QOVERRIDE23_KEEPSTDINDSSS_Pos) /*!< Bit mask of KEEPSTDINDSSS field. */

/* Bits 15..8 : Required peak height required for a double correlator peak to be considered higher than previous ones. The register value will be multiplied by 25 to obtain the actual margin. The bitfield is NOT subject to the enable override at bit position 31, and will always be enabled for hypermode. */
#define RADIO_QOVERRIDE23_HIGHERTHANMARGINDBC_Pos (8UL) /*!< Position of HIGHERTHANMARGINDBC field. */
#define RADIO_QOVERRIDE23_HIGHERTHANMARGINDBC_Msk (0xFFUL << RADIO_QOVERRIDE23_HIGHERTHANMARGINDBC_Pos) /*!< Bit mask of HIGHERTHANMARGINDBC field. */

/* Bit 6 : Enable decision feedback for matched filter bank */
#define RADIO_QOVERRIDE23_ENABLEFEEDBACK_Pos (6UL) /*!< Position of ENABLEFEEDBACK field. */
#define RADIO_QOVERRIDE23_ENABLEFEEDBACK_Msk (0x1UL << RADIO_QOVERRIDE23_ENABLEFEEDBACK_Pos) /*!< Bit mask of ENABLEFEEDBACK field. */

/* Bit 5 : Override enable for CNPEAKMINTHR and CNABSMAXTHR in the CNRIPPLEWARNCFG register */
#define RADIO_QOVERRIDE23_OVRENCNRIPPLEWARNCFG_Pos (5UL) /*!< Position of OVRENCNRIPPLEWARNCFG field. */
#define RADIO_QOVERRIDE23_OVRENCNRIPPLEWARNCFG_Msk (0x1UL << RADIO_QOVERRIDE23_OVRENCNRIPPLEWARNCFG_Pos) /*!< Bit mask of OVRENCNRIPPLEWARNCFG field. */

/* Bit 4 : Enable saturation in drift calculator for all modes */
#define RADIO_QOVERRIDE23_DRIFTSATENABLEALWAYS_Pos (4UL) /*!< Position of DRIFTSATENABLEALWAYS field. */
#define RADIO_QOVERRIDE23_DRIFTSATENABLEALWAYS_Msk (0x1UL << RADIO_QOVERRIDE23_DRIFTSATENABLEALWAYS_Pos) /*!< Bit mask of DRIFTSATENABLEALWAYS field. */

/* Bit 3 : Allow dual distance between peaks */
#define RADIO_QOVERRIDE23_ENADUALDISTANCE_Pos (3UL) /*!< Position of ENADUALDISTANCE field. */
#define RADIO_QOVERRIDE23_ENADUALDISTANCE_Msk (0x1UL << RADIO_QOVERRIDE23_ENADUALDISTANCE_Pos) /*!< Bit mask of ENADUALDISTANCE field. */

/* Bit 2 : Ignore peaks from DBC which look like sidelobes */
#define RADIO_QOVERRIDE23_ENMAYBESIDELOBE_Pos (2UL) /*!< Position of ENMAYBESIDELOBE field. */
#define RADIO_QOVERRIDE23_ENMAYBESIDELOBE_Msk (0x1UL << RADIO_QOVERRIDE23_ENMAYBESIDELOBE_Pos) /*!< Bit mask of ENMAYBESIDELOBE field. */

/* Bit 1 : Enable strobe time averaging */
#define RADIO_QOVERRIDE23_ENDSSSSTAVE_Pos (1UL) /*!< Position of ENDSSSSTAVE field. */
#define RADIO_QOVERRIDE23_ENDSSSSTAVE_Msk (0x1UL << RADIO_QOVERRIDE23_ENDSSSSTAVE_Pos) /*!< Bit mask of ENDSSSSTAVE field. */

/* Bit 0 : Enable CFO averaging */
#define RADIO_QOVERRIDE23_ENDSSSCFOAVE_Pos (0UL) /*!< Position of ENDSSSCFOAVE field. */
#define RADIO_QOVERRIDE23_ENDSSSCFOAVE_Msk (0x1UL << RADIO_QOVERRIDE23_ENDSSSCFOAVE_Pos) /*!< Bit mask of ENDSSSCFOAVE field. */

/* Register: RADIO_QOVERRIDE25 */
/* Description: Unspecified */

/* Bit 30 : Override enable for MINPEAKCOUNTSTRICT */
#define RADIO_QOVERRIDE25_OVRENMINPEAKCOUNTSTRICT_Pos (30UL) /*!< Position of OVRENMINPEAKCOUNTSTRICT field. */
#define RADIO_QOVERRIDE25_OVRENMINPEAKCOUNTSTRICT_Msk (0x1UL << RADIO_QOVERRIDE25_OVRENMINPEAKCOUNTSTRICT_Pos) /*!< Bit mask of OVRENMINPEAKCOUNTSTRICT field. */

/* Bit 29 : Override enable for DBCCORRTHPREVREQUIR */
#define RADIO_QOVERRIDE25_OVRENDBCCORRTHPREVREQUIR_Pos (29UL) /*!< Position of OVRENDBCCORRTHPREVREQUIR field. */
#define RADIO_QOVERRIDE25_OVRENDBCCORRTHPREVREQUIR_Msk (0x1UL << RADIO_QOVERRIDE25_OVRENDBCCORRTHPREVREQUIR_Pos) /*!< Bit mask of OVRENDBCCORRTHPREVREQUIR field. */

/* Bit 28 : Override enable for DBCCORRTHSTRICT */
#define RADIO_QOVERRIDE25_OVRENDBCCORRTHSTRICT_Pos (28UL) /*!< Position of OVRENDBCCORRTHSTRICT field. */
#define RADIO_QOVERRIDE25_OVRENDBCCORRTHSTRICT_Msk (0x1UL << RADIO_QOVERRIDE25_OVRENDBCCORRTHSTRICT_Pos) /*!< Bit mask of OVRENDBCCORRTHSTRICT field. */

/* Bit 27 : DBC peak detector selection */
#define RADIO_QOVERRIDE25_DBCPEAKDETSEL_Pos (27UL) /*!< Position of DBCPEAKDETSEL field. */
#define RADIO_QOVERRIDE25_DBCPEAKDETSEL_Msk (0x1UL << RADIO_QOVERRIDE25_DBCPEAKDETSEL_Pos) /*!< Bit mask of DBCPEAKDETSEL field. */
#define RADIO_QOVERRIDE25_DBCPEAKDETSEL_Classic (0x0UL) /*!< Use classic peak detector (backward compatible behavior) */
#define RADIO_QOVERRIDE25_DBCPEAKDETSEL_Differential (0x1UL) /*!< Use differential peak detector */

/* Bits 18..16 : Min number of peaks to detect before resyncing to another preamble while already working on a previous preamble in BleLrx. */
#define RADIO_QOVERRIDE25_MINPEAKCOUNTSTRICT_Pos (16UL) /*!< Position of MINPEAKCOUNTSTRICT field. */
#define RADIO_QOVERRIDE25_MINPEAKCOUNTSTRICT_Msk (0x7UL << RADIO_QOVERRIDE25_MINPEAKCOUNTSTRICT_Pos) /*!< Bit mask of MINPEAKCOUNTSTRICT field. */

/* Bits 15..8 : Correlation threshold for double correlator used in BleLr mode to reject a later resync using DBCCORRTHSTRICT. */
#define RADIO_QOVERRIDE25_DBCCORRTHPREVREQUIR_Pos (8UL) /*!< Position of DBCCORRTHPREVREQUIR field. */
#define RADIO_QOVERRIDE25_DBCCORRTHPREVREQUIR_Msk (0xFFUL << RADIO_QOVERRIDE25_DBCCORRTHPREVREQUIR_Pos) /*!< Bit mask of DBCCORRTHPREVREQUIR field. */

/* Bits 7..0 : Correlation threshold for double correlator used in BleLr mode to resync to another preamble while already working on a previous preamble. */
#define RADIO_QOVERRIDE25_DBCCORRTHSTRICT_Pos (0UL) /*!< Position of DBCCORRTHSTRICT field. */
#define RADIO_QOVERRIDE25_DBCCORRTHSTRICT_Msk (0xFFUL << RADIO_QOVERRIDE25_DBCCORRTHSTRICT_Pos) /*!< Bit mask of DBCCORRTHSTRICT field. */

/* Register: RADIO_DBCPEAKDETTHR */
/* Description: Thresholds for each peak detector instance */

/* Bits 31..24 : Diff threshold 3 */
#define RADIO_DBCPEAKDETTHR_THR3_Pos (24UL) /*!< Position of THR3 field. */
#define RADIO_DBCPEAKDETTHR_THR3_Msk (0xFFUL << RADIO_DBCPEAKDETTHR_THR3_Pos) /*!< Bit mask of THR3 field. */

/* Bits 23..16 : Diff threshold 2 */
#define RADIO_DBCPEAKDETTHR_THR2_Pos (16UL) /*!< Position of THR2 field. */
#define RADIO_DBCPEAKDETTHR_THR2_Msk (0xFFUL << RADIO_DBCPEAKDETTHR_THR2_Pos) /*!< Bit mask of THR2 field. */

/* Bits 15..8 : Diff threshold 1 */
#define RADIO_DBCPEAKDETTHR_THR1_Pos (8UL) /*!< Position of THR1 field. */
#define RADIO_DBCPEAKDETTHR_THR1_Msk (0xFFUL << RADIO_DBCPEAKDETTHR_THR1_Pos) /*!< Bit mask of THR1 field. */

/* Bits 7..0 : Diff threshold 0 */
#define RADIO_DBCPEAKDETTHR_THR0_Pos (0UL) /*!< Position of THR0 field. */
#define RADIO_DBCPEAKDETTHR_THR0_Msk (0xFFUL << RADIO_DBCPEAKDETTHR_THR0_Pos) /*!< Bit mask of THR0 field. */

/* Register: RADIO_DEBUGPSEL_CLOCK */
/* Description: Pin select for RADIO clock (direct mode, base band debug. Refer to digip_064 and digip_061, txCk and ckDataIn signals) */

/* Bit 31 : Connection */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Msk (0x1UL << RADIO_DEBUGPSEL_CLOCK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Connected (0x0UL) /*!< Connect */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bits 9..8 : Port number */
#define RADIO_DEBUGPSEL_CLOCK_PORT_Pos (8UL) /*!< Position of PORT field. */
#define RADIO_DEBUGPSEL_CLOCK_PORT_Msk (0x3UL << RADIO_DEBUGPSEL_CLOCK_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_DEBUGPSEL_CLOCK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_DEBUGPSEL_CLOCK_PIN_Msk (0x1FUL << RADIO_DEBUGPSEL_CLOCK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_DEBUGPSEL_DATA */
/* Description: Pin select for RADIO data (direct mode, base band debug. Refer to digip_064 and digip_061, txRadioData and dataIn signals) */

/* Bit 31 : Connection */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Msk (0x1UL << RADIO_DEBUGPSEL_DATA_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Connected (0x0UL) /*!< Connect */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bits 9..8 : Port number */
#define RADIO_DEBUGPSEL_DATA_PORT_Pos (8UL) /*!< Position of PORT field. */
#define RADIO_DEBUGPSEL_DATA_PORT_Msk (0x3UL << RADIO_DEBUGPSEL_DATA_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_DEBUGPSEL_DATA_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_DEBUGPSEL_DATA_PIN_Msk (0x1FUL << RADIO_DEBUGPSEL_DATA_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_ATEPANTHER */
/* Description: Analog test bus control for Panther radio */

/* Bits 26..25 : atePb */
#define RADIO_ATEPANTHER_ATEPB_Pos (25UL) /*!< Position of ATEPB field. */
#define RADIO_ATEPANTHER_ATEPB_Msk (0x3UL << RADIO_ATEPANTHER_ATEPB_Pos) /*!< Bit mask of ATEPB field. */

/* Bits 21..16 : ateFs: Configuration register for automatic test bus */
#define RADIO_ATEPANTHER_ATEFS_Pos (16UL) /*!< Position of ATEFS field. */
#define RADIO_ATEPANTHER_ATEFS_Msk (0x3FUL << RADIO_ATEPANTHER_ATEFS_Pos) /*!< Bit mask of ATEFS field. */

/* Bits 13..8 : ateRxAaf: Enable RXAAF test mode when &gt;0 */
#define RADIO_ATEPANTHER_ATERXAAF_Pos (8UL) /*!< Position of ATERXAAF field. */
#define RADIO_ATEPANTHER_ATERXAAF_Msk (0x3FUL << RADIO_ATEPANTHER_ATERXAAF_Pos) /*!< Bit mask of ATERXAAF field. */

/* Bits 5..0 : ateRxMix: Enable RXMix test mode when &gt;0 */
#define RADIO_ATEPANTHER_ATERXMIX_Pos (0UL) /*!< Position of ATERXMIX field. */
#define RADIO_ATEPANTHER_ATERXMIX_Msk (0x3FUL << RADIO_ATEPANTHER_ATERXMIX_Pos) /*!< Bit mask of ATERXMIX field. */

/* Register: RADIO_RFMATCHTUNE */
/* Description: Adjust transformation ratio of on-chip matching Can be used for: 1) Optimise power consumption for different output power levels in TX mode 2) Optimise input impedance in RX mode. */

/* Bits 15..8 : Antenna match tuning for RX mode */
#define RADIO_RFMATCHTUNE_RFMATCHTUNERX_Pos (8UL) /*!< Position of RFMATCHTUNERX field. */
#define RADIO_RFMATCHTUNE_RFMATCHTUNERX_Msk (0xFFUL << RADIO_RFMATCHTUNE_RFMATCHTUNERX_Pos) /*!< Bit mask of RFMATCHTUNERX field. */

/* Bits 7..0 : Antenna match tuning for TX mode */
#define RADIO_RFMATCHTUNE_RFMATCHTUNETX_Pos (0UL) /*!< Position of RFMATCHTUNETX field. */
#define RADIO_RFMATCHTUNE_RFMATCHTUNETX_Msk (0xFFUL << RADIO_RFMATCHTUNE_RFMATCHTUNETX_Pos) /*!< Bit mask of RFMATCHTUNETX field. */

/* Register: RADIO_DFEMODE */
/* Description: Whether to use Angle-of-Arrival (AOA) or Angle-of-Departure (AOD) */

/* Bits 1..0 : Direction finding operation mode */
#define RADIO_DFEMODE_DFEOPMODE_Pos (0UL) /*!< Position of DFEOPMODE field. */
#define RADIO_DFEMODE_DFEOPMODE_Msk (0x3UL << RADIO_DFEMODE_DFEOPMODE_Pos) /*!< Bit mask of DFEOPMODE field. */
#define RADIO_DFEMODE_DFEOPMODE_Disabled (0x0UL) /*!< Direction finding mode disabled */
#define RADIO_DFEMODE_DFEOPMODE_AoD (0x2UL) /*!< Direction finding mode set to AoD */
#define RADIO_DFEMODE_DFEOPMODE_AoA (0x3UL) /*!< Direction finding mode set to AoA */

/* Register: RADIO_CTEINLINECONF */
/* Description: Configuration for CTE inline mode */

/* Bits 31..24 : S0 bit mask to set which bit to match */
#define RADIO_CTEINLINECONF_S0MASK_Pos (24UL) /*!< Position of S0MASK field. */
#define RADIO_CTEINLINECONF_S0MASK_Msk (0xFFUL << RADIO_CTEINLINECONF_S0MASK_Pos) /*!< Bit mask of S0MASK field. */

/* Bits 23..16 : S0 bit pattern to match */
#define RADIO_CTEINLINECONF_S0CONF_Pos (16UL) /*!< Position of S0CONF field. */
#define RADIO_CTEINLINECONF_S0CONF_Msk (0xFFUL << RADIO_CTEINLINECONF_S0CONF_Pos) /*!< Bit mask of S0CONF field. */

/* Bits 15..13 : Spacing between samples for the samples in the SWITCHING period when CTEINLINEMODE is set */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_Pos (13UL) /*!< Position of CTEINLINERXMODE2US field. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_Msk (0x7UL << RADIO_CTEINLINECONF_CTEINLINERXMODE2US_Pos) /*!< Bit mask of CTEINLINERXMODE2US field. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_8us (0x0UL) /*!< 8us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_4us (0x1UL) /*!< 4us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_2us (0x2UL) /*!< 2us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_1us (0x3UL) /*!< 1us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_500ns (0x4UL) /*!< 0.5us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_250ns (0x5UL) /*!< 0.25us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_125ns (0x6UL) /*!< 0.125us */

/* Bits 12..10 : Spacing between samples for the samples in the SWITCHING period when CTEINLINEMODE is set */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos (10UL) /*!< Position of CTEINLINERXMODE1US field. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Msk (0x7UL << RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos) /*!< Bit mask of CTEINLINERXMODE1US field. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_8us (0x0UL) /*!< 8us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_4us (0x1UL) /*!< 4us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_2us (0x2UL) /*!< 2us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_1us (0x3UL) /*!< 1us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_500ns (0x4UL) /*!< 0.5us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_250ns (0x5UL) /*!< 0.25us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_125ns (0x6UL) /*!< 0.125us */

/* Bits 7..6 : Max range of CTETime */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos (6UL) /*!< Position of CTETIMEVALIDRANGE field. */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Msk (0x3UL << RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos) /*!< Bit mask of CTETIMEVALIDRANGE field. */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_20 (0x0UL) /*!< 20 in 8us unit (default) Set to 20 if parsed CTETime is larger han 20 */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_31 (0x1UL) /*!< 31 in 8us unit */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_63 (0x2UL) /*!< 63 in 8us unit */

/* Bit 5 : CTE is continuously output after CRC and only stopped by triggering TASKS_STOP. This is typically used together with the DFEEND to STOP short. AoA/AoD procedure duration is still controlled by DFECTRL1.NUMBEROF8S / CTETIME */
#define RADIO_CTEINLINECONF_CTEFORCEON_Pos (5UL) /*!< Position of CTEFORCEON field. */
#define RADIO_CTEINLINECONF_CTEFORCEON_Msk (0x1UL << RADIO_CTEINLINECONF_CTEFORCEON_Pos) /*!< Bit mask of CTEFORCEON field. */
#define RADIO_CTEINLINECONF_CTEFORCEON_No (0x0UL) /*!< CTE duration is automatically determined by DFECTRL1.NUMBEROF8US / CTETIME (only correct for 1Mbps and 2Mbps modes) */
#define RADIO_CTEINLINECONF_CTEFORCEON_Yes (0x1UL) /*!< CTE is continuously transmitted after CRC until TASKS_STOP */

/* Bit 4 : Sampling/switching if CRC is not OK */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos (4UL) /*!< Position of CTEERRORHANDLING field. */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Msk (0x1UL << RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos) /*!< Bit mask of CTEERRORHANDLING field. */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_No (0x0UL) /*!< No sampling and antenna switching when CRC is not OK */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Yes (0x1UL) /*!< Sampling and antenna switching also when CRC is not OK */

/* Bit 3 : CTEInfo is S1 byte or not */
#define RADIO_CTEINLINECONF_CTEINFOINS1_Pos (3UL) /*!< Position of CTEINFOINS1 field. */
#define RADIO_CTEINLINECONF_CTEINFOINS1_Msk (0x1UL << RADIO_CTEINLINECONF_CTEINFOINS1_Pos) /*!< Bit mask of CTEINFOINS1 field. */
#define RADIO_CTEINLINECONF_CTEINFOINS1_NotInS1 (0x0UL) /*!< CTEInfo is NOT in S1 byte (advertising PDU) */
#define RADIO_CTEINLINECONF_CTEINFOINS1_InS1 (0x1UL) /*!< CTEInfo is in S1 byte (data PDU) */

/* Bit 0 : Enable parsing of CTEInfo from received packet in BLE modes */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos (0UL) /*!< Position of CTEINLINECTRLEN field. */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Msk (0x1UL << RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos) /*!< Bit mask of CTEINLINECTRLEN field. */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Disabled (0x0UL) /*!< Parsing of CTEInfo is disabled */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Enabled (0x1UL) /*!< Parsing of CTEInfo is enabled */

/* Register: RADIO_DFECTRL1 */
/* Description: Various configuration for Direction finding */

/* Bits 27..24 : Gain will be lowered by the specified number of gain steps at the start of CTE */
#define RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos (24UL) /*!< Position of AGCBACKOFFGAIN field. */
#define RADIO_DFECTRL1_AGCBACKOFFGAIN_Msk (0xFUL << RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos) /*!< Bit mask of AGCBACKOFFGAIN field. */

/* Bits 23..20 : Repeat each individual antenna pattern N times sequentially, i.e. P0, P0, P1, P1, P2, P2, P3, P3, etc. */
#define RADIO_DFECTRL1_REPEATPATTERN_Pos (20UL) /*!< Position of REPEATPATTERN field. */
#define RADIO_DFECTRL1_REPEATPATTERN_Msk (0xFUL << RADIO_DFECTRL1_REPEATPATTERN_Pos) /*!< Bit mask of REPEATPATTERN field. */
#define RADIO_DFECTRL1_REPEATPATTERN_NoRepeat (0x0UL) /*!< Do not repeat (1 time in total) */

/* Bits 18..16 : Interval between samples in the SWITCHING period when CTEINLINECTRLEN is 0 */
#define RADIO_DFECTRL1_TSAMPLESPACING_Pos (16UL) /*!< Position of TSAMPLESPACING field. */
#define RADIO_DFECTRL1_TSAMPLESPACING_Msk (0x7UL << RADIO_DFECTRL1_TSAMPLESPACING_Pos) /*!< Bit mask of TSAMPLESPACING field. */
#define RADIO_DFECTRL1_TSAMPLESPACING_4us (0x1UL) /*!< 4us */
#define RADIO_DFECTRL1_TSAMPLESPACING_2us (0x2UL) /*!< 2us */
#define RADIO_DFECTRL1_TSAMPLESPACING_1us (0x3UL) /*!< 1us */
#define RADIO_DFECTRL1_TSAMPLESPACING_500ns (0x4UL) /*!< 0.5us */
#define RADIO_DFECTRL1_TSAMPLESPACING_250ns (0x5UL) /*!< 0.25us */
#define RADIO_DFECTRL1_TSAMPLESPACING_125ns (0x6UL) /*!< 0.125us */

/* Bit 15 : Whether to sample I/Q or magnitude/phase */
#define RADIO_DFECTRL1_SAMPLETYPE_Pos (15UL) /*!< Position of SAMPLETYPE field. */
#define RADIO_DFECTRL1_SAMPLETYPE_Msk (0x1UL << RADIO_DFECTRL1_SAMPLETYPE_Pos) /*!< Bit mask of SAMPLETYPE field. */
#define RADIO_DFECTRL1_SAMPLETYPE_IQ (0x0UL) /*!< Complex samples in I and Q */
#define RADIO_DFECTRL1_SAMPLETYPE_MagPhase (0x1UL) /*!< Complex samples as magnitude and phase */

/* Bits 14..12 : Interval between samples in the REFERENCE period */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos (12UL) /*!< Position of TSAMPLESPACINGREF field. */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_Msk (0x7UL << RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos) /*!< Bit mask of TSAMPLESPACINGREF field. */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_8us (0x0UL) /*!< 8us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_4us (0x1UL) /*!< 4us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_2us (0x2UL) /*!< 2us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_1us (0x3UL) /*!< 1us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_500ns (0x4UL) /*!< 0.5us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_250ns (0x5UL) /*!< 0.25us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_125ns (0x6UL) /*!< 0.125us */

/* Bit 11 : Trigger AoA/AoD procedure using only task */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Pos (11UL) /*!< Position of TRIGGERWITHTASKONLY field. */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Msk (0x1UL << RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Pos) /*!< Bit mask of TRIGGERWITHTASKONLY field. */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Multiple (0x0UL) /*!< Trigger also with other signals */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_OnlyTask (0x1UL) /*!< Only allow triggering a procedure with TASKS_DFESTART */

/* Bits 10..8 : Interval between every time the antenna is changed in the SWITCHING state */
#define RADIO_DFECTRL1_TSWITCHSPACING_Pos (8UL) /*!< Position of TSWITCHSPACING field. */
#define RADIO_DFECTRL1_TSWITCHSPACING_Msk (0x7UL << RADIO_DFECTRL1_TSWITCHSPACING_Pos) /*!< Bit mask of TSWITCHSPACING field. */
#define RADIO_DFECTRL1_TSWITCHSPACING_8us (0x0UL) /*!< 8us */
#define RADIO_DFECTRL1_TSWITCHSPACING_4us (0x1UL) /*!< 4us */
#define RADIO_DFECTRL1_TSWITCHSPACING_2us (0x2UL) /*!< 2us */
#define RADIO_DFECTRL1_TSWITCHSPACING_1us (0x3UL) /*!< 1us */
#define RADIO_DFECTRL1_TSWITCHSPACING_500ns (0x4UL) /*!< 0.5us */
#define RADIO_DFECTRL1_TSWITCHSPACING_250ns (0x5UL) /*!< 0.25us */

/* Bit 7 : Add CTE extension and do antenna switching/sampling in this extension */
#define RADIO_DFECTRL1_DFEINEXTENSION_Pos (7UL) /*!< Position of DFEINEXTENSION field. */
#define RADIO_DFECTRL1_DFEINEXTENSION_Msk (0x1UL << RADIO_DFECTRL1_DFEINEXTENSION_Pos) /*!< Bit mask of DFEINEXTENSION field. */
#define RADIO_DFECTRL1_DFEINEXTENSION_Payload (0x0UL) /*!< Antenna switching/sampling is done in the packet payload */
#define RADIO_DFECTRL1_DFEINEXTENSION_CRC (0x1UL) /*!< AoA/AoD procedure triggered at end of CRC */

/* Bits 5..0 : Length of the AoA/AoD procedure in number of 8 us units */
#define RADIO_DFECTRL1_NUMBEROF8US_Pos (0UL) /*!< Position of NUMBEROF8US field. */
#define RADIO_DFECTRL1_NUMBEROF8US_Msk (0x3FUL << RADIO_DFECTRL1_NUMBEROF8US_Pos) /*!< Bit mask of NUMBEROF8US field. */

/* Register: RADIO_DFECTRL2 */
/* Description: Start offset for Direction finding */

/* Bits 27..16 : Signed value offset before starting sampling in number of 16M cycles relative to the beginning of the REFERENCE state - 12 us after switching start */
#define RADIO_DFECTRL2_TSAMPLEOFFSET_Pos (16UL) /*!< Position of TSAMPLEOFFSET field. */
#define RADIO_DFECTRL2_TSAMPLEOFFSET_Msk (0xFFFUL << RADIO_DFECTRL2_TSAMPLEOFFSET_Pos) /*!< Bit mask of TSAMPLEOFFSET field. */

/* Bits 12..0 : Signed value offset after the end of the CRC before starting switching in number of 16M cycles */
#define RADIO_DFECTRL2_TSWITCHOFFSET_Pos (0UL) /*!< Position of TSWITCHOFFSET field. */
#define RADIO_DFECTRL2_TSWITCHOFFSET_Msk (0x1FFFUL << RADIO_DFECTRL2_TSWITCHOFFSET_Pos) /*!< Bit mask of TSWITCHOFFSET field. */

/* Register: RADIO_DFECTRL3 */
/* Description: Various hacker/tuning configuration for Direction finding */

/* Bit 31 : Applies only when MIRRORSEQUENCE is set. Selects whether to repeat the end pattern (in both ends) or not */
#define RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Pos (31UL) /*!< Position of SHORTENMIRRORSEQUENCE field. */
#define RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Msk (0x1UL << RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Pos) /*!< Bit mask of SHORTENMIRRORSEQUENCE field. */
#define RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Disable (0x0UL) /*!< End patterns are repeated */
#define RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Enable (0x1UL) /*!< End patterns are not repeated */

/* Bit 30 : When reaching the last antenna pattern, it repeats that pattern, and then goes back down again. */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Pos (30UL) /*!< Position of MIRRORSEQUENCE field. */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Msk (0x1UL << RADIO_DFECTRL3_MIRRORSEQUENCE_Pos) /*!< Bit mask of MIRRORSEQUENCE field. */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Disable (0x0UL) /*!< Do not mirror the sequence */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Enable (0x1UL) /*!< Mirror the sequence */

/* Bit 29 : Whether to have the ability to have separate sampling rate in the REFERENCE period vs the SWITCHING state */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Pos (29UL) /*!< Position of CHANGESAMPLERATE field. */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Msk (0x1UL << RADIO_DFECTRL3_CHANGESAMPLERATE_Pos) /*!< Bit mask of CHANGESAMPLERATE field. */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Same (0x0UL) /*!< Always use sample spacing given by TSAMPLESPACINGREF */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Change (0x1UL) /*!< Use TSAMPLESPACINGREF in the REFERENCE period, and TSAMPLESPACING or CTEINLINEAODRXMODExUS in the SWITCHING period */

/* Bits 28..24 : Length of REFERENCE period in number of microseconds, normally 8 */
#define RADIO_DFECTRL3_TREFPERIOD_Pos (24UL) /*!< Position of TREFPERIOD field. */
#define RADIO_DFECTRL3_TREFPERIOD_Msk (0x1FUL << RADIO_DFECTRL3_TREFPERIOD_Pos) /*!< Bit mask of TREFPERIOD field. */

/* Bits 23..20 : Length of GUARD period in number of microseconds, normally 4 */
#define RADIO_DFECTRL3_TGUARDPERIOD_Pos (20UL) /*!< Position of TGUARDPERIOD field. */
#define RADIO_DFECTRL3_TGUARDPERIOD_Msk (0xFUL << RADIO_DFECTRL3_TGUARDPERIOD_Pos) /*!< Bit mask of TGUARDPERIOD field. */

/* Bits 19..16 : Number of 4us periods to subtract from numberOf8us when calculating total number of samples to capture */
#define RADIO_DFECTRL3_COMP4USSAMPLING_Pos (16UL) /*!< Position of COMP4USSAMPLING field. */
#define RADIO_DFECTRL3_COMP4USSAMPLING_Msk (0xFUL << RADIO_DFECTRL3_COMP4USSAMPLING_Pos) /*!< Bit mask of COMP4USSAMPLING field. */

/* Bits 15..12 : Number of 4us periods to subtract from numberOf8us when calculating total number of antenna slots switches */
#define RADIO_DFECTRL3_COMP4USSWITCHING_Pos (12UL) /*!< Position of COMP4USSWITCHING field. */
#define RADIO_DFECTRL3_COMP4USSWITCHING_Msk (0xFUL << RADIO_DFECTRL3_COMP4USSWITCHING_Pos) /*!< Bit mask of COMP4USSWITCHING field. */

/* Bits 11..6 : Same as SPACINGBETWEEN when using CTEINLINECTRL and CTEType is 2 us slots */
#define RADIO_DFECTRL3_SPACINGBETWEEN2US_Pos (6UL) /*!< Position of SPACINGBETWEEN2US field. */
#define RADIO_DFECTRL3_SPACINGBETWEEN2US_Msk (0x3FUL << RADIO_DFECTRL3_SPACINGBETWEEN2US_Pos) /*!< Bit mask of SPACINGBETWEEN2US field. */

/* Bits 5..0 : Signed tuning value for the spacing between the last sample in the reference period and the first sample in the first sample slot */
#define RADIO_DFECTRL3_SPACINGBETWEEN_Pos (0UL) /*!< Position of SPACINGBETWEEN field. */
#define RADIO_DFECTRL3_SPACINGBETWEEN_Msk (0x3FUL << RADIO_DFECTRL3_SPACINGBETWEEN_Pos) /*!< Bit mask of SPACINGBETWEEN field. */

/* Register: RADIO_DFECTRL4 */
/* Description: Various hacker/tuning configuration for Direction finding */

/* Bits 31..20 : Maximum number of samples to capture */
#define RADIO_DFECTRL4_MAXTOTALSAMPLES_Pos (20UL) /*!< Position of MAXTOTALSAMPLES field. */
#define RADIO_DFECTRL4_MAXTOTALSAMPLES_Msk (0xFFFUL << RADIO_DFECTRL4_MAXTOTALSAMPLES_Pos) /*!< Bit mask of MAXTOTALSAMPLES field. */

/* Bit 19 : Start position of repeated part of switching pattern sequence */
#define RADIO_DFECTRL4_RETURNTOREFATEND_Pos (19UL) /*!< Position of RETURNTOREFATEND field. */
#define RADIO_DFECTRL4_RETURNTOREFATEND_Msk (0x1UL << RADIO_DFECTRL4_RETURNTOREFATEND_Pos) /*!< Bit mask of RETURNTOREFATEND field. */
#define RADIO_DFECTRL4_RETURNTOREFATEND_Disable (0x0UL) /*!< Return to SWITCHPATTERN[2] after reaching the end of the switching pattern sequence */
#define RADIO_DFECTRL4_RETURNTOREFATEND_Enable (0x1UL) /*!< Return to SWITCHPATTERN[1] after reaching the end of the switching pattern sequence */

/* Bits 18..8 : Maximum number of antenna slots */
#define RADIO_DFECTRL4_MAXTOTALSLOTS_Pos (8UL) /*!< Position of MAXTOTALSLOTS field. */
#define RADIO_DFECTRL4_MAXTOTALSLOTS_Msk (0x7FFUL << RADIO_DFECTRL4_MAXTOTALSLOTS_Pos) /*!< Bit mask of MAXTOTALSLOTS field. */

/* Bit 7 : Enable correlator before Direction Finding samples */
#define RADIO_DFECTRL4_DFECORREN_Pos (7UL) /*!< Position of DFECORREN field. */
#define RADIO_DFECTRL4_DFECORREN_Msk (0x1UL << RADIO_DFECTRL4_DFECORREN_Pos) /*!< Bit mask of DFECORREN field. */
#define RADIO_DFECTRL4_DFECORREN_Disable (0x0UL) /*!< Disable correlator */
#define RADIO_DFECTRL4_DFECORREN_Enable (0x1UL) /*!< Enable correlator */

/* Bit 6 : TSAMPLESPACING is ignored for the samples taken in the SWITCHING state TSAMPLESPACINGREF is still used for the first samples (REFERENCE period) */
#define RADIO_DFECTRL4_ONESAMPLEPERSLOT_Pos (6UL) /*!< Position of ONESAMPLEPERSLOT field. */
#define RADIO_DFECTRL4_ONESAMPLEPERSLOT_Msk (0x1UL << RADIO_DFECTRL4_ONESAMPLEPERSLOT_Pos) /*!< Bit mask of ONESAMPLEPERSLOT field. */

/* Bit 5 : Ignore that the UTxRxChain says that the packet has been received Continue running if more time to run */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_Pos (5UL) /*!< Position of IGNOREENDOFPACKET field. */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_Msk (0x1UL << RADIO_DFECTRL4_IGNOREENDOFPACKET_Pos) /*!< Bit mask of IGNOREENDOFPACKET field. */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_DoNotIgnore (0x0UL) /*!< Do not ignore the end of packet */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_Ignore (0x1UL) /*!< Ignore the end of packet */

/* Bit 4 : Insert reference antenna(SWITCHPATTERN[1]) between antenna switches, from SWITCHPATTERN[2] onwards */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Pos (4UL) /*!< Position of SWITCHBACKTOREF field. */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Msk (0x1UL << RADIO_DFECTRL4_SWITCHBACKTOREF_Pos) /*!< Bit mask of SWITCHBACKTOREF field. */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Disable (0x0UL) /*!< Do not insert reference antenna between switches */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Enable (0x1UL) /*!< Insert reference antenna between switches */

/* Bit 3 : Ignore the maximum number of samples and antenna slots specified with MAXTOTALSAMPLES and MAXTOTALSLOTS */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_Pos (3UL) /*!< Position of IGNOREMAXSPEC field. */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_Msk (0x1UL << RADIO_DFECTRL4_IGNOREMAXSPEC_Pos) /*!< Bit mask of IGNOREMAXSPEC field. */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_DoNotIgnore (0x0UL) /*!< Use the max specs */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_Ignore (0x1UL) /*!< Ignore the max specs */

/* Bit 2 : Ignore the length specification in numberOf8us */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_Pos (2UL) /*!< Position of IGNORE8USLENGTH field. */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_Msk (0x1UL << RADIO_DFECTRL4_IGNORE8USLENGTH_Pos) /*!< Bit mask of IGNORE8USLENGTH field. */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_DoNotIgnore (0x0UL) /*!< Use the length specification */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_Ignore (0x1UL) /*!< Ignore the length specification */

/* Bits 1..0 : Start point of TSAMPLEOFFSET sampling relative to which part in the switching state machine */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Pos (0UL) /*!< Position of SAMPLESTARTRELATIVETO field. */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Msk (0x3UL << RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Pos) /*!< Bit mask of SAMPLESTARTRELATIVETO field. */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Reference (0x0UL) /*!< At the start of the reference antenna period */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Switching (0x1UL) /*!< At the start of antenna switching after the reference antenna period */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Trigger (0x2UL) /*!< When it is triggered Either TASKS_DFESTART, address match or AoA/AoD procedure trigger source */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Guard (0x3UL) /*!< At the start of the GUARD period */

/* Register: RADIO_DFECTRL5 */
/* Description: Various hacker/tuning configuration for Direction finding */

/* Bits 28..24 : Tuning of the timing difference between the hypermode demodulator and the standard demodulator for the DFE start event, in 62.5 ns units */
#define RADIO_DFECTRL5_DFEOFFSETSTDHYP_Pos (24UL) /*!< Position of DFEOFFSETSTDHYP field. */
#define RADIO_DFECTRL5_DFEOFFSETSTDHYP_Msk (0x1FUL << RADIO_DFECTRL5_DFEOFFSETSTDHYP_Pos) /*!< Bit mask of DFEOFFSETSTDHYP field. */

/* Bit 18 : Selects whether saturation (being reported from the radio front-end) should be ignored in the beginning of the slot or not */
#define RADIO_DFECTRL5_NEVERIGNORESAT_Pos (18UL) /*!< Position of NEVERIGNORESAT field. */
#define RADIO_DFECTRL5_NEVERIGNORESAT_Msk (0x1UL << RADIO_DFECTRL5_NEVERIGNORESAT_Pos) /*!< Bit mask of NEVERIGNORESAT field. */
#define RADIO_DFECTRL5_NEVERIGNORESAT_Ignore (0x0UL) /*!< Saturation being indicated from the front-end is ignored if it happens in the first 40 percent of the sample spacing after a sample was saved to RAM */
#define RADIO_DFECTRL5_NEVERIGNORESAT_NeverIgnore (0x1UL) /*!< Saturation is always reported in RAM if detected by the frontend */

/* Bits 17..16 : Set how input saturation will be present in the captured samples */
#define RADIO_DFECTRL5_SATURATIONMODE_Pos (16UL) /*!< Position of SATURATIONMODE field. */
#define RADIO_DFECTRL5_SATURATIONMODE_Msk (0x3UL << RADIO_DFECTRL5_SATURATIONMODE_Pos) /*!< Bit mask of SATURATIONMODE field. */
#define RADIO_DFECTRL5_SATURATIONMODE_NoSaturation (0x0UL) /*!< No saturation is presented */
#define RADIO_DFECTRL5_SATURATIONMODE_MinVal (0x1UL) /*!< Saturation is marked by setting both I and Q to -32768 (or mag/phase if SAMPLETYPE is 1) */
#define RADIO_DFECTRL5_SATURATIONMODE_SaturationBit (0x2UL) /*!< Bit 15 of both the I and Q values indicates saturation. I and Q are hence only 15 bit values */

/* Register: RADIO_SWITCHPATTERN */
/* Description: GPIO patterns to be used for each antenna */

/* Bits 7..0 : Fill array of GPIO patterns for antenna control */
#define RADIO_SWITCHPATTERN_SWITCHPATTERN_Pos (0UL) /*!< Position of SWITCHPATTERN field. */
#define RADIO_SWITCHPATTERN_SWITCHPATTERN_Msk (0xFFUL << RADIO_SWITCHPATTERN_SWITCHPATTERN_Pos) /*!< Bit mask of SWITCHPATTERN field. */

/* Register: RADIO_CLEARPATTERN */
/* Description: Clear the GPIO pattern array for antenna control */

/* Bit 0 : Clears GPIO pattern array for antenna control */
#define RADIO_CLEARPATTERN_CLEARPATTERN_Pos (0UL) /*!< Position of CLEARPATTERN field. */
#define RADIO_CLEARPATTERN_CLEARPATTERN_Msk (0x1UL << RADIO_CLEARPATTERN_CLEARPATTERN_Pos) /*!< Bit mask of CLEARPATTERN field. */
#define RADIO_CLEARPATTERN_CLEARPATTERN_Clear (0x1UL) /*!< Clear the GPIO pattern */

/* Register: RADIO_PSEL_DFEGPIO */
/* Description: Description collection: Pin select for DFE pin n */

/* Bit 31 : Connection */
#define RADIO_PSEL_DFEGPIO_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_PSEL_DFEGPIO_CONNECT_Msk (0x1UL << RADIO_PSEL_DFEGPIO_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_PSEL_DFEGPIO_CONNECT_Connected (0x0UL) /*!< Connect */
#define RADIO_PSEL_DFEGPIO_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define RADIO_PSEL_DFEGPIO_PORT_Pos (5UL) /*!< Position of PORT field. */
#define RADIO_PSEL_DFEGPIO_PORT_Msk (0x1UL << RADIO_PSEL_DFEGPIO_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_PSEL_DFEGPIO_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_PSEL_DFEGPIO_PIN_Msk (0x1FUL << RADIO_PSEL_DFEGPIO_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_DFEPACKET_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define RADIO_DFEPACKET_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define RADIO_DFEPACKET_PTR_PTR_Msk (0xFFFFFFFFUL << RADIO_DFEPACKET_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: RADIO_DFEPACKET_MAXCNT */
/* Description: Maximum number of buffer words to transfer */

/* Bits 13..0 : Maximum number of buffer words to transfer */
#define RADIO_DFEPACKET_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define RADIO_DFEPACKET_MAXCNT_MAXCNT_Msk (0x3FFFUL << RADIO_DFEPACKET_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: RADIO_DFEPACKET_AMOUNT */
/* Description: Number of samples transferred in the last transaction */

/* Bits 15..0 : Number of samples transferred in the last transaction */
#define RADIO_DFEPACKET_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define RADIO_DFEPACKET_AMOUNT_AMOUNT_Msk (0xFFFFUL << RADIO_DFEPACKET_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: RADIO_DFEDMAEND */
/* Description: END event for DFE DMA without PPI nor IRQ */

/* Bit 0 : END event for DFE DMA */
#define RADIO_DFEDMAEND_DFEDMAEND_Pos (0UL) /*!< Position of DFEDMAEND field. */
#define RADIO_DFEDMAEND_DFEDMAEND_Msk (0x1UL << RADIO_DFEDMAEND_DFEDMAEND_Pos) /*!< Bit mask of DFEDMAEND field. */

/* Register: RADIO_DFEDMASTART */
/* Description: Manually start DmaChannelPeripheral for DFE */

/* Bit 0 : Manually start DmaChannelPeripheral for DFE */
#define RADIO_DFEDMASTART_DFEDMASTART_Pos (0UL) /*!< Position of DFEDMASTART field. */
#define RADIO_DFEDMASTART_DFEDMASTART_Msk (0x1UL << RADIO_DFEDMASTART_DFEDMASTART_Pos) /*!< Bit mask of DFEDMASTART field. */

/* Register: RADIO_DFEDMASTOP */
/* Description: Force stop DmaChannelPeripheral for DFE */

/* Bit 0 : Force stop DmaChannelPeripheral for DFE */
#define RADIO_DFEDMASTOP_DFEDMASTOP_Pos (0UL) /*!< Position of DFEDMASTOP field. */
#define RADIO_DFEDMASTOP_DFEDMASTOP_Msk (0x1UL << RADIO_DFEDMASTOP_DFEDMASTOP_Pos) /*!< Bit mask of DFEDMASTOP field. */

/* Register: RADIO_ACQENABLE */
/* Description: Enable or disable data acquisition (refer to 4378_164) */

/* Bit 0 : Enable or disable data acquisition */
#define RADIO_ACQENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define RADIO_ACQENABLE_ENABLE_Msk (0x1UL << RADIO_ACQENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_ACQENABLE_ENABLE_Disabled (0x0UL) /*!< Data acquisition is disabled */
#define RADIO_ACQENABLE_ENABLE_Enabled (0x1UL) /*!< Data acquisition is enabled */

/* Register: RADIO_ACQDMA_PTR */
/* Description: EasyDMA pointer for data acquisition (refer to 4378_164) */

/* Bits 31..0 : EasyDMA pointer for data acquisition */
#define RADIO_ACQDMA_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define RADIO_ACQDMA_PTR_PTR_Msk (0xFFFFFFFFUL << RADIO_ACQDMA_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: RADIO_ACQDMA_MAXCNT */
/* Description: Maximum number of 32-bit words to transfer (refer to 4378_164) */

/* Bits 15..0 : Maximum number of 32-bit words to transfer */
#define RADIO_ACQDMA_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define RADIO_ACQDMA_MAXCNT_MAXCNT_Msk (0xFFFFUL << RADIO_ACQDMA_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: RADIO_ACQDMA_AMOUNT */
/* Description: Number of 32-bit words transferred in the last transaction (refer to 4378_164) */

/* Bits 15..0 : Number of 32-bit words transferred in the last transaction */
#define RADIO_ACQDMA_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define RADIO_ACQDMA_AMOUNT_AMOUNT_Msk (0xFFFFUL << RADIO_ACQDMA_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: RADIO_ACQMODE */
/* Description: Data acquisition capture mode (refer to 4378_164) */

/* Bits 1..0 : Data acquisition capture mode */
#define RADIO_ACQMODE_ACQMODE_Pos (0UL) /*!< Position of ACQMODE field. */
#define RADIO_ACQMODE_ACQMODE_Msk (0x3UL << RADIO_ACQMODE_ACQMODE_Pos) /*!< Bit mask of ACQMODE field. */
#define RADIO_ACQMODE_ACQMODE_IANDQ (0x0UL) /*!< Logging ADCI and ADCQ */
#define RADIO_ACQMODE_ACQMODE_IQANDFSDIV (0x1UL) /*!< Logging ADCI, ADCQ and FSDIVNA */
#define RADIO_ACQMODE_ACQMODE_IQANDAGC (0x2UL) /*!< Logging ADCI, ADCQ and AGC gain settings */
#define RADIO_ACQMODE_ACQMODE_AGCANDDATA (0x3UL) /*!< Logging AGC gain settings and output data bits */

/* Register: RADIO_ACQAHBCNF */
/* Description: Data acquisition EasyDMA AHB configuration register (refer to 4378_164) */

/* Bit 0 :   */
#define RADIO_ACQAHBCNF_ACQAHBCNF_Pos (0UL) /*!< Position of ACQAHBCNF field. */
#define RADIO_ACQAHBCNF_ACQAHBCNF_Msk (0x1UL << RADIO_ACQAHBCNF_ACQAHBCNF_Pos) /*!< Bit mask of ACQAHBCNF field. */
#define RADIO_ACQAHBCNF_ACQAHBCNF_UTXRX (0x0UL) /*!< The EasyDMA channel in the TX/RX chain is using the AHB bus */
#define RADIO_ACQAHBCNF_ACQAHBCNF_ACQ (0x1UL) /*!< The EasyDMA channel in the data acquisition module is using the AHB bus */

/* Register: RADIO_PCGC_PENALTY */
/* Description: Power and clock */

/* Bit 0 : Power and clock */
#define RADIO_PCGC_PENALTY_PCGC_PENALTY_Pos (0UL) /*!< Position of PCGC_PENALTY field. */
#define RADIO_PCGC_PENALTY_PCGC_PENALTY_Msk (0x1UL << RADIO_PCGC_PENALTY_PCGC_PENALTY_Pos) /*!< Bit mask of PCGC_PENALTY field. */

/* Register: RADIO_PCGC_OVERRIDE */
/* Description: Power and clock */

/* Bit 0 : Power and clock */
#define RADIO_PCGC_OVERRIDE_PCGC_OVERRIDE_Pos (0UL) /*!< Position of PCGC_OVERRIDE field. */
#define RADIO_PCGC_OVERRIDE_PCGC_OVERRIDE_Msk (0x1UL << RADIO_PCGC_OVERRIDE_PCGC_OVERRIDE_Pos) /*!< Bit mask of PCGC_OVERRIDE field. */

/* Register: RADIO_PCGC_CLK_REQ */
/* Description: Power and clock */

/* Bit 0 : Power and clock */
#define RADIO_PCGC_CLK_REQ_PCGC_CLK_REQ_Pos (0UL) /*!< Position of PCGC_CLK_REQ field. */
#define RADIO_PCGC_CLK_REQ_PCGC_CLK_REQ_Msk (0x1UL << RADIO_PCGC_CLK_REQ_PCGC_CLK_REQ_Pos) /*!< Bit mask of PCGC_CLK_REQ field. */

/* Register: RADIO_PCGC_BACKDOOR */
/* Description: Power and clock */

/* Bit 0 : Power and clock */
#define RADIO_PCGC_BACKDOOR_PCGC_BACKDOOR_Pos (0UL) /*!< Position of PCGC_BACKDOOR field. */
#define RADIO_PCGC_BACKDOOR_PCGC_BACKDOOR_Msk (0x1UL << RADIO_PCGC_BACKDOOR_PCGC_BACKDOOR_Pos) /*!< Bit mask of PCGC_BACKDOOR field. */

/* Register: RADIO_PCGC_FORCEREG */
/* Description: Power and clock */

/* Bit 0 : Power and clock */
#define RADIO_PCGC_FORCEREG_PCGC_FORCEREG_Pos (0UL) /*!< Position of PCGC_FORCEREG field. */
#define RADIO_PCGC_FORCEREG_PCGC_FORCEREG_Msk (0x1UL << RADIO_PCGC_FORCEREG_PCGC_FORCEREG_Pos) /*!< Bit mask of PCGC_FORCEREG field. */

/* Register: RADIO_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define RADIO_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define RADIO_POWER_POWER_Msk (0x1UL << RADIO_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define RADIO_POWER_POWER_Disabled (0x0UL) /*!< Peripheral is powered off */
#define RADIO_POWER_POWER_Enabled (0x1UL) /*!< Peripheral is powered on */


/* Peripheral: RAMBIST */
/* Description: The RamBist perform hardware accelerated RAM tests 0 */

/* Register: RAMBIST_STATUS_BIST */
/* Description: Status of the BIST */

/* Bit 2 : The RamBist is currently waiting for a RUNBIST handshake, see retention test protocol */
#define RAMBIST_STATUS_BIST_SLEEP_Pos (2UL) /*!< Position of SLEEP field. */
#define RAMBIST_STATUS_BIST_SLEEP_Msk (0x1UL << RAMBIST_STATUS_BIST_SLEEP_Pos) /*!< Bit mask of SLEEP field. */

/* Bit 1 : The RamBist passed, meaning all the compares in the pattern succeded */
#define RAMBIST_STATUS_BIST_PASSED_Pos (1UL) /*!< Position of PASSED field. */
#define RAMBIST_STATUS_BIST_PASSED_Msk (0x1UL << RAMBIST_STATUS_BIST_PASSED_Pos) /*!< Bit mask of PASSED field. */

/* Bit 0 : The RamBist is finished */
#define RAMBIST_STATUS_BIST_DONE_Pos (0UL) /*!< Position of DONE field. */
#define RAMBIST_STATUS_BIST_DONE_Msk (0x1UL << RAMBIST_STATUS_BIST_DONE_Pos) /*!< Bit mask of DONE field. */

/* Register: RAMBIST_STATUS_FAULTY */
/* Description: Which blocks are failing the test */

/* Bits 15..0 : 0 if block has no miscompares, 1 if block has miscompares.
 Size and indices are equal to CLAMP.BLOCKS */
#define RAMBIST_STATUS_FAULTY_BLOCKS_Pos (0UL) /*!< Position of BLOCKS field. */
#define RAMBIST_STATUS_FAULTY_BLOCKS_Msk (0xFFFFUL << RAMBIST_STATUS_FAULTY_BLOCKS_Pos) /*!< Bit mask of BLOCKS field. */

/* Register: RAMBIST_RUN */
/* Description: Run the BIST engine, must be kept 1 until the BIST is finished */

/* Bit 0 : When 1, the RamBist runs */
#define RAMBIST_RUN_BIST_Pos (0UL) /*!< Position of BIST field. */
#define RAMBIST_RUN_BIST_Msk (0x1UL << RAMBIST_RUN_BIST_Pos) /*!< Bit mask of BIST field. */

/* Register: RAMBIST_CONFIG_RAMBIST */
/* Description: Configuration of the RamBist itself. When none of the fields are set, it runs the standard production test BIST. */

/* Bit 1 : Runs the retention test protocol, does only exists if the connected RAMs require retention test */
#define RAMBIST_CONFIG_RAMBIST_RETENTION_Pos (1UL) /*!< Position of RETENTION field. */
#define RAMBIST_CONFIG_RAMBIST_RETENTION_Msk (0x1UL << RAMBIST_CONFIG_RAMBIST_RETENTION_Pos) /*!< Bit mask of RETENTION field. */

/* Bit 0 : Runs a fast subset of the tests, intended for debug only */
#define RAMBIST_CONFIG_RAMBIST_QUICKMODE_Pos (0UL) /*!< Position of QUICKMODE field. */
#define RAMBIST_CONFIG_RAMBIST_QUICKMODE_Msk (0x1UL << RAMBIST_CONFIG_RAMBIST_QUICKMODE_Pos) /*!< Bit mask of QUICKMODE field. */

/* Register: RAMBIST_CONFIG_RAM */
/* Description: Override of the RAM configuration */

/* Bits 6..0 : Depending on the RAM Vendor, this field is different.
 The reset value is also vendor dependent.
(Noted as Vendor[width]: [Signal[width]=..].)
 TSMC0[4:0]: WTSEL[2:0], RTSEL[1:0].
 TSMC1[1:0]: TSEL[1:0].
 MobileSemi[6:0]: BTRIM[3:0], WM, RM, RWM. */
#define RAMBIST_CONFIG_RAM_CONFIG_Pos (0UL) /*!< Position of CONFIG field. */
#define RAMBIST_CONFIG_RAM_CONFIG_Msk (0x7FUL << RAMBIST_CONFIG_RAM_CONFIG_Pos) /*!< Bit mask of CONFIG field. */

/* Register: RAMBIST_CONFIG_CLAMP */
/* Description: Clamp/Exclude certain blocks from the test */

/* Bits 15..0 : Bit indexed, if an entry is 1, the block is not receiving stimuli, and excluded from the comparison. Parameterized with the number of RAM macros */
#define RAMBIST_CONFIG_CLAMP_BLOCKS_Pos (0UL) /*!< Position of BLOCKS field. */
#define RAMBIST_CONFIG_CLAMP_BLOCKS_Msk (0xFFFFUL << RAMBIST_CONFIG_CLAMP_BLOCKS_Pos) /*!< Bit mask of BLOCKS field. */


/* Peripheral: RCOSC32K */
/* Description: 32.768 kHz RC oscillator */

/* Register: RCOSC32K_TASKS_CAL */
/* Description: Start calibration of LFRC oscillator */

/* Bit 0 : Start calibration of LFRC oscillator */
#define RCOSC32K_TASKS_CAL_TASKS_CAL_Pos (0UL) /*!< Position of TASKS_CAL field. */
#define RCOSC32K_TASKS_CAL_TASKS_CAL_Msk (0x1UL << RCOSC32K_TASKS_CAL_TASKS_CAL_Pos) /*!< Bit mask of TASKS_CAL field. */
#define RCOSC32K_TASKS_CAL_TASKS_CAL_Trigger (0x1UL) /*!< Trigger task */

/* Register: RCOSC32K_TASKS_CTSTART */
/* Description: Deprecated register - Start calibration timer */

/* Bit 0 : Deprecated field -  Start calibration timer */
#define RCOSC32K_TASKS_CTSTART_TASKS_CTSTART_Pos (0UL) /*!< Position of TASKS_CTSTART field. */
#define RCOSC32K_TASKS_CTSTART_TASKS_CTSTART_Msk (0x1UL << RCOSC32K_TASKS_CTSTART_TASKS_CTSTART_Pos) /*!< Bit mask of TASKS_CTSTART field. */
#define RCOSC32K_TASKS_CTSTART_TASKS_CTSTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RCOSC32K_TASKS_CTSTOP */
/* Description: Deprecated register - Stop calibration timer */

/* Bit 0 : Deprecated field -  Stop calibration timer */
#define RCOSC32K_TASKS_CTSTOP_TASKS_CTSTOP_Pos (0UL) /*!< Position of TASKS_CTSTOP field. */
#define RCOSC32K_TASKS_CTSTOP_TASKS_CTSTOP_Msk (0x1UL << RCOSC32K_TASKS_CTSTOP_TASKS_CTSTOP_Pos) /*!< Bit mask of TASKS_CTSTOP field. */
#define RCOSC32K_TASKS_CTSTOP_TASKS_CTSTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RCOSC32K_SUBSCRIBE_CAL */
/* Description: Subscribe configuration for task CAL */

/* Bit 31 :   */
#define RCOSC32K_SUBSCRIBE_CAL_EN_Pos (31UL) /*!< Position of EN field. */
#define RCOSC32K_SUBSCRIBE_CAL_EN_Msk (0x1UL << RCOSC32K_SUBSCRIBE_CAL_EN_Pos) /*!< Bit mask of EN field. */
#define RCOSC32K_SUBSCRIBE_CAL_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RCOSC32K_SUBSCRIBE_CAL_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CAL will subscribe to */
#define RCOSC32K_SUBSCRIBE_CAL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RCOSC32K_SUBSCRIBE_CAL_CHIDX_Msk (0xFFUL << RCOSC32K_SUBSCRIBE_CAL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RCOSC32K_SUBSCRIBE_CTSTART */
/* Description: Deprecated register - Subscribe configuration for task CTSTART */

/* Bit 31 :   */
#define RCOSC32K_SUBSCRIBE_CTSTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RCOSC32K_SUBSCRIBE_CTSTART_EN_Msk (0x1UL << RCOSC32K_SUBSCRIBE_CTSTART_EN_Pos) /*!< Bit mask of EN field. */
#define RCOSC32K_SUBSCRIBE_CTSTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RCOSC32K_SUBSCRIBE_CTSTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CTSTART will subscribe to */
#define RCOSC32K_SUBSCRIBE_CTSTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RCOSC32K_SUBSCRIBE_CTSTART_CHIDX_Msk (0xFFUL << RCOSC32K_SUBSCRIBE_CTSTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RCOSC32K_SUBSCRIBE_CTSTOP */
/* Description: Deprecated register - Subscribe configuration for task CTSTOP */

/* Bit 31 :   */
#define RCOSC32K_SUBSCRIBE_CTSTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RCOSC32K_SUBSCRIBE_CTSTOP_EN_Msk (0x1UL << RCOSC32K_SUBSCRIBE_CTSTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RCOSC32K_SUBSCRIBE_CTSTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RCOSC32K_SUBSCRIBE_CTSTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CTSTOP will subscribe to */
#define RCOSC32K_SUBSCRIBE_CTSTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RCOSC32K_SUBSCRIBE_CTSTOP_CHIDX_Msk (0xFFUL << RCOSC32K_SUBSCRIBE_CTSTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RCOSC32K_EVENTS_CTTO */
/* Description: Deprecated register - Calibration timer timeout */

/* Bit 0 : Deprecated field -  Calibration timer timeout */
#define RCOSC32K_EVENTS_CTTO_EVENTS_CTTO_Pos (0UL) /*!< Position of EVENTS_CTTO field. */
#define RCOSC32K_EVENTS_CTTO_EVENTS_CTTO_Msk (0x1UL << RCOSC32K_EVENTS_CTTO_EVENTS_CTTO_Pos) /*!< Bit mask of EVENTS_CTTO field. */
#define RCOSC32K_EVENTS_CTTO_EVENTS_CTTO_NotGenerated (0x0UL) /*!< Event not generated */
#define RCOSC32K_EVENTS_CTTO_EVENTS_CTTO_Generated (0x1UL) /*!< Event generated */

/* Register: RCOSC32K_EVENTS_DONE */
/* Description: Calibration of LFCLK RC oscillator complete event */

/* Bit 0 : Calibration of LFCLK RC oscillator complete event */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_Pos (0UL) /*!< Position of EVENTS_DONE field. */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << RCOSC32K_EVENTS_DONE_EVENTS_DONE_Pos) /*!< Bit mask of EVENTS_DONE field. */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_NotGenerated (0x0UL) /*!< Event not generated */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_Generated (0x1UL) /*!< Event generated */

/* Register: RCOSC32K_EVENTS_CTSTARTED */
/* Description: Deprecated register - Calibration timer started */

/* Bit 0 : Deprecated field -  Calibration timer started */
#define RCOSC32K_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Pos (0UL) /*!< Position of EVENTS_CTSTARTED field. */
#define RCOSC32K_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Msk (0x1UL << RCOSC32K_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Pos) /*!< Bit mask of EVENTS_CTSTARTED field. */
#define RCOSC32K_EVENTS_CTSTARTED_EVENTS_CTSTARTED_NotGenerated (0x0UL) /*!< Event not generated */
#define RCOSC32K_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Generated (0x1UL) /*!< Event generated */

/* Register: RCOSC32K_EVENTS_CTSTOPPED */
/* Description: Deprecated register - Calibration timer stopped */

/* Bit 0 : Deprecated field -  Calibration timer stopped */
#define RCOSC32K_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Pos (0UL) /*!< Position of EVENTS_CTSTOPPED field. */
#define RCOSC32K_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Msk (0x1UL << RCOSC32K_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Pos) /*!< Bit mask of EVENTS_CTSTOPPED field. */
#define RCOSC32K_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_NotGenerated (0x0UL) /*!< Event not generated */
#define RCOSC32K_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Generated (0x1UL) /*!< Event generated */

/* Register: RCOSC32K_PUBLISH_CTTO */
/* Description: Deprecated register - Publish configuration for event CTTO */

/* Bit 31 :   */
#define RCOSC32K_PUBLISH_CTTO_EN_Pos (31UL) /*!< Position of EN field. */
#define RCOSC32K_PUBLISH_CTTO_EN_Msk (0x1UL << RCOSC32K_PUBLISH_CTTO_EN_Pos) /*!< Bit mask of EN field. */
#define RCOSC32K_PUBLISH_CTTO_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RCOSC32K_PUBLISH_CTTO_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CTTO will publish to */
#define RCOSC32K_PUBLISH_CTTO_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RCOSC32K_PUBLISH_CTTO_CHIDX_Msk (0xFFUL << RCOSC32K_PUBLISH_CTTO_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RCOSC32K_PUBLISH_DONE */
/* Description: Publish configuration for event DONE */

/* Bit 31 :   */
#define RCOSC32K_PUBLISH_DONE_EN_Pos (31UL) /*!< Position of EN field. */
#define RCOSC32K_PUBLISH_DONE_EN_Msk (0x1UL << RCOSC32K_PUBLISH_DONE_EN_Pos) /*!< Bit mask of EN field. */
#define RCOSC32K_PUBLISH_DONE_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RCOSC32K_PUBLISH_DONE_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DONE will publish to */
#define RCOSC32K_PUBLISH_DONE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RCOSC32K_PUBLISH_DONE_CHIDX_Msk (0xFFUL << RCOSC32K_PUBLISH_DONE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RCOSC32K_PUBLISH_CTSTARTED */
/* Description: Deprecated register - Publish configuration for event CTSTARTED */

/* Bit 31 :   */
#define RCOSC32K_PUBLISH_CTSTARTED_EN_Pos (31UL) /*!< Position of EN field. */
#define RCOSC32K_PUBLISH_CTSTARTED_EN_Msk (0x1UL << RCOSC32K_PUBLISH_CTSTARTED_EN_Pos) /*!< Bit mask of EN field. */
#define RCOSC32K_PUBLISH_CTSTARTED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RCOSC32K_PUBLISH_CTSTARTED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CTSTARTED will publish to */
#define RCOSC32K_PUBLISH_CTSTARTED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RCOSC32K_PUBLISH_CTSTARTED_CHIDX_Msk (0xFFUL << RCOSC32K_PUBLISH_CTSTARTED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RCOSC32K_PUBLISH_CTSTOPPED */
/* Description: Deprecated register - Publish configuration for event CTSTOPPED */

/* Bit 31 :   */
#define RCOSC32K_PUBLISH_CTSTOPPED_EN_Pos (31UL) /*!< Position of EN field. */
#define RCOSC32K_PUBLISH_CTSTOPPED_EN_Msk (0x1UL << RCOSC32K_PUBLISH_CTSTOPPED_EN_Pos) /*!< Bit mask of EN field. */
#define RCOSC32K_PUBLISH_CTSTOPPED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RCOSC32K_PUBLISH_CTSTOPPED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CTSTOPPED will publish to */
#define RCOSC32K_PUBLISH_CTSTOPPED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RCOSC32K_PUBLISH_CTSTOPPED_CHIDX_Msk (0xFFUL << RCOSC32K_PUBLISH_CTSTOPPED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RCOSC32K_RCOSC32KIFINE */
/* Description: Fine calibration read value for 32.768 kHz RC oscillator */

/* Bits 9..0 : Fine calibration read value for 32.768 kHz RC oscillator */
#define RCOSC32K_RCOSC32KIFINE_RCOSC32KIFINE_Pos (0UL) /*!< Position of RCOSC32KIFINE field. */
#define RCOSC32K_RCOSC32KIFINE_RCOSC32KIFINE_Msk (0x3FFUL << RCOSC32K_RCOSC32KIFINE_RCOSC32KIFINE_Pos) /*!< Bit mask of RCOSC32KIFINE field. */

/* Register: RCOSC32K_RCOSC32KICOARSE */
/* Description: Coarse calibration read value for 32.768 kHz RC oscillator */

/* Bits 5..0 : Coarse calibration read value for 32.768 kHz RC oscillator */
#define RCOSC32K_RCOSC32KICOARSE_RCOSC32KICOARSE_Pos (0UL) /*!< Position of RCOSC32KICOARSE field. */
#define RCOSC32K_RCOSC32KICOARSE_RCOSC32KICOARSE_Msk (0x3FUL << RCOSC32K_RCOSC32KICOARSE_RCOSC32KICOARSE_Pos) /*!< Bit mask of RCOSC32KICOARSE field. */

/* Register: RCOSC32K_RCOSC32KICALTEST */
/* Description: 32.768 kHz RC oscillator calibration debug register NOTE: This register should not be written to while the RCOSC source is running. */

/* Bit 1 : Disable calSync auto-calibration */
#define RCOSC32K_RCOSC32KICALTEST_CALSYNCDISABLE_Pos (1UL) /*!< Position of CALSYNCDISABLE field. */
#define RCOSC32K_RCOSC32KICALTEST_CALSYNCDISABLE_Msk (0x1UL << RCOSC32K_RCOSC32KICALTEST_CALSYNCDISABLE_Pos) /*!< Bit mask of CALSYNCDISABLE field. */
#define RCOSC32K_RCOSC32KICALTEST_CALSYNCDISABLE_Enabled (0x0UL) /*!< calSync auto-calibration enabled */
#define RCOSC32K_RCOSC32KICALTEST_CALSYNCDISABLE_Disabled (0x1UL) /*!< calSync auto-calibration disabled */

/* Bit 0 : Enable debug pins: calSync on P0.8 (input); ck32Ki on P0.13 (output); rcosc32KiCalib on P0.19 (output) */
#define RCOSC32K_RCOSC32KICALTEST_DEBUGPINSEN_Pos (0UL) /*!< Position of DEBUGPINSEN field. */
#define RCOSC32K_RCOSC32KICALTEST_DEBUGPINSEN_Msk (0x1UL << RCOSC32K_RCOSC32KICALTEST_DEBUGPINSEN_Pos) /*!< Bit mask of DEBUGPINSEN field. */
#define RCOSC32K_RCOSC32KICALTEST_DEBUGPINSEN_Disabled (0x0UL) /*!< Pins in normal operation */
#define RCOSC32K_RCOSC32KICALTEST_DEBUGPINSEN_Enabled (0x1UL) /*!< Pins mapped for debug */

/* Register: RCOSC32K_CTIV */
/* Description: Deprecated register - Calibration timer interval NOTE: This register should not be written to while the calibration timer is running. */

/* Bits 6..0 : Calibration timer interval in multiple of 0.25 seconds. Range: 0.25 seconds to 31.75 seconds. */
#define RCOSC32K_CTIV_CTIV_Pos (0UL) /*!< Position of CTIV field. */
#define RCOSC32K_CTIV_CTIV_Msk (0x7FUL << RCOSC32K_CTIV_CTIV_Pos) /*!< Bit mask of CTIV field. */

/* Register: RCOSC32K_RCOSC32KICALLENGTH */
/* Description: 32kHz RC oscillator calibration length This value is read from FICR */

/* Bits 2..0 : 32kHz RC oscillator calibration length in number of cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Pos (0UL) /*!< Position of RCOSC32KICALLENGTH field. */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Msk (0x7UL << RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Pos) /*!< Bit mask of RCOSC32KICALLENGTH field. */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N64 (0x0UL) /*!< 64 cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N128 (0x1UL) /*!< 128 cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N256 (0x2UL) /*!< 256 cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N512 (0x3UL) /*!< 512 cycles */

/* Register: RCOSC32K_RCOSC32KICOARSEIN */
/* Description: RCOSC coarse calibration input This value is read from FICR */

/* Bits 5..0 : RCOSC coarse calibration input */
#define RCOSC32K_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Pos (0UL) /*!< Position of RCOSC32KICOARSEIN field. */
#define RCOSC32K_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Msk (0x3FUL << RCOSC32K_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Pos) /*!< Bit mask of RCOSC32KICOARSEIN field. */

/* Register: RCOSC32K_RCOSC32KICABD */
/* Description: Comparator adaptive biasing disable */

/* Bit 0 : Disables comparator adaptive biasing */
#define RCOSC32K_RCOSC32KICABD_CABD_Pos (0UL) /*!< Position of CABD field. */
#define RCOSC32K_RCOSC32KICABD_CABD_Msk (0x1UL << RCOSC32K_RCOSC32KICABD_CABD_Pos) /*!< Bit mask of CABD field. */
#define RCOSC32K_RCOSC32KICABD_CABD_Disabled (0x0UL) /*!< Disable */
#define RCOSC32K_RCOSC32KICABD_CABD_Enabled (0x1UL) /*!< Enable */

/* Register: RCOSC32K_ATECLOCK */
/* Description: Analog test bus control for clock modules */

/* Bit 0 : Connect or disconnect 32.768 kHz RC oscillator to analog test bus */
#define RCOSC32K_ATECLOCK_RCOSC32K_Pos (0UL) /*!< Position of RCOSC32K field. */
#define RCOSC32K_ATECLOCK_RCOSC32K_Msk (0x1UL << RCOSC32K_ATECLOCK_RCOSC32K_Pos) /*!< Bit mask of RCOSC32K field. */
#define RCOSC32K_ATECLOCK_RCOSC32K_Disconnected (0x0UL) /*!< Disconnect */
#define RCOSC32K_ATECLOCK_RCOSC32K_Connected (0x1UL) /*!< Connect internal regulator output to ATB0 */

/* Register: RCOSC32K_LFRCMODE */
/* Description: LFRC mode configuration */

/* Bit 0 : Set LFRC mode */
#define RCOSC32K_LFRCMODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define RCOSC32K_LFRCMODE_MODE_Msk (0x1UL << RCOSC32K_LFRCMODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define RCOSC32K_LFRCMODE_MODE_Normal (0x0UL) /*!< Normal mode */
#define RCOSC32K_LFRCMODE_MODE_ULP (0x1UL) /*!< Deprecated enumerator -  Ultra-low power mode (ULP) */

/* Register: RCOSC32K_LFULP32KICOARSEIN */
/* Description: Deprecated register - LFULP coarse calibration input This value is read from FICR */

/* Bits 5..0 : LFULP coarse calibration input */
#define RCOSC32K_LFULP32KICOARSEIN_LFULP32KICOARSE_Pos (0UL) /*!< Position of LFULP32KICOARSE field. */
#define RCOSC32K_LFULP32KICOARSEIN_LFULP32KICOARSE_Msk (0x3FUL << RCOSC32K_LFULP32KICOARSEIN_LFULP32KICOARSE_Pos) /*!< Bit mask of LFULP32KICOARSE field. */

/* Register: RCOSC32K_LFULP32KICALLENGTH */
/* Description: Deprecated register - 32kHz LFULP RC oscillator calibration length This value is read from FICR */

/* Bits 2..0 : 32kHz ULP RC oscillator calibration length in number of cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_Pos (0UL) /*!< Position of LFULP32KICALLENGTH field. */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_Msk (0x7UL << RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_Pos) /*!< Bit mask of LFULP32KICALLENGTH field. */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N64 (0x0UL) /*!< 64 cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N128 (0x1UL) /*!< 128 cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N256 (0x2UL) /*!< 256 cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N512 (0x3UL) /*!< 512 cycles */

/* Register: RCOSC32K_DISABLERCOSC32KIPOWERUPCONTROL */
/* Description: Backdoor for disabling Rcosc32KiPowerUpControl module in Rcosc32KiGenerator. */

/* Bit 0 : Disable Rcosc32KiPowerUpControl. */
#define RCOSC32K_DISABLERCOSC32KIPOWERUPCONTROL_Disable_Pos (0UL) /*!< Position of Disable field. */
#define RCOSC32K_DISABLERCOSC32KIPOWERUPCONTROL_Disable_Msk (0x1UL << RCOSC32K_DISABLERCOSC32KIPOWERUPCONTROL_Disable_Pos) /*!< Bit mask of Disable field. */
#define RCOSC32K_DISABLERCOSC32KIPOWERUPCONTROL_Disable_Enabled (0x0UL) /*!< Rcosc32KiPowerUpControl is enabled. */
#define RCOSC32K_DISABLERCOSC32KIPOWERUPCONTROL_Disable_Disabled (0x1UL) /*!< Rcosc32KiPowerUpControl is disabled. */


/* Peripheral: REGULATORS */
/* Description: Regulator control */

/* Register: REGULATORS_MAINREGSTATUS */
/* Description: Main supply status */

/* Bit 0 : VREGUSB status */
#define REGULATORS_MAINREGSTATUS_VREGUSB_Pos (0UL) /*!< Position of VREGUSB field. */
#define REGULATORS_MAINREGSTATUS_VREGUSB_Msk (0x1UL << REGULATORS_MAINREGSTATUS_VREGUSB_Pos) /*!< Bit mask of VREGUSB field. */
#define REGULATORS_MAINREGSTATUS_VREGUSB_Inactive (0x0UL) /*!< Voltage supplied on VDD. */
#define REGULATORS_MAINREGSTATUS_VREGUSB_Active (0x1UL) /*!< Voltage supplied on VREGUSB. */

/* Register: REGULATORS_DISABLEHPBOR */
/* Description: Enable or disable HPBOR */

/* Bit 0 : Enable or disable HPBOR */
#define REGULATORS_DISABLEHPBOR_DISABLE_Pos (0UL) /*!< Position of DISABLE field. */
#define REGULATORS_DISABLEHPBOR_DISABLE_Msk (0x1UL << REGULATORS_DISABLEHPBOR_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define REGULATORS_DISABLEHPBOR_DISABLE_Enabled (0x0UL) /*!< Enable HPBOR */
#define REGULATORS_DISABLEHPBOR_DISABLE_Disabled (0x1UL) /*!< Disable HPBOR */

/* Register: REGULATORS_SYSTEMOFF */
/* Description: System OFF register */

/* Bit 0 : Enable System OFF mode */
#define REGULATORS_SYSTEMOFF_SYSTEMOFF_Pos (0UL) /*!< Position of SYSTEMOFF field. */
#define REGULATORS_SYSTEMOFF_SYSTEMOFF_Msk (0x1UL << REGULATORS_SYSTEMOFF_SYSTEMOFF_Pos) /*!< Bit mask of SYSTEMOFF field. */
#define REGULATORS_SYSTEMOFF_SYSTEMOFF_Enter (0x1UL) /*!< Enable System OFF mode */

/* Register: REGULATORS_POFSTAT */
/* Description: Power-fail comparator status register */

/* Bit 0 : Power-fail comparator status */
#define REGULATORS_POFSTAT_COMPARATOR_Pos (0UL) /*!< Position of COMPARATOR field. */
#define REGULATORS_POFSTAT_COMPARATOR_Msk (0x1UL << REGULATORS_POFSTAT_COMPARATOR_Pos) /*!< Bit mask of COMPARATOR field. */
#define REGULATORS_POFSTAT_COMPARATOR_Above (0x0UL) /*!< Detected voltage is above VPOF threshold */
#define REGULATORS_POFSTAT_COMPARATOR_Below (0x1UL) /*!< Detected voltage is below VPOF threshold. */

/* Register: REGULATORS_POFCON */
/* Description: Power-fail comparator configuration */

/* Bit 16 : Power-fail comparator input selector */
#define REGULATORS_POFCON_SEL_Pos (16UL) /*!< Position of SEL field. */
#define REGULATORS_POFCON_SEL_Msk (0x1UL << REGULATORS_POFCON_SEL_Pos) /*!< Bit mask of SEL field. */
#define REGULATORS_POFCON_SEL_VDD (0x0UL) /*!< POF measures or monitors the VDD supply voltage pin */
#define REGULATORS_POFCON_SEL_VMON (0x1UL) /*!< POF measures or monitors the BATMON pin. */

/* Bit 7 : Disable the POFWARN power-fail warning event */
#define REGULATORS_POFCON_EVENTDISABLE_Pos (7UL) /*!< Position of EVENTDISABLE field. */
#define REGULATORS_POFCON_EVENTDISABLE_Msk (0x1UL << REGULATORS_POFCON_EVENTDISABLE_Pos) /*!< Bit mask of EVENTDISABLE field. */
#define REGULATORS_POFCON_EVENTDISABLE_Enabled (0x0UL) /*!< POFWARN event is generated. */
#define REGULATORS_POFCON_EVENTDISABLE_Disabled (0x1UL) /*!< POFWARN event is not generated. */

/* Bit 6 : Bypass power-fail comparator hysteresis */
#define REGULATORS_POFCON_HYSTDIS_Pos (6UL) /*!< Position of HYSTDIS field. */
#define REGULATORS_POFCON_HYSTDIS_Msk (0x1UL << REGULATORS_POFCON_HYSTDIS_Pos) /*!< Bit mask of HYSTDIS field. */
#define REGULATORS_POFCON_HYSTDIS_Normal (0x0UL) /*!< Hysteresis active */
#define REGULATORS_POFCON_HYSTDIS_NoHyst (0x1UL) /*!< Hysteresis disabled */

/* Bits 4..1 : Power-fail comparator threshold setting */
#define REGULATORS_POFCON_THRESHOLD_Pos (1UL) /*!< Position of THRESHOLD field. */
#define REGULATORS_POFCON_THRESHOLD_Msk (0xFUL << REGULATORS_POFCON_THRESHOLD_Pos) /*!< Bit mask of THRESHOLD field. */
#define REGULATORS_POFCON_THRESHOLD_V17 (0x0UL) /*!< Set threshold to 1.7 V for VBUS, or 0.90 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V18 (0x1UL) /*!< Set threshold to 1.8 V for VBUS, or 0.95 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V19 (0x2UL) /*!< Set threshold to 1.9 V for VBUS, or 1.00 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V20 (0x3UL) /*!< Set threshold to 2.0 V for VBUS, or 1.05 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V21 (0x4UL) /*!< Set threshold to 2.1 V for VBUS, or 1.10 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V22 (0x5UL) /*!< Set threshold to 2.2 V for VBUS, or 1.15 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V23 (0x6UL) /*!< Set threshold to 2.3 V for VBUS, or 1.20 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V24 (0x7UL) /*!< Set threshold to 2.4 V for VBUS, or 1.25 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V25 (0x8UL) /*!< Set threshold to 2.5 V for VBUS, or 1.30 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V26 (0x9UL) /*!< Set threshold to 2.6 V for VBUS, or 1.35 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V27 (0xAUL) /*!< Set threshold to 2.7 V for VBUS, or 1.40 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V28 (0xBUL) /*!< Set threshold to 2.8 V for VBUS, or 1.45 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V29 (0xCUL) /*!< Set threshold to 2.9 V for VBUS, or 1.50 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V30 (0xDUL) /*!< Set threshold to 3.0 V for VBUS, or 1.55 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V31 (0xEUL) /*!< Set threshold to 3.1 V for VBUS, or 1.60 V for VDD */
#define REGULATORS_POFCON_THRESHOLD_V32 (0xFUL) /*!< Set threshold to 3.2 V for VBUS, or 1.65 V for VDD */

/* Bit 0 : Enable or disable power-fail comparator */
#define REGULATORS_POFCON_POF_Pos (0UL) /*!< Position of POF field. */
#define REGULATORS_POFCON_POF_Msk (0x1UL << REGULATORS_POFCON_POF_Pos) /*!< Bit mask of POF field. */
#define REGULATORS_POFCON_POF_Disabled (0x0UL) /*!< Disable */
#define REGULATORS_POFCON_POF_Enabled (0x1UL) /*!< Enable */

/* Register: REGULATORS_IGNOREDAPCPWRREGMODE */
/* Description: Ignore DAPCP power mode */

/* Bit 0 : Ignore power request from debugger */
#define REGULATORS_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_Pos (0UL) /*!< Position of IGNOREDAPCPWRREGMODE field. */
#define REGULATORS_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_Msk (0x1UL << REGULATORS_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_Pos) /*!< Bit mask of IGNOREDAPCPWRREGMODE field. */
#define REGULATORS_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_DoNotIgnore (0x0UL) /*!< Do not ignore power request from debugger */
#define REGULATORS_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_Ignore (0x1UL) /*!< Ignore power request from debugger */

/* Register: REGULATORS_RSTVTHTRIM */
/* Description: Threshold trim, power-on reset */

/* Bits 4..0 : Threshold trim, power-on reset */
#define REGULATORS_RSTVTHTRIM_RSTVTHTRIM_Pos (0UL) /*!< Position of RSTVTHTRIM field. */
#define REGULATORS_RSTVTHTRIM_RSTVTHTRIM_Msk (0x1FUL << REGULATORS_RSTVTHTRIM_RSTVTHTRIM_Pos) /*!< Bit mask of RSTVTHTRIM field. */

/* Register: REGULATORS_BGREFTRIM */
/* Description: Master bias bandgap trim */

/* Bits 3..0 : Threshold trim, brown-out reset for VDDL battery */
#define REGULATORS_BGREFTRIM_BGREFTRIM_Pos (0UL) /*!< Position of BGREFTRIM field. */
#define REGULATORS_BGREFTRIM_BGREFTRIM_Msk (0xFUL << REGULATORS_BGREFTRIM_BGREFTRIM_Pos) /*!< Bit mask of BGREFTRIM field. */

/* Register: REGULATORS_VREFULPTRIM */
/* Description: Trim value of VREF_ULP */

/* Bits 3..0 : Trim value of VREF_ULP Default 4'b0011 */
#define REGULATORS_VREFULPTRIM_VREFULPTRIM_Pos (0UL) /*!< Position of VREFULPTRIM field. */
#define REGULATORS_VREFULPTRIM_VREFULPTRIM_Msk (0xFUL << REGULATORS_VREFULPTRIM_VREFULPTRIM_Pos) /*!< Bit mask of VREFULPTRIM field. */

/* Register: REGULATORS_FORCEVBUSDET */
/* Description: Force VBUS detection indication */

/* Bits 1..0 : Force VBUS detection indication, overriding the analog detection circuitry */
#define REGULATORS_FORCEVBUSDET_FORCEVBUSDET_Pos (0UL) /*!< Position of FORCEVBUSDET field. */
#define REGULATORS_FORCEVBUSDET_FORCEVBUSDET_Msk (0x3UL << REGULATORS_FORCEVBUSDET_FORCEVBUSDET_Pos) /*!< Bit mask of FORCEVBUSDET field. */
#define REGULATORS_FORCEVBUSDET_FORCEVBUSDET_DoNotForce (0x0UL) /*!< Do not force VBUS detection output */
#define REGULATORS_FORCEVBUSDET_FORCEVBUSDET_ForceNoVbusDet (0x1UL) /*!< Force detection output to 'no VBUS present' */
#define REGULATORS_FORCEVBUSDET_FORCEVBUSDET_DoNotForce2 (0x2UL) /*!< Do not force VBUS detection output (same effect as DoNotForce) */
#define REGULATORS_FORCEVBUSDET_FORCEVBUSDET_ForceVbusDet (0x3UL) /*!< Force detection output to 'VBUS present' */

/* Register: REGULATORS_VREGANA_VOUT */
/* Description: Control the output voltage */

/* Bits 1..0 : Output voltage */
#define REGULATORS_VREGANA_VOUT_VOUT_Pos (0UL) /*!< Position of VOUT field. */
#define REGULATORS_VREGANA_VOUT_VOUT_Msk (0x3UL << REGULATORS_VREGANA_VOUT_VOUT_Pos) /*!< Bit mask of VOUT field. */
#define REGULATORS_VREGANA_VOUT_VOUT_00 (0x0UL) /*!< 1.0 V */
#define REGULATORS_VREGANA_VOUT_VOUT_01 (0x1UL) /*!< 1.05 V */
#define REGULATORS_VREGANA_VOUT_VOUT_10 (0x2UL) /*!< 1.10 V */
#define REGULATORS_VREGANA_VOUT_VOUT_11 (0x3UL) /*!< 1.20 V */

/* Register: REGULATORS_VREGANA_DCDCEN */
/* Description: Enable DC/DC operation of the regulator */

/* Bit 0 : Enable or disable DC/DC converter */
#define REGULATORS_VREGANA_DCDCEN_DCDCEN_Pos (0UL) /*!< Position of DCDCEN field. */
#define REGULATORS_VREGANA_DCDCEN_DCDCEN_Msk (0x1UL << REGULATORS_VREGANA_DCDCEN_DCDCEN_Pos) /*!< Bit mask of DCDCEN field. */
#define REGULATORS_VREGANA_DCDCEN_DCDCEN_Disabled (0x0UL) /*!< Disable */
#define REGULATORS_VREGANA_DCDCEN_DCDCEN_Enabled (0x1UL) /*!< Enable */

/* Register: REGULATORS_VREGANA_ENFORCEPWRREGMODE */
/* Description: Enable forcing of power mode in power regulator */

/* Bit 0 : Enable forcing of power mode in power regulator */
#define REGULATORS_VREGANA_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Pos (0UL) /*!< Position of ENFORCEPWRREGMODE field. */
#define REGULATORS_VREGANA_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Msk (0x1UL << REGULATORS_VREGANA_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Pos) /*!< Bit mask of ENFORCEPWRREGMODE field. */
#define REGULATORS_VREGANA_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Disabled (0x0UL) /*!< Power regulator forcing off */
#define REGULATORS_VREGANA_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Enabled (0x1UL) /*!< Power regulator mode forced to value given by FORCEREGMODE */

/* Register: REGULATORS_VREGANA_FORCEREGMODE */
/* Description: Backdoor register for manual selection of power mode */

/* Bits 2..0 : Force regulator mode to value */
#define REGULATORS_VREGANA_FORCEREGMODE_FORCEREGMODE_Pos (0UL) /*!< Position of FORCEREGMODE field. */
#define REGULATORS_VREGANA_FORCEREGMODE_FORCEREGMODE_Msk (0x7UL << REGULATORS_VREGANA_FORCEREGMODE_FORCEREGMODE_Pos) /*!< Bit mask of FORCEREGMODE field. */
#define REGULATORS_VREGANA_FORCEREGMODE_FORCEREGMODE_Ext (0x0UL) /*!< Force external */
#define REGULATORS_VREGANA_FORCEREGMODE_FORCEREGMODE_ULP (0x1UL) /*!< Force ULP mode */
#define REGULATORS_VREGANA_FORCEREGMODE_FORCEREGMODE_LDO (0x2UL) /*!< Force LDO mode */
#define REGULATORS_VREGANA_FORCEREGMODE_FORCEREGMODE_DCDC (0x3UL) /*!< Force DC/DC mode */
#define REGULATORS_VREGANA_FORCEREGMODE_FORCEREGMODE_REF (0x4UL) /*!< Force REF mode */

/* Register: REGULATORS_VREGANA_CURRENTPWRREGMODE */
/* Description: Current mode in the power regulator */

/* Bits 3..0 : Current mode in the power regulator */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Pos (0UL) /*!< Position of CURRENTPWRREGMODE field. */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Msk (0xFUL << REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Pos) /*!< Bit mask of CURRENTPWRREGMODE field. */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Ext (0x0UL) /*!< External */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_DCDC (0x2UL) /*!< DC/DC */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_REF (0x3UL) /*!< REF */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_LDO (0x4UL) /*!< ULP DC/DC */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_LDO_DCDC (0x6UL) /*!< LDO DC/DC */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_LDO_REF (0x7UL) /*!< LDO REF */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_ULP (0x8UL) /*!< ULP */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_DCDC_ULP (0xAUL) /*!< ULP DC/DC */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_REF_ULP (0xBUL) /*!< REF ULP */
#define REGULATORS_VREGANA_CURRENTPWRREGMODE_CURRENTPWRREGMODE_ULP_LDO (0xCUL) /*!< ULP DC/DC */

/* Register: REGULATORS_VREGANA_TESTLOAD */
/* Description: Test load setting */

/* Bits 2..0 : Output load configuration (for test purposes) */
#define REGULATORS_VREGANA_TESTLOAD_TESTLOAD_Pos (0UL) /*!< Position of TESTLOAD field. */
#define REGULATORS_VREGANA_TESTLOAD_TESTLOAD_Msk (0x7UL << REGULATORS_VREGANA_TESTLOAD_TESTLOAD_Pos) /*!< Bit mask of TESTLOAD field. */
#define REGULATORS_VREGANA_TESTLOAD_TESTLOAD_NormalOperation (0x0UL) /*!< Normal operation (default) */
#define REGULATORS_VREGANA_TESTLOAD_TESTLOAD_1mATestLoad (0x1UL) /*!< 1 mA test load */
#define REGULATORS_VREGANA_TESTLOAD_TESTLOAD_20mATestLoad (0x2UL) /*!< 20 mA test load */

/* Register: REGULATORS_VREGANA_ULPCAL */
/* Description: Calibration of ULP regulator */

/* Bits 3..0 : Calibration value */
#define REGULATORS_VREGANA_ULPCAL_CAL_Pos (0UL) /*!< Position of CAL field. */
#define REGULATORS_VREGANA_ULPCAL_CAL_Msk (0xFUL << REGULATORS_VREGANA_ULPCAL_CAL_Pos) /*!< Bit mask of CAL field. */

/* Register: REGULATORS_VREGANA_DEBUGLVLP */
/* Description: Debug register - control spare signals in LVLP */

/* Bits 13..0 : Connected to TBD */
#define REGULATORS_VREGANA_DEBUGLVLP_DEBUGLVLP_Pos (0UL) /*!< Position of DEBUGLVLP field. */
#define REGULATORS_VREGANA_DEBUGLVLP_DEBUGLVLP_Msk (0x3FFFUL << REGULATORS_VREGANA_DEBUGLVLP_DEBUGLVLP_Pos) /*!< Bit mask of DEBUGLVLP field. */

/* Register: REGULATORS_VREGANA_BUCKCALPWM */
/* Description: TBD */

/* Bits 4..0 : TBD */
#define REGULATORS_VREGANA_BUCKCALPWM_CALPWM_Pos (0UL) /*!< Position of CALPWM field. */
#define REGULATORS_VREGANA_BUCKCALPWM_CALPWM_Msk (0x1FUL << REGULATORS_VREGANA_BUCKCALPWM_CALPWM_Pos) /*!< Bit mask of CALPWM field. */

/* Register: REGULATORS_VREGANA_AVOIDULP */
/* Description: Backdoor to avoid ULP mode */

/* Bit 0 : Backdoor to avoid ULP mode */
#define REGULATORS_VREGANA_AVOIDULP_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define REGULATORS_VREGANA_AVOIDULP_ENABLE_Msk (0x1UL << REGULATORS_VREGANA_AVOIDULP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define REGULATORS_VREGANA_AVOIDULP_ENABLE_Default (0x0UL) /*!< FSM will enter ULP mode if no power requests are present. */
#define REGULATORS_VREGANA_AVOIDULP_ENABLE_AvoidUlp (0x1UL) /*!< Avoids ULP mode. By also setting disableDcdcDvdd=0 and disablePfmDvdd=0, PFM mode will be used as the lowest power regulator state. */

/* Register: REGULATORS_VREGMAIN_VOUT */
/* Description: Control the output voltage */

/* Bits 3..0 : Output voltage */
#define REGULATORS_VREGMAIN_VOUT_VOUT_Pos (0UL) /*!< Position of VOUT field. */
#define REGULATORS_VREGMAIN_VOUT_VOUT_Msk (0xFUL << REGULATORS_VREGMAIN_VOUT_VOUT_Pos) /*!< Bit mask of VOUT field. */

/* Register: REGULATORS_VREGMAIN_ULPALWAYSON */
/* Description: Keep ULP regulator on at all times */

/* Bit 0 : ULP always on */
#define REGULATORS_VREGMAIN_ULPALWAYSON_ULPALWAYSON_Pos (0UL) /*!< Position of ULPALWAYSON field. */
#define REGULATORS_VREGMAIN_ULPALWAYSON_ULPALWAYSON_Msk (0x1UL << REGULATORS_VREGMAIN_ULPALWAYSON_ULPALWAYSON_Pos) /*!< Bit mask of ULPALWAYSON field. */
#define REGULATORS_VREGMAIN_ULPALWAYSON_ULPALWAYSON_Disabled (0x0UL) /*!< ULP regulator turned off in LDO modes */
#define REGULATORS_VREGMAIN_ULPALWAYSON_ULPALWAYSON_Enabled (0x1UL) /*!< ULP regulator always on */

/* Register: REGULATORS_VREGMAIN_ENFORCEPWRREGMODE */
/* Description: Enable forcing of power mode in power regulator */

/* Bit 0 : Enable forcing of power mode in power regulator */
#define REGULATORS_VREGMAIN_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Pos (0UL) /*!< Position of ENFORCEPWRREGMODE field. */
#define REGULATORS_VREGMAIN_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Msk (0x1UL << REGULATORS_VREGMAIN_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Pos) /*!< Bit mask of ENFORCEPWRREGMODE field. */
#define REGULATORS_VREGMAIN_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Disabled (0x0UL) /*!< Power regulator forcing off */
#define REGULATORS_VREGMAIN_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Enabled (0x1UL) /*!< Power regulator mode forced to value given by FORCEREGMODE */

/* Register: REGULATORS_VREGMAIN_FORCEREGMODE */
/* Description: Backdoor register for manual selection of power mode */

/* Bits 2..0 : Force regulator mode to value */
#define REGULATORS_VREGMAIN_FORCEREGMODE_FORCEREGMODE_Pos (0UL) /*!< Position of FORCEREGMODE field. */
#define REGULATORS_VREGMAIN_FORCEREGMODE_FORCEREGMODE_Msk (0x7UL << REGULATORS_VREGMAIN_FORCEREGMODE_FORCEREGMODE_Pos) /*!< Bit mask of FORCEREGMODE field. */
#define REGULATORS_VREGMAIN_FORCEREGMODE_FORCEREGMODE_Ext (0x0UL) /*!< Force external */
#define REGULATORS_VREGMAIN_FORCEREGMODE_FORCEREGMODE_ULP (0x1UL) /*!< Force ULP mode */
#define REGULATORS_VREGMAIN_FORCEREGMODE_FORCEREGMODE_LDO (0x2UL) /*!< Force LDO mode */
#define REGULATORS_VREGMAIN_FORCEREGMODE_FORCEREGMODE_DCDC (0x3UL) /*!< Force DC/DC mode */
#define REGULATORS_VREGMAIN_FORCEREGMODE_FORCEREGMODE_REF (0x4UL) /*!< Force REF mode */

/* Register: REGULATORS_VREGMAIN_CURRENTPWRREGMODE */
/* Description: Current mode in the power regulator */

/* Bits 3..0 : Current mode in the power regulator */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Pos (0UL) /*!< Position of CURRENTPWRREGMODE field. */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Msk (0xFUL << REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Pos) /*!< Bit mask of CURRENTPWRREGMODE field. */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Ext (0x0UL) /*!< External */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_DCDC (0x2UL) /*!< DC/DC */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_REF (0x3UL) /*!< REF */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_LDO (0x4UL) /*!< ULP DC/DC */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_LDO_DCDC (0x6UL) /*!< LDO DC/DC */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_LDO_REF (0x7UL) /*!< LDO REF */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_ULP (0x8UL) /*!< ULP */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_DCDC_ULP (0xAUL) /*!< ULP DC/DC */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_REF_ULP (0xBUL) /*!< REF ULP */
#define REGULATORS_VREGMAIN_CURRENTPWRREGMODE_CURRENTPWRREGMODE_ULP_LDO (0xCUL) /*!< ULP DC/DC */

/* Register: REGULATORS_VREGMAIN_PWRREGICMPTIMER */
/* Description: Control the stay-alive time for the current comparator */

/* Bits 15..0 :   */
#define REGULATORS_VREGMAIN_PWRREGICMPTIMER_COUNT_Pos (0UL) /*!< Position of COUNT field. */
#define REGULATORS_VREGMAIN_PWRREGICMPTIMER_COUNT_Msk (0xFFFFUL << REGULATORS_VREGMAIN_PWRREGICMPTIMER_COUNT_Pos) /*!< Bit mask of COUNT field. */

/* Register: REGULATORS_VREGMAIN_TESTLOAD */
/* Description: Test load setting */

/* Bits 2..0 : Output load configuration for test purposes */
#define REGULATORS_VREGMAIN_TESTLOAD_TESTLOAD_Pos (0UL) /*!< Position of TESTLOAD field. */
#define REGULATORS_VREGMAIN_TESTLOAD_TESTLOAD_Msk (0x7UL << REGULATORS_VREGMAIN_TESTLOAD_TESTLOAD_Pos) /*!< Bit mask of TESTLOAD field. */
#define REGULATORS_VREGMAIN_TESTLOAD_TESTLOAD_NormalOperation (0x0UL) /*!< Normal operation (default) */
#define REGULATORS_VREGMAIN_TESTLOAD_TESTLOAD_1mATestLoad (0x1UL) /*!< 1 mA test load */
#define REGULATORS_VREGMAIN_TESTLOAD_TESTLOAD_20mATestLoad (0x2UL) /*!< 20 mA test load */

/* Register: REGULATORS_VREGMAIN_ULPCAL */
/* Description: Calibration of ULP regulator */

/* Bits 3..0 : Calibration value */
#define REGULATORS_VREGMAIN_ULPCAL_CAL_Pos (0UL) /*!< Position of CAL field. */
#define REGULATORS_VREGMAIN_ULPCAL_CAL_Msk (0xFUL << REGULATORS_VREGMAIN_ULPCAL_CAL_Pos) /*!< Bit mask of CAL field. */

/* Register: REGULATORS_VREGMAIN_ULPICMPCAL */
/* Description: Calibration of current comparator on ULP regulator */

/* Bits 2..0 :   */
#define REGULATORS_VREGMAIN_ULPICMPCAL_CAL_Pos (0UL) /*!< Position of CAL field. */
#define REGULATORS_VREGMAIN_ULPICMPCAL_CAL_Msk (0x7UL << REGULATORS_VREGMAIN_ULPICMPCAL_CAL_Pos) /*!< Bit mask of CAL field. */

/* Register: REGULATORS_VREGMAIN_BYPASS */
/* Description: Bypass control */

/* Bit 0 : Bypass control */
#define REGULATORS_VREGMAIN_BYPASS_CAL_Pos (0UL) /*!< Position of CAL field. */
#define REGULATORS_VREGMAIN_BYPASS_CAL_Msk (0x1UL << REGULATORS_VREGMAIN_BYPASS_CAL_Pos) /*!< Bit mask of CAL field. */
#define REGULATORS_VREGMAIN_BYPASS_CAL_NormalMode (0x0UL) /*!< Normal operation (default) */
#define REGULATORS_VREGMAIN_BYPASS_CAL_BypassMode (0x1UL) /*!< Output voltage is 30 mV lower than input voltage */

/* Register: REGULATORS_DISABLEPACSYSTEMOFFACK */
/* Description: Enable or disable System OFF ack from PAC */

/* Bit 0 : Enable or disable System OFF ack from PAC */
#define REGULATORS_DISABLEPACSYSTEMOFFACK_DISABLE_Pos (0UL) /*!< Position of DISABLE field. */
#define REGULATORS_DISABLEPACSYSTEMOFFACK_DISABLE_Msk (0x1UL << REGULATORS_DISABLEPACSYSTEMOFFACK_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define REGULATORS_DISABLEPACSYSTEMOFFACK_DISABLE_Enabled (0x0UL) /*!< Enable ack */
#define REGULATORS_DISABLEPACSYSTEMOFFACK_DISABLE_Disabled (0x1UL) /*!< Disable ack */

/* Register: REGULATORS_DISABLESRAMSYSTEMOFFACK */
/* Description: Enable or disable System OFF ack from SRAM */

/* Bit 0 : Enable or disable System OFF ack from SRAM */
#define REGULATORS_DISABLESRAMSYSTEMOFFACK_DISABLE_Pos (0UL) /*!< Position of DISABLE field. */
#define REGULATORS_DISABLESRAMSYSTEMOFFACK_DISABLE_Msk (0x1UL << REGULATORS_DISABLESRAMSYSTEMOFFACK_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define REGULATORS_DISABLESRAMSYSTEMOFFACK_DISABLE_Enabled (0x0UL) /*!< Enable ack */
#define REGULATORS_DISABLESRAMSYSTEMOFFACK_DISABLE_Disabled (0x1UL) /*!< Disable ack */

/* Register: REGULATORS_DISABLENVMSYSTEMOFFACK */
/* Description: Enable or disable System OFF ack from NVM */

/* Bit 0 : Enable or disable System OFF ack from NVM */
#define REGULATORS_DISABLENVMSYSTEMOFFACK_DISABLE_Pos (0UL) /*!< Position of DISABLE field. */
#define REGULATORS_DISABLENVMSYSTEMOFFACK_DISABLE_Msk (0x1UL << REGULATORS_DISABLENVMSYSTEMOFFACK_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define REGULATORS_DISABLENVMSYSTEMOFFACK_DISABLE_Enabled (0x0UL) /*!< Enable ack */
#define REGULATORS_DISABLENVMSYSTEMOFFACK_DISABLE_Disabled (0x1UL) /*!< Disable ack */


/* Peripheral: RESET */
/* Description: Reset control */

/* Register: RESET_RESETREAS */
/* Description: Reset reason */

/* Bit 7 : Reset due to wakeup from System OFF mode when wakeup is triggered by entering the debug interface mode */
#define RESET_RESETREAS_DIF_Pos (7UL) /*!< Position of DIF field. */
#define RESET_RESETREAS_DIF_Msk (0x1UL << RESET_RESETREAS_DIF_Pos) /*!< Bit mask of DIF field. */
#define RESET_RESETREAS_DIF_NotDetected (0x0UL) /*!< Not detected */
#define RESET_RESETREAS_DIF_Detected (0x1UL) /*!< Detected */

/* Bit 6 : Reset due to wakeup from System OFF mode when wakeup is triggered by ANADETECT signal from LPCOMP */
#define RESET_RESETREAS_LPCOMP_Pos (6UL) /*!< Position of LPCOMP field. */
#define RESET_RESETREAS_LPCOMP_Msk (0x1UL << RESET_RESETREAS_LPCOMP_Pos) /*!< Bit mask of LPCOMP field. */
#define RESET_RESETREAS_LPCOMP_NotDetected (0x0UL) /*!< Not detected */
#define RESET_RESETREAS_LPCOMP_Detected (0x1UL) /*!< Detected */

/* Bit 5 : Reset due to wakeup from System OFF mode when wakeup is triggered by DETECT signal from GPIO */
#define RESET_RESETREAS_OFF_Pos (5UL) /*!< Position of OFF field. */
#define RESET_RESETREAS_OFF_Msk (0x1UL << RESET_RESETREAS_OFF_Pos) /*!< Bit mask of OFF field. */
#define RESET_RESETREAS_OFF_NotDetected (0x0UL) /*!< Not detected */
#define RESET_RESETREAS_OFF_Detected (0x1UL) /*!< Detected */

/* Bit 4 : Reset from CPU lockup detected */
#define RESET_RESETREAS_LOCKUP_Pos (4UL) /*!< Position of LOCKUP field. */
#define RESET_RESETREAS_LOCKUP_Msk (0x1UL << RESET_RESETREAS_LOCKUP_Pos) /*!< Bit mask of LOCKUP field. */
#define RESET_RESETREAS_LOCKUP_NotDetected (0x0UL) /*!< Not detected */
#define RESET_RESETREAS_LOCKUP_Detected (0x1UL) /*!< Detected */

/* Bit 3 : Reset from soft reset detected */
#define RESET_RESETREAS_SREQ_Pos (3UL) /*!< Position of SREQ field. */
#define RESET_RESETREAS_SREQ_Msk (0x1UL << RESET_RESETREAS_SREQ_Pos) /*!< Bit mask of SREQ field. */
#define RESET_RESETREAS_SREQ_NotDetected (0x0UL) /*!< Not detected */
#define RESET_RESETREAS_SREQ_Detected (0x1UL) /*!< Detected */

/* Bit 2 : Reset from CTRL-AP detected */
#define RESET_RESETREAS_CTRLAP_Pos (2UL) /*!< Position of CTRLAP field. */
#define RESET_RESETREAS_CTRLAP_Msk (0x1UL << RESET_RESETREAS_CTRLAP_Pos) /*!< Bit mask of CTRLAP field. */
#define RESET_RESETREAS_CTRLAP_NotDetected (0x0UL) /*!< Not detected */
#define RESET_RESETREAS_CTRLAP_Detected (0x1UL) /*!< Detected */

/* Bit 1 : Reset from watchdog timer detected */
#define RESET_RESETREAS_DOG_Pos (1UL) /*!< Position of DOG field. */
#define RESET_RESETREAS_DOG_Msk (0x1UL << RESET_RESETREAS_DOG_Pos) /*!< Bit mask of DOG field. */
#define RESET_RESETREAS_DOG_NotDetected (0x0UL) /*!< Not detected */
#define RESET_RESETREAS_DOG_Detected (0x1UL) /*!< Detected */

/* Bit 0 : Reset from pin reset detected */
#define RESET_RESETREAS_RESETPIN_Pos (0UL) /*!< Position of RESETPIN field. */
#define RESET_RESETREAS_RESETPIN_Msk (0x1UL << RESET_RESETREAS_RESETPIN_Pos) /*!< Bit mask of RESETPIN field. */
#define RESET_RESETREAS_RESETPIN_NotDetected (0x0UL) /*!< Not detected */
#define RESET_RESETREAS_RESETPIN_Detected (0x1UL) /*!< Detected */


/* Peripheral: RNG */
/* Description: Random Number Generator */

/* Register: RNG_TASKS_START */
/* Description: Task starting the random number generator */

/* Bit 0 : Task starting the random number generator */
#define RNG_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define RNG_TASKS_START_TASKS_START_Msk (0x1UL << RNG_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define RNG_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: RNG_TASKS_STOP */
/* Description: Task stopping the random number generator */

/* Bit 0 : Task stopping the random number generator */
#define RNG_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define RNG_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RNG_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define RNG_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RNG_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define RNG_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define RNG_SUBSCRIBE_START_EN_Msk (0x1UL << RNG_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define RNG_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RNG_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define RNG_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RNG_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << RNG_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RNG_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define RNG_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RNG_SUBSCRIBE_STOP_EN_Msk (0x1UL << RNG_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define RNG_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RNG_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define RNG_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RNG_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << RNG_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RNG_EVENTS_VALRDY */
/* Description: Event being generated for every new random number written to the VALUE register */

/* Bit 0 : Event being generated for every new random number written to the VALUE register */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos (0UL) /*!< Position of EVENTS_VALRDY field. */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Msk (0x1UL << RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos) /*!< Bit mask of EVENTS_VALRDY field. */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_NotGenerated (0x0UL) /*!< Event not generated */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Generated (0x1UL) /*!< Event generated */

/* Register: RNG_PUBLISH_VALRDY */
/* Description: Publish configuration for event VALRDY */

/* Bit 31 :   */
#define RNG_PUBLISH_VALRDY_EN_Pos (31UL) /*!< Position of EN field. */
#define RNG_PUBLISH_VALRDY_EN_Msk (0x1UL << RNG_PUBLISH_VALRDY_EN_Pos) /*!< Bit mask of EN field. */
#define RNG_PUBLISH_VALRDY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RNG_PUBLISH_VALRDY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event VALRDY will publish to */
#define RNG_PUBLISH_VALRDY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RNG_PUBLISH_VALRDY_CHIDX_Msk (0xFFUL << RNG_PUBLISH_VALRDY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RNG_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 0 : Shortcut between event VALRDY and task STOP */
#define RNG_SHORTS_VALRDY_STOP_Pos (0UL) /*!< Position of VALRDY_STOP field. */
#define RNG_SHORTS_VALRDY_STOP_Msk (0x1UL << RNG_SHORTS_VALRDY_STOP_Pos) /*!< Bit mask of VALRDY_STOP field. */
#define RNG_SHORTS_VALRDY_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define RNG_SHORTS_VALRDY_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: RNG_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for event VALRDY */
#define RNG_INTEN_VALRDY_Pos (0UL) /*!< Position of VALRDY field. */
#define RNG_INTEN_VALRDY_Msk (0x1UL << RNG_INTEN_VALRDY_Pos) /*!< Bit mask of VALRDY field. */
#define RNG_INTEN_VALRDY_Disabled (0x0UL) /*!< Disable */
#define RNG_INTEN_VALRDY_Enabled (0x1UL) /*!< Enable */

/* Register: RNG_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event VALRDY */
#define RNG_INTENSET_VALRDY_Pos (0UL) /*!< Position of VALRDY field. */
#define RNG_INTENSET_VALRDY_Msk (0x1UL << RNG_INTENSET_VALRDY_Pos) /*!< Bit mask of VALRDY field. */
#define RNG_INTENSET_VALRDY_Disabled (0x0UL) /*!< Read: Disabled */
#define RNG_INTENSET_VALRDY_Enabled (0x1UL) /*!< Read: Enabled */
#define RNG_INTENSET_VALRDY_Set (0x1UL) /*!< Enable */

/* Register: RNG_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event VALRDY */
#define RNG_INTENCLR_VALRDY_Pos (0UL) /*!< Position of VALRDY field. */
#define RNG_INTENCLR_VALRDY_Msk (0x1UL << RNG_INTENCLR_VALRDY_Pos) /*!< Bit mask of VALRDY field. */
#define RNG_INTENCLR_VALRDY_Disabled (0x0UL) /*!< Read: Disabled */
#define RNG_INTENCLR_VALRDY_Enabled (0x1UL) /*!< Read: Enabled */
#define RNG_INTENCLR_VALRDY_Clear (0x1UL) /*!< Disable */

/* Register: RNG_CONFIG */
/* Description: Configuration register */

/* Bit 0 : Bias correction */
#define RNG_CONFIG_DERCEN_Pos (0UL) /*!< Position of DERCEN field. */
#define RNG_CONFIG_DERCEN_Msk (0x1UL << RNG_CONFIG_DERCEN_Pos) /*!< Bit mask of DERCEN field. */
#define RNG_CONFIG_DERCEN_Disabled (0x0UL) /*!< Disabled */
#define RNG_CONFIG_DERCEN_Enabled (0x1UL) /*!< Enabled */

/* Register: RNG_VALUE */
/* Description: Output random number */

/* Bits 7..0 : Generated random number */
#define RNG_VALUE_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RNG_VALUE_VALUE_Msk (0xFFUL << RNG_VALUE_VALUE_Pos) /*!< Bit mask of VALUE field. */


/* Peripheral: RTC */
/* Description: Real-time counter 0 */

/* Register: RTC_TASKS_START */
/* Description: Start RTC counter */

/* Bit 0 : Start RTC counter */
#define RTC_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define RTC_TASKS_START_TASKS_START_Msk (0x1UL << RTC_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define RTC_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: RTC_TASKS_STOP */
/* Description: Stop RTC counter */

/* Bit 0 : Stop RTC counter */
#define RTC_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define RTC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RTC_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define RTC_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RTC_TASKS_CLEAR */
/* Description: Clear RTC counter */

/* Bit 0 : Clear RTC counter */
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL) /*!< Position of TASKS_CLEAR field. */
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << RTC_TASKS_CLEAR_TASKS_CLEAR_Pos) /*!< Bit mask of TASKS_CLEAR field. */
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Trigger (0x1UL) /*!< Trigger task */

/* Register: RTC_TASKS_TRIGOVRFLW */
/* Description: Set counter to 0xFFFFF0 */

/* Bit 0 : Set counter to 0xFFFFF0 */
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos (0UL) /*!< Position of TASKS_TRIGOVRFLW field. */
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Msk (0x1UL << RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos) /*!< Bit mask of TASKS_TRIGOVRFLW field. */
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Trigger (0x1UL) /*!< Trigger task */

/* Register: RTC_TASKS_CAPTURE */
/* Description: Description collection: Capture RTC counter to CC[n] register */

/* Bit 0 : Capture RTC counter to CC[n] register */
#define RTC_TASKS_CAPTURE_TASKS_CAPTURE_Pos (0UL) /*!< Position of TASKS_CAPTURE field. */
#define RTC_TASKS_CAPTURE_TASKS_CAPTURE_Msk (0x1UL << RTC_TASKS_CAPTURE_TASKS_CAPTURE_Pos) /*!< Bit mask of TASKS_CAPTURE field. */
#define RTC_TASKS_CAPTURE_TASKS_CAPTURE_Trigger (0x1UL) /*!< Trigger task */

/* Register: RTC_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define RTC_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_SUBSCRIBE_START_EN_Msk (0x1UL << RTC_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RTC_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define RTC_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << RTC_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define RTC_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_SUBSCRIBE_STOP_EN_Msk (0x1UL << RTC_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RTC_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define RTC_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << RTC_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_SUBSCRIBE_CLEAR */
/* Description: Subscribe configuration for task CLEAR */

/* Bit 31 :   */
#define RTC_SUBSCRIBE_CLEAR_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_SUBSCRIBE_CLEAR_EN_Msk (0x1UL << RTC_SUBSCRIBE_CLEAR_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_SUBSCRIBE_CLEAR_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RTC_SUBSCRIBE_CLEAR_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CLEAR will subscribe to */
#define RTC_SUBSCRIBE_CLEAR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_SUBSCRIBE_CLEAR_CHIDX_Msk (0xFFUL << RTC_SUBSCRIBE_CLEAR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_SUBSCRIBE_TRIGOVRFLW */
/* Description: Subscribe configuration for task TRIGOVRFLW */

/* Bit 31 :   */
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Msk (0x1UL << RTC_SUBSCRIBE_TRIGOVRFLW_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task TRIGOVRFLW will subscribe to */
#define RTC_SUBSCRIBE_TRIGOVRFLW_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_SUBSCRIBE_TRIGOVRFLW_CHIDX_Msk (0xFFUL << RTC_SUBSCRIBE_TRIGOVRFLW_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_SUBSCRIBE_CAPTURE */
/* Description: Description collection: Subscribe configuration for task CAPTURE[n] */

/* Bit 31 :   */
#define RTC_SUBSCRIBE_CAPTURE_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_SUBSCRIBE_CAPTURE_EN_Msk (0x1UL << RTC_SUBSCRIBE_CAPTURE_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_SUBSCRIBE_CAPTURE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RTC_SUBSCRIBE_CAPTURE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CAPTURE[n] will subscribe to */
#define RTC_SUBSCRIBE_CAPTURE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_SUBSCRIBE_CAPTURE_CHIDX_Msk (0xFFUL << RTC_SUBSCRIBE_CAPTURE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_EVENTS_TICK */
/* Description: Event on counter increment */

/* Bit 0 : Event on counter increment */
#define RTC_EVENTS_TICK_EVENTS_TICK_Pos (0UL) /*!< Position of EVENTS_TICK field. */
#define RTC_EVENTS_TICK_EVENTS_TICK_Msk (0x1UL << RTC_EVENTS_TICK_EVENTS_TICK_Pos) /*!< Bit mask of EVENTS_TICK field. */
#define RTC_EVENTS_TICK_EVENTS_TICK_NotGenerated (0x0UL) /*!< Event not generated */
#define RTC_EVENTS_TICK_EVENTS_TICK_Generated (0x1UL) /*!< Event generated */

/* Register: RTC_EVENTS_OVRFLW */
/* Description: Event on counter overflow */

/* Bit 0 : Event on counter overflow */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos (0UL) /*!< Position of EVENTS_OVRFLW field. */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Msk (0x1UL << RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos) /*!< Bit mask of EVENTS_OVRFLW field. */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_NotGenerated (0x0UL) /*!< Event not generated */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Generated (0x1UL) /*!< Event generated */

/* Register: RTC_EVENTS_COMPARE */
/* Description: Description collection: Compare event on CC[n] match */

/* Bit 0 : Compare event on CC[n] match */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL) /*!< Position of EVENTS_COMPARE field. */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos) /*!< Bit mask of EVENTS_COMPARE field. */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated (0x0UL) /*!< Event not generated */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Generated (0x1UL) /*!< Event generated */

/* Register: RTC_PUBLISH_TICK */
/* Description: Publish configuration for event TICK */

/* Bit 31 :   */
#define RTC_PUBLISH_TICK_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_PUBLISH_TICK_EN_Msk (0x1UL << RTC_PUBLISH_TICK_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_PUBLISH_TICK_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RTC_PUBLISH_TICK_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event TICK will publish to */
#define RTC_PUBLISH_TICK_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_PUBLISH_TICK_CHIDX_Msk (0xFFUL << RTC_PUBLISH_TICK_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_PUBLISH_OVRFLW */
/* Description: Publish configuration for event OVRFLW */

/* Bit 31 :   */
#define RTC_PUBLISH_OVRFLW_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_PUBLISH_OVRFLW_EN_Msk (0x1UL << RTC_PUBLISH_OVRFLW_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_PUBLISH_OVRFLW_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RTC_PUBLISH_OVRFLW_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event OVRFLW will publish to */
#define RTC_PUBLISH_OVRFLW_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_PUBLISH_OVRFLW_CHIDX_Msk (0xFFUL << RTC_PUBLISH_OVRFLW_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_PUBLISH_COMPARE */
/* Description: Description collection: Publish configuration for event COMPARE[n] */

/* Bit 31 :   */
#define RTC_PUBLISH_COMPARE_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_PUBLISH_COMPARE_EN_Msk (0x1UL << RTC_PUBLISH_COMPARE_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_PUBLISH_COMPARE_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RTC_PUBLISH_COMPARE_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event COMPARE[n] will publish to */
#define RTC_PUBLISH_COMPARE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_PUBLISH_COMPARE_CHIDX_Msk (0xFFUL << RTC_PUBLISH_COMPARE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 3 : Shortcut between event COMPARE[3] and task CLEAR */
#define RTC_SHORTS_COMPARE3_CLEAR_Pos (3UL) /*!< Position of COMPARE3_CLEAR field. */
#define RTC_SHORTS_COMPARE3_CLEAR_Msk (0x1UL << RTC_SHORTS_COMPARE3_CLEAR_Pos) /*!< Bit mask of COMPARE3_CLEAR field. */
#define RTC_SHORTS_COMPARE3_CLEAR_Disabled (0x0UL) /*!< Disable shortcut */
#define RTC_SHORTS_COMPARE3_CLEAR_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event COMPARE[2] and task CLEAR */
#define RTC_SHORTS_COMPARE2_CLEAR_Pos (2UL) /*!< Position of COMPARE2_CLEAR field. */
#define RTC_SHORTS_COMPARE2_CLEAR_Msk (0x1UL << RTC_SHORTS_COMPARE2_CLEAR_Pos) /*!< Bit mask of COMPARE2_CLEAR field. */
#define RTC_SHORTS_COMPARE2_CLEAR_Disabled (0x0UL) /*!< Disable shortcut */
#define RTC_SHORTS_COMPARE2_CLEAR_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event COMPARE[1] and task CLEAR */
#define RTC_SHORTS_COMPARE1_CLEAR_Pos (1UL) /*!< Position of COMPARE1_CLEAR field. */
#define RTC_SHORTS_COMPARE1_CLEAR_Msk (0x1UL << RTC_SHORTS_COMPARE1_CLEAR_Pos) /*!< Bit mask of COMPARE1_CLEAR field. */
#define RTC_SHORTS_COMPARE1_CLEAR_Disabled (0x0UL) /*!< Disable shortcut */
#define RTC_SHORTS_COMPARE1_CLEAR_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event COMPARE[0] and task CLEAR */
#define RTC_SHORTS_COMPARE0_CLEAR_Pos (0UL) /*!< Position of COMPARE0_CLEAR field. */
#define RTC_SHORTS_COMPARE0_CLEAR_Msk (0x1UL << RTC_SHORTS_COMPARE0_CLEAR_Pos) /*!< Bit mask of COMPARE0_CLEAR field. */
#define RTC_SHORTS_COMPARE0_CLEAR_Disabled (0x0UL) /*!< Disable shortcut */
#define RTC_SHORTS_COMPARE0_CLEAR_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: RTC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 19 : Enable or disable interrupt for event COMPARE[3] */
#define RTC_INTEN_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTEN_COMPARE3_Msk (0x1UL << RTC_INTEN_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTEN_COMPARE3_Disabled (0x0UL) /*!< Disable */
#define RTC_INTEN_COMPARE3_Enabled (0x1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for event COMPARE[2] */
#define RTC_INTEN_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTEN_COMPARE2_Msk (0x1UL << RTC_INTEN_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTEN_COMPARE2_Disabled (0x0UL) /*!< Disable */
#define RTC_INTEN_COMPARE2_Enabled (0x1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for event COMPARE[1] */
#define RTC_INTEN_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTEN_COMPARE1_Msk (0x1UL << RTC_INTEN_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTEN_COMPARE1_Disabled (0x0UL) /*!< Disable */
#define RTC_INTEN_COMPARE1_Enabled (0x1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for event COMPARE[0] */
#define RTC_INTEN_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTEN_COMPARE0_Msk (0x1UL << RTC_INTEN_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTEN_COMPARE0_Disabled (0x0UL) /*!< Disable */
#define RTC_INTEN_COMPARE0_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event OVRFLW */
#define RTC_INTEN_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTEN_OVRFLW_Msk (0x1UL << RTC_INTEN_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTEN_OVRFLW_Disabled (0x0UL) /*!< Disable */
#define RTC_INTEN_OVRFLW_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event TICK */
#define RTC_INTEN_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_INTEN_TICK_Msk (0x1UL << RTC_INTEN_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_INTEN_TICK_Disabled (0x0UL) /*!< Disable */
#define RTC_INTEN_TICK_Enabled (0x1UL) /*!< Enable */

/* Register: RTC_INTENSET */
/* Description: Enable interrupt */

/* Bit 19 : Write '1' to enable interrupt for event COMPARE[3] */
#define RTC_INTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTENSET_COMPARE3_Msk (0x1UL << RTC_INTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTENSET_COMPARE3_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE3_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE3_Set (0x1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for event COMPARE[2] */
#define RTC_INTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTENSET_COMPARE2_Msk (0x1UL << RTC_INTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTENSET_COMPARE2_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE2_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE2_Set (0x1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event COMPARE[1] */
#define RTC_INTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTENSET_COMPARE1_Msk (0x1UL << RTC_INTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTENSET_COMPARE1_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE1_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE1_Set (0x1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event COMPARE[0] */
#define RTC_INTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTENSET_COMPARE0_Msk (0x1UL << RTC_INTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTENSET_COMPARE0_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE0_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE0_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event OVRFLW */
#define RTC_INTENSET_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTENSET_OVRFLW_Msk (0x1UL << RTC_INTENSET_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTENSET_OVRFLW_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENSET_OVRFLW_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENSET_OVRFLW_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event TICK */
#define RTC_INTENSET_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_INTENSET_TICK_Msk (0x1UL << RTC_INTENSET_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_INTENSET_TICK_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENSET_TICK_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENSET_TICK_Set (0x1UL) /*!< Enable */

/* Register: RTC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to disable interrupt for event COMPARE[3] */
#define RTC_INTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTENCLR_COMPARE3_Msk (0x1UL << RTC_INTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTENCLR_COMPARE3_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE3_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE3_Clear (0x1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for event COMPARE[2] */
#define RTC_INTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTENCLR_COMPARE2_Msk (0x1UL << RTC_INTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTENCLR_COMPARE2_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE2_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE2_Clear (0x1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event COMPARE[1] */
#define RTC_INTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTENCLR_COMPARE1_Msk (0x1UL << RTC_INTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTENCLR_COMPARE1_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE1_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE1_Clear (0x1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event COMPARE[0] */
#define RTC_INTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTENCLR_COMPARE0_Msk (0x1UL << RTC_INTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTENCLR_COMPARE0_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE0_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE0_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event OVRFLW */
#define RTC_INTENCLR_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTENCLR_OVRFLW_Msk (0x1UL << RTC_INTENCLR_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTENCLR_OVRFLW_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_OVRFLW_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_OVRFLW_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event TICK */
#define RTC_INTENCLR_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_INTENCLR_TICK_Msk (0x1UL << RTC_INTENCLR_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_INTENCLR_TICK_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_TICK_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_TICK_Clear (0x1UL) /*!< Disable */

/* Register: RTC_EVTEN */
/* Description: Enable or disable event routing */

/* Bit 19 : Enable or disable event routing for event COMPARE[3] */
#define RTC_EVTEN_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTEN_COMPARE3_Msk (0x1UL << RTC_EVTEN_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTEN_COMPARE3_Disabled (0x0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE3_Enabled (0x1UL) /*!< Enable */

/* Bit 18 : Enable or disable event routing for event COMPARE[2] */
#define RTC_EVTEN_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTEN_COMPARE2_Msk (0x1UL << RTC_EVTEN_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTEN_COMPARE2_Disabled (0x0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE2_Enabled (0x1UL) /*!< Enable */

/* Bit 17 : Enable or disable event routing for event COMPARE[1] */
#define RTC_EVTEN_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTEN_COMPARE1_Msk (0x1UL << RTC_EVTEN_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTEN_COMPARE1_Disabled (0x0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE1_Enabled (0x1UL) /*!< Enable */

/* Bit 16 : Enable or disable event routing for event COMPARE[0] */
#define RTC_EVTEN_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTEN_COMPARE0_Msk (0x1UL << RTC_EVTEN_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTEN_COMPARE0_Disabled (0x0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE0_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable event routing for event OVRFLW */
#define RTC_EVTEN_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTEN_OVRFLW_Msk (0x1UL << RTC_EVTEN_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTEN_OVRFLW_Disabled (0x0UL) /*!< Disable */
#define RTC_EVTEN_OVRFLW_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable event routing for event TICK */
#define RTC_EVTEN_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_EVTEN_TICK_Msk (0x1UL << RTC_EVTEN_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_EVTEN_TICK_Disabled (0x0UL) /*!< Disable */
#define RTC_EVTEN_TICK_Enabled (0x1UL) /*!< Enable */

/* Register: RTC_EVTENSET */
/* Description: Enable event routing */

/* Bit 19 : Write '1' to enable event routing for event COMPARE[3] */
#define RTC_EVTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTENSET_COMPARE3_Msk (0x1UL << RTC_EVTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTENSET_COMPARE3_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE3_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE3_Set (0x1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable event routing for event COMPARE[2] */
#define RTC_EVTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTENSET_COMPARE2_Msk (0x1UL << RTC_EVTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTENSET_COMPARE2_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE2_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE2_Set (0x1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable event routing for event COMPARE[1] */
#define RTC_EVTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTENSET_COMPARE1_Msk (0x1UL << RTC_EVTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTENSET_COMPARE1_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE1_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE1_Set (0x1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable event routing for event COMPARE[0] */
#define RTC_EVTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTENSET_COMPARE0_Msk (0x1UL << RTC_EVTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTENSET_COMPARE0_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE0_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE0_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable event routing for event OVRFLW */
#define RTC_EVTENSET_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTENSET_OVRFLW_Msk (0x1UL << RTC_EVTENSET_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTENSET_OVRFLW_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_OVRFLW_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_OVRFLW_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable event routing for event TICK */
#define RTC_EVTENSET_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_EVTENSET_TICK_Msk (0x1UL << RTC_EVTENSET_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_EVTENSET_TICK_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_TICK_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_TICK_Set (0x1UL) /*!< Enable */

/* Register: RTC_EVTENCLR */
/* Description: Disable event routing */

/* Bit 19 : Write '1' to disable event routing for event COMPARE[3] */
#define RTC_EVTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTENCLR_COMPARE3_Msk (0x1UL << RTC_EVTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTENCLR_COMPARE3_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE3_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE3_Clear (0x1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable event routing for event COMPARE[2] */
#define RTC_EVTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTENCLR_COMPARE2_Msk (0x1UL << RTC_EVTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTENCLR_COMPARE2_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE2_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE2_Clear (0x1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable event routing for event COMPARE[1] */
#define RTC_EVTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTENCLR_COMPARE1_Msk (0x1UL << RTC_EVTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTENCLR_COMPARE1_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE1_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE1_Clear (0x1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable event routing for event COMPARE[0] */
#define RTC_EVTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTENCLR_COMPARE0_Msk (0x1UL << RTC_EVTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTENCLR_COMPARE0_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE0_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE0_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable event routing for event OVRFLW */
#define RTC_EVTENCLR_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTENCLR_OVRFLW_Msk (0x1UL << RTC_EVTENCLR_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTENCLR_OVRFLW_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_OVRFLW_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_OVRFLW_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable event routing for event TICK */
#define RTC_EVTENCLR_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_EVTENCLR_TICK_Msk (0x1UL << RTC_EVTENCLR_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_EVTENCLR_TICK_Disabled (0x0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_TICK_Enabled (0x1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_TICK_Clear (0x1UL) /*!< Disable */

/* Register: RTC_COUNTER */
/* Description: Current counter value */

/* Bits 23..0 : Counter value */
#define RTC_COUNTER_COUNTER_Pos (0UL) /*!< Position of COUNTER field. */
#define RTC_COUNTER_COUNTER_Msk (0xFFFFFFUL << RTC_COUNTER_COUNTER_Pos) /*!< Bit mask of COUNTER field. */

/* Register: RTC_PRESCALER */
/* Description: 12-bit prescaler for counter frequency (32768/(PRESCALER+1)). Must be written when RTC is stopped. */

/* Bits 11..0 : Prescaler value */
#define RTC_PRESCALER_PRESCALER_Pos (0UL) /*!< Position of PRESCALER field. */
#define RTC_PRESCALER_PRESCALER_Msk (0xFFFUL << RTC_PRESCALER_PRESCALER_Pos) /*!< Bit mask of PRESCALER field. */

/* Register: RTC_CC */
/* Description: Description collection: Compare register n */

/* Bits 23..0 : Compare value */
#define RTC_CC_COMPARE_Pos (0UL) /*!< Position of COMPARE field. */
#define RTC_CC_COMPARE_Msk (0xFFFFFFUL << RTC_CC_COMPARE_Pos) /*!< Bit mask of COMPARE field. */


/* Peripheral: SPIM */
/* Description: Serial Peripheral Interface Master with EasyDMA */

/* Register: SPIM_TASKS_START */
/* Description: Start SPI transaction */

/* Bit 0 : Start SPI transaction */
#define SPIM_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define SPIM_TASKS_START_TASKS_START_Msk (0x1UL << SPIM_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define SPIM_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: SPIM_TASKS_STOP */
/* Description: Stop SPI transaction */

/* Bit 0 : Stop SPI transaction */
#define SPIM_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define SPIM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SPIM_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define SPIM_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: SPIM_TASKS_SUSPEND */
/* Description: Suspend SPI transaction */

/* Bit 0 : Suspend SPI transaction */
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL) /*!< Position of TASKS_SUSPEND field. */
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos) /*!< Bit mask of TASKS_SUSPEND field. */
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (0x1UL) /*!< Trigger task */

/* Register: SPIM_TASKS_RESUME */
/* Description: Resume SPI transaction */

/* Bit 0 : Resume SPI transaction */
#define SPIM_TASKS_RESUME_TASKS_RESUME_Pos (0UL) /*!< Position of TASKS_RESUME field. */
#define SPIM_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << SPIM_TASKS_RESUME_TASKS_RESUME_Pos) /*!< Bit mask of TASKS_RESUME field. */
#define SPIM_TASKS_RESUME_TASKS_RESUME_Trigger (0x1UL) /*!< Trigger task */

/* Register: SPIM_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define SPIM_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIM_SUBSCRIBE_START_EN_Msk (0x1UL << SPIM_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define SPIM_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SPIM_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define SPIM_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIM_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << SPIM_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIM_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define SPIM_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIM_SUBSCRIBE_STOP_EN_Msk (0x1UL << SPIM_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define SPIM_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SPIM_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define SPIM_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIM_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << SPIM_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIM_SUBSCRIBE_SUSPEND */
/* Description: Subscribe configuration for task SUSPEND */

/* Bit 31 :   */
#define SPIM_SUBSCRIBE_SUSPEND_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIM_SUBSCRIBE_SUSPEND_EN_Msk (0x1UL << SPIM_SUBSCRIBE_SUSPEND_EN_Pos) /*!< Bit mask of EN field. */
#define SPIM_SUBSCRIBE_SUSPEND_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SPIM_SUBSCRIBE_SUSPEND_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task SUSPEND will subscribe to */
#define SPIM_SUBSCRIBE_SUSPEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIM_SUBSCRIBE_SUSPEND_CHIDX_Msk (0xFFUL << SPIM_SUBSCRIBE_SUSPEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIM_SUBSCRIBE_RESUME */
/* Description: Subscribe configuration for task RESUME */

/* Bit 31 :   */
#define SPIM_SUBSCRIBE_RESUME_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIM_SUBSCRIBE_RESUME_EN_Msk (0x1UL << SPIM_SUBSCRIBE_RESUME_EN_Pos) /*!< Bit mask of EN field. */
#define SPIM_SUBSCRIBE_RESUME_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SPIM_SUBSCRIBE_RESUME_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RESUME will subscribe to */
#define SPIM_SUBSCRIBE_RESUME_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIM_SUBSCRIBE_RESUME_CHIDX_Msk (0xFFUL << SPIM_SUBSCRIBE_RESUME_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIM_EVENTS_STOPPED */
/* Description: SPI transaction has stopped */

/* Bit 0 : SPI transaction has stopped */
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL) /*!< Event not generated */
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL) /*!< Event generated */

/* Register: SPIM_EVENTS_ENDRX */
/* Description: End of RXD buffer reached */

/* Bit 0 : End of RXD buffer reached */
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL) /*!< Position of EVENTS_ENDRX field. */
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos) /*!< Bit mask of EVENTS_ENDRX field. */
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0x0UL) /*!< Event not generated */
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Generated (0x1UL) /*!< Event generated */

/* Register: SPIM_EVENTS_END */
/* Description: End of RXD buffer and TXD buffer reached */

/* Bit 0 : End of RXD buffer and TXD buffer reached */
#define SPIM_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define SPIM_EVENTS_END_EVENTS_END_Msk (0x1UL << SPIM_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define SPIM_EVENTS_END_EVENTS_END_NotGenerated (0x0UL) /*!< Event not generated */
#define SPIM_EVENTS_END_EVENTS_END_Generated (0x1UL) /*!< Event generated */

/* Register: SPIM_EVENTS_ENDTX */
/* Description: End of TXD buffer reached */

/* Bit 0 : End of TXD buffer reached */
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL) /*!< Position of EVENTS_ENDTX field. */
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos) /*!< Bit mask of EVENTS_ENDTX field. */
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0x0UL) /*!< Event not generated */
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Generated (0x1UL) /*!< Event generated */

/* Register: SPIM_EVENTS_STARTED */
/* Description: Transaction started */

/* Bit 0 : Transaction started */
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field. */
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SPIM_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED field. */
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0x0UL) /*!< Event not generated */
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Generated (0x1UL) /*!< Event generated */

/* Register: SPIM_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define SPIM_PUBLISH_STOPPED_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIM_PUBLISH_STOPPED_EN_Msk (0x1UL << SPIM_PUBLISH_STOPPED_EN_Pos) /*!< Bit mask of EN field. */
#define SPIM_PUBLISH_STOPPED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SPIM_PUBLISH_STOPPED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define SPIM_PUBLISH_STOPPED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIM_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << SPIM_PUBLISH_STOPPED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIM_PUBLISH_ENDRX */
/* Description: Publish configuration for event ENDRX */

/* Bit 31 :   */
#define SPIM_PUBLISH_ENDRX_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIM_PUBLISH_ENDRX_EN_Msk (0x1UL << SPIM_PUBLISH_ENDRX_EN_Pos) /*!< Bit mask of EN field. */
#define SPIM_PUBLISH_ENDRX_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SPIM_PUBLISH_ENDRX_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDRX will publish to */
#define SPIM_PUBLISH_ENDRX_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIM_PUBLISH_ENDRX_CHIDX_Msk (0xFFUL << SPIM_PUBLISH_ENDRX_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIM_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define SPIM_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIM_PUBLISH_END_EN_Msk (0x1UL << SPIM_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define SPIM_PUBLISH_END_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SPIM_PUBLISH_END_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to */
#define SPIM_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIM_PUBLISH_END_CHIDX_Msk (0xFFUL << SPIM_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIM_PUBLISH_ENDTX */
/* Description: Publish configuration for event ENDTX */

/* Bit 31 :   */
#define SPIM_PUBLISH_ENDTX_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIM_PUBLISH_ENDTX_EN_Msk (0x1UL << SPIM_PUBLISH_ENDTX_EN_Pos) /*!< Bit mask of EN field. */
#define SPIM_PUBLISH_ENDTX_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SPIM_PUBLISH_ENDTX_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDTX will publish to */
#define SPIM_PUBLISH_ENDTX_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIM_PUBLISH_ENDTX_CHIDX_Msk (0xFFUL << SPIM_PUBLISH_ENDTX_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIM_PUBLISH_STARTED */
/* Description: Publish configuration for event STARTED */

/* Bit 31 :   */
#define SPIM_PUBLISH_STARTED_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIM_PUBLISH_STARTED_EN_Msk (0x1UL << SPIM_PUBLISH_STARTED_EN_Pos) /*!< Bit mask of EN field. */
#define SPIM_PUBLISH_STARTED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SPIM_PUBLISH_STARTED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event STARTED will publish to */
#define SPIM_PUBLISH_STARTED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIM_PUBLISH_STARTED_CHIDX_Msk (0xFFUL << SPIM_PUBLISH_STARTED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 17 : Shortcut between event END and task START */
#define SPIM_SHORTS_END_START_Pos (17UL) /*!< Position of END_START field. */
#define SPIM_SHORTS_END_START_Msk (0x1UL << SPIM_SHORTS_END_START_Pos) /*!< Bit mask of END_START field. */
#define SPIM_SHORTS_END_START_Disabled (0x0UL) /*!< Disable shortcut */
#define SPIM_SHORTS_END_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: SPIM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 19 : Enable or disable interrupt for event STARTED */
#define SPIM_INTEN_STARTED_Pos (19UL) /*!< Position of STARTED field. */
#define SPIM_INTEN_STARTED_Msk (0x1UL << SPIM_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SPIM_INTEN_STARTED_Disabled (0x0UL) /*!< Disable */
#define SPIM_INTEN_STARTED_Enabled (0x1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event ENDTX */
#define SPIM_INTEN_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define SPIM_INTEN_ENDTX_Msk (0x1UL << SPIM_INTEN_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define SPIM_INTEN_ENDTX_Disabled (0x0UL) /*!< Disable */
#define SPIM_INTEN_ENDTX_Enabled (0x1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event END */
#define SPIM_INTEN_END_Pos (6UL) /*!< Position of END field. */
#define SPIM_INTEN_END_Msk (0x1UL << SPIM_INTEN_END_Pos) /*!< Bit mask of END field. */
#define SPIM_INTEN_END_Disabled (0x0UL) /*!< Disable */
#define SPIM_INTEN_END_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event ENDRX */
#define SPIM_INTEN_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIM_INTEN_ENDRX_Msk (0x1UL << SPIM_INTEN_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIM_INTEN_ENDRX_Disabled (0x0UL) /*!< Disable */
#define SPIM_INTEN_ENDRX_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event STOPPED */
#define SPIM_INTEN_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define SPIM_INTEN_STOPPED_Msk (0x1UL << SPIM_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SPIM_INTEN_STOPPED_Disabled (0x0UL) /*!< Disable */
#define SPIM_INTEN_STOPPED_Enabled (0x1UL) /*!< Enable */

/* Register: SPIM_INTENSET */
/* Description: Enable interrupt */

/* Bit 19 : Write '1' to enable interrupt for event STARTED */
#define SPIM_INTENSET_STARTED_Pos (19UL) /*!< Position of STARTED field. */
#define SPIM_INTENSET_STARTED_Msk (0x1UL << SPIM_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SPIM_INTENSET_STARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_STARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_STARTED_Set (0x1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event ENDTX */
#define SPIM_INTENSET_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define SPIM_INTENSET_ENDTX_Msk (0x1UL << SPIM_INTENSET_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define SPIM_INTENSET_ENDTX_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_ENDTX_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_ENDTX_Set (0x1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event END */
#define SPIM_INTENSET_END_Pos (6UL) /*!< Position of END field. */
#define SPIM_INTENSET_END_Msk (0x1UL << SPIM_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define SPIM_INTENSET_END_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_END_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_END_Set (0x1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define SPIM_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIM_INTENSET_ENDRX_Msk (0x1UL << SPIM_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIM_INTENSET_ENDRX_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_ENDRX_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_ENDRX_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define SPIM_INTENSET_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define SPIM_INTENSET_STOPPED_Msk (0x1UL << SPIM_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SPIM_INTENSET_STOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_STOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_STOPPED_Set (0x1UL) /*!< Enable */

/* Register: SPIM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to disable interrupt for event STARTED */
#define SPIM_INTENCLR_STARTED_Pos (19UL) /*!< Position of STARTED field. */
#define SPIM_INTENCLR_STARTED_Msk (0x1UL << SPIM_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SPIM_INTENCLR_STARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_STARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_STARTED_Clear (0x1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event ENDTX */
#define SPIM_INTENCLR_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define SPIM_INTENCLR_ENDTX_Msk (0x1UL << SPIM_INTENCLR_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define SPIM_INTENCLR_ENDTX_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_ENDTX_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_ENDTX_Clear (0x1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event END */
#define SPIM_INTENCLR_END_Pos (6UL) /*!< Position of END field. */
#define SPIM_INTENCLR_END_Msk (0x1UL << SPIM_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define SPIM_INTENCLR_END_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_END_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_END_Clear (0x1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define SPIM_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIM_INTENCLR_ENDRX_Msk (0x1UL << SPIM_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIM_INTENCLR_ENDRX_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_ENDRX_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_ENDRX_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define SPIM_INTENCLR_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define SPIM_INTENCLR_STOPPED_Msk (0x1UL << SPIM_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SPIM_INTENCLR_STOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_STOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_STOPPED_Clear (0x1UL) /*!< Disable */

/* Register: SPIM_STALLSTAT */
/* Description: Stall status for EasyDMA RAM accesses. The fields in this register is set to STALL by hardware whenever a stall occurres and can be cleared (set to NOSTALL) by the CPU. */

/* Bit 1 : Stall status for EasyDMA RAM writes */
#define SPIM_STALLSTAT_RX_Pos (1UL) /*!< Position of RX field. */
#define SPIM_STALLSTAT_RX_Msk (0x1UL << SPIM_STALLSTAT_RX_Pos) /*!< Bit mask of RX field. */
#define SPIM_STALLSTAT_RX_NOSTALL (0x0UL) /*!< No stall */
#define SPIM_STALLSTAT_RX_STALL (0x1UL) /*!< A stall has occurred */

/* Bit 0 : Stall status for EasyDMA RAM reads */
#define SPIM_STALLSTAT_TX_Pos (0UL) /*!< Position of TX field. */
#define SPIM_STALLSTAT_TX_Msk (0x1UL << SPIM_STALLSTAT_TX_Pos) /*!< Bit mask of TX field. */
#define SPIM_STALLSTAT_TX_NOSTALL (0x0UL) /*!< No stall */
#define SPIM_STALLSTAT_TX_STALL (0x1UL) /*!< A stall has occurred */

/* Register: SPIM_ENABLE */
/* Description: Enable SPIM */

/* Bits 3..0 : Enable or disable SPIM */
#define SPIM_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SPIM_ENABLE_ENABLE_Msk (0xFUL << SPIM_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SPIM_ENABLE_ENABLE_Disabled (0x0UL) /*!< Disable SPIM */
#define SPIM_ENABLE_ENABLE_Enabled (0x7UL) /*!< Enable SPIM */

/* Register: SPIM_PSEL_SCK */
/* Description: Pin select for SCK */

/* Bit 31 : Connection */
#define SPIM_PSEL_SCK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIM_PSEL_SCK_CONNECT_Msk (0x1UL << SPIM_PSEL_SCK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIM_PSEL_SCK_CONNECT_Connected (0x0UL) /*!< Connect */
#define SPIM_PSEL_SCK_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define SPIM_PSEL_SCK_PORT_Pos (5UL) /*!< Position of PORT field. */
#define SPIM_PSEL_SCK_PORT_Msk (0x1UL << SPIM_PSEL_SCK_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_SCK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIM_PSEL_SCK_PIN_Msk (0x1FUL << SPIM_PSEL_SCK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIM_PSEL_MOSI */
/* Description: Pin select for MOSI signal */

/* Bit 31 : Connection */
#define SPIM_PSEL_MOSI_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIM_PSEL_MOSI_CONNECT_Msk (0x1UL << SPIM_PSEL_MOSI_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIM_PSEL_MOSI_CONNECT_Connected (0x0UL) /*!< Connect */
#define SPIM_PSEL_MOSI_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define SPIM_PSEL_MOSI_PORT_Pos (5UL) /*!< Position of PORT field. */
#define SPIM_PSEL_MOSI_PORT_Msk (0x1UL << SPIM_PSEL_MOSI_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_MOSI_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIM_PSEL_MOSI_PIN_Msk (0x1FUL << SPIM_PSEL_MOSI_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIM_PSEL_MISO */
/* Description: Pin select for MISO signal */

/* Bit 31 : Connection */
#define SPIM_PSEL_MISO_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIM_PSEL_MISO_CONNECT_Msk (0x1UL << SPIM_PSEL_MISO_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIM_PSEL_MISO_CONNECT_Connected (0x0UL) /*!< Connect */
#define SPIM_PSEL_MISO_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define SPIM_PSEL_MISO_PORT_Pos (5UL) /*!< Position of PORT field. */
#define SPIM_PSEL_MISO_PORT_Msk (0x1UL << SPIM_PSEL_MISO_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_MISO_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIM_PSEL_MISO_PIN_Msk (0x1FUL << SPIM_PSEL_MISO_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIM_PSEL_CSN */
/* Description: Pin select for CSN */

/* Bit 31 : Connection */
#define SPIM_PSEL_CSN_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIM_PSEL_CSN_CONNECT_Msk (0x1UL << SPIM_PSEL_CSN_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIM_PSEL_CSN_CONNECT_Connected (0x0UL) /*!< Connect */
#define SPIM_PSEL_CSN_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define SPIM_PSEL_CSN_PORT_Pos (5UL) /*!< Position of PORT field. */
#define SPIM_PSEL_CSN_PORT_Msk (0x1UL << SPIM_PSEL_CSN_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_CSN_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIM_PSEL_CSN_PIN_Msk (0x1FUL << SPIM_PSEL_CSN_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIM_RXDDATA */
/* Description: RXD register */

/* Bits 7..0 : RX data received. Double buffered. */
#define SPIM_RXDDATA_RXD_Pos (0UL) /*!< Position of RXD field. */
#define SPIM_RXDDATA_RXD_Msk (0xFFUL << SPIM_RXDDATA_RXD_Pos) /*!< Bit mask of RXD field. */

/* Register: SPIM_TXDDATA */
/* Description: TXD register */

/* Bits 7..0 : TX data to send. Double buffered. */
#define SPIM_TXDDATA_TXD_Pos (0UL) /*!< Position of TXD field. */
#define SPIM_TXDDATA_TXD_Msk (0xFFUL << SPIM_TXDDATA_TXD_Pos) /*!< Bit mask of TXD field. */

/* Register: SPIM_FREQUENCY */
/* Description: SPI frequency. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : SPI master data rate */
#define SPIM_FREQUENCY_FREQUENCY_Pos (0UL) /*!< Position of FREQUENCY field. */
#define SPIM_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << SPIM_FREQUENCY_FREQUENCY_Pos) /*!< Bit mask of FREQUENCY field. */
#define SPIM_FREQUENCY_FREQUENCY_K125 (0x02000000UL) /*!< 125 kbps */
#define SPIM_FREQUENCY_FREQUENCY_K250 (0x04000000UL) /*!< 250 kbps */
#define SPIM_FREQUENCY_FREQUENCY_K500 (0x08000000UL) /*!< 500 kbps */
#define SPIM_FREQUENCY_FREQUENCY_M16 (0x0A000000UL) /*!< 16 Mbps */
#define SPIM_FREQUENCY_FREQUENCY_M1 (0x10000000UL) /*!< 1 Mbps */
#define SPIM_FREQUENCY_FREQUENCY_M32 (0x14000000UL) /*!< 32 Mbps */
#define SPIM_FREQUENCY_FREQUENCY_M2 (0x20000000UL) /*!< 2 Mbps */
#define SPIM_FREQUENCY_FREQUENCY_M4 (0x40000000UL) /*!< 4 Mbps */
#define SPIM_FREQUENCY_FREQUENCY_M8 (0x80000000UL) /*!< 8 Mbps */

/* Register: SPIM_RXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SPIM_RXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SPIM_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIM_RXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SPIM_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 7..0 : Maximum number of bytes in receive buffer */
#define SPIM_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SPIM_RXD_MAXCNT_MAXCNT_Msk (0xFFUL << SPIM_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SPIM_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 7..0 : Number of bytes transferred in the last transaction */
#define SPIM_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SPIM_RXD_AMOUNT_AMOUNT_Msk (0xFFUL << SPIM_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SPIM_RXD_LIST */
/* Description: EasyDMA list type */

/* Bits 1..0 : List type */
#define SPIM_RXD_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define SPIM_RXD_LIST_LIST_Msk (0x3UL << SPIM_RXD_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define SPIM_RXD_LIST_LIST_Disabled (0x0UL) /*!< Disable EasyDMA list */
#define SPIM_RXD_LIST_LIST_ArrayList (0x1UL) /*!< Use array list */

/* Register: SPIM_TXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SPIM_TXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SPIM_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIM_TXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SPIM_TXD_MAXCNT */
/* Description: Number of bytes in transmit buffer */

/* Bits 7..0 : Maximum number of bytes in transmit buffer */
#define SPIM_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SPIM_TXD_MAXCNT_MAXCNT_Msk (0xFFUL << SPIM_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SPIM_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 7..0 : Number of bytes transferred in the last transaction */
#define SPIM_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SPIM_TXD_AMOUNT_AMOUNT_Msk (0xFFUL << SPIM_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SPIM_TXD_LIST */
/* Description: EasyDMA list type */

/* Bits 1..0 : List type */
#define SPIM_TXD_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define SPIM_TXD_LIST_LIST_Msk (0x3UL << SPIM_TXD_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define SPIM_TXD_LIST_LIST_Disabled (0x0UL) /*!< Disable EasyDMA list */
#define SPIM_TXD_LIST_LIST_ArrayList (0x1UL) /*!< Use array list */

/* Register: SPIM_CONFIG */
/* Description: Configuration register */

/* Bit 2 : Serial clock (SCK) polarity */
#define SPIM_CONFIG_CPOL_Pos (2UL) /*!< Position of CPOL field. */
#define SPIM_CONFIG_CPOL_Msk (0x1UL << SPIM_CONFIG_CPOL_Pos) /*!< Bit mask of CPOL field. */
#define SPIM_CONFIG_CPOL_ActiveHigh (0x0UL) /*!< Active high */
#define SPIM_CONFIG_CPOL_ActiveLow (0x1UL) /*!< Active low */

/* Bit 1 : Serial clock (SCK) phase */
#define SPIM_CONFIG_CPHA_Pos (1UL) /*!< Position of CPHA field. */
#define SPIM_CONFIG_CPHA_Msk (0x1UL << SPIM_CONFIG_CPHA_Pos) /*!< Bit mask of CPHA field. */
#define SPIM_CONFIG_CPHA_Leading (0x0UL) /*!< Sample on leading edge of clock, shift serial data on trailing edge */
#define SPIM_CONFIG_CPHA_Trailing (0x1UL) /*!< Sample on trailing edge of clock, shift serial data on leading edge */

/* Bit 0 : Bit order */
#define SPIM_CONFIG_ORDER_Pos (0UL) /*!< Position of ORDER field. */
#define SPIM_CONFIG_ORDER_Msk (0x1UL << SPIM_CONFIG_ORDER_Pos) /*!< Bit mask of ORDER field. */
#define SPIM_CONFIG_ORDER_MsbFirst (0x0UL) /*!< Most significant bit shifted out first */
#define SPIM_CONFIG_ORDER_LsbFirst (0x1UL) /*!< Least significant bit shifted out first */

/* Register: SPIM_IFTIMING_RXDELAY */
/* Description: Sample delay for input serial data on MISO */

/* Bits 2..0 : Sample delay for input serial data on MISO. The value specifies the number of 64 MHz clock cycles (15.625 ns) delay from the the sampling edge of SCK (leading edge for CONFIG.CPHA = 0, trailing edge for CONFIG.CPHA = 1) until the input serial data is sampled. As en example, if RXDELAY = 0 and CONFIG.CPHA = 0, the input serial data is sampled on the rising edge of SCK. */
#define SPIM_IFTIMING_RXDELAY_RXDELAY_Pos (0UL) /*!< Position of RXDELAY field. */
#define SPIM_IFTIMING_RXDELAY_RXDELAY_Msk (0x7UL << SPIM_IFTIMING_RXDELAY_RXDELAY_Pos) /*!< Bit mask of RXDELAY field. */

/* Register: SPIM_IFTIMING_CSNDUR */
/* Description: Minimum duration between edge of CSN and edge of SCK and minimum duration CSN must stay high between transactions */

/* Bits 7..0 : Minimum duration between edge of CSN and edge of SCK and minimum duration CSN must stay high between transactions. The value is specified in number of 64 MHz clock cycles (15.625 ns). */
#define SPIM_IFTIMING_CSNDUR_CSNDUR_Pos (0UL) /*!< Position of CSNDUR field. */
#define SPIM_IFTIMING_CSNDUR_CSNDUR_Msk (0xFFUL << SPIM_IFTIMING_CSNDUR_CSNDUR_Pos) /*!< Bit mask of CSNDUR field. */

/* Register: SPIM_CSNPOL */
/* Description: Polarity of CSN output */

/* Bit 0 : Polarity of CSN output */
#define SPIM_CSNPOL_CSNPOL_Pos (0UL) /*!< Position of CSNPOL field. */
#define SPIM_CSNPOL_CSNPOL_Msk (0x1UL << SPIM_CSNPOL_CSNPOL_Pos) /*!< Bit mask of CSNPOL field. */
#define SPIM_CSNPOL_CSNPOL_LOW (0x0UL) /*!< Active low (idle state high) */
#define SPIM_CSNPOL_CSNPOL_HIGH (0x1UL) /*!< Active high (idle state low) */

/* Register: SPIM_PSELDCX */
/* Description: Pin select for DCX signal */

/* Bit 31 : Connection */
#define SPIM_PSELDCX_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIM_PSELDCX_CONNECT_Msk (0x1UL << SPIM_PSELDCX_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIM_PSELDCX_CONNECT_Connected (0x0UL) /*!< Connect */
#define SPIM_PSELDCX_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define SPIM_PSELDCX_PORT_Pos (5UL) /*!< Position of PORT field. */
#define SPIM_PSELDCX_PORT_Msk (0x1UL << SPIM_PSELDCX_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define SPIM_PSELDCX_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIM_PSELDCX_PIN_Msk (0x1FUL << SPIM_PSELDCX_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIM_DCXCNT */
/* Description: DCX configuration */

/* Bits 3..0 : This register specifies the number of command bytes preceding the data bytes. The PSEL.DCX line will be low during transmission of command bytes and high during transmission of data bytes. Value 0xF indicates that all bytes are command bytes. */
#define SPIM_DCXCNT_DCXCNT_Pos (0UL) /*!< Position of DCXCNT field. */
#define SPIM_DCXCNT_DCXCNT_Msk (0xFUL << SPIM_DCXCNT_DCXCNT_Pos) /*!< Bit mask of DCXCNT field. */

/* Register: SPIM_ORC */
/* Description: Byte transmitted after TXD.MAXCNT bytes have been transmitted in the case when RXD.MAXCNT is greater than TXD.MAXCNT */

/* Bits 7..0 : Byte transmitted after TXD.MAXCNT bytes have been transmitted in the case when RXD.MAXCNT is greater than TXD.MAXCNT. */
#define SPIM_ORC_ORC_Pos (0UL) /*!< Position of ORC field. */
#define SPIM_ORC_ORC_Msk (0xFFUL << SPIM_ORC_ORC_Pos) /*!< Bit mask of ORC field. */


/* Peripheral: SPIS */
/* Description: SPI Slave */

/* Register: SPIS_TASKS_ACQUIRE */
/* Description: Acquire SPI semaphore */

/* Bit 0 : Acquire SPI semaphore */
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Pos (0UL) /*!< Position of TASKS_ACQUIRE field. */
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Msk (0x1UL << SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Pos) /*!< Bit mask of TASKS_ACQUIRE field. */
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Trigger (0x1UL) /*!< Trigger task */

/* Register: SPIS_TASKS_RELEASE */
/* Description: Release SPI semaphore, enabling the SPI slave to acquire it */

/* Bit 0 : Release SPI semaphore, enabling the SPI slave to acquire it */
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Pos (0UL) /*!< Position of TASKS_RELEASE field. */
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Msk (0x1UL << SPIS_TASKS_RELEASE_TASKS_RELEASE_Pos) /*!< Bit mask of TASKS_RELEASE field. */
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Trigger (0x1UL) /*!< Trigger task */

/* Register: SPIS_SUBSCRIBE_ACQUIRE */
/* Description: Subscribe configuration for task ACQUIRE */

/* Bit 31 :   */
#define SPIS_SUBSCRIBE_ACQUIRE_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIS_SUBSCRIBE_ACQUIRE_EN_Msk (0x1UL << SPIS_SUBSCRIBE_ACQUIRE_EN_Pos) /*!< Bit mask of EN field. */
#define SPIS_SUBSCRIBE_ACQUIRE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SPIS_SUBSCRIBE_ACQUIRE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task ACQUIRE will subscribe to */
#define SPIS_SUBSCRIBE_ACQUIRE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIS_SUBSCRIBE_ACQUIRE_CHIDX_Msk (0xFFUL << SPIS_SUBSCRIBE_ACQUIRE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIS_SUBSCRIBE_RELEASE */
/* Description: Subscribe configuration for task RELEASE */

/* Bit 31 :   */
#define SPIS_SUBSCRIBE_RELEASE_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIS_SUBSCRIBE_RELEASE_EN_Msk (0x1UL << SPIS_SUBSCRIBE_RELEASE_EN_Pos) /*!< Bit mask of EN field. */
#define SPIS_SUBSCRIBE_RELEASE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SPIS_SUBSCRIBE_RELEASE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RELEASE will subscribe to */
#define SPIS_SUBSCRIBE_RELEASE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIS_SUBSCRIBE_RELEASE_CHIDX_Msk (0xFFUL << SPIS_SUBSCRIBE_RELEASE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIS_EVENTS_END */
/* Description: Granted transaction completed */

/* Bit 0 : Granted transaction completed */
#define SPIS_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define SPIS_EVENTS_END_EVENTS_END_Msk (0x1UL << SPIS_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define SPIS_EVENTS_END_EVENTS_END_NotGenerated (0x0UL) /*!< Event not generated */
#define SPIS_EVENTS_END_EVENTS_END_Generated (0x1UL) /*!< Event generated */

/* Register: SPIS_EVENTS_ENDRX */
/* Description: End of RXD buffer reached */

/* Bit 0 : End of RXD buffer reached */
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL) /*!< Position of EVENTS_ENDRX field. */
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Pos) /*!< Bit mask of EVENTS_ENDRX field. */
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0x0UL) /*!< Event not generated */
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Generated (0x1UL) /*!< Event generated */

/* Register: SPIS_EVENTS_ACQUIRED */
/* Description: Semaphore acquired */

/* Bit 0 : Semaphore acquired */
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Pos (0UL) /*!< Position of EVENTS_ACQUIRED field. */
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Msk (0x1UL << SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Pos) /*!< Bit mask of EVENTS_ACQUIRED field. */
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_NotGenerated (0x0UL) /*!< Event not generated */
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Generated (0x1UL) /*!< Event generated */

/* Register: SPIS_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define SPIS_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIS_PUBLISH_END_EN_Msk (0x1UL << SPIS_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define SPIS_PUBLISH_END_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SPIS_PUBLISH_END_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to */
#define SPIS_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIS_PUBLISH_END_CHIDX_Msk (0xFFUL << SPIS_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIS_PUBLISH_ENDRX */
/* Description: Publish configuration for event ENDRX */

/* Bit 31 :   */
#define SPIS_PUBLISH_ENDRX_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIS_PUBLISH_ENDRX_EN_Msk (0x1UL << SPIS_PUBLISH_ENDRX_EN_Pos) /*!< Bit mask of EN field. */
#define SPIS_PUBLISH_ENDRX_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SPIS_PUBLISH_ENDRX_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDRX will publish to */
#define SPIS_PUBLISH_ENDRX_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIS_PUBLISH_ENDRX_CHIDX_Msk (0xFFUL << SPIS_PUBLISH_ENDRX_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIS_PUBLISH_ACQUIRED */
/* Description: Publish configuration for event ACQUIRED */

/* Bit 31 :   */
#define SPIS_PUBLISH_ACQUIRED_EN_Pos (31UL) /*!< Position of EN field. */
#define SPIS_PUBLISH_ACQUIRED_EN_Msk (0x1UL << SPIS_PUBLISH_ACQUIRED_EN_Pos) /*!< Bit mask of EN field. */
#define SPIS_PUBLISH_ACQUIRED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SPIS_PUBLISH_ACQUIRED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ACQUIRED will publish to */
#define SPIS_PUBLISH_ACQUIRED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SPIS_PUBLISH_ACQUIRED_CHIDX_Msk (0xFFUL << SPIS_PUBLISH_ACQUIRED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SPIS_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 2 : Shortcut between event END and task ACQUIRE */
#define SPIS_SHORTS_END_ACQUIRE_Pos (2UL) /*!< Position of END_ACQUIRE field. */
#define SPIS_SHORTS_END_ACQUIRE_Msk (0x1UL << SPIS_SHORTS_END_ACQUIRE_Pos) /*!< Bit mask of END_ACQUIRE field. */
#define SPIS_SHORTS_END_ACQUIRE_Disabled (0x0UL) /*!< Disable shortcut */
#define SPIS_SHORTS_END_ACQUIRE_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: SPIS_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 10 : Enable or disable interrupt for event ACQUIRED */
#define SPIS_INTEN_ACQUIRED_Pos (10UL) /*!< Position of ACQUIRED field. */
#define SPIS_INTEN_ACQUIRED_Msk (0x1UL << SPIS_INTEN_ACQUIRED_Pos) /*!< Bit mask of ACQUIRED field. */
#define SPIS_INTEN_ACQUIRED_Disabled (0x0UL) /*!< Disable */
#define SPIS_INTEN_ACQUIRED_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event ENDRX */
#define SPIS_INTEN_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIS_INTEN_ENDRX_Msk (0x1UL << SPIS_INTEN_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIS_INTEN_ENDRX_Disabled (0x0UL) /*!< Disable */
#define SPIS_INTEN_ENDRX_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event END */
#define SPIS_INTEN_END_Pos (1UL) /*!< Position of END field. */
#define SPIS_INTEN_END_Msk (0x1UL << SPIS_INTEN_END_Pos) /*!< Bit mask of END field. */
#define SPIS_INTEN_END_Disabled (0x0UL) /*!< Disable */
#define SPIS_INTEN_END_Enabled (0x1UL) /*!< Enable */

/* Register: SPIS_INTENSET */
/* Description: Enable interrupt */

/* Bit 10 : Write '1' to enable interrupt for event ACQUIRED */
#define SPIS_INTENSET_ACQUIRED_Pos (10UL) /*!< Position of ACQUIRED field. */
#define SPIS_INTENSET_ACQUIRED_Msk (0x1UL << SPIS_INTENSET_ACQUIRED_Pos) /*!< Bit mask of ACQUIRED field. */
#define SPIS_INTENSET_ACQUIRED_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIS_INTENSET_ACQUIRED_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIS_INTENSET_ACQUIRED_Set (0x1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define SPIS_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIS_INTENSET_ENDRX_Msk (0x1UL << SPIS_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIS_INTENSET_ENDRX_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIS_INTENSET_ENDRX_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIS_INTENSET_ENDRX_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event END */
#define SPIS_INTENSET_END_Pos (1UL) /*!< Position of END field. */
#define SPIS_INTENSET_END_Msk (0x1UL << SPIS_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define SPIS_INTENSET_END_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIS_INTENSET_END_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIS_INTENSET_END_Set (0x1UL) /*!< Enable */

/* Register: SPIS_INTENCLR */
/* Description: Disable interrupt */

/* Bit 10 : Write '1' to disable interrupt for event ACQUIRED */
#define SPIS_INTENCLR_ACQUIRED_Pos (10UL) /*!< Position of ACQUIRED field. */
#define SPIS_INTENCLR_ACQUIRED_Msk (0x1UL << SPIS_INTENCLR_ACQUIRED_Pos) /*!< Bit mask of ACQUIRED field. */
#define SPIS_INTENCLR_ACQUIRED_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIS_INTENCLR_ACQUIRED_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIS_INTENCLR_ACQUIRED_Clear (0x1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define SPIS_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIS_INTENCLR_ENDRX_Msk (0x1UL << SPIS_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIS_INTENCLR_ENDRX_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIS_INTENCLR_ENDRX_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIS_INTENCLR_ENDRX_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event END */
#define SPIS_INTENCLR_END_Pos (1UL) /*!< Position of END field. */
#define SPIS_INTENCLR_END_Msk (0x1UL << SPIS_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define SPIS_INTENCLR_END_Disabled (0x0UL) /*!< Read: Disabled */
#define SPIS_INTENCLR_END_Enabled (0x1UL) /*!< Read: Enabled */
#define SPIS_INTENCLR_END_Clear (0x1UL) /*!< Disable */

/* Register: SPIS_SEMSTAT */
/* Description: Semaphore status register */

/* Bits 1..0 : Semaphore status */
#define SPIS_SEMSTAT_SEMSTAT_Pos (0UL) /*!< Position of SEMSTAT field. */
#define SPIS_SEMSTAT_SEMSTAT_Msk (0x3UL << SPIS_SEMSTAT_SEMSTAT_Pos) /*!< Bit mask of SEMSTAT field. */
#define SPIS_SEMSTAT_SEMSTAT_Free (0x0UL) /*!< Semaphore is free */
#define SPIS_SEMSTAT_SEMSTAT_CPU (0x1UL) /*!< Semaphore is assigned to CPU */
#define SPIS_SEMSTAT_SEMSTAT_SPIS (0x2UL) /*!< Semaphore is assigned to SPI slave */
#define SPIS_SEMSTAT_SEMSTAT_CPUPending (0x3UL) /*!< Semaphore is assigned to SPI but a handover to the CPU is pending */

/* Register: SPIS_STATUS */
/* Description: Status from last transaction */

/* Bit 1 : RX buffer overflow detected, and prevented */
#define SPIS_STATUS_OVERFLOW_Pos (1UL) /*!< Position of OVERFLOW field. */
#define SPIS_STATUS_OVERFLOW_Msk (0x1UL << SPIS_STATUS_OVERFLOW_Pos) /*!< Bit mask of OVERFLOW field. */
#define SPIS_STATUS_OVERFLOW_NotPresent (0x0UL) /*!< Read: error not present */
#define SPIS_STATUS_OVERFLOW_Present (0x1UL) /*!< Read: error present */
#define SPIS_STATUS_OVERFLOW_Clear (0x1UL) /*!< Write: clear error on writing '1' */

/* Bit 0 : TX buffer over-read detected, and prevented */
#define SPIS_STATUS_OVERREAD_Pos (0UL) /*!< Position of OVERREAD field. */
#define SPIS_STATUS_OVERREAD_Msk (0x1UL << SPIS_STATUS_OVERREAD_Pos) /*!< Bit mask of OVERREAD field. */
#define SPIS_STATUS_OVERREAD_NotPresent (0x0UL) /*!< Read: error not present */
#define SPIS_STATUS_OVERREAD_Present (0x1UL) /*!< Read: error present */
#define SPIS_STATUS_OVERREAD_Clear (0x1UL) /*!< Write: clear error on writing '1' */

/* Register: SPIS_ENABLE */
/* Description: Enable SPI slave */

/* Bits 3..0 : Enable or disable SPI slave */
#define SPIS_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SPIS_ENABLE_ENABLE_Msk (0xFUL << SPIS_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SPIS_ENABLE_ENABLE_Disabled (0x0UL) /*!< Disable SPI slave */
#define SPIS_ENABLE_ENABLE_Enabled (0x2UL) /*!< Enable SPI slave */

/* Register: SPIS_PSEL_SCK */
/* Description: Pin select for SCK */

/* Bit 31 : Connection */
#define SPIS_PSEL_SCK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIS_PSEL_SCK_CONNECT_Msk (0x1UL << SPIS_PSEL_SCK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIS_PSEL_SCK_CONNECT_Connected (0x0UL) /*!< Connect */
#define SPIS_PSEL_SCK_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define SPIS_PSEL_SCK_PORT_Pos (5UL) /*!< Position of PORT field. */
#define SPIS_PSEL_SCK_PORT_Msk (0x1UL << SPIS_PSEL_SCK_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_SCK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIS_PSEL_SCK_PIN_Msk (0x1FUL << SPIS_PSEL_SCK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIS_PSEL_MISO */
/* Description: Pin select for MISO signal */

/* Bit 31 : Connection */
#define SPIS_PSEL_MISO_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIS_PSEL_MISO_CONNECT_Msk (0x1UL << SPIS_PSEL_MISO_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIS_PSEL_MISO_CONNECT_Connected (0x0UL) /*!< Connect */
#define SPIS_PSEL_MISO_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define SPIS_PSEL_MISO_PORT_Pos (5UL) /*!< Position of PORT field. */
#define SPIS_PSEL_MISO_PORT_Msk (0x1UL << SPIS_PSEL_MISO_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_MISO_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIS_PSEL_MISO_PIN_Msk (0x1FUL << SPIS_PSEL_MISO_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIS_PSEL_MOSI */
/* Description: Pin select for MOSI signal */

/* Bit 31 : Connection */
#define SPIS_PSEL_MOSI_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIS_PSEL_MOSI_CONNECT_Msk (0x1UL << SPIS_PSEL_MOSI_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIS_PSEL_MOSI_CONNECT_Connected (0x0UL) /*!< Connect */
#define SPIS_PSEL_MOSI_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define SPIS_PSEL_MOSI_PORT_Pos (5UL) /*!< Position of PORT field. */
#define SPIS_PSEL_MOSI_PORT_Msk (0x1UL << SPIS_PSEL_MOSI_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_MOSI_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIS_PSEL_MOSI_PIN_Msk (0x1FUL << SPIS_PSEL_MOSI_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIS_PSEL_CSN */
/* Description: Pin select for CSN signal */

/* Bit 31 : Connection */
#define SPIS_PSEL_CSN_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIS_PSEL_CSN_CONNECT_Msk (0x1UL << SPIS_PSEL_CSN_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIS_PSEL_CSN_CONNECT_Connected (0x0UL) /*!< Connect */
#define SPIS_PSEL_CSN_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define SPIS_PSEL_CSN_PORT_Pos (5UL) /*!< Position of PORT field. */
#define SPIS_PSEL_CSN_PORT_Msk (0x1UL << SPIS_PSEL_CSN_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_CSN_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIS_PSEL_CSN_PIN_Msk (0x1FUL << SPIS_PSEL_CSN_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIS_RXD_PTR */
/* Description: RXD data pointer */

/* Bits 31..0 : RXD data pointer */
#define SPIS_RXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SPIS_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIS_RXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SPIS_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 7..0 : Maximum number of bytes in receive buffer */
#define SPIS_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SPIS_RXD_MAXCNT_MAXCNT_Msk (0xFFUL << SPIS_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SPIS_RXD_AMOUNT */
/* Description: Number of bytes received in last granted transaction */

/* Bits 7..0 : Number of bytes received in the last granted transaction */
#define SPIS_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SPIS_RXD_AMOUNT_AMOUNT_Msk (0xFFUL << SPIS_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SPIS_RXD_LIST */
/* Description: EasyDMA list type */

/* Bits 1..0 : List type */
#define SPIS_RXD_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define SPIS_RXD_LIST_LIST_Msk (0x3UL << SPIS_RXD_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define SPIS_RXD_LIST_LIST_Disabled (0x0UL) /*!< Disable EasyDMA list */
#define SPIS_RXD_LIST_LIST_ArrayList (0x1UL) /*!< Use array list */

/* Register: SPIS_TXD_PTR */
/* Description: TXD data pointer */

/* Bits 31..0 : TXD data pointer */
#define SPIS_TXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SPIS_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIS_TXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SPIS_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 7..0 : Maximum number of bytes in transmit buffer */
#define SPIS_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SPIS_TXD_MAXCNT_MAXCNT_Msk (0xFFUL << SPIS_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SPIS_TXD_AMOUNT */
/* Description: Number of bytes transmitted in last granted transaction */

/* Bits 7..0 : Number of bytes transmitted in last granted transaction */
#define SPIS_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SPIS_TXD_AMOUNT_AMOUNT_Msk (0xFFUL << SPIS_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SPIS_TXD_LIST */
/* Description: EasyDMA list type */

/* Bits 1..0 : List type */
#define SPIS_TXD_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define SPIS_TXD_LIST_LIST_Msk (0x3UL << SPIS_TXD_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define SPIS_TXD_LIST_LIST_Disabled (0x0UL) /*!< Disable EasyDMA list */
#define SPIS_TXD_LIST_LIST_ArrayList (0x1UL) /*!< Use array list */

/* Register: SPIS_CONFIG */
/* Description: Configuration register */

/* Bit 2 : Serial clock (SCK) polarity */
#define SPIS_CONFIG_CPOL_Pos (2UL) /*!< Position of CPOL field. */
#define SPIS_CONFIG_CPOL_Msk (0x1UL << SPIS_CONFIG_CPOL_Pos) /*!< Bit mask of CPOL field. */
#define SPIS_CONFIG_CPOL_ActiveHigh (0x0UL) /*!< Active high */
#define SPIS_CONFIG_CPOL_ActiveLow (0x1UL) /*!< Active low */

/* Bit 1 : Serial clock (SCK) phase */
#define SPIS_CONFIG_CPHA_Pos (1UL) /*!< Position of CPHA field. */
#define SPIS_CONFIG_CPHA_Msk (0x1UL << SPIS_CONFIG_CPHA_Pos) /*!< Bit mask of CPHA field. */
#define SPIS_CONFIG_CPHA_Leading (0x0UL) /*!< Sample on leading edge of clock, shift serial data on trailing edge */
#define SPIS_CONFIG_CPHA_Trailing (0x1UL) /*!< Sample on trailing edge of clock, shift serial data on leading edge */

/* Bit 0 : Bit order */
#define SPIS_CONFIG_ORDER_Pos (0UL) /*!< Position of ORDER field. */
#define SPIS_CONFIG_ORDER_Msk (0x1UL << SPIS_CONFIG_ORDER_Pos) /*!< Bit mask of ORDER field. */
#define SPIS_CONFIG_ORDER_MsbFirst (0x0UL) /*!< Most significant bit shifted out first */
#define SPIS_CONFIG_ORDER_LsbFirst (0x1UL) /*!< Least significant bit shifted out first */

/* Register: SPIS_DEF */
/* Description: Default character. Character clocked out in case of an ignored transaction. */

/* Bits 7..0 : Default character. Character clocked out in case of an ignored transaction. */
#define SPIS_DEF_DEF_Pos (0UL) /*!< Position of DEF field. */
#define SPIS_DEF_DEF_Msk (0xFFUL << SPIS_DEF_DEF_Pos) /*!< Bit mask of DEF field. */

/* Register: SPIS_ORC */
/* Description: Over-read character */

/* Bits 7..0 : Over-read character. Character clocked out after an over-read of the transmit buffer. */
#define SPIS_ORC_ORC_Pos (0UL) /*!< Position of ORC field. */
#define SPIS_ORC_ORC_Msk (0xFFUL << SPIS_ORC_ORC_Pos) /*!< Bit mask of ORC field. */


/* Peripheral: TIMER */
/* Description: Timer/Counter 0 */

/* Register: TIMER_TASKS_START */
/* Description: Start Timer */

/* Bit 0 : Start Timer */
#define TIMER_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define TIMER_TASKS_START_TASKS_START_Msk (0x1UL << TIMER_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define TIMER_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: TIMER_TASKS_STOP */
/* Description: Stop Timer */

/* Bit 0 : Stop Timer */
#define TIMER_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define TIMER_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TIMER_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define TIMER_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: TIMER_TASKS_COUNT */
/* Description: Increment Timer (Counter mode only) */

/* Bit 0 : Increment Timer (Counter mode only) */
#define TIMER_TASKS_COUNT_TASKS_COUNT_Pos (0UL) /*!< Position of TASKS_COUNT field. */
#define TIMER_TASKS_COUNT_TASKS_COUNT_Msk (0x1UL << TIMER_TASKS_COUNT_TASKS_COUNT_Pos) /*!< Bit mask of TASKS_COUNT field. */
#define TIMER_TASKS_COUNT_TASKS_COUNT_Trigger (0x1UL) /*!< Trigger task */

/* Register: TIMER_TASKS_CLEAR */
/* Description: Clear time */

/* Bit 0 : Clear time */
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL) /*!< Position of TASKS_CLEAR field. */
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos) /*!< Bit mask of TASKS_CLEAR field. */
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Trigger (0x1UL) /*!< Trigger task */

/* Register: TIMER_TASKS_SHUTDOWN */
/* Description: Deprecated register - Shut down timer */

/* Bit 0 : Deprecated field -  Shut down timer */
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos (0UL) /*!< Position of TASKS_SHUTDOWN field. */
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Msk (0x1UL << TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos) /*!< Bit mask of TASKS_SHUTDOWN field. */
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Trigger (0x1UL) /*!< Trigger task */

/* Register: TIMER_TASKS_CAPTURE */
/* Description: Description collection: Capture Timer value to CC[n] register */

/* Bit 0 : Capture Timer value to CC[n] register */
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos (0UL) /*!< Position of TASKS_CAPTURE field. */
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Msk (0x1UL << TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos) /*!< Bit mask of TASKS_CAPTURE field. */
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Trigger (0x1UL) /*!< Trigger task */

/* Register: TIMER_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define TIMER_SUBSCRIBE_START_EN_Msk (0x1UL << TIMER_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define TIMER_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define TIMER_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define TIMER_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TIMER_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TIMER_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define TIMER_SUBSCRIBE_STOP_EN_Msk (0x1UL << TIMER_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define TIMER_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define TIMER_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define TIMER_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TIMER_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TIMER_SUBSCRIBE_COUNT */
/* Description: Subscribe configuration for task COUNT */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_COUNT_EN_Pos (31UL) /*!< Position of EN field. */
#define TIMER_SUBSCRIBE_COUNT_EN_Msk (0x1UL << TIMER_SUBSCRIBE_COUNT_EN_Pos) /*!< Bit mask of EN field. */
#define TIMER_SUBSCRIBE_COUNT_EN_Disabled (0x0UL) /*!< Disable subscription */
#define TIMER_SUBSCRIBE_COUNT_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task COUNT will subscribe to */
#define TIMER_SUBSCRIBE_COUNT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TIMER_SUBSCRIBE_COUNT_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_COUNT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TIMER_SUBSCRIBE_CLEAR */
/* Description: Subscribe configuration for task CLEAR */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_CLEAR_EN_Pos (31UL) /*!< Position of EN field. */
#define TIMER_SUBSCRIBE_CLEAR_EN_Msk (0x1UL << TIMER_SUBSCRIBE_CLEAR_EN_Pos) /*!< Bit mask of EN field. */
#define TIMER_SUBSCRIBE_CLEAR_EN_Disabled (0x0UL) /*!< Disable subscription */
#define TIMER_SUBSCRIBE_CLEAR_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CLEAR will subscribe to */
#define TIMER_SUBSCRIBE_CLEAR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TIMER_SUBSCRIBE_CLEAR_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_CLEAR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TIMER_SUBSCRIBE_SHUTDOWN */
/* Description: Deprecated register - Subscribe configuration for task SHUTDOWN */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_SHUTDOWN_EN_Pos (31UL) /*!< Position of EN field. */
#define TIMER_SUBSCRIBE_SHUTDOWN_EN_Msk (0x1UL << TIMER_SUBSCRIBE_SHUTDOWN_EN_Pos) /*!< Bit mask of EN field. */
#define TIMER_SUBSCRIBE_SHUTDOWN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define TIMER_SUBSCRIBE_SHUTDOWN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task SHUTDOWN will subscribe to */
#define TIMER_SUBSCRIBE_SHUTDOWN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TIMER_SUBSCRIBE_SHUTDOWN_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_SHUTDOWN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TIMER_SUBSCRIBE_CAPTURE */
/* Description: Description collection: Subscribe configuration for task CAPTURE[n] */

/* Bit 31 :   */
#define TIMER_SUBSCRIBE_CAPTURE_EN_Pos (31UL) /*!< Position of EN field. */
#define TIMER_SUBSCRIBE_CAPTURE_EN_Msk (0x1UL << TIMER_SUBSCRIBE_CAPTURE_EN_Pos) /*!< Bit mask of EN field. */
#define TIMER_SUBSCRIBE_CAPTURE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define TIMER_SUBSCRIBE_CAPTURE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CAPTURE[n] will subscribe to */
#define TIMER_SUBSCRIBE_CAPTURE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TIMER_SUBSCRIBE_CAPTURE_CHIDX_Msk (0xFFUL << TIMER_SUBSCRIBE_CAPTURE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TIMER_EVENTS_COMPARE */
/* Description: Description collection: Compare event on CC[n] match */

/* Bit 0 : Compare event on CC[n] match */
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL) /*!< Position of EVENTS_COMPARE field. */
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos) /*!< Bit mask of EVENTS_COMPARE field. */
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated (0x0UL) /*!< Event not generated */
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Generated (0x1UL) /*!< Event generated */

/* Register: TIMER_PUBLISH_COMPARE */
/* Description: Description collection: Publish configuration for event COMPARE[n] */

/* Bit 31 :   */
#define TIMER_PUBLISH_COMPARE_EN_Pos (31UL) /*!< Position of EN field. */
#define TIMER_PUBLISH_COMPARE_EN_Msk (0x1UL << TIMER_PUBLISH_COMPARE_EN_Pos) /*!< Bit mask of EN field. */
#define TIMER_PUBLISH_COMPARE_EN_Disabled (0x0UL) /*!< Disable publishing */
#define TIMER_PUBLISH_COMPARE_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event COMPARE[n] will publish to */
#define TIMER_PUBLISH_COMPARE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TIMER_PUBLISH_COMPARE_CHIDX_Msk (0xFFUL << TIMER_PUBLISH_COMPARE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TIMER_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 21 : Shortcut between event COMPARE[5] and task STOP */
#define TIMER_SHORTS_COMPARE5_STOP_Pos (21UL) /*!< Position of COMPARE5_STOP field. */
#define TIMER_SHORTS_COMPARE5_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE5_STOP_Pos) /*!< Bit mask of COMPARE5_STOP field. */
#define TIMER_SHORTS_COMPARE5_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE5_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 20 : Shortcut between event COMPARE[4] and task STOP */
#define TIMER_SHORTS_COMPARE4_STOP_Pos (20UL) /*!< Position of COMPARE4_STOP field. */
#define TIMER_SHORTS_COMPARE4_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE4_STOP_Pos) /*!< Bit mask of COMPARE4_STOP field. */
#define TIMER_SHORTS_COMPARE4_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE4_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 19 : Shortcut between event COMPARE[3] and task STOP */
#define TIMER_SHORTS_COMPARE3_STOP_Pos (19UL) /*!< Position of COMPARE3_STOP field. */
#define TIMER_SHORTS_COMPARE3_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE3_STOP_Pos) /*!< Bit mask of COMPARE3_STOP field. */
#define TIMER_SHORTS_COMPARE3_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE3_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 18 : Shortcut between event COMPARE[2] and task STOP */
#define TIMER_SHORTS_COMPARE2_STOP_Pos (18UL) /*!< Position of COMPARE2_STOP field. */
#define TIMER_SHORTS_COMPARE2_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE2_STOP_Pos) /*!< Bit mask of COMPARE2_STOP field. */
#define TIMER_SHORTS_COMPARE2_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE2_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 17 : Shortcut between event COMPARE[1] and task STOP */
#define TIMER_SHORTS_COMPARE1_STOP_Pos (17UL) /*!< Position of COMPARE1_STOP field. */
#define TIMER_SHORTS_COMPARE1_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE1_STOP_Pos) /*!< Bit mask of COMPARE1_STOP field. */
#define TIMER_SHORTS_COMPARE1_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE1_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 16 : Shortcut between event COMPARE[0] and task STOP */
#define TIMER_SHORTS_COMPARE0_STOP_Pos (16UL) /*!< Position of COMPARE0_STOP field. */
#define TIMER_SHORTS_COMPARE0_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE0_STOP_Pos) /*!< Bit mask of COMPARE0_STOP field. */
#define TIMER_SHORTS_COMPARE0_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE0_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event COMPARE[5] and task CLEAR */
#define TIMER_SHORTS_COMPARE5_CLEAR_Pos (5UL) /*!< Position of COMPARE5_CLEAR field. */
#define TIMER_SHORTS_COMPARE5_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE5_CLEAR_Pos) /*!< Bit mask of COMPARE5_CLEAR field. */
#define TIMER_SHORTS_COMPARE5_CLEAR_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE5_CLEAR_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event COMPARE[4] and task CLEAR */
#define TIMER_SHORTS_COMPARE4_CLEAR_Pos (4UL) /*!< Position of COMPARE4_CLEAR field. */
#define TIMER_SHORTS_COMPARE4_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE4_CLEAR_Pos) /*!< Bit mask of COMPARE4_CLEAR field. */
#define TIMER_SHORTS_COMPARE4_CLEAR_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE4_CLEAR_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event COMPARE[3] and task CLEAR */
#define TIMER_SHORTS_COMPARE3_CLEAR_Pos (3UL) /*!< Position of COMPARE3_CLEAR field. */
#define TIMER_SHORTS_COMPARE3_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE3_CLEAR_Pos) /*!< Bit mask of COMPARE3_CLEAR field. */
#define TIMER_SHORTS_COMPARE3_CLEAR_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE3_CLEAR_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event COMPARE[2] and task CLEAR */
#define TIMER_SHORTS_COMPARE2_CLEAR_Pos (2UL) /*!< Position of COMPARE2_CLEAR field. */
#define TIMER_SHORTS_COMPARE2_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE2_CLEAR_Pos) /*!< Bit mask of COMPARE2_CLEAR field. */
#define TIMER_SHORTS_COMPARE2_CLEAR_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE2_CLEAR_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event COMPARE[1] and task CLEAR */
#define TIMER_SHORTS_COMPARE1_CLEAR_Pos (1UL) /*!< Position of COMPARE1_CLEAR field. */
#define TIMER_SHORTS_COMPARE1_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE1_CLEAR_Pos) /*!< Bit mask of COMPARE1_CLEAR field. */
#define TIMER_SHORTS_COMPARE1_CLEAR_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE1_CLEAR_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event COMPARE[0] and task CLEAR */
#define TIMER_SHORTS_COMPARE0_CLEAR_Pos (0UL) /*!< Position of COMPARE0_CLEAR field. */
#define TIMER_SHORTS_COMPARE0_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE0_CLEAR_Pos) /*!< Bit mask of COMPARE0_CLEAR field. */
#define TIMER_SHORTS_COMPARE0_CLEAR_Disabled (0x0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE0_CLEAR_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: TIMER_INTENSET */
/* Description: Enable interrupt */

/* Bit 21 : Write '1' to enable interrupt for event COMPARE[5] */
#define TIMER_INTENSET_COMPARE5_Pos (21UL) /*!< Position of COMPARE5 field. */
#define TIMER_INTENSET_COMPARE5_Msk (0x1UL << TIMER_INTENSET_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define TIMER_INTENSET_COMPARE5_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE5_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE5_Set (0x1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for event COMPARE[4] */
#define TIMER_INTENSET_COMPARE4_Pos (20UL) /*!< Position of COMPARE4 field. */
#define TIMER_INTENSET_COMPARE4_Msk (0x1UL << TIMER_INTENSET_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define TIMER_INTENSET_COMPARE4_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE4_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE4_Set (0x1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for event COMPARE[3] */
#define TIMER_INTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define TIMER_INTENSET_COMPARE3_Msk (0x1UL << TIMER_INTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define TIMER_INTENSET_COMPARE3_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE3_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE3_Set (0x1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for event COMPARE[2] */
#define TIMER_INTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define TIMER_INTENSET_COMPARE2_Msk (0x1UL << TIMER_INTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define TIMER_INTENSET_COMPARE2_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE2_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE2_Set (0x1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event COMPARE[1] */
#define TIMER_INTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define TIMER_INTENSET_COMPARE1_Msk (0x1UL << TIMER_INTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define TIMER_INTENSET_COMPARE1_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE1_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE1_Set (0x1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event COMPARE[0] */
#define TIMER_INTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define TIMER_INTENSET_COMPARE0_Msk (0x1UL << TIMER_INTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define TIMER_INTENSET_COMPARE0_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE0_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE0_Set (0x1UL) /*!< Enable */

/* Register: TIMER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 21 : Write '1' to disable interrupt for event COMPARE[5] */
#define TIMER_INTENCLR_COMPARE5_Pos (21UL) /*!< Position of COMPARE5 field. */
#define TIMER_INTENCLR_COMPARE5_Msk (0x1UL << TIMER_INTENCLR_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define TIMER_INTENCLR_COMPARE5_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE5_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE5_Clear (0x1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for event COMPARE[4] */
#define TIMER_INTENCLR_COMPARE4_Pos (20UL) /*!< Position of COMPARE4 field. */
#define TIMER_INTENCLR_COMPARE4_Msk (0x1UL << TIMER_INTENCLR_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define TIMER_INTENCLR_COMPARE4_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE4_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE4_Clear (0x1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for event COMPARE[3] */
#define TIMER_INTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define TIMER_INTENCLR_COMPARE3_Msk (0x1UL << TIMER_INTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define TIMER_INTENCLR_COMPARE3_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE3_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE3_Clear (0x1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for event COMPARE[2] */
#define TIMER_INTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define TIMER_INTENCLR_COMPARE2_Msk (0x1UL << TIMER_INTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define TIMER_INTENCLR_COMPARE2_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE2_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE2_Clear (0x1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event COMPARE[1] */
#define TIMER_INTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define TIMER_INTENCLR_COMPARE1_Msk (0x1UL << TIMER_INTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define TIMER_INTENCLR_COMPARE1_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE1_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE1_Clear (0x1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event COMPARE[0] */
#define TIMER_INTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define TIMER_INTENCLR_COMPARE0_Msk (0x1UL << TIMER_INTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define TIMER_INTENCLR_COMPARE0_Disabled (0x0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE0_Enabled (0x1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE0_Clear (0x1UL) /*!< Disable */

/* Register: TIMER_MODE */
/* Description: Timer mode selection */

/* Bits 1..0 : Timer mode */
#define TIMER_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define TIMER_MODE_MODE_Msk (0x3UL << TIMER_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define TIMER_MODE_MODE_Timer (0x0UL) /*!< Select Timer mode */
#define TIMER_MODE_MODE_Counter (0x1UL) /*!< Deprecated enumerator -  Select Counter mode */
#define TIMER_MODE_MODE_LowPowerCounter (0x2UL) /*!< Select Low Power Counter mode */

/* Register: TIMER_BITMODE */
/* Description: Configure the number of bits used by the TIMER */

/* Bits 1..0 : Timer bit width */
#define TIMER_BITMODE_BITMODE_Pos (0UL) /*!< Position of BITMODE field. */
#define TIMER_BITMODE_BITMODE_Msk (0x3UL << TIMER_BITMODE_BITMODE_Pos) /*!< Bit mask of BITMODE field. */
#define TIMER_BITMODE_BITMODE_16Bit (0x0UL) /*!< 16 bit timer bit width */
#define TIMER_BITMODE_BITMODE_08Bit (0x1UL) /*!< 8 bit timer bit width */
#define TIMER_BITMODE_BITMODE_24Bit (0x2UL) /*!< 24 bit timer bit width */
#define TIMER_BITMODE_BITMODE_32Bit (0x3UL) /*!< 32 bit timer bit width */

/* Register: TIMER_PRESCALER */
/* Description: Timer prescaler register */

/* Bits 3..0 : Prescaler value */
#define TIMER_PRESCALER_PRESCALER_Pos (0UL) /*!< Position of PRESCALER field. */
#define TIMER_PRESCALER_PRESCALER_Msk (0xFUL << TIMER_PRESCALER_PRESCALER_Pos) /*!< Bit mask of PRESCALER field. */

/* Register: TIMER_CC */
/* Description: Description collection: Capture/Compare register n */

/* Bits 31..0 : Capture/Compare value */
#define TIMER_CC_CC_Pos (0UL) /*!< Position of CC field. */
#define TIMER_CC_CC_Msk (0xFFFFFFFFUL << TIMER_CC_CC_Pos) /*!< Bit mask of CC field. */


/* Peripheral: UARTE */
/* Description: UART with EasyDMA */

/* Register: UARTE_TASKS_STARTRX */
/* Description: Start UART receiver */

/* Bit 0 : Start UART receiver */
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL) /*!< Position of TASKS_STARTRX field. */
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos) /*!< Bit mask of TASKS_STARTRX field. */
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Trigger (0x1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_STOPRX */
/* Description: Stop UART receiver */

/* Bit 0 : Stop UART receiver */
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos (0UL) /*!< Position of TASKS_STOPRX field. */
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Msk (0x1UL << UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos) /*!< Bit mask of TASKS_STOPRX field. */
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Trigger (0x1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_STARTTX */
/* Description: Start UART transmitter */

/* Bit 0 : Start UART transmitter */
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL) /*!< Position of TASKS_STARTTX field. */
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos) /*!< Bit mask of TASKS_STARTTX field. */
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Trigger (0x1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_STOPTX */
/* Description: Stop UART transmitter */

/* Bit 0 : Stop UART transmitter */
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos (0UL) /*!< Position of TASKS_STOPTX field. */
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Msk (0x1UL << UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos) /*!< Bit mask of TASKS_STOPTX field. */
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Trigger (0x1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_SUSPEND */
/* Description: Suspend UART transaction */

/* Bit 0 : Suspend UART transaction */
#define UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL) /*!< Position of TASKS_SUSPEND field. */
#define UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Pos) /*!< Bit mask of TASKS_SUSPEND field. */
#define UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (0x1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_RESUME */
/* Description: Resume UART transaction */

/* Bit 0 : Resume UART transaction */
#define UARTE_TASKS_RESUME_TASKS_RESUME_Pos (0UL) /*!< Position of TASKS_RESUME field. */
#define UARTE_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << UARTE_TASKS_RESUME_TASKS_RESUME_Pos) /*!< Bit mask of TASKS_RESUME field. */
#define UARTE_TASKS_RESUME_TASKS_RESUME_Trigger (0x1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_FLUSHRX */
/* Description: Flush RX FIFO into RX buffer */

/* Bit 0 : Flush RX FIFO into RX buffer */
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos (0UL) /*!< Position of TASKS_FLUSHRX field. */
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Msk (0x1UL << UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos) /*!< Bit mask of TASKS_FLUSHRX field. */
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Trigger (0x1UL) /*!< Trigger task */

/* Register: UARTE_SUBSCRIBE_STARTRX */
/* Description: Subscribe configuration for task STARTRX */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_STARTRX_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_SUBSCRIBE_STARTRX_EN_Msk (0x1UL << UARTE_SUBSCRIBE_STARTRX_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_SUBSCRIBE_STARTRX_EN_Disabled (0x0UL) /*!< Disable subscription */
#define UARTE_SUBSCRIBE_STARTRX_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STARTRX will subscribe to */
#define UARTE_SUBSCRIBE_STARTRX_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_SUBSCRIBE_STARTRX_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_STARTRX_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_SUBSCRIBE_STOPRX */
/* Description: Subscribe configuration for task STOPRX */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_STOPRX_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_SUBSCRIBE_STOPRX_EN_Msk (0x1UL << UARTE_SUBSCRIBE_STOPRX_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_SUBSCRIBE_STOPRX_EN_Disabled (0x0UL) /*!< Disable subscription */
#define UARTE_SUBSCRIBE_STOPRX_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOPRX will subscribe to */
#define UARTE_SUBSCRIBE_STOPRX_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_SUBSCRIBE_STOPRX_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_STOPRX_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_SUBSCRIBE_STARTTX */
/* Description: Subscribe configuration for task STARTTX */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_STARTTX_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_SUBSCRIBE_STARTTX_EN_Msk (0x1UL << UARTE_SUBSCRIBE_STARTTX_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_SUBSCRIBE_STARTTX_EN_Disabled (0x0UL) /*!< Disable subscription */
#define UARTE_SUBSCRIBE_STARTTX_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STARTTX will subscribe to */
#define UARTE_SUBSCRIBE_STARTTX_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_SUBSCRIBE_STARTTX_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_STARTTX_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_SUBSCRIBE_STOPTX */
/* Description: Subscribe configuration for task STOPTX */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_STOPTX_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_SUBSCRIBE_STOPTX_EN_Msk (0x1UL << UARTE_SUBSCRIBE_STOPTX_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_SUBSCRIBE_STOPTX_EN_Disabled (0x0UL) /*!< Disable subscription */
#define UARTE_SUBSCRIBE_STOPTX_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOPTX will subscribe to */
#define UARTE_SUBSCRIBE_STOPTX_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_SUBSCRIBE_STOPTX_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_STOPTX_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_SUBSCRIBE_SUSPEND */
/* Description: Subscribe configuration for task SUSPEND */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_SUSPEND_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_SUBSCRIBE_SUSPEND_EN_Msk (0x1UL << UARTE_SUBSCRIBE_SUSPEND_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_SUBSCRIBE_SUSPEND_EN_Disabled (0x0UL) /*!< Disable subscription */
#define UARTE_SUBSCRIBE_SUSPEND_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task SUSPEND will subscribe to */
#define UARTE_SUBSCRIBE_SUSPEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_SUBSCRIBE_SUSPEND_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_SUSPEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_SUBSCRIBE_RESUME */
/* Description: Subscribe configuration for task RESUME */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_RESUME_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_SUBSCRIBE_RESUME_EN_Msk (0x1UL << UARTE_SUBSCRIBE_RESUME_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_SUBSCRIBE_RESUME_EN_Disabled (0x0UL) /*!< Disable subscription */
#define UARTE_SUBSCRIBE_RESUME_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RESUME will subscribe to */
#define UARTE_SUBSCRIBE_RESUME_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_SUBSCRIBE_RESUME_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_RESUME_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_SUBSCRIBE_FLUSHRX */
/* Description: Subscribe configuration for task FLUSHRX */

/* Bit 31 :   */
#define UARTE_SUBSCRIBE_FLUSHRX_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_SUBSCRIBE_FLUSHRX_EN_Msk (0x1UL << UARTE_SUBSCRIBE_FLUSHRX_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_SUBSCRIBE_FLUSHRX_EN_Disabled (0x0UL) /*!< Disable subscription */
#define UARTE_SUBSCRIBE_FLUSHRX_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task FLUSHRX will subscribe to */
#define UARTE_SUBSCRIBE_FLUSHRX_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_SUBSCRIBE_FLUSHRX_CHIDX_Msk (0xFFUL << UARTE_SUBSCRIBE_FLUSHRX_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_EVENTS_CTS */
/* Description: CTS is activated (set low). Clear To Send. */

/* Bit 0 : CTS is activated (set low). Clear To Send. */
#define UARTE_EVENTS_CTS_EVENTS_CTS_Pos (0UL) /*!< Position of EVENTS_CTS field. */
#define UARTE_EVENTS_CTS_EVENTS_CTS_Msk (0x1UL << UARTE_EVENTS_CTS_EVENTS_CTS_Pos) /*!< Bit mask of EVENTS_CTS field. */
#define UARTE_EVENTS_CTS_EVENTS_CTS_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_CTS_EVENTS_CTS_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_NCTS */
/* Description: CTS is deactivated (set high). Not Clear To Send. */

/* Bit 0 : CTS is deactivated (set high). Not Clear To Send. */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos (0UL) /*!< Position of EVENTS_NCTS field. */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Msk (0x1UL << UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos) /*!< Bit mask of EVENTS_NCTS field. */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_RXDRDY */
/* Description: Data received in RXD (but potentially not yet transferred to Data RAM) */

/* Bit 0 : Data received in RXD (but potentially not yet transferred to Data RAM) */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos (0UL) /*!< Position of EVENTS_RXDRDY field. */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Msk (0x1UL << UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos) /*!< Bit mask of EVENTS_RXDRDY field. */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_ENDRX */
/* Description: Receive buffer is filled up */

/* Bit 0 : Receive buffer is filled up */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL) /*!< Position of EVENTS_ENDRX field. */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos) /*!< Bit mask of EVENTS_ENDRX field. */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_TXDRDY */
/* Description: Data sent from TXD */

/* Bit 0 : Data sent from TXD */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos (0UL) /*!< Position of EVENTS_TXDRDY field. */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Msk (0x1UL << UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos) /*!< Bit mask of EVENTS_TXDRDY field. */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_ENDTX */
/* Description: Last TX byte transmitted */

/* Bit 0 : Last TX byte transmitted */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL) /*!< Position of EVENTS_ENDTX field. */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos) /*!< Bit mask of EVENTS_ENDTX field. */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_ERROR */
/* Description: Error detected */

/* Bit 0 : Error detected */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_RXTO */
/* Description: Receiver timeout */

/* Bit 0 : Receiver timeout */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos (0UL) /*!< Position of EVENTS_RXTO field. */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Msk (0x1UL << UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos) /*!< Bit mask of EVENTS_RXTO field. */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_RXSTARTED */
/* Description: UART receiver has started */

/* Bit 0 : UART receiver has started */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL) /*!< Position of EVENTS_RXSTARTED field. */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos) /*!< Bit mask of EVENTS_RXSTARTED field. */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_TXSTARTED */
/* Description: UART transmitter has started */

/* Bit 0 : UART transmitter has started */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL) /*!< Position of EVENTS_TXSTARTED field. */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos) /*!< Bit mask of EVENTS_TXSTARTED field. */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_RTS */
/* Description: RX FIFO has only room for four more bytes before it overflows */

/* Bit 0 : RX FIFO has only room for four more bytes before it overflows */
#define UARTE_EVENTS_RTS_EVENTS_RTS_Pos (0UL) /*!< Position of EVENTS_RTS field. */
#define UARTE_EVENTS_RTS_EVENTS_RTS_Msk (0x1UL << UARTE_EVENTS_RTS_EVENTS_RTS_Pos) /*!< Bit mask of EVENTS_RTS field. */
#define UARTE_EVENTS_RTS_EVENTS_RTS_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_RTS_EVENTS_RTS_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_TXSTOPPED */
/* Description: Transmitter stopped */

/* Bit 0 : Transmitter stopped */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos (0UL) /*!< Position of EVENTS_TXSTOPPED field. */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Msk (0x1UL << UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos) /*!< Bit mask of EVENTS_TXSTOPPED field. */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_NotGenerated (0x0UL) /*!< Event not generated */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Generated (0x1UL) /*!< Event generated */

/* Register: UARTE_PUBLISH_CTS */
/* Description: Publish configuration for event CTS */

/* Bit 31 :   */
#define UARTE_PUBLISH_CTS_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_CTS_EN_Msk (0x1UL << UARTE_PUBLISH_CTS_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_CTS_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_CTS_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CTS will publish to */
#define UARTE_PUBLISH_CTS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_CTS_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_CTS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_NCTS */
/* Description: Publish configuration for event NCTS */

/* Bit 31 :   */
#define UARTE_PUBLISH_NCTS_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_NCTS_EN_Msk (0x1UL << UARTE_PUBLISH_NCTS_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_NCTS_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_NCTS_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event NCTS will publish to */
#define UARTE_PUBLISH_NCTS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_NCTS_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_NCTS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_RXDRDY */
/* Description: Publish configuration for event RXDRDY */

/* Bit 31 :   */
#define UARTE_PUBLISH_RXDRDY_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_RXDRDY_EN_Msk (0x1UL << UARTE_PUBLISH_RXDRDY_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_RXDRDY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_RXDRDY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RXDRDY will publish to */
#define UARTE_PUBLISH_RXDRDY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_RXDRDY_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_RXDRDY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_ENDRX */
/* Description: Publish configuration for event ENDRX */

/* Bit 31 :   */
#define UARTE_PUBLISH_ENDRX_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_ENDRX_EN_Msk (0x1UL << UARTE_PUBLISH_ENDRX_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_ENDRX_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_ENDRX_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDRX will publish to */
#define UARTE_PUBLISH_ENDRX_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_ENDRX_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_ENDRX_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_TXDRDY */
/* Description: Publish configuration for event TXDRDY */

/* Bit 31 :   */
#define UARTE_PUBLISH_TXDRDY_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_TXDRDY_EN_Msk (0x1UL << UARTE_PUBLISH_TXDRDY_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_TXDRDY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_TXDRDY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event TXDRDY will publish to */
#define UARTE_PUBLISH_TXDRDY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_TXDRDY_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_TXDRDY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_ENDTX */
/* Description: Publish configuration for event ENDTX */

/* Bit 31 :   */
#define UARTE_PUBLISH_ENDTX_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_ENDTX_EN_Msk (0x1UL << UARTE_PUBLISH_ENDTX_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_ENDTX_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_ENDTX_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDTX will publish to */
#define UARTE_PUBLISH_ENDTX_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_ENDTX_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_ENDTX_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_ERROR */
/* Description: Publish configuration for event ERROR */

/* Bit 31 :   */
#define UARTE_PUBLISH_ERROR_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_ERROR_EN_Msk (0x1UL << UARTE_PUBLISH_ERROR_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_ERROR_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_ERROR_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ERROR will publish to */
#define UARTE_PUBLISH_ERROR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_ERROR_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_ERROR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_RXTO */
/* Description: Publish configuration for event RXTO */

/* Bit 31 :   */
#define UARTE_PUBLISH_RXTO_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_RXTO_EN_Msk (0x1UL << UARTE_PUBLISH_RXTO_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_RXTO_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_RXTO_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RXTO will publish to */
#define UARTE_PUBLISH_RXTO_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_RXTO_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_RXTO_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_RXSTARTED */
/* Description: Publish configuration for event RXSTARTED */

/* Bit 31 :   */
#define UARTE_PUBLISH_RXSTARTED_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_RXSTARTED_EN_Msk (0x1UL << UARTE_PUBLISH_RXSTARTED_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_RXSTARTED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_RXSTARTED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RXSTARTED will publish to */
#define UARTE_PUBLISH_RXSTARTED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_RXSTARTED_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_RXSTARTED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_TXSTARTED */
/* Description: Publish configuration for event TXSTARTED */

/* Bit 31 :   */
#define UARTE_PUBLISH_TXSTARTED_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_TXSTARTED_EN_Msk (0x1UL << UARTE_PUBLISH_TXSTARTED_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_TXSTARTED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_TXSTARTED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event TXSTARTED will publish to */
#define UARTE_PUBLISH_TXSTARTED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_TXSTARTED_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_TXSTARTED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_RTS */
/* Description: Publish configuration for event RTS */

/* Bit 31 :   */
#define UARTE_PUBLISH_RTS_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_RTS_EN_Msk (0x1UL << UARTE_PUBLISH_RTS_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_RTS_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_RTS_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RTS will publish to */
#define UARTE_PUBLISH_RTS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_RTS_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_RTS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_PUBLISH_TXSTOPPED */
/* Description: Publish configuration for event TXSTOPPED */

/* Bit 31 :   */
#define UARTE_PUBLISH_TXSTOPPED_EN_Pos (31UL) /*!< Position of EN field. */
#define UARTE_PUBLISH_TXSTOPPED_EN_Msk (0x1UL << UARTE_PUBLISH_TXSTOPPED_EN_Pos) /*!< Bit mask of EN field. */
#define UARTE_PUBLISH_TXSTOPPED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define UARTE_PUBLISH_TXSTOPPED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event TXSTOPPED will publish to */
#define UARTE_PUBLISH_TXSTOPPED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define UARTE_PUBLISH_TXSTOPPED_CHIDX_Msk (0xFFUL << UARTE_PUBLISH_TXSTOPPED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: UARTE_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 6 : Shortcut between event ENDRX and task STOPRX */
#define UARTE_SHORTS_ENDRX_STOPRX_Pos (6UL) /*!< Position of ENDRX_STOPRX field. */
#define UARTE_SHORTS_ENDRX_STOPRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STOPRX_Pos) /*!< Bit mask of ENDRX_STOPRX field. */
#define UARTE_SHORTS_ENDRX_STOPRX_Disabled (0x0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_ENDRX_STOPRX_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event ENDRX and task STARTRX */
#define UARTE_SHORTS_ENDRX_STARTRX_Pos (5UL) /*!< Position of ENDRX_STARTRX field. */
#define UARTE_SHORTS_ENDRX_STARTRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STARTRX_Pos) /*!< Bit mask of ENDRX_STARTRX field. */
#define UARTE_SHORTS_ENDRX_STARTRX_Disabled (0x0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_ENDRX_STARTRX_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event NCTS and task STOPRX */
#define UARTE_SHORTS_NCTS_STOPRX_Pos (4UL) /*!< Position of NCTS_STOPRX field. */
#define UARTE_SHORTS_NCTS_STOPRX_Msk (0x1UL << UARTE_SHORTS_NCTS_STOPRX_Pos) /*!< Bit mask of NCTS_STOPRX field. */
#define UARTE_SHORTS_NCTS_STOPRX_Disabled (0x0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_NCTS_STOPRX_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event CTS and task STARTRX */
#define UARTE_SHORTS_CTS_STARTRX_Pos (3UL) /*!< Position of CTS_STARTRX field. */
#define UARTE_SHORTS_CTS_STARTRX_Msk (0x1UL << UARTE_SHORTS_CTS_STARTRX_Pos) /*!< Bit mask of CTS_STARTRX field. */
#define UARTE_SHORTS_CTS_STARTRX_Disabled (0x0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_CTS_STARTRX_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: UARTE_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 22 : Enable or disable interrupt for event TXSTOPPED */
#define UARTE_INTEN_TXSTOPPED_Pos (22UL) /*!< Position of TXSTOPPED field. */
#define UARTE_INTEN_TXSTOPPED_Msk (0x1UL << UARTE_INTEN_TXSTOPPED_Pos) /*!< Bit mask of TXSTOPPED field. */
#define UARTE_INTEN_TXSTOPPED_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_TXSTOPPED_Enabled (0x1UL) /*!< Enable */

/* Bit 21 : Enable or disable interrupt for event RTS */
#define UARTE_INTEN_RTS_Pos (21UL) /*!< Position of RTS field. */
#define UARTE_INTEN_RTS_Msk (0x1UL << UARTE_INTEN_RTS_Pos) /*!< Bit mask of RTS field. */
#define UARTE_INTEN_RTS_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_RTS_Enabled (0x1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for event TXSTARTED */
#define UARTE_INTEN_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define UARTE_INTEN_TXSTARTED_Msk (0x1UL << UARTE_INTEN_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define UARTE_INTEN_TXSTARTED_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_TXSTARTED_Enabled (0x1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for event RXSTARTED */
#define UARTE_INTEN_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define UARTE_INTEN_RXSTARTED_Msk (0x1UL << UARTE_INTEN_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define UARTE_INTEN_RXSTARTED_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_RXSTARTED_Enabled (0x1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for event RXTO */
#define UARTE_INTEN_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UARTE_INTEN_RXTO_Msk (0x1UL << UARTE_INTEN_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UARTE_INTEN_RXTO_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_RXTO_Enabled (0x1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event ERROR */
#define UARTE_INTEN_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UARTE_INTEN_ERROR_Msk (0x1UL << UARTE_INTEN_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UARTE_INTEN_ERROR_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_ERROR_Enabled (0x1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event ENDTX */
#define UARTE_INTEN_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define UARTE_INTEN_ENDTX_Msk (0x1UL << UARTE_INTEN_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define UARTE_INTEN_ENDTX_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_ENDTX_Enabled (0x1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event TXDRDY */
#define UARTE_INTEN_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UARTE_INTEN_TXDRDY_Msk (0x1UL << UARTE_INTEN_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UARTE_INTEN_TXDRDY_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_TXDRDY_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event ENDRX */
#define UARTE_INTEN_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define UARTE_INTEN_ENDRX_Msk (0x1UL << UARTE_INTEN_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define UARTE_INTEN_ENDRX_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_ENDRX_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event RXDRDY */
#define UARTE_INTEN_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UARTE_INTEN_RXDRDY_Msk (0x1UL << UARTE_INTEN_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UARTE_INTEN_RXDRDY_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_RXDRDY_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event NCTS */
#define UARTE_INTEN_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UARTE_INTEN_NCTS_Msk (0x1UL << UARTE_INTEN_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UARTE_INTEN_NCTS_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_NCTS_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event CTS */
#define UARTE_INTEN_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UARTE_INTEN_CTS_Msk (0x1UL << UARTE_INTEN_CTS_Pos) /*!< Bit mask of CTS field. */
#define UARTE_INTEN_CTS_Disabled (0x0UL) /*!< Disable */
#define UARTE_INTEN_CTS_Enabled (0x1UL) /*!< Enable */

/* Register: UARTE_INTENSET */
/* Description: Enable interrupt */

/* Bit 22 : Write '1' to enable interrupt for event TXSTOPPED */
#define UARTE_INTENSET_TXSTOPPED_Pos (22UL) /*!< Position of TXSTOPPED field. */
#define UARTE_INTENSET_TXSTOPPED_Msk (0x1UL << UARTE_INTENSET_TXSTOPPED_Pos) /*!< Bit mask of TXSTOPPED field. */
#define UARTE_INTENSET_TXSTOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_TXSTOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_TXSTOPPED_Set (0x1UL) /*!< Enable */

/* Bit 21 : Write '1' to enable interrupt for event RTS */
#define UARTE_INTENSET_RTS_Pos (21UL) /*!< Position of RTS field. */
#define UARTE_INTENSET_RTS_Msk (0x1UL << UARTE_INTENSET_RTS_Pos) /*!< Bit mask of RTS field. */
#define UARTE_INTENSET_RTS_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RTS_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RTS_Set (0x1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for event TXSTARTED */
#define UARTE_INTENSET_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define UARTE_INTENSET_TXSTARTED_Msk (0x1UL << UARTE_INTENSET_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define UARTE_INTENSET_TXSTARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_TXSTARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_TXSTARTED_Set (0x1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for event RXSTARTED */
#define UARTE_INTENSET_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define UARTE_INTENSET_RXSTARTED_Msk (0x1UL << UARTE_INTENSET_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define UARTE_INTENSET_RXSTARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RXSTARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RXSTARTED_Set (0x1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event RXTO */
#define UARTE_INTENSET_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UARTE_INTENSET_RXTO_Msk (0x1UL << UARTE_INTENSET_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UARTE_INTENSET_RXTO_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RXTO_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RXTO_Set (0x1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define UARTE_INTENSET_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UARTE_INTENSET_ERROR_Msk (0x1UL << UARTE_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UARTE_INTENSET_ERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_ERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_ERROR_Set (0x1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event ENDTX */
#define UARTE_INTENSET_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define UARTE_INTENSET_ENDTX_Msk (0x1UL << UARTE_INTENSET_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define UARTE_INTENSET_ENDTX_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_ENDTX_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_ENDTX_Set (0x1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event TXDRDY */
#define UARTE_INTENSET_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UARTE_INTENSET_TXDRDY_Msk (0x1UL << UARTE_INTENSET_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UARTE_INTENSET_TXDRDY_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_TXDRDY_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_TXDRDY_Set (0x1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define UARTE_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define UARTE_INTENSET_ENDRX_Msk (0x1UL << UARTE_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define UARTE_INTENSET_ENDRX_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_ENDRX_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_ENDRX_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event RXDRDY */
#define UARTE_INTENSET_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UARTE_INTENSET_RXDRDY_Msk (0x1UL << UARTE_INTENSET_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UARTE_INTENSET_RXDRDY_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RXDRDY_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RXDRDY_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event NCTS */
#define UARTE_INTENSET_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UARTE_INTENSET_NCTS_Msk (0x1UL << UARTE_INTENSET_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UARTE_INTENSET_NCTS_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_NCTS_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_NCTS_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event CTS */
#define UARTE_INTENSET_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UARTE_INTENSET_CTS_Msk (0x1UL << UARTE_INTENSET_CTS_Pos) /*!< Bit mask of CTS field. */
#define UARTE_INTENSET_CTS_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_CTS_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_CTS_Set (0x1UL) /*!< Enable */

/* Register: UARTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 22 : Write '1' to disable interrupt for event TXSTOPPED */
#define UARTE_INTENCLR_TXSTOPPED_Pos (22UL) /*!< Position of TXSTOPPED field. */
#define UARTE_INTENCLR_TXSTOPPED_Msk (0x1UL << UARTE_INTENCLR_TXSTOPPED_Pos) /*!< Bit mask of TXSTOPPED field. */
#define UARTE_INTENCLR_TXSTOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_TXSTOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_TXSTOPPED_Clear (0x1UL) /*!< Disable */

/* Bit 21 : Write '1' to disable interrupt for event RTS */
#define UARTE_INTENCLR_RTS_Pos (21UL) /*!< Position of RTS field. */
#define UARTE_INTENCLR_RTS_Msk (0x1UL << UARTE_INTENCLR_RTS_Pos) /*!< Bit mask of RTS field. */
#define UARTE_INTENCLR_RTS_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RTS_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RTS_Clear (0x1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for event TXSTARTED */
#define UARTE_INTENCLR_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define UARTE_INTENCLR_TXSTARTED_Msk (0x1UL << UARTE_INTENCLR_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define UARTE_INTENCLR_TXSTARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_TXSTARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_TXSTARTED_Clear (0x1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for event RXSTARTED */
#define UARTE_INTENCLR_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define UARTE_INTENCLR_RXSTARTED_Msk (0x1UL << UARTE_INTENCLR_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define UARTE_INTENCLR_RXSTARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RXSTARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RXSTARTED_Clear (0x1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event RXTO */
#define UARTE_INTENCLR_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UARTE_INTENCLR_RXTO_Msk (0x1UL << UARTE_INTENCLR_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UARTE_INTENCLR_RXTO_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RXTO_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RXTO_Clear (0x1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define UARTE_INTENCLR_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UARTE_INTENCLR_ERROR_Msk (0x1UL << UARTE_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UARTE_INTENCLR_ERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_ERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_ERROR_Clear (0x1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event ENDTX */
#define UARTE_INTENCLR_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define UARTE_INTENCLR_ENDTX_Msk (0x1UL << UARTE_INTENCLR_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define UARTE_INTENCLR_ENDTX_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_ENDTX_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_ENDTX_Clear (0x1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event TXDRDY */
#define UARTE_INTENCLR_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UARTE_INTENCLR_TXDRDY_Msk (0x1UL << UARTE_INTENCLR_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UARTE_INTENCLR_TXDRDY_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_TXDRDY_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_TXDRDY_Clear (0x1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define UARTE_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define UARTE_INTENCLR_ENDRX_Msk (0x1UL << UARTE_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define UARTE_INTENCLR_ENDRX_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_ENDRX_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_ENDRX_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event RXDRDY */
#define UARTE_INTENCLR_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UARTE_INTENCLR_RXDRDY_Msk (0x1UL << UARTE_INTENCLR_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UARTE_INTENCLR_RXDRDY_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RXDRDY_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RXDRDY_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event NCTS */
#define UARTE_INTENCLR_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UARTE_INTENCLR_NCTS_Msk (0x1UL << UARTE_INTENCLR_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UARTE_INTENCLR_NCTS_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_NCTS_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_NCTS_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event CTS */
#define UARTE_INTENCLR_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UARTE_INTENCLR_CTS_Msk (0x1UL << UARTE_INTENCLR_CTS_Pos) /*!< Bit mask of CTS field. */
#define UARTE_INTENCLR_CTS_Disabled (0x0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_CTS_Enabled (0x1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_CTS_Clear (0x1UL) /*!< Disable */

/* Register: UARTE_ERRORSRC */
/* Description: Error source This register is read/write one to clear. */

/* Bit 3 : Break condition */
#define UARTE_ERRORSRC_BREAK_Pos (3UL) /*!< Position of BREAK field. */
#define UARTE_ERRORSRC_BREAK_Msk (0x1UL << UARTE_ERRORSRC_BREAK_Pos) /*!< Bit mask of BREAK field. */
#define UARTE_ERRORSRC_BREAK_NotPresent (0x0UL) /*!< Read: error not present */
#define UARTE_ERRORSRC_BREAK_Present (0x1UL) /*!< Read: error present */

/* Bit 2 : Framing error occurred */
#define UARTE_ERRORSRC_FRAMING_Pos (2UL) /*!< Position of FRAMING field. */
#define UARTE_ERRORSRC_FRAMING_Msk (0x1UL << UARTE_ERRORSRC_FRAMING_Pos) /*!< Bit mask of FRAMING field. */
#define UARTE_ERRORSRC_FRAMING_NotPresent (0x0UL) /*!< Read: error not present */
#define UARTE_ERRORSRC_FRAMING_Present (0x1UL) /*!< Read: error present */

/* Bit 1 : Parity error */
#define UARTE_ERRORSRC_PARITY_Pos (1UL) /*!< Position of PARITY field. */
#define UARTE_ERRORSRC_PARITY_Msk (0x1UL << UARTE_ERRORSRC_PARITY_Pos) /*!< Bit mask of PARITY field. */
#define UARTE_ERRORSRC_PARITY_NotPresent (0x0UL) /*!< Read: error not present */
#define UARTE_ERRORSRC_PARITY_Present (0x1UL) /*!< Read: error present */

/* Bit 0 : Overrun error */
#define UARTE_ERRORSRC_OVERRUN_Pos (0UL) /*!< Position of OVERRUN field. */
#define UARTE_ERRORSRC_OVERRUN_Msk (0x1UL << UARTE_ERRORSRC_OVERRUN_Pos) /*!< Bit mask of OVERRUN field. */
#define UARTE_ERRORSRC_OVERRUN_NotPresent (0x0UL) /*!< Read: error not present */
#define UARTE_ERRORSRC_OVERRUN_Present (0x1UL) /*!< Read: error present */

/* Register: UARTE_ENABLE */
/* Description: Enable UART */

/* Bits 3..0 : Enable or disable UARTE */
#define UARTE_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define UARTE_ENABLE_ENABLE_Msk (0xFUL << UARTE_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define UARTE_ENABLE_ENABLE_Disabled (0x0UL) /*!< Disable UARTE */
#define UARTE_ENABLE_ENABLE_Enabled (0x8UL) /*!< Enable UARTE */

/* Register: UARTE_PSEL_RTS */
/* Description: Pin select for RTS signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_RTS_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UARTE_PSEL_RTS_CONNECT_Msk (0x1UL << UARTE_PSEL_RTS_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UARTE_PSEL_RTS_CONNECT_Connected (0x0UL) /*!< Connect */
#define UARTE_PSEL_RTS_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define UARTE_PSEL_RTS_PORT_Pos (5UL) /*!< Position of PORT field. */
#define UARTE_PSEL_RTS_PORT_Msk (0x1UL << UARTE_PSEL_RTS_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_RTS_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UARTE_PSEL_RTS_PIN_Msk (0x1FUL << UARTE_PSEL_RTS_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UARTE_PSEL_TXD */
/* Description: Pin select for TXD signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_TXD_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UARTE_PSEL_TXD_CONNECT_Msk (0x1UL << UARTE_PSEL_TXD_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UARTE_PSEL_TXD_CONNECT_Connected (0x0UL) /*!< Connect */
#define UARTE_PSEL_TXD_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define UARTE_PSEL_TXD_PORT_Pos (5UL) /*!< Position of PORT field. */
#define UARTE_PSEL_TXD_PORT_Msk (0x1UL << UARTE_PSEL_TXD_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_TXD_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UARTE_PSEL_TXD_PIN_Msk (0x1FUL << UARTE_PSEL_TXD_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UARTE_PSEL_CTS */
/* Description: Pin select for CTS signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_CTS_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UARTE_PSEL_CTS_CONNECT_Msk (0x1UL << UARTE_PSEL_CTS_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UARTE_PSEL_CTS_CONNECT_Connected (0x0UL) /*!< Connect */
#define UARTE_PSEL_CTS_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define UARTE_PSEL_CTS_PORT_Pos (5UL) /*!< Position of PORT field. */
#define UARTE_PSEL_CTS_PORT_Msk (0x1UL << UARTE_PSEL_CTS_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_CTS_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UARTE_PSEL_CTS_PIN_Msk (0x1FUL << UARTE_PSEL_CTS_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UARTE_PSEL_RXD */
/* Description: Pin select for RXD signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_RXD_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UARTE_PSEL_RXD_CONNECT_Msk (0x1UL << UARTE_PSEL_RXD_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UARTE_PSEL_RXD_CONNECT_Connected (0x0UL) /*!< Connect */
#define UARTE_PSEL_RXD_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define UARTE_PSEL_RXD_PORT_Pos (5UL) /*!< Position of PORT field. */
#define UARTE_PSEL_RXD_PORT_Msk (0x1UL << UARTE_PSEL_RXD_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_RXD_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UARTE_PSEL_RXD_PIN_Msk (0x1FUL << UARTE_PSEL_RXD_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UARTE_BAUDRATE */
/* Description: Baud rate. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : Baud rate */
#define UARTE_BAUDRATE_BAUDRATE_Pos (0UL) /*!< Position of BAUDRATE field. */
#define UARTE_BAUDRATE_BAUDRATE_Msk (0xFFFFFFFFUL << UARTE_BAUDRATE_BAUDRATE_Pos) /*!< Bit mask of BAUDRATE field. */
#define UARTE_BAUDRATE_BAUDRATE_Baud1200 (0x0004F000UL) /*!< 1200 baud (actual rate: 1205) */
#define UARTE_BAUDRATE_BAUDRATE_Baud2400 (0x0009D000UL) /*!< 2400 baud (actual rate: 2396) */
#define UARTE_BAUDRATE_BAUDRATE_Baud4800 (0x0013B000UL) /*!< 4800 baud (actual rate: 4808) */
#define UARTE_BAUDRATE_BAUDRATE_Baud9600 (0x00275000UL) /*!< 9600 baud (actual rate: 9598) */
#define UARTE_BAUDRATE_BAUDRATE_Baud14400 (0x003AF000UL) /*!< 14400 baud (actual rate: 14401) */
#define UARTE_BAUDRATE_BAUDRATE_Baud19200 (0x004EA000UL) /*!< 19200 baud (actual rate: 19208) */
#define UARTE_BAUDRATE_BAUDRATE_Baud28800 (0x0075C000UL) /*!< 28800 baud (actual rate: 28777) */
#define UARTE_BAUDRATE_BAUDRATE_Baud31250 (0x00800000UL) /*!< 31250 baud */
#define UARTE_BAUDRATE_BAUDRATE_Baud38400 (0x009D0000UL) /*!< 38400 baud (actual rate: 38369) */
#define UARTE_BAUDRATE_BAUDRATE_Baud56000 (0x00E50000UL) /*!< 56000 baud (actual rate: 55944) */
#define UARTE_BAUDRATE_BAUDRATE_Baud57600 (0x00EB0000UL) /*!< 57600 baud (actual rate: 57554) */
#define UARTE_BAUDRATE_BAUDRATE_Baud76800 (0x013A9000UL) /*!< 76800 baud (actual rate: 76923) */
#define UARTE_BAUDRATE_BAUDRATE_Baud115200 (0x01D60000UL) /*!< 115200 baud (actual rate: 115108) */
#define UARTE_BAUDRATE_BAUDRATE_Baud230400 (0x03B00000UL) /*!< 230400 baud (actual rate: 231884) */
#define UARTE_BAUDRATE_BAUDRATE_Baud250000 (0x04000000UL) /*!< 250000 baud */
#define UARTE_BAUDRATE_BAUDRATE_Baud460800 (0x07400000UL) /*!< 460800 baud (actual rate: 457143) */
#define UARTE_BAUDRATE_BAUDRATE_Baud921600 (0x0F000000UL) /*!< 921600 baud (actual rate: 941176) */
#define UARTE_BAUDRATE_BAUDRATE_Baud1M (0x10000000UL) /*!< 1 megabaud */

/* Register: UARTE_RXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define UARTE_RXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define UARTE_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << UARTE_RXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: UARTE_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 7..0 : Maximum number of bytes in receive buffer */
#define UARTE_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define UARTE_RXD_MAXCNT_MAXCNT_Msk (0xFFUL << UARTE_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: UARTE_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 7..0 : Number of bytes transferred in the last transaction */
#define UARTE_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define UARTE_RXD_AMOUNT_AMOUNT_Msk (0xFFUL << UARTE_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: UARTE_TXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define UARTE_TXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define UARTE_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << UARTE_TXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: UARTE_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 7..0 : Maximum number of bytes in transmit buffer */
#define UARTE_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define UARTE_TXD_MAXCNT_MAXCNT_Msk (0xFFUL << UARTE_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: UARTE_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 7..0 : Number of bytes transferred in the last transaction */
#define UARTE_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define UARTE_TXD_AMOUNT_AMOUNT_Msk (0xFFUL << UARTE_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: UARTE_CONFIG */
/* Description: Configuration of parity and hardware flow control */

/* Bit 8 : Even or odd parity type */
#define UARTE_CONFIG_PARITYTYPE_Pos (8UL) /*!< Position of PARITYTYPE field. */
#define UARTE_CONFIG_PARITYTYPE_Msk (0x1UL << UARTE_CONFIG_PARITYTYPE_Pos) /*!< Bit mask of PARITYTYPE field. */
#define UARTE_CONFIG_PARITYTYPE_Even (0x0UL) /*!< Even parity */
#define UARTE_CONFIG_PARITYTYPE_Odd (0x1UL) /*!< Odd parity */

/* Bit 4 : Stop bits */
#define UARTE_CONFIG_STOP_Pos (4UL) /*!< Position of STOP field. */
#define UARTE_CONFIG_STOP_Msk (0x1UL << UARTE_CONFIG_STOP_Pos) /*!< Bit mask of STOP field. */
#define UARTE_CONFIG_STOP_One (0x0UL) /*!< One stop bit */
#define UARTE_CONFIG_STOP_Two (0x1UL) /*!< Two stop bits */

/* Bits 3..1 : Parity */
#define UARTE_CONFIG_PARITY_Pos (1UL) /*!< Position of PARITY field. */
#define UARTE_CONFIG_PARITY_Msk (0x7UL << UARTE_CONFIG_PARITY_Pos) /*!< Bit mask of PARITY field. */
#define UARTE_CONFIG_PARITY_Excluded (0x0UL) /*!< Exclude parity bit */
#define UARTE_CONFIG_PARITY_Included (0x7UL) /*!< Include even parity bit */

/* Bit 0 : Hardware flow control */
#define UARTE_CONFIG_HWFC_Pos (0UL) /*!< Position of HWFC field. */
#define UARTE_CONFIG_HWFC_Msk (0x1UL << UARTE_CONFIG_HWFC_Pos) /*!< Bit mask of HWFC field. */
#define UARTE_CONFIG_HWFC_Disabled (0x0UL) /*!< Disabled */
#define UARTE_CONFIG_HWFC_Enabled (0x1UL) /*!< Enabled */


/* Peripheral: UICR */
/* Description: User Information Configuration Registers */

/* Register: UICR_APPROTECT */
/* Description: Access port protection */

/* Bits 31..0 : Blocks debugger read/write access to all CPU registers and
          memory mapped addresses except for the control access port
          registers.
        Between reset and automatic readout, the system is protected Using any value except Unprotected will lead to the protection being enabled. */
#define UICR_APPROTECT_PALL_Pos (0UL) /*!< Position of PALL field. */
#define UICR_APPROTECT_PALL_Msk (0xFFFFFFFFUL << UICR_APPROTECT_PALL_Pos) /*!< Bit mask of PALL field. */
#define UICR_APPROTECT_PALL_Protected (0x00000000UL) /*!< Protected */
#define UICR_APPROTECT_PALL_Unprotected (0xFFFFFFFFUL) /*!< Unprotected */

/* Register: UICR_TINSTANCE */
/* Description: SW-DP Target instance */

/* Bits 31..28 : TINSTANCE bits are negated and used in the SW-DP DLPIDR.TINSTANCE field. E.g. 0xF in this field is translated to 0x0 in DLPIDR.TINSTANCE field. */
#define UICR_TINSTANCE_TINSTANCE_Pos (28UL) /*!< Position of TINSTANCE field. */
#define UICR_TINSTANCE_TINSTANCE_Msk (0xFUL << UICR_TINSTANCE_TINSTANCE_Pos) /*!< Bit mask of TINSTANCE field. */

/* Register: UICR_PSELRESET */
/* Description: Description collection: Mapping of the nRESET function (see POWER chapter for details) */

/* Bit 31 : Connection */
#define UICR_PSELRESET_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UICR_PSELRESET_CONNECT_Msk (0x1UL << UICR_PSELRESET_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UICR_PSELRESET_CONNECT_Connected (0x0UL) /*!< Connect */
#define UICR_PSELRESET_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bit 5 : Port number onto which nRESET is exposed */
#define UICR_PSELRESET_PORT_Pos (5UL) /*!< Position of PORT field. */
#define UICR_PSELRESET_PORT_Msk (0x1UL << UICR_PSELRESET_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : GPIO pin number onto which nRESET is exposed */
#define UICR_PSELRESET_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UICR_PSELRESET_PIN_Msk (0x1FUL << UICR_PSELRESET_PIN_Pos) /*!< Bit mask of PIN field. */


/* Peripheral: USBD */
/* Description: Universal serial bus device */

/* Register: USBD_TASKS_STARTEPIN */
/* Description: Description collection: Captures the EPIN[n].PTR and EPIN[n].MAXCNT registers values, and enables endpoint IN n to respond to traffic from host EPIN[n].CONFIG is also captured */

/* Bit 0 : Captures the EPIN[n].PTR and EPIN[n].MAXCNT registers values, and enables endpoint IN n to respond to traffic from host EPIN[n].CONFIG is also captured */
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Pos (0UL) /*!< Position of TASKS_STARTEPIN field. */
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Msk (0x1UL << USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Pos) /*!< Bit mask of TASKS_STARTEPIN field. */
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Trigger (0x1UL) /*!< Trigger task */

/* Register: USBD_TASKS_STARTISOIN */
/* Description: Captures the ISOIN.PTR and ISOIN.MAXCNT registers values, and enables sending data on ISO endpoint ISOIN.CONFIG is also captured */

/* Bit 0 : Captures the ISOIN.PTR and ISOIN.MAXCNT registers values, and enables sending data on ISO endpoint ISOIN.CONFIG is also captured */
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Pos (0UL) /*!< Position of TASKS_STARTISOIN field. */
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Msk (0x1UL << USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Pos) /*!< Bit mask of TASKS_STARTISOIN field. */
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Trigger (0x1UL) /*!< Trigger task */

/* Register: USBD_TASKS_STARTEPOUT */
/* Description: Description collection: Captures the EPOUT[n].PTR and EPOUT[n].MAXCNT registers values, and enables endpoint n to respond to traffic from host EPOUT[n].CONFIG is also captured */

/* Bit 0 : Captures the EPOUT[n].PTR and EPOUT[n].MAXCNT registers values, and enables endpoint n to respond to traffic from host EPOUT[n].CONFIG is also captured */
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Pos (0UL) /*!< Position of TASKS_STARTEPOUT field. */
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Msk (0x1UL << USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Pos) /*!< Bit mask of TASKS_STARTEPOUT field. */
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Trigger (0x1UL) /*!< Trigger task */

/* Register: USBD_TASKS_STARTISOOUT */
/* Description: Captures the ISOOUT.PTR and ISOOUT.MAXCNT registers values, and enables receiving of data on ISO endpoint ISOOUT.CONFIG is also captured */

/* Bit 0 : Captures the ISOOUT.PTR and ISOOUT.MAXCNT registers values, and enables receiving of data on ISO endpoint ISOOUT.CONFIG is also captured */
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Pos (0UL) /*!< Position of TASKS_STARTISOOUT field. */
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Msk (0x1UL << USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Pos) /*!< Bit mask of TASKS_STARTISOOUT field. */
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Trigger (0x1UL) /*!< Trigger task */

/* Register: USBD_TASKS_EP0RCVOUT */
/* Description: Allows OUT data stage on control endpoint 0 */

/* Bit 0 : Allows OUT data stage on control endpoint 0 */
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Pos (0UL) /*!< Position of TASKS_EP0RCVOUT field. */
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Msk (0x1UL << USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Pos) /*!< Bit mask of TASKS_EP0RCVOUT field. */
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Trigger (0x1UL) /*!< Trigger task */

/* Register: USBD_TASKS_EP0STATUS */
/* Description: Allows status stage on control endpoint 0 */

/* Bit 0 : Allows status stage on control endpoint 0 */
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Pos (0UL) /*!< Position of TASKS_EP0STATUS field. */
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Msk (0x1UL << USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Pos) /*!< Bit mask of TASKS_EP0STATUS field. */
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Trigger (0x1UL) /*!< Trigger task */

/* Register: USBD_TASKS_EP0STALL */
/* Description: Stalls data and status stage on control endpoint 0 */

/* Bit 0 : Stalls data and status stage on control endpoint 0 */
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Pos (0UL) /*!< Position of TASKS_EP0STALL field. */
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Msk (0x1UL << USBD_TASKS_EP0STALL_TASKS_EP0STALL_Pos) /*!< Bit mask of TASKS_EP0STALL field. */
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Trigger (0x1UL) /*!< Trigger task */

/* Register: USBD_TASKS_DPDMDRIVE */
/* Description: Forces D+ and D- lines into the state defined in the DPDMVALUE register */

/* Bit 0 : Forces D+ and D- lines into the state defined in the DPDMVALUE register */
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Pos (0UL) /*!< Position of TASKS_DPDMDRIVE field. */
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Msk (0x1UL << USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Pos) /*!< Bit mask of TASKS_DPDMDRIVE field. */
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Trigger (0x1UL) /*!< Trigger task */

/* Register: USBD_TASKS_DPDMNODRIVE */
/* Description: Stops forcing D+ and D- lines into any state (USB engine takes control) */

/* Bit 0 : Stops forcing D+ and D- lines into any state (USB engine takes control) */
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Pos (0UL) /*!< Position of TASKS_DPDMNODRIVE field. */
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Msk (0x1UL << USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Pos) /*!< Bit mask of TASKS_DPDMNODRIVE field. */
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Trigger (0x1UL) /*!< Trigger task */

/* Register: USBD_SUBSCRIBE_STARTEPIN */
/* Description: Description collection: Subscribe configuration for task STARTEPIN[n] */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_STARTEPIN_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_SUBSCRIBE_STARTEPIN_EN_Msk (0x1UL << USBD_SUBSCRIBE_STARTEPIN_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_SUBSCRIBE_STARTEPIN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define USBD_SUBSCRIBE_STARTEPIN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STARTEPIN[n] will subscribe to */
#define USBD_SUBSCRIBE_STARTEPIN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_SUBSCRIBE_STARTEPIN_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_STARTEPIN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_SUBSCRIBE_STARTISOIN */
/* Description: Subscribe configuration for task STARTISOIN */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_STARTISOIN_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_SUBSCRIBE_STARTISOIN_EN_Msk (0x1UL << USBD_SUBSCRIBE_STARTISOIN_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_SUBSCRIBE_STARTISOIN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define USBD_SUBSCRIBE_STARTISOIN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STARTISOIN will subscribe to */
#define USBD_SUBSCRIBE_STARTISOIN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_SUBSCRIBE_STARTISOIN_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_STARTISOIN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_SUBSCRIBE_STARTEPOUT */
/* Description: Description collection: Subscribe configuration for task STARTEPOUT[n] */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_STARTEPOUT_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_SUBSCRIBE_STARTEPOUT_EN_Msk (0x1UL << USBD_SUBSCRIBE_STARTEPOUT_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_SUBSCRIBE_STARTEPOUT_EN_Disabled (0x0UL) /*!< Disable subscription */
#define USBD_SUBSCRIBE_STARTEPOUT_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STARTEPOUT[n] will subscribe to */
#define USBD_SUBSCRIBE_STARTEPOUT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_SUBSCRIBE_STARTEPOUT_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_STARTEPOUT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_SUBSCRIBE_STARTISOOUT */
/* Description: Subscribe configuration for task STARTISOOUT */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_STARTISOOUT_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_SUBSCRIBE_STARTISOOUT_EN_Msk (0x1UL << USBD_SUBSCRIBE_STARTISOOUT_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_SUBSCRIBE_STARTISOOUT_EN_Disabled (0x0UL) /*!< Disable subscription */
#define USBD_SUBSCRIBE_STARTISOOUT_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STARTISOOUT will subscribe to */
#define USBD_SUBSCRIBE_STARTISOOUT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_SUBSCRIBE_STARTISOOUT_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_STARTISOOUT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_SUBSCRIBE_EP0RCVOUT */
/* Description: Subscribe configuration for task EP0RCVOUT */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_EP0RCVOUT_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_SUBSCRIBE_EP0RCVOUT_EN_Msk (0x1UL << USBD_SUBSCRIBE_EP0RCVOUT_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_SUBSCRIBE_EP0RCVOUT_EN_Disabled (0x0UL) /*!< Disable subscription */
#define USBD_SUBSCRIBE_EP0RCVOUT_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task EP0RCVOUT will subscribe to */
#define USBD_SUBSCRIBE_EP0RCVOUT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_SUBSCRIBE_EP0RCVOUT_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_EP0RCVOUT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_SUBSCRIBE_EP0STATUS */
/* Description: Subscribe configuration for task EP0STATUS */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_EP0STATUS_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_SUBSCRIBE_EP0STATUS_EN_Msk (0x1UL << USBD_SUBSCRIBE_EP0STATUS_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_SUBSCRIBE_EP0STATUS_EN_Disabled (0x0UL) /*!< Disable subscription */
#define USBD_SUBSCRIBE_EP0STATUS_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task EP0STATUS will subscribe to */
#define USBD_SUBSCRIBE_EP0STATUS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_SUBSCRIBE_EP0STATUS_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_EP0STATUS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_SUBSCRIBE_EP0STALL */
/* Description: Subscribe configuration for task EP0STALL */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_EP0STALL_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_SUBSCRIBE_EP0STALL_EN_Msk (0x1UL << USBD_SUBSCRIBE_EP0STALL_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_SUBSCRIBE_EP0STALL_EN_Disabled (0x0UL) /*!< Disable subscription */
#define USBD_SUBSCRIBE_EP0STALL_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task EP0STALL will subscribe to */
#define USBD_SUBSCRIBE_EP0STALL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_SUBSCRIBE_EP0STALL_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_EP0STALL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_SUBSCRIBE_DPDMDRIVE */
/* Description: Subscribe configuration for task DPDMDRIVE */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_DPDMDRIVE_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_SUBSCRIBE_DPDMDRIVE_EN_Msk (0x1UL << USBD_SUBSCRIBE_DPDMDRIVE_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_SUBSCRIBE_DPDMDRIVE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define USBD_SUBSCRIBE_DPDMDRIVE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DPDMDRIVE will subscribe to */
#define USBD_SUBSCRIBE_DPDMDRIVE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_SUBSCRIBE_DPDMDRIVE_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_DPDMDRIVE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_SUBSCRIBE_DPDMNODRIVE */
/* Description: Subscribe configuration for task DPDMNODRIVE */

/* Bit 31 :   */
#define USBD_SUBSCRIBE_DPDMNODRIVE_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_SUBSCRIBE_DPDMNODRIVE_EN_Msk (0x1UL << USBD_SUBSCRIBE_DPDMNODRIVE_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_SUBSCRIBE_DPDMNODRIVE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define USBD_SUBSCRIBE_DPDMNODRIVE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DPDMNODRIVE will subscribe to */
#define USBD_SUBSCRIBE_DPDMNODRIVE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_SUBSCRIBE_DPDMNODRIVE_CHIDX_Msk (0xFFUL << USBD_SUBSCRIBE_DPDMNODRIVE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_EVENTS_USBRESET */
/* Description: Signals that a USB reset condition has been detected on USB lines */

/* Bit 0 : Signals that a USB reset condition has been detected on USB lines */
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Pos (0UL) /*!< Position of EVENTS_USBRESET field. */
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Msk (0x1UL << USBD_EVENTS_USBRESET_EVENTS_USBRESET_Pos) /*!< Bit mask of EVENTS_USBRESET field. */
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_STARTED */
/* Description: Confirms that the EPIN[n].PTR and EPIN[n].MAXCNT, or EPOUT[n].PTR and EPOUT[n].MAXCNT registers have been captured on all endpoints reported in the EPSTATUS register EPIN[n].CONFIG is also confirmed captured */

/* Bit 0 : Confirms that the EPIN[n].PTR and EPIN[n].MAXCNT, or EPOUT[n].PTR and EPOUT[n].MAXCNT registers have been captured on all endpoints reported in the EPSTATUS register EPIN[n].CONFIG is also confirmed captured */
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field. */
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << USBD_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED field. */
#define USBD_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_ENDEPIN */
/* Description: Description collection: The whole EPIN[n] buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole EPIN[n] buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Pos (0UL) /*!< Position of EVENTS_ENDEPIN field. */
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Msk (0x1UL << USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Pos) /*!< Bit mask of EVENTS_ENDEPIN field. */
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_EP0DATADONE */
/* Description: An acknowledged data transfer has taken place on the control endpoint */

/* Bit 0 : An acknowledged data transfer has taken place on the control endpoint */
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Pos (0UL) /*!< Position of EVENTS_EP0DATADONE field. */
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Msk (0x1UL << USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Pos) /*!< Bit mask of EVENTS_EP0DATADONE field. */
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_ENDISOIN */
/* Description: The whole ISOIN buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole ISOIN buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Pos (0UL) /*!< Position of EVENTS_ENDISOIN field. */
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Msk (0x1UL << USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Pos) /*!< Bit mask of EVENTS_ENDISOIN field. */
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_ENDEPOUT */
/* Description: Description collection: The whole EPOUT[n] buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole EPOUT[n] buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Pos (0UL) /*!< Position of EVENTS_ENDEPOUT field. */
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Msk (0x1UL << USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Pos) /*!< Bit mask of EVENTS_ENDEPOUT field. */
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_ENDISOOUT */
/* Description: The whole ISOOUT buffer has been consumed. The buffer can be accessed safely by software. */

/* Bit 0 : The whole ISOOUT buffer has been consumed. The buffer can be accessed safely by software. */
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Pos (0UL) /*!< Position of EVENTS_ENDISOOUT field. */
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Msk (0x1UL << USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Pos) /*!< Bit mask of EVENTS_ENDISOOUT field. */
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_SOF */
/* Description: Signals that a SOF (start of frame) condition has been detected on USB lines */

/* Bit 0 : Signals that a SOF (start of frame) condition has been detected on USB lines */
#define USBD_EVENTS_SOF_EVENTS_SOF_Pos (0UL) /*!< Position of EVENTS_SOF field. */
#define USBD_EVENTS_SOF_EVENTS_SOF_Msk (0x1UL << USBD_EVENTS_SOF_EVENTS_SOF_Pos) /*!< Bit mask of EVENTS_SOF field. */
#define USBD_EVENTS_SOF_EVENTS_SOF_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_SOF_EVENTS_SOF_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_USBEVENT */
/* Description: An event or an error not covered by specific events has occurred. Check EVENTCAUSE register to find the cause. */

/* Bit 0 : An event or an error not covered by specific events has occurred. Check EVENTCAUSE register to find the cause. */
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Pos (0UL) /*!< Position of EVENTS_USBEVENT field. */
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Msk (0x1UL << USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Pos) /*!< Bit mask of EVENTS_USBEVENT field. */
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_EP0SETUP */
/* Description: A valid SETUP token has been received (and acknowledged) on the control endpoint */

/* Bit 0 : A valid SETUP token has been received (and acknowledged) on the control endpoint */
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Pos (0UL) /*!< Position of EVENTS_EP0SETUP field. */
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Msk (0x1UL << USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Pos) /*!< Bit mask of EVENTS_EP0SETUP field. */
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_EPDATA */
/* Description: A data transfer has occurred on a data endpoint, indicated by the EPDATASTATUS register */

/* Bit 0 : A data transfer has occurred on a data endpoint, indicated by the EPDATASTATUS register */
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Pos (0UL) /*!< Position of EVENTS_EPDATA field. */
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Msk (0x1UL << USBD_EVENTS_EPDATA_EVENTS_EPDATA_Pos) /*!< Bit mask of EVENTS_EPDATA field. */
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_EVENTS_ACCESSFAULT */
/* Description: Access to an unavailable USB register has been attempted (software or EasyDMA). This event can be generated even when USBD is not enabled. */

/* Bit 0 : Access to an unavailable USB register has been attempted (software or EasyDMA). This event can be generated even when USBD is not enabled. */
#define USBD_EVENTS_ACCESSFAULT_EVENTS_ACCESSFAULT_Pos (0UL) /*!< Position of EVENTS_ACCESSFAULT field. */
#define USBD_EVENTS_ACCESSFAULT_EVENTS_ACCESSFAULT_Msk (0x1UL << USBD_EVENTS_ACCESSFAULT_EVENTS_ACCESSFAULT_Pos) /*!< Bit mask of EVENTS_ACCESSFAULT field. */
#define USBD_EVENTS_ACCESSFAULT_EVENTS_ACCESSFAULT_NotGenerated (0x0UL) /*!< Event not generated */
#define USBD_EVENTS_ACCESSFAULT_EVENTS_ACCESSFAULT_Generated (0x1UL) /*!< Event generated */

/* Register: USBD_PUBLISH_USBRESET */
/* Description: Publish configuration for event USBRESET */

/* Bit 31 :   */
#define USBD_PUBLISH_USBRESET_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_USBRESET_EN_Msk (0x1UL << USBD_PUBLISH_USBRESET_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_USBRESET_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_USBRESET_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event USBRESET will publish to */
#define USBD_PUBLISH_USBRESET_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_USBRESET_CHIDX_Msk (0xFFUL << USBD_PUBLISH_USBRESET_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_STARTED */
/* Description: Publish configuration for event STARTED */

/* Bit 31 :   */
#define USBD_PUBLISH_STARTED_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_STARTED_EN_Msk (0x1UL << USBD_PUBLISH_STARTED_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_STARTED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_STARTED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event STARTED will publish to */
#define USBD_PUBLISH_STARTED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_STARTED_CHIDX_Msk (0xFFUL << USBD_PUBLISH_STARTED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_ENDEPIN */
/* Description: Description collection: Publish configuration for event ENDEPIN[n] */

/* Bit 31 :   */
#define USBD_PUBLISH_ENDEPIN_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_ENDEPIN_EN_Msk (0x1UL << USBD_PUBLISH_ENDEPIN_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_ENDEPIN_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_ENDEPIN_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDEPIN[n] will publish to */
#define USBD_PUBLISH_ENDEPIN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_ENDEPIN_CHIDX_Msk (0xFFUL << USBD_PUBLISH_ENDEPIN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_EP0DATADONE */
/* Description: Publish configuration for event EP0DATADONE */

/* Bit 31 :   */
#define USBD_PUBLISH_EP0DATADONE_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_EP0DATADONE_EN_Msk (0x1UL << USBD_PUBLISH_EP0DATADONE_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_EP0DATADONE_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_EP0DATADONE_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event EP0DATADONE will publish to */
#define USBD_PUBLISH_EP0DATADONE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_EP0DATADONE_CHIDX_Msk (0xFFUL << USBD_PUBLISH_EP0DATADONE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_ENDISOIN */
/* Description: Publish configuration for event ENDISOIN */

/* Bit 31 :   */
#define USBD_PUBLISH_ENDISOIN_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_ENDISOIN_EN_Msk (0x1UL << USBD_PUBLISH_ENDISOIN_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_ENDISOIN_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_ENDISOIN_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDISOIN will publish to */
#define USBD_PUBLISH_ENDISOIN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_ENDISOIN_CHIDX_Msk (0xFFUL << USBD_PUBLISH_ENDISOIN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_ENDEPOUT */
/* Description: Description collection: Publish configuration for event ENDEPOUT[n] */

/* Bit 31 :   */
#define USBD_PUBLISH_ENDEPOUT_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_ENDEPOUT_EN_Msk (0x1UL << USBD_PUBLISH_ENDEPOUT_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_ENDEPOUT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_ENDEPOUT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDEPOUT[n] will publish to */
#define USBD_PUBLISH_ENDEPOUT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_ENDEPOUT_CHIDX_Msk (0xFFUL << USBD_PUBLISH_ENDEPOUT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_ENDISOOUT */
/* Description: Publish configuration for event ENDISOOUT */

/* Bit 31 :   */
#define USBD_PUBLISH_ENDISOOUT_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_ENDISOOUT_EN_Msk (0x1UL << USBD_PUBLISH_ENDISOOUT_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_ENDISOOUT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_ENDISOOUT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDISOOUT will publish to */
#define USBD_PUBLISH_ENDISOOUT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_ENDISOOUT_CHIDX_Msk (0xFFUL << USBD_PUBLISH_ENDISOOUT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_SOF */
/* Description: Publish configuration for event SOF */

/* Bit 31 :   */
#define USBD_PUBLISH_SOF_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_SOF_EN_Msk (0x1UL << USBD_PUBLISH_SOF_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_SOF_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_SOF_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event SOF will publish to */
#define USBD_PUBLISH_SOF_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_SOF_CHIDX_Msk (0xFFUL << USBD_PUBLISH_SOF_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_USBEVENT */
/* Description: Publish configuration for event USBEVENT */

/* Bit 31 :   */
#define USBD_PUBLISH_USBEVENT_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_USBEVENT_EN_Msk (0x1UL << USBD_PUBLISH_USBEVENT_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_USBEVENT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_USBEVENT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event USBEVENT will publish to */
#define USBD_PUBLISH_USBEVENT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_USBEVENT_CHIDX_Msk (0xFFUL << USBD_PUBLISH_USBEVENT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_EP0SETUP */
/* Description: Publish configuration for event EP0SETUP */

/* Bit 31 :   */
#define USBD_PUBLISH_EP0SETUP_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_EP0SETUP_EN_Msk (0x1UL << USBD_PUBLISH_EP0SETUP_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_EP0SETUP_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_EP0SETUP_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event EP0SETUP will publish to */
#define USBD_PUBLISH_EP0SETUP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_EP0SETUP_CHIDX_Msk (0xFFUL << USBD_PUBLISH_EP0SETUP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_EPDATA */
/* Description: Publish configuration for event EPDATA */

/* Bit 31 :   */
#define USBD_PUBLISH_EPDATA_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_EPDATA_EN_Msk (0x1UL << USBD_PUBLISH_EPDATA_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_EPDATA_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_EPDATA_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event EPDATA will publish to */
#define USBD_PUBLISH_EPDATA_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_EPDATA_CHIDX_Msk (0xFFUL << USBD_PUBLISH_EPDATA_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_PUBLISH_ACCESSFAULT */
/* Description: Publish configuration for event ACCESSFAULT */

/* Bit 31 :   */
#define USBD_PUBLISH_ACCESSFAULT_EN_Pos (31UL) /*!< Position of EN field. */
#define USBD_PUBLISH_ACCESSFAULT_EN_Msk (0x1UL << USBD_PUBLISH_ACCESSFAULT_EN_Pos) /*!< Bit mask of EN field. */
#define USBD_PUBLISH_ACCESSFAULT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define USBD_PUBLISH_ACCESSFAULT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ACCESSFAULT will publish to */
#define USBD_PUBLISH_ACCESSFAULT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define USBD_PUBLISH_ACCESSFAULT_CHIDX_Msk (0xFFUL << USBD_PUBLISH_ACCESSFAULT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: USBD_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 8 : Shortcut between event ENDISOOUT and task STARTISOIN */
#define USBD_SHORTS_ENDISOOUT_STARTISOIN_Pos (8UL) /*!< Position of ENDISOOUT_STARTISOIN field. */
#define USBD_SHORTS_ENDISOOUT_STARTISOIN_Msk (0x1UL << USBD_SHORTS_ENDISOOUT_STARTISOIN_Pos) /*!< Bit mask of ENDISOOUT_STARTISOIN field. */
#define USBD_SHORTS_ENDISOOUT_STARTISOIN_Disabled (0x0UL) /*!< Disable shortcut */
#define USBD_SHORTS_ENDISOOUT_STARTISOIN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 7 : Shortcut between event ENDISOIN and task STARTISOOUT */
#define USBD_SHORTS_ENDISOIN_STARTISOOUT_Pos (7UL) /*!< Position of ENDISOIN_STARTISOOUT field. */
#define USBD_SHORTS_ENDISOIN_STARTISOOUT_Msk (0x1UL << USBD_SHORTS_ENDISOIN_STARTISOOUT_Pos) /*!< Bit mask of ENDISOIN_STARTISOOUT field. */
#define USBD_SHORTS_ENDISOIN_STARTISOOUT_Disabled (0x0UL) /*!< Disable shortcut */
#define USBD_SHORTS_ENDISOIN_STARTISOOUT_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 6 : Shortcut between event SOF and task STARTISOOUT */
#define USBD_SHORTS_SOF_STARTISOOUT_Pos (6UL) /*!< Position of SOF_STARTISOOUT field. */
#define USBD_SHORTS_SOF_STARTISOOUT_Msk (0x1UL << USBD_SHORTS_SOF_STARTISOOUT_Pos) /*!< Bit mask of SOF_STARTISOOUT field. */
#define USBD_SHORTS_SOF_STARTISOOUT_Disabled (0x0UL) /*!< Disable shortcut */
#define USBD_SHORTS_SOF_STARTISOOUT_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event SOF and task STARTISOIN */
#define USBD_SHORTS_SOF_STARTISOIN_Pos (5UL) /*!< Position of SOF_STARTISOIN field. */
#define USBD_SHORTS_SOF_STARTISOIN_Msk (0x1UL << USBD_SHORTS_SOF_STARTISOIN_Pos) /*!< Bit mask of SOF_STARTISOIN field. */
#define USBD_SHORTS_SOF_STARTISOIN_Disabled (0x0UL) /*!< Disable shortcut */
#define USBD_SHORTS_SOF_STARTISOIN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event ENDEPOUT[0] and task EP0RCVOUT */
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Pos (4UL) /*!< Position of ENDEPOUT0_EP0RCVOUT field. */
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Msk (0x1UL << USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Pos) /*!< Bit mask of ENDEPOUT0_EP0RCVOUT field. */
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Disabled (0x0UL) /*!< Disable shortcut */
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event ENDEPOUT[0] and task EP0STATUS */
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Pos (3UL) /*!< Position of ENDEPOUT0_EP0STATUS field. */
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Msk (0x1UL << USBD_SHORTS_ENDEPOUT0_EP0STATUS_Pos) /*!< Bit mask of ENDEPOUT0_EP0STATUS field. */
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Disabled (0x0UL) /*!< Disable shortcut */
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event EP0DATADONE and task EP0STATUS */
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Pos (2UL) /*!< Position of EP0DATADONE_EP0STATUS field. */
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_EP0STATUS_Pos) /*!< Bit mask of EP0DATADONE_EP0STATUS field. */
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Disabled (0x0UL) /*!< Disable shortcut */
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event EP0DATADONE and task STARTEPOUT[0] */
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Pos (1UL) /*!< Position of EP0DATADONE_STARTEPOUT0 field. */
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Pos) /*!< Bit mask of EP0DATADONE_STARTEPOUT0 field. */
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Disabled (0x0UL) /*!< Disable shortcut */
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event EP0DATADONE and task STARTEPIN[0] */
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Pos (0UL) /*!< Position of EP0DATADONE_STARTEPIN0 field. */
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_STARTEPIN0_Pos) /*!< Bit mask of EP0DATADONE_STARTEPIN0 field. */
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Disabled (0x0UL) /*!< Disable shortcut */
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: USBD_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 25 : Enable or disable interrupt for event ACCESSFAULT */
#define USBD_INTEN_ACCESSFAULT_Pos (25UL) /*!< Position of ACCESSFAULT field. */
#define USBD_INTEN_ACCESSFAULT_Msk (0x1UL << USBD_INTEN_ACCESSFAULT_Pos) /*!< Bit mask of ACCESSFAULT field. */
#define USBD_INTEN_ACCESSFAULT_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ACCESSFAULT_Enabled (0x1UL) /*!< Enable */

/* Bit 24 : Enable or disable interrupt for event EPDATA */
#define USBD_INTEN_EPDATA_Pos (24UL) /*!< Position of EPDATA field. */
#define USBD_INTEN_EPDATA_Msk (0x1UL << USBD_INTEN_EPDATA_Pos) /*!< Bit mask of EPDATA field. */
#define USBD_INTEN_EPDATA_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_EPDATA_Enabled (0x1UL) /*!< Enable */

/* Bit 23 : Enable or disable interrupt for event EP0SETUP */
#define USBD_INTEN_EP0SETUP_Pos (23UL) /*!< Position of EP0SETUP field. */
#define USBD_INTEN_EP0SETUP_Msk (0x1UL << USBD_INTEN_EP0SETUP_Pos) /*!< Bit mask of EP0SETUP field. */
#define USBD_INTEN_EP0SETUP_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_EP0SETUP_Enabled (0x1UL) /*!< Enable */

/* Bit 22 : Enable or disable interrupt for event USBEVENT */
#define USBD_INTEN_USBEVENT_Pos (22UL) /*!< Position of USBEVENT field. */
#define USBD_INTEN_USBEVENT_Msk (0x1UL << USBD_INTEN_USBEVENT_Pos) /*!< Bit mask of USBEVENT field. */
#define USBD_INTEN_USBEVENT_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_USBEVENT_Enabled (0x1UL) /*!< Enable */

/* Bit 21 : Enable or disable interrupt for event SOF */
#define USBD_INTEN_SOF_Pos (21UL) /*!< Position of SOF field. */
#define USBD_INTEN_SOF_Msk (0x1UL << USBD_INTEN_SOF_Pos) /*!< Bit mask of SOF field. */
#define USBD_INTEN_SOF_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_SOF_Enabled (0x1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for event ENDISOOUT */
#define USBD_INTEN_ENDISOOUT_Pos (20UL) /*!< Position of ENDISOOUT field. */
#define USBD_INTEN_ENDISOOUT_Msk (0x1UL << USBD_INTEN_ENDISOOUT_Pos) /*!< Bit mask of ENDISOOUT field. */
#define USBD_INTEN_ENDISOOUT_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDISOOUT_Enabled (0x1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for event ENDEPOUT[7] */
#define USBD_INTEN_ENDEPOUT7_Pos (19UL) /*!< Position of ENDEPOUT7 field. */
#define USBD_INTEN_ENDEPOUT7_Msk (0x1UL << USBD_INTEN_ENDEPOUT7_Pos) /*!< Bit mask of ENDEPOUT7 field. */
#define USBD_INTEN_ENDEPOUT7_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPOUT7_Enabled (0x1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for event ENDEPOUT[6] */
#define USBD_INTEN_ENDEPOUT6_Pos (18UL) /*!< Position of ENDEPOUT6 field. */
#define USBD_INTEN_ENDEPOUT6_Msk (0x1UL << USBD_INTEN_ENDEPOUT6_Pos) /*!< Bit mask of ENDEPOUT6 field. */
#define USBD_INTEN_ENDEPOUT6_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPOUT6_Enabled (0x1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for event ENDEPOUT[5] */
#define USBD_INTEN_ENDEPOUT5_Pos (17UL) /*!< Position of ENDEPOUT5 field. */
#define USBD_INTEN_ENDEPOUT5_Msk (0x1UL << USBD_INTEN_ENDEPOUT5_Pos) /*!< Bit mask of ENDEPOUT5 field. */
#define USBD_INTEN_ENDEPOUT5_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPOUT5_Enabled (0x1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for event ENDEPOUT[4] */
#define USBD_INTEN_ENDEPOUT4_Pos (16UL) /*!< Position of ENDEPOUT4 field. */
#define USBD_INTEN_ENDEPOUT4_Msk (0x1UL << USBD_INTEN_ENDEPOUT4_Pos) /*!< Bit mask of ENDEPOUT4 field. */
#define USBD_INTEN_ENDEPOUT4_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPOUT4_Enabled (0x1UL) /*!< Enable */

/* Bit 15 : Enable or disable interrupt for event ENDEPOUT[3] */
#define USBD_INTEN_ENDEPOUT3_Pos (15UL) /*!< Position of ENDEPOUT3 field. */
#define USBD_INTEN_ENDEPOUT3_Msk (0x1UL << USBD_INTEN_ENDEPOUT3_Pos) /*!< Bit mask of ENDEPOUT3 field. */
#define USBD_INTEN_ENDEPOUT3_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPOUT3_Enabled (0x1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for event ENDEPOUT[2] */
#define USBD_INTEN_ENDEPOUT2_Pos (14UL) /*!< Position of ENDEPOUT2 field. */
#define USBD_INTEN_ENDEPOUT2_Msk (0x1UL << USBD_INTEN_ENDEPOUT2_Pos) /*!< Bit mask of ENDEPOUT2 field. */
#define USBD_INTEN_ENDEPOUT2_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPOUT2_Enabled (0x1UL) /*!< Enable */

/* Bit 13 : Enable or disable interrupt for event ENDEPOUT[1] */
#define USBD_INTEN_ENDEPOUT1_Pos (13UL) /*!< Position of ENDEPOUT1 field. */
#define USBD_INTEN_ENDEPOUT1_Msk (0x1UL << USBD_INTEN_ENDEPOUT1_Pos) /*!< Bit mask of ENDEPOUT1 field. */
#define USBD_INTEN_ENDEPOUT1_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPOUT1_Enabled (0x1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for event ENDEPOUT[0] */
#define USBD_INTEN_ENDEPOUT0_Pos (12UL) /*!< Position of ENDEPOUT0 field. */
#define USBD_INTEN_ENDEPOUT0_Msk (0x1UL << USBD_INTEN_ENDEPOUT0_Pos) /*!< Bit mask of ENDEPOUT0 field. */
#define USBD_INTEN_ENDEPOUT0_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPOUT0_Enabled (0x1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for event ENDISOIN */
#define USBD_INTEN_ENDISOIN_Pos (11UL) /*!< Position of ENDISOIN field. */
#define USBD_INTEN_ENDISOIN_Msk (0x1UL << USBD_INTEN_ENDISOIN_Pos) /*!< Bit mask of ENDISOIN field. */
#define USBD_INTEN_ENDISOIN_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDISOIN_Enabled (0x1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for event EP0DATADONE */
#define USBD_INTEN_EP0DATADONE_Pos (10UL) /*!< Position of EP0DATADONE field. */
#define USBD_INTEN_EP0DATADONE_Msk (0x1UL << USBD_INTEN_EP0DATADONE_Pos) /*!< Bit mask of EP0DATADONE field. */
#define USBD_INTEN_EP0DATADONE_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_EP0DATADONE_Enabled (0x1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event ENDEPIN[7] */
#define USBD_INTEN_ENDEPIN7_Pos (9UL) /*!< Position of ENDEPIN7 field. */
#define USBD_INTEN_ENDEPIN7_Msk (0x1UL << USBD_INTEN_ENDEPIN7_Pos) /*!< Bit mask of ENDEPIN7 field. */
#define USBD_INTEN_ENDEPIN7_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPIN7_Enabled (0x1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event ENDEPIN[6] */
#define USBD_INTEN_ENDEPIN6_Pos (8UL) /*!< Position of ENDEPIN6 field. */
#define USBD_INTEN_ENDEPIN6_Msk (0x1UL << USBD_INTEN_ENDEPIN6_Pos) /*!< Bit mask of ENDEPIN6 field. */
#define USBD_INTEN_ENDEPIN6_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPIN6_Enabled (0x1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event ENDEPIN[5] */
#define USBD_INTEN_ENDEPIN5_Pos (7UL) /*!< Position of ENDEPIN5 field. */
#define USBD_INTEN_ENDEPIN5_Msk (0x1UL << USBD_INTEN_ENDEPIN5_Pos) /*!< Bit mask of ENDEPIN5 field. */
#define USBD_INTEN_ENDEPIN5_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPIN5_Enabled (0x1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event ENDEPIN[4] */
#define USBD_INTEN_ENDEPIN4_Pos (6UL) /*!< Position of ENDEPIN4 field. */
#define USBD_INTEN_ENDEPIN4_Msk (0x1UL << USBD_INTEN_ENDEPIN4_Pos) /*!< Bit mask of ENDEPIN4 field. */
#define USBD_INTEN_ENDEPIN4_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPIN4_Enabled (0x1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event ENDEPIN[3] */
#define USBD_INTEN_ENDEPIN3_Pos (5UL) /*!< Position of ENDEPIN3 field. */
#define USBD_INTEN_ENDEPIN3_Msk (0x1UL << USBD_INTEN_ENDEPIN3_Pos) /*!< Bit mask of ENDEPIN3 field. */
#define USBD_INTEN_ENDEPIN3_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPIN3_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event ENDEPIN[2] */
#define USBD_INTEN_ENDEPIN2_Pos (4UL) /*!< Position of ENDEPIN2 field. */
#define USBD_INTEN_ENDEPIN2_Msk (0x1UL << USBD_INTEN_ENDEPIN2_Pos) /*!< Bit mask of ENDEPIN2 field. */
#define USBD_INTEN_ENDEPIN2_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPIN2_Enabled (0x1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event ENDEPIN[1] */
#define USBD_INTEN_ENDEPIN1_Pos (3UL) /*!< Position of ENDEPIN1 field. */
#define USBD_INTEN_ENDEPIN1_Msk (0x1UL << USBD_INTEN_ENDEPIN1_Pos) /*!< Bit mask of ENDEPIN1 field. */
#define USBD_INTEN_ENDEPIN1_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPIN1_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event ENDEPIN[0] */
#define USBD_INTEN_ENDEPIN0_Pos (2UL) /*!< Position of ENDEPIN0 field. */
#define USBD_INTEN_ENDEPIN0_Msk (0x1UL << USBD_INTEN_ENDEPIN0_Pos) /*!< Bit mask of ENDEPIN0 field. */
#define USBD_INTEN_ENDEPIN0_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_ENDEPIN0_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event STARTED */
#define USBD_INTEN_STARTED_Pos (1UL) /*!< Position of STARTED field. */
#define USBD_INTEN_STARTED_Msk (0x1UL << USBD_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define USBD_INTEN_STARTED_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_STARTED_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event USBRESET */
#define USBD_INTEN_USBRESET_Pos (0UL) /*!< Position of USBRESET field. */
#define USBD_INTEN_USBRESET_Msk (0x1UL << USBD_INTEN_USBRESET_Pos) /*!< Bit mask of USBRESET field. */
#define USBD_INTEN_USBRESET_Disabled (0x0UL) /*!< Disable */
#define USBD_INTEN_USBRESET_Enabled (0x1UL) /*!< Enable */

/* Register: USBD_INTENSET */
/* Description: Enable interrupt */

/* Bit 25 : Write '1' to enable interrupt for event ACCESSFAULT */
#define USBD_INTENSET_ACCESSFAULT_Pos (25UL) /*!< Position of ACCESSFAULT field. */
#define USBD_INTENSET_ACCESSFAULT_Msk (0x1UL << USBD_INTENSET_ACCESSFAULT_Pos) /*!< Bit mask of ACCESSFAULT field. */
#define USBD_INTENSET_ACCESSFAULT_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ACCESSFAULT_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ACCESSFAULT_Set (0x1UL) /*!< Enable */

/* Bit 24 : Write '1' to enable interrupt for event EPDATA */
#define USBD_INTENSET_EPDATA_Pos (24UL) /*!< Position of EPDATA field. */
#define USBD_INTENSET_EPDATA_Msk (0x1UL << USBD_INTENSET_EPDATA_Pos) /*!< Bit mask of EPDATA field. */
#define USBD_INTENSET_EPDATA_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_EPDATA_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_EPDATA_Set (0x1UL) /*!< Enable */

/* Bit 23 : Write '1' to enable interrupt for event EP0SETUP */
#define USBD_INTENSET_EP0SETUP_Pos (23UL) /*!< Position of EP0SETUP field. */
#define USBD_INTENSET_EP0SETUP_Msk (0x1UL << USBD_INTENSET_EP0SETUP_Pos) /*!< Bit mask of EP0SETUP field. */
#define USBD_INTENSET_EP0SETUP_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_EP0SETUP_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_EP0SETUP_Set (0x1UL) /*!< Enable */

/* Bit 22 : Write '1' to enable interrupt for event USBEVENT */
#define USBD_INTENSET_USBEVENT_Pos (22UL) /*!< Position of USBEVENT field. */
#define USBD_INTENSET_USBEVENT_Msk (0x1UL << USBD_INTENSET_USBEVENT_Pos) /*!< Bit mask of USBEVENT field. */
#define USBD_INTENSET_USBEVENT_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_USBEVENT_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_USBEVENT_Set (0x1UL) /*!< Enable */

/* Bit 21 : Write '1' to enable interrupt for event SOF */
#define USBD_INTENSET_SOF_Pos (21UL) /*!< Position of SOF field. */
#define USBD_INTENSET_SOF_Msk (0x1UL << USBD_INTENSET_SOF_Pos) /*!< Bit mask of SOF field. */
#define USBD_INTENSET_SOF_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_SOF_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_SOF_Set (0x1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for event ENDISOOUT */
#define USBD_INTENSET_ENDISOOUT_Pos (20UL) /*!< Position of ENDISOOUT field. */
#define USBD_INTENSET_ENDISOOUT_Msk (0x1UL << USBD_INTENSET_ENDISOOUT_Pos) /*!< Bit mask of ENDISOOUT field. */
#define USBD_INTENSET_ENDISOOUT_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDISOOUT_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDISOOUT_Set (0x1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for event ENDEPOUT[7] */
#define USBD_INTENSET_ENDEPOUT7_Pos (19UL) /*!< Position of ENDEPOUT7 field. */
#define USBD_INTENSET_ENDEPOUT7_Msk (0x1UL << USBD_INTENSET_ENDEPOUT7_Pos) /*!< Bit mask of ENDEPOUT7 field. */
#define USBD_INTENSET_ENDEPOUT7_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPOUT7_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPOUT7_Set (0x1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for event ENDEPOUT[6] */
#define USBD_INTENSET_ENDEPOUT6_Pos (18UL) /*!< Position of ENDEPOUT6 field. */
#define USBD_INTENSET_ENDEPOUT6_Msk (0x1UL << USBD_INTENSET_ENDEPOUT6_Pos) /*!< Bit mask of ENDEPOUT6 field. */
#define USBD_INTENSET_ENDEPOUT6_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPOUT6_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPOUT6_Set (0x1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event ENDEPOUT[5] */
#define USBD_INTENSET_ENDEPOUT5_Pos (17UL) /*!< Position of ENDEPOUT5 field. */
#define USBD_INTENSET_ENDEPOUT5_Msk (0x1UL << USBD_INTENSET_ENDEPOUT5_Pos) /*!< Bit mask of ENDEPOUT5 field. */
#define USBD_INTENSET_ENDEPOUT5_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPOUT5_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPOUT5_Set (0x1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event ENDEPOUT[4] */
#define USBD_INTENSET_ENDEPOUT4_Pos (16UL) /*!< Position of ENDEPOUT4 field. */
#define USBD_INTENSET_ENDEPOUT4_Msk (0x1UL << USBD_INTENSET_ENDEPOUT4_Pos) /*!< Bit mask of ENDEPOUT4 field. */
#define USBD_INTENSET_ENDEPOUT4_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPOUT4_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPOUT4_Set (0x1UL) /*!< Enable */

/* Bit 15 : Write '1' to enable interrupt for event ENDEPOUT[3] */
#define USBD_INTENSET_ENDEPOUT3_Pos (15UL) /*!< Position of ENDEPOUT3 field. */
#define USBD_INTENSET_ENDEPOUT3_Msk (0x1UL << USBD_INTENSET_ENDEPOUT3_Pos) /*!< Bit mask of ENDEPOUT3 field. */
#define USBD_INTENSET_ENDEPOUT3_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPOUT3_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPOUT3_Set (0x1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for event ENDEPOUT[2] */
#define USBD_INTENSET_ENDEPOUT2_Pos (14UL) /*!< Position of ENDEPOUT2 field. */
#define USBD_INTENSET_ENDEPOUT2_Msk (0x1UL << USBD_INTENSET_ENDEPOUT2_Pos) /*!< Bit mask of ENDEPOUT2 field. */
#define USBD_INTENSET_ENDEPOUT2_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPOUT2_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPOUT2_Set (0x1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for event ENDEPOUT[1] */
#define USBD_INTENSET_ENDEPOUT1_Pos (13UL) /*!< Position of ENDEPOUT1 field. */
#define USBD_INTENSET_ENDEPOUT1_Msk (0x1UL << USBD_INTENSET_ENDEPOUT1_Pos) /*!< Bit mask of ENDEPOUT1 field. */
#define USBD_INTENSET_ENDEPOUT1_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPOUT1_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPOUT1_Set (0x1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for event ENDEPOUT[0] */
#define USBD_INTENSET_ENDEPOUT0_Pos (12UL) /*!< Position of ENDEPOUT0 field. */
#define USBD_INTENSET_ENDEPOUT0_Msk (0x1UL << USBD_INTENSET_ENDEPOUT0_Pos) /*!< Bit mask of ENDEPOUT0 field. */
#define USBD_INTENSET_ENDEPOUT0_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPOUT0_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPOUT0_Set (0x1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for event ENDISOIN */
#define USBD_INTENSET_ENDISOIN_Pos (11UL) /*!< Position of ENDISOIN field. */
#define USBD_INTENSET_ENDISOIN_Msk (0x1UL << USBD_INTENSET_ENDISOIN_Pos) /*!< Bit mask of ENDISOIN field. */
#define USBD_INTENSET_ENDISOIN_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDISOIN_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDISOIN_Set (0x1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event EP0DATADONE */
#define USBD_INTENSET_EP0DATADONE_Pos (10UL) /*!< Position of EP0DATADONE field. */
#define USBD_INTENSET_EP0DATADONE_Msk (0x1UL << USBD_INTENSET_EP0DATADONE_Pos) /*!< Bit mask of EP0DATADONE field. */
#define USBD_INTENSET_EP0DATADONE_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_EP0DATADONE_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_EP0DATADONE_Set (0x1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event ENDEPIN[7] */
#define USBD_INTENSET_ENDEPIN7_Pos (9UL) /*!< Position of ENDEPIN7 field. */
#define USBD_INTENSET_ENDEPIN7_Msk (0x1UL << USBD_INTENSET_ENDEPIN7_Pos) /*!< Bit mask of ENDEPIN7 field. */
#define USBD_INTENSET_ENDEPIN7_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPIN7_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPIN7_Set (0x1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event ENDEPIN[6] */
#define USBD_INTENSET_ENDEPIN6_Pos (8UL) /*!< Position of ENDEPIN6 field. */
#define USBD_INTENSET_ENDEPIN6_Msk (0x1UL << USBD_INTENSET_ENDEPIN6_Pos) /*!< Bit mask of ENDEPIN6 field. */
#define USBD_INTENSET_ENDEPIN6_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPIN6_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPIN6_Set (0x1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event ENDEPIN[5] */
#define USBD_INTENSET_ENDEPIN5_Pos (7UL) /*!< Position of ENDEPIN5 field. */
#define USBD_INTENSET_ENDEPIN5_Msk (0x1UL << USBD_INTENSET_ENDEPIN5_Pos) /*!< Bit mask of ENDEPIN5 field. */
#define USBD_INTENSET_ENDEPIN5_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPIN5_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPIN5_Set (0x1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event ENDEPIN[4] */
#define USBD_INTENSET_ENDEPIN4_Pos (6UL) /*!< Position of ENDEPIN4 field. */
#define USBD_INTENSET_ENDEPIN4_Msk (0x1UL << USBD_INTENSET_ENDEPIN4_Pos) /*!< Bit mask of ENDEPIN4 field. */
#define USBD_INTENSET_ENDEPIN4_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPIN4_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPIN4_Set (0x1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event ENDEPIN[3] */
#define USBD_INTENSET_ENDEPIN3_Pos (5UL) /*!< Position of ENDEPIN3 field. */
#define USBD_INTENSET_ENDEPIN3_Msk (0x1UL << USBD_INTENSET_ENDEPIN3_Pos) /*!< Bit mask of ENDEPIN3 field. */
#define USBD_INTENSET_ENDEPIN3_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPIN3_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPIN3_Set (0x1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event ENDEPIN[2] */
#define USBD_INTENSET_ENDEPIN2_Pos (4UL) /*!< Position of ENDEPIN2 field. */
#define USBD_INTENSET_ENDEPIN2_Msk (0x1UL << USBD_INTENSET_ENDEPIN2_Pos) /*!< Bit mask of ENDEPIN2 field. */
#define USBD_INTENSET_ENDEPIN2_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPIN2_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPIN2_Set (0x1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event ENDEPIN[1] */
#define USBD_INTENSET_ENDEPIN1_Pos (3UL) /*!< Position of ENDEPIN1 field. */
#define USBD_INTENSET_ENDEPIN1_Msk (0x1UL << USBD_INTENSET_ENDEPIN1_Pos) /*!< Bit mask of ENDEPIN1 field. */
#define USBD_INTENSET_ENDEPIN1_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPIN1_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPIN1_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event ENDEPIN[0] */
#define USBD_INTENSET_ENDEPIN0_Pos (2UL) /*!< Position of ENDEPIN0 field. */
#define USBD_INTENSET_ENDEPIN0_Msk (0x1UL << USBD_INTENSET_ENDEPIN0_Pos) /*!< Bit mask of ENDEPIN0 field. */
#define USBD_INTENSET_ENDEPIN0_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_ENDEPIN0_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_ENDEPIN0_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event STARTED */
#define USBD_INTENSET_STARTED_Pos (1UL) /*!< Position of STARTED field. */
#define USBD_INTENSET_STARTED_Msk (0x1UL << USBD_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define USBD_INTENSET_STARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_STARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_STARTED_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event USBRESET */
#define USBD_INTENSET_USBRESET_Pos (0UL) /*!< Position of USBRESET field. */
#define USBD_INTENSET_USBRESET_Msk (0x1UL << USBD_INTENSET_USBRESET_Pos) /*!< Bit mask of USBRESET field. */
#define USBD_INTENSET_USBRESET_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENSET_USBRESET_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENSET_USBRESET_Set (0x1UL) /*!< Enable */

/* Register: USBD_INTENCLR */
/* Description: Disable interrupt */

/* Bit 25 : Write '1' to disable interrupt for event ACCESSFAULT */
#define USBD_INTENCLR_ACCESSFAULT_Pos (25UL) /*!< Position of ACCESSFAULT field. */
#define USBD_INTENCLR_ACCESSFAULT_Msk (0x1UL << USBD_INTENCLR_ACCESSFAULT_Pos) /*!< Bit mask of ACCESSFAULT field. */
#define USBD_INTENCLR_ACCESSFAULT_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ACCESSFAULT_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ACCESSFAULT_Clear (0x1UL) /*!< Disable */

/* Bit 24 : Write '1' to disable interrupt for event EPDATA */
#define USBD_INTENCLR_EPDATA_Pos (24UL) /*!< Position of EPDATA field. */
#define USBD_INTENCLR_EPDATA_Msk (0x1UL << USBD_INTENCLR_EPDATA_Pos) /*!< Bit mask of EPDATA field. */
#define USBD_INTENCLR_EPDATA_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_EPDATA_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_EPDATA_Clear (0x1UL) /*!< Disable */

/* Bit 23 : Write '1' to disable interrupt for event EP0SETUP */
#define USBD_INTENCLR_EP0SETUP_Pos (23UL) /*!< Position of EP0SETUP field. */
#define USBD_INTENCLR_EP0SETUP_Msk (0x1UL << USBD_INTENCLR_EP0SETUP_Pos) /*!< Bit mask of EP0SETUP field. */
#define USBD_INTENCLR_EP0SETUP_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_EP0SETUP_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_EP0SETUP_Clear (0x1UL) /*!< Disable */

/* Bit 22 : Write '1' to disable interrupt for event USBEVENT */
#define USBD_INTENCLR_USBEVENT_Pos (22UL) /*!< Position of USBEVENT field. */
#define USBD_INTENCLR_USBEVENT_Msk (0x1UL << USBD_INTENCLR_USBEVENT_Pos) /*!< Bit mask of USBEVENT field. */
#define USBD_INTENCLR_USBEVENT_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_USBEVENT_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_USBEVENT_Clear (0x1UL) /*!< Disable */

/* Bit 21 : Write '1' to disable interrupt for event SOF */
#define USBD_INTENCLR_SOF_Pos (21UL) /*!< Position of SOF field. */
#define USBD_INTENCLR_SOF_Msk (0x1UL << USBD_INTENCLR_SOF_Pos) /*!< Bit mask of SOF field. */
#define USBD_INTENCLR_SOF_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_SOF_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_SOF_Clear (0x1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for event ENDISOOUT */
#define USBD_INTENCLR_ENDISOOUT_Pos (20UL) /*!< Position of ENDISOOUT field. */
#define USBD_INTENCLR_ENDISOOUT_Msk (0x1UL << USBD_INTENCLR_ENDISOOUT_Pos) /*!< Bit mask of ENDISOOUT field. */
#define USBD_INTENCLR_ENDISOOUT_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDISOOUT_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDISOOUT_Clear (0x1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for event ENDEPOUT[7] */
#define USBD_INTENCLR_ENDEPOUT7_Pos (19UL) /*!< Position of ENDEPOUT7 field. */
#define USBD_INTENCLR_ENDEPOUT7_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT7_Pos) /*!< Bit mask of ENDEPOUT7 field. */
#define USBD_INTENCLR_ENDEPOUT7_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPOUT7_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPOUT7_Clear (0x1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for event ENDEPOUT[6] */
#define USBD_INTENCLR_ENDEPOUT6_Pos (18UL) /*!< Position of ENDEPOUT6 field. */
#define USBD_INTENCLR_ENDEPOUT6_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT6_Pos) /*!< Bit mask of ENDEPOUT6 field. */
#define USBD_INTENCLR_ENDEPOUT6_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPOUT6_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPOUT6_Clear (0x1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event ENDEPOUT[5] */
#define USBD_INTENCLR_ENDEPOUT5_Pos (17UL) /*!< Position of ENDEPOUT5 field. */
#define USBD_INTENCLR_ENDEPOUT5_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT5_Pos) /*!< Bit mask of ENDEPOUT5 field. */
#define USBD_INTENCLR_ENDEPOUT5_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPOUT5_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPOUT5_Clear (0x1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event ENDEPOUT[4] */
#define USBD_INTENCLR_ENDEPOUT4_Pos (16UL) /*!< Position of ENDEPOUT4 field. */
#define USBD_INTENCLR_ENDEPOUT4_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT4_Pos) /*!< Bit mask of ENDEPOUT4 field. */
#define USBD_INTENCLR_ENDEPOUT4_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPOUT4_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPOUT4_Clear (0x1UL) /*!< Disable */

/* Bit 15 : Write '1' to disable interrupt for event ENDEPOUT[3] */
#define USBD_INTENCLR_ENDEPOUT3_Pos (15UL) /*!< Position of ENDEPOUT3 field. */
#define USBD_INTENCLR_ENDEPOUT3_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT3_Pos) /*!< Bit mask of ENDEPOUT3 field. */
#define USBD_INTENCLR_ENDEPOUT3_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPOUT3_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPOUT3_Clear (0x1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for event ENDEPOUT[2] */
#define USBD_INTENCLR_ENDEPOUT2_Pos (14UL) /*!< Position of ENDEPOUT2 field. */
#define USBD_INTENCLR_ENDEPOUT2_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT2_Pos) /*!< Bit mask of ENDEPOUT2 field. */
#define USBD_INTENCLR_ENDEPOUT2_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPOUT2_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPOUT2_Clear (0x1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for event ENDEPOUT[1] */
#define USBD_INTENCLR_ENDEPOUT1_Pos (13UL) /*!< Position of ENDEPOUT1 field. */
#define USBD_INTENCLR_ENDEPOUT1_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT1_Pos) /*!< Bit mask of ENDEPOUT1 field. */
#define USBD_INTENCLR_ENDEPOUT1_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPOUT1_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPOUT1_Clear (0x1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for event ENDEPOUT[0] */
#define USBD_INTENCLR_ENDEPOUT0_Pos (12UL) /*!< Position of ENDEPOUT0 field. */
#define USBD_INTENCLR_ENDEPOUT0_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT0_Pos) /*!< Bit mask of ENDEPOUT0 field. */
#define USBD_INTENCLR_ENDEPOUT0_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPOUT0_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPOUT0_Clear (0x1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for event ENDISOIN */
#define USBD_INTENCLR_ENDISOIN_Pos (11UL) /*!< Position of ENDISOIN field. */
#define USBD_INTENCLR_ENDISOIN_Msk (0x1UL << USBD_INTENCLR_ENDISOIN_Pos) /*!< Bit mask of ENDISOIN field. */
#define USBD_INTENCLR_ENDISOIN_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDISOIN_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDISOIN_Clear (0x1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event EP0DATADONE */
#define USBD_INTENCLR_EP0DATADONE_Pos (10UL) /*!< Position of EP0DATADONE field. */
#define USBD_INTENCLR_EP0DATADONE_Msk (0x1UL << USBD_INTENCLR_EP0DATADONE_Pos) /*!< Bit mask of EP0DATADONE field. */
#define USBD_INTENCLR_EP0DATADONE_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_EP0DATADONE_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_EP0DATADONE_Clear (0x1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event ENDEPIN[7] */
#define USBD_INTENCLR_ENDEPIN7_Pos (9UL) /*!< Position of ENDEPIN7 field. */
#define USBD_INTENCLR_ENDEPIN7_Msk (0x1UL << USBD_INTENCLR_ENDEPIN7_Pos) /*!< Bit mask of ENDEPIN7 field. */
#define USBD_INTENCLR_ENDEPIN7_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPIN7_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPIN7_Clear (0x1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event ENDEPIN[6] */
#define USBD_INTENCLR_ENDEPIN6_Pos (8UL) /*!< Position of ENDEPIN6 field. */
#define USBD_INTENCLR_ENDEPIN6_Msk (0x1UL << USBD_INTENCLR_ENDEPIN6_Pos) /*!< Bit mask of ENDEPIN6 field. */
#define USBD_INTENCLR_ENDEPIN6_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPIN6_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPIN6_Clear (0x1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event ENDEPIN[5] */
#define USBD_INTENCLR_ENDEPIN5_Pos (7UL) /*!< Position of ENDEPIN5 field. */
#define USBD_INTENCLR_ENDEPIN5_Msk (0x1UL << USBD_INTENCLR_ENDEPIN5_Pos) /*!< Bit mask of ENDEPIN5 field. */
#define USBD_INTENCLR_ENDEPIN5_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPIN5_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPIN5_Clear (0x1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event ENDEPIN[4] */
#define USBD_INTENCLR_ENDEPIN4_Pos (6UL) /*!< Position of ENDEPIN4 field. */
#define USBD_INTENCLR_ENDEPIN4_Msk (0x1UL << USBD_INTENCLR_ENDEPIN4_Pos) /*!< Bit mask of ENDEPIN4 field. */
#define USBD_INTENCLR_ENDEPIN4_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPIN4_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPIN4_Clear (0x1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event ENDEPIN[3] */
#define USBD_INTENCLR_ENDEPIN3_Pos (5UL) /*!< Position of ENDEPIN3 field. */
#define USBD_INTENCLR_ENDEPIN3_Msk (0x1UL << USBD_INTENCLR_ENDEPIN3_Pos) /*!< Bit mask of ENDEPIN3 field. */
#define USBD_INTENCLR_ENDEPIN3_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPIN3_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPIN3_Clear (0x1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event ENDEPIN[2] */
#define USBD_INTENCLR_ENDEPIN2_Pos (4UL) /*!< Position of ENDEPIN2 field. */
#define USBD_INTENCLR_ENDEPIN2_Msk (0x1UL << USBD_INTENCLR_ENDEPIN2_Pos) /*!< Bit mask of ENDEPIN2 field. */
#define USBD_INTENCLR_ENDEPIN2_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPIN2_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPIN2_Clear (0x1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event ENDEPIN[1] */
#define USBD_INTENCLR_ENDEPIN1_Pos (3UL) /*!< Position of ENDEPIN1 field. */
#define USBD_INTENCLR_ENDEPIN1_Msk (0x1UL << USBD_INTENCLR_ENDEPIN1_Pos) /*!< Bit mask of ENDEPIN1 field. */
#define USBD_INTENCLR_ENDEPIN1_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPIN1_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPIN1_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event ENDEPIN[0] */
#define USBD_INTENCLR_ENDEPIN0_Pos (2UL) /*!< Position of ENDEPIN0 field. */
#define USBD_INTENCLR_ENDEPIN0_Msk (0x1UL << USBD_INTENCLR_ENDEPIN0_Pos) /*!< Bit mask of ENDEPIN0 field. */
#define USBD_INTENCLR_ENDEPIN0_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_ENDEPIN0_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_ENDEPIN0_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event STARTED */
#define USBD_INTENCLR_STARTED_Pos (1UL) /*!< Position of STARTED field. */
#define USBD_INTENCLR_STARTED_Msk (0x1UL << USBD_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define USBD_INTENCLR_STARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_STARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_STARTED_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event USBRESET */
#define USBD_INTENCLR_USBRESET_Pos (0UL) /*!< Position of USBRESET field. */
#define USBD_INTENCLR_USBRESET_Msk (0x1UL << USBD_INTENCLR_USBRESET_Pos) /*!< Bit mask of USBRESET field. */
#define USBD_INTENCLR_USBRESET_Disabled (0x0UL) /*!< Read: Disabled */
#define USBD_INTENCLR_USBRESET_Enabled (0x1UL) /*!< Read: Enabled */
#define USBD_INTENCLR_USBRESET_Clear (0x1UL) /*!< Disable */

/* Register: USBD_EVENTCAUSE */
/* Description: Details on what caused the USBEVENT event */

/* Bit 11 : USB device is ready for normal operation. Write '1' to clear. */
#define USBD_EVENTCAUSE_READY_Pos (11UL) /*!< Position of READY field. */
#define USBD_EVENTCAUSE_READY_Msk (0x1UL << USBD_EVENTCAUSE_READY_Pos) /*!< Bit mask of READY field. */
#define USBD_EVENTCAUSE_READY_NotDetected (0x0UL) /*!< USBEVENT was not issued due to USBD peripheral ready */
#define USBD_EVENTCAUSE_READY_Ready (0x1UL) /*!< USBD peripheral is ready */

/* Bit 10 : USB MAC has been woken up and operational. Write '1' to clear. */
#define USBD_EVENTCAUSE_USBWUALLOWED_Pos (10UL) /*!< Position of USBWUALLOWED field. */
#define USBD_EVENTCAUSE_USBWUALLOWED_Msk (0x1UL << USBD_EVENTCAUSE_USBWUALLOWED_Pos) /*!< Bit mask of USBWUALLOWED field. */
#define USBD_EVENTCAUSE_USBWUALLOWED_NotAllowed (0x0UL) /*!< Wake up not allowed */
#define USBD_EVENTCAUSE_USBWUALLOWED_Allowed (0x1UL) /*!< Wake up allowed */

/* Bit 9 : Signals that a RESUME condition (K state or activity restart) has been detected on USB lines. Write '1' to clear. */
#define USBD_EVENTCAUSE_RESUME_Pos (9UL) /*!< Position of RESUME field. */
#define USBD_EVENTCAUSE_RESUME_Msk (0x1UL << USBD_EVENTCAUSE_RESUME_Pos) /*!< Bit mask of RESUME field. */
#define USBD_EVENTCAUSE_RESUME_NotDetected (0x0UL) /*!< Resume not detected */
#define USBD_EVENTCAUSE_RESUME_Detected (0x1UL) /*!< Resume detected */

/* Bit 8 : Signals that USB lines have been idle long enough for the device to enter suspend. Write '1' to clear. */
#define USBD_EVENTCAUSE_SUSPEND_Pos (8UL) /*!< Position of SUSPEND field. */
#define USBD_EVENTCAUSE_SUSPEND_Msk (0x1UL << USBD_EVENTCAUSE_SUSPEND_Pos) /*!< Bit mask of SUSPEND field. */
#define USBD_EVENTCAUSE_SUSPEND_NotDetected (0x0UL) /*!< Suspend not detected */
#define USBD_EVENTCAUSE_SUSPEND_Detected (0x1UL) /*!< Suspend detected */

/* Bit 0 : CRC error was detected on isochronous OUT endpoint 8. Write '1' to clear. */
#define USBD_EVENTCAUSE_ISOOUTCRC_Pos (0UL) /*!< Position of ISOOUTCRC field. */
#define USBD_EVENTCAUSE_ISOOUTCRC_Msk (0x1UL << USBD_EVENTCAUSE_ISOOUTCRC_Pos) /*!< Bit mask of ISOOUTCRC field. */
#define USBD_EVENTCAUSE_ISOOUTCRC_NotDetected (0x0UL) /*!< No error detected */
#define USBD_EVENTCAUSE_ISOOUTCRC_Detected (0x1UL) /*!< Error detected */

/* Register: USBD_BUSSTATE */
/* Description: Provides the logic state of D+ and D- lines */

/* Bit 1 : State of the D+ line */
#define USBD_BUSSTATE_DP_Pos (1UL) /*!< Position of DP field. */
#define USBD_BUSSTATE_DP_Msk (0x1UL << USBD_BUSSTATE_DP_Pos) /*!< Bit mask of DP field. */
#define USBD_BUSSTATE_DP_Low (0x0UL) /*!< Low */
#define USBD_BUSSTATE_DP_High (0x1UL) /*!< High */

/* Bit 0 : State of the D- line */
#define USBD_BUSSTATE_DM_Pos (0UL) /*!< Position of DM field. */
#define USBD_BUSSTATE_DM_Msk (0x1UL << USBD_BUSSTATE_DM_Pos) /*!< Bit mask of DM field. */
#define USBD_BUSSTATE_DM_Low (0x0UL) /*!< Low */
#define USBD_BUSSTATE_DM_High (0x1UL) /*!< High */

/* Register: USBD_HALTED_EPIN */
/* Description: Description collection: IN endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */

/* Bits 15..0 : IN endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */
#define USBD_HALTED_EPIN_GETSTATUS_Pos (0UL) /*!< Position of GETSTATUS field. */
#define USBD_HALTED_EPIN_GETSTATUS_Msk (0xFFFFUL << USBD_HALTED_EPIN_GETSTATUS_Pos) /*!< Bit mask of GETSTATUS field. */
#define USBD_HALTED_EPIN_GETSTATUS_NotHalted (0x0000UL) /*!< Endpoint is not halted */
#define USBD_HALTED_EPIN_GETSTATUS_Halted (0x0001UL) /*!< Endpoint is halted */

/* Register: USBD_HALTED_EPOUT */
/* Description: Description collection: OUT endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */

/* Bits 15..0 : OUT endpoint halted status. Can be used as is as response to a GetStatus() request to endpoint. */
#define USBD_HALTED_EPOUT_GETSTATUS_Pos (0UL) /*!< Position of GETSTATUS field. */
#define USBD_HALTED_EPOUT_GETSTATUS_Msk (0xFFFFUL << USBD_HALTED_EPOUT_GETSTATUS_Pos) /*!< Bit mask of GETSTATUS field. */
#define USBD_HALTED_EPOUT_GETSTATUS_NotHalted (0x0000UL) /*!< Endpoint is not halted */
#define USBD_HALTED_EPOUT_GETSTATUS_Halted (0x0001UL) /*!< Endpoint is halted */

/* Register: USBD_EPSTATUS */
/* Description: Provides information on which endpoint's EasyDMA registers have been captured */

/* Bit 24 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT8_Pos (24UL) /*!< Position of EPOUT8 field. */
#define USBD_EPSTATUS_EPOUT8_Msk (0x1UL << USBD_EPSTATUS_EPOUT8_Pos) /*!< Bit mask of EPOUT8 field. */
#define USBD_EPSTATUS_EPOUT8_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPOUT8_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 23 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT7_Pos (23UL) /*!< Position of EPOUT7 field. */
#define USBD_EPSTATUS_EPOUT7_Msk (0x1UL << USBD_EPSTATUS_EPOUT7_Pos) /*!< Bit mask of EPOUT7 field. */
#define USBD_EPSTATUS_EPOUT7_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPOUT7_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 22 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT6_Pos (22UL) /*!< Position of EPOUT6 field. */
#define USBD_EPSTATUS_EPOUT6_Msk (0x1UL << USBD_EPSTATUS_EPOUT6_Pos) /*!< Bit mask of EPOUT6 field. */
#define USBD_EPSTATUS_EPOUT6_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPOUT6_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 21 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT5_Pos (21UL) /*!< Position of EPOUT5 field. */
#define USBD_EPSTATUS_EPOUT5_Msk (0x1UL << USBD_EPSTATUS_EPOUT5_Pos) /*!< Bit mask of EPOUT5 field. */
#define USBD_EPSTATUS_EPOUT5_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPOUT5_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 20 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT4_Pos (20UL) /*!< Position of EPOUT4 field. */
#define USBD_EPSTATUS_EPOUT4_Msk (0x1UL << USBD_EPSTATUS_EPOUT4_Pos) /*!< Bit mask of EPOUT4 field. */
#define USBD_EPSTATUS_EPOUT4_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPOUT4_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 19 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT3_Pos (19UL) /*!< Position of EPOUT3 field. */
#define USBD_EPSTATUS_EPOUT3_Msk (0x1UL << USBD_EPSTATUS_EPOUT3_Pos) /*!< Bit mask of EPOUT3 field. */
#define USBD_EPSTATUS_EPOUT3_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPOUT3_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 18 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT2_Pos (18UL) /*!< Position of EPOUT2 field. */
#define USBD_EPSTATUS_EPOUT2_Msk (0x1UL << USBD_EPSTATUS_EPOUT2_Pos) /*!< Bit mask of EPOUT2 field. */
#define USBD_EPSTATUS_EPOUT2_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPOUT2_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 17 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT1_Pos (17UL) /*!< Position of EPOUT1 field. */
#define USBD_EPSTATUS_EPOUT1_Msk (0x1UL << USBD_EPSTATUS_EPOUT1_Pos) /*!< Bit mask of EPOUT1 field. */
#define USBD_EPSTATUS_EPOUT1_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPOUT1_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 16 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPOUT0_Pos (16UL) /*!< Position of EPOUT0 field. */
#define USBD_EPSTATUS_EPOUT0_Msk (0x1UL << USBD_EPSTATUS_EPOUT0_Pos) /*!< Bit mask of EPOUT0 field. */
#define USBD_EPSTATUS_EPOUT0_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPOUT0_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 8 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN8_Pos (8UL) /*!< Position of EPIN8 field. */
#define USBD_EPSTATUS_EPIN8_Msk (0x1UL << USBD_EPSTATUS_EPIN8_Pos) /*!< Bit mask of EPIN8 field. */
#define USBD_EPSTATUS_EPIN8_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPIN8_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 7 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN7_Pos (7UL) /*!< Position of EPIN7 field. */
#define USBD_EPSTATUS_EPIN7_Msk (0x1UL << USBD_EPSTATUS_EPIN7_Pos) /*!< Bit mask of EPIN7 field. */
#define USBD_EPSTATUS_EPIN7_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPIN7_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 6 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN6_Pos (6UL) /*!< Position of EPIN6 field. */
#define USBD_EPSTATUS_EPIN6_Msk (0x1UL << USBD_EPSTATUS_EPIN6_Pos) /*!< Bit mask of EPIN6 field. */
#define USBD_EPSTATUS_EPIN6_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPIN6_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 5 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN5_Pos (5UL) /*!< Position of EPIN5 field. */
#define USBD_EPSTATUS_EPIN5_Msk (0x1UL << USBD_EPSTATUS_EPIN5_Pos) /*!< Bit mask of EPIN5 field. */
#define USBD_EPSTATUS_EPIN5_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPIN5_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 4 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN4_Pos (4UL) /*!< Position of EPIN4 field. */
#define USBD_EPSTATUS_EPIN4_Msk (0x1UL << USBD_EPSTATUS_EPIN4_Pos) /*!< Bit mask of EPIN4 field. */
#define USBD_EPSTATUS_EPIN4_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPIN4_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 3 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN3_Pos (3UL) /*!< Position of EPIN3 field. */
#define USBD_EPSTATUS_EPIN3_Msk (0x1UL << USBD_EPSTATUS_EPIN3_Pos) /*!< Bit mask of EPIN3 field. */
#define USBD_EPSTATUS_EPIN3_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPIN3_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 2 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN2_Pos (2UL) /*!< Position of EPIN2 field. */
#define USBD_EPSTATUS_EPIN2_Msk (0x1UL << USBD_EPSTATUS_EPIN2_Pos) /*!< Bit mask of EPIN2 field. */
#define USBD_EPSTATUS_EPIN2_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPIN2_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 1 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN1_Pos (1UL) /*!< Position of EPIN1 field. */
#define USBD_EPSTATUS_EPIN1_Msk (0x1UL << USBD_EPSTATUS_EPIN1_Pos) /*!< Bit mask of EPIN1 field. */
#define USBD_EPSTATUS_EPIN1_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPIN1_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Bit 0 : Captured state of endpoint's EasyDMA registers. Write '1' to clear. */
#define USBD_EPSTATUS_EPIN0_Pos (0UL) /*!< Position of EPIN0 field. */
#define USBD_EPSTATUS_EPIN0_Msk (0x1UL << USBD_EPSTATUS_EPIN0_Pos) /*!< Bit mask of EPIN0 field. */
#define USBD_EPSTATUS_EPIN0_NoData (0x0UL) /*!< EasyDMA registers have not been captured for this endpoint */
#define USBD_EPSTATUS_EPIN0_DataDone (0x1UL) /*!< EasyDMA registers have been captured for this endpoint */

/* Register: USBD_EPDATASTATUS */
/* Description: Provides information on which endpoint(s) an acknowledged data transfer has occurred (EPDATA event) */

/* Bit 23 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT7_Pos (23UL) /*!< Position of EPOUT7 field. */
#define USBD_EPDATASTATUS_EPOUT7_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT7_Pos) /*!< Bit mask of EPOUT7 field. */
#define USBD_EPDATASTATUS_EPOUT7_NotStarted (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPOUT7_Started (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 22 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT6_Pos (22UL) /*!< Position of EPOUT6 field. */
#define USBD_EPDATASTATUS_EPOUT6_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT6_Pos) /*!< Bit mask of EPOUT6 field. */
#define USBD_EPDATASTATUS_EPOUT6_NotStarted (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPOUT6_Started (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 21 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT5_Pos (21UL) /*!< Position of EPOUT5 field. */
#define USBD_EPDATASTATUS_EPOUT5_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT5_Pos) /*!< Bit mask of EPOUT5 field. */
#define USBD_EPDATASTATUS_EPOUT5_NotStarted (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPOUT5_Started (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 20 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT4_Pos (20UL) /*!< Position of EPOUT4 field. */
#define USBD_EPDATASTATUS_EPOUT4_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT4_Pos) /*!< Bit mask of EPOUT4 field. */
#define USBD_EPDATASTATUS_EPOUT4_NotStarted (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPOUT4_Started (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 19 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT3_Pos (19UL) /*!< Position of EPOUT3 field. */
#define USBD_EPDATASTATUS_EPOUT3_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT3_Pos) /*!< Bit mask of EPOUT3 field. */
#define USBD_EPDATASTATUS_EPOUT3_NotStarted (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPOUT3_Started (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 18 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT2_Pos (18UL) /*!< Position of EPOUT2 field. */
#define USBD_EPDATASTATUS_EPOUT2_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT2_Pos) /*!< Bit mask of EPOUT2 field. */
#define USBD_EPDATASTATUS_EPOUT2_NotStarted (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPOUT2_Started (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 17 : Acknowledged data transfer on this OUT endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPOUT1_Pos (17UL) /*!< Position of EPOUT1 field. */
#define USBD_EPDATASTATUS_EPOUT1_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT1_Pos) /*!< Bit mask of EPOUT1 field. */
#define USBD_EPDATASTATUS_EPOUT1_NotStarted (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPOUT1_Started (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 7 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN7_Pos (7UL) /*!< Position of EPIN7 field. */
#define USBD_EPDATASTATUS_EPIN7_Msk (0x1UL << USBD_EPDATASTATUS_EPIN7_Pos) /*!< Bit mask of EPIN7 field. */
#define USBD_EPDATASTATUS_EPIN7_NotDone (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPIN7_DataDone (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 6 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN6_Pos (6UL) /*!< Position of EPIN6 field. */
#define USBD_EPDATASTATUS_EPIN6_Msk (0x1UL << USBD_EPDATASTATUS_EPIN6_Pos) /*!< Bit mask of EPIN6 field. */
#define USBD_EPDATASTATUS_EPIN6_NotDone (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPIN6_DataDone (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 5 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN5_Pos (5UL) /*!< Position of EPIN5 field. */
#define USBD_EPDATASTATUS_EPIN5_Msk (0x1UL << USBD_EPDATASTATUS_EPIN5_Pos) /*!< Bit mask of EPIN5 field. */
#define USBD_EPDATASTATUS_EPIN5_NotDone (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPIN5_DataDone (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 4 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN4_Pos (4UL) /*!< Position of EPIN4 field. */
#define USBD_EPDATASTATUS_EPIN4_Msk (0x1UL << USBD_EPDATASTATUS_EPIN4_Pos) /*!< Bit mask of EPIN4 field. */
#define USBD_EPDATASTATUS_EPIN4_NotDone (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPIN4_DataDone (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 3 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN3_Pos (3UL) /*!< Position of EPIN3 field. */
#define USBD_EPDATASTATUS_EPIN3_Msk (0x1UL << USBD_EPDATASTATUS_EPIN3_Pos) /*!< Bit mask of EPIN3 field. */
#define USBD_EPDATASTATUS_EPIN3_NotDone (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPIN3_DataDone (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 2 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN2_Pos (2UL) /*!< Position of EPIN2 field. */
#define USBD_EPDATASTATUS_EPIN2_Msk (0x1UL << USBD_EPDATASTATUS_EPIN2_Pos) /*!< Bit mask of EPIN2 field. */
#define USBD_EPDATASTATUS_EPIN2_NotDone (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPIN2_DataDone (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Bit 1 : Acknowledged data transfer on this IN endpoint. Write '1' to clear. */
#define USBD_EPDATASTATUS_EPIN1_Pos (1UL) /*!< Position of EPIN1 field. */
#define USBD_EPDATASTATUS_EPIN1_Msk (0x1UL << USBD_EPDATASTATUS_EPIN1_Pos) /*!< Bit mask of EPIN1 field. */
#define USBD_EPDATASTATUS_EPIN1_NotDone (0x0UL) /*!< No acknowledged data transfer on this endpoint */
#define USBD_EPDATASTATUS_EPIN1_DataDone (0x1UL) /*!< Acknowledged data transfer on this endpoint has occurred */

/* Register: USBD_USBADDR */
/* Description: Device USB address */

/* Bits 6..0 : Device USB address */
#define USBD_USBADDR_ADDR_Pos (0UL) /*!< Position of ADDR field. */
#define USBD_USBADDR_ADDR_Msk (0x7FUL << USBD_USBADDR_ADDR_Pos) /*!< Bit mask of ADDR field. */

/* Register: USBD_DMASTATE */
/* Description: Indicates activity state of the DMA */

/* Bit 6 : DMA burst */
#define USBD_DMASTATE_BURST_Pos (6UL) /*!< Position of BURST field. */
#define USBD_DMASTATE_BURST_Msk (0x1UL << USBD_DMASTATE_BURST_Pos) /*!< Bit mask of BURST field. */
#define USBD_DMASTATE_BURST_Single (0x0UL) /*!< Single transfer */
#define USBD_DMASTATE_BURST_Burst (0x1UL) /*!< Burst transfer */

/* Bit 5 : DMA active or not */
#define USBD_DMASTATE_DMAINACTIVE_Pos (5UL) /*!< Position of DMAINACTIVE field. */
#define USBD_DMASTATE_DMAINACTIVE_Msk (0x1UL << USBD_DMASTATE_DMAINACTIVE_Pos) /*!< Bit mask of DMAINACTIVE field. */
#define USBD_DMASTATE_DMAINACTIVE_Active (0x0UL) /*!< DMA transfer on-going */
#define USBD_DMASTATE_DMAINACTIVE_Inactive (0x1UL) /*!< No on-going DMA transfers */

/* Bit 4 : DMA no increment buffer address */
#define USBD_DMASTATE_NINCBUF_Pos (4UL) /*!< Position of NINCBUF field. */
#define USBD_DMASTATE_NINCBUF_Msk (0x1UL << USBD_DMASTATE_NINCBUF_Pos) /*!< Bit mask of NINCBUF field. */
#define USBD_DMASTATE_NINCBUF_NoIncrement (0x0UL) /*!< Buffer address is not incremented after every access */
#define USBD_DMASTATE_NINCBUF_Increment (0x1UL) /*!< Buffer address is incremented after every access */

/* Bit 3 : DMA no increment external memory address */
#define USBD_DMASTATE_NINCEXT_Pos (3UL) /*!< Position of NINCEXT field. */
#define USBD_DMASTATE_NINCEXT_Msk (0x1UL << USBD_DMASTATE_NINCEXT_Pos) /*!< Bit mask of NINCEXT field. */
#define USBD_DMASTATE_NINCEXT_NoIncrement (0x0UL) /*!< Address is not incremented after every access */
#define USBD_DMASTATE_NINCEXT_Increment (0x1UL) /*!< Address is incremented after every access */

/* Bit 2 : DMA direction */
#define USBD_DMASTATE_DIR_Pos (2UL) /*!< Position of DIR field. */
#define USBD_DMASTATE_DIR_Msk (0x1UL << USBD_DMASTATE_DIR_Pos) /*!< Bit mask of DIR field. */
#define USBD_DMASTATE_DIR_ToRAM (0x0UL) /*!< DMA transfers from USB buffer to memory */
#define USBD_DMASTATE_DIR_ToUSB (0x1UL) /*!< DMA transfers from memory to USB buffer */

/* Bits 1..0 : DMA transfer size */
#define USBD_DMASTATE_DSIZE_Pos (0UL) /*!< Position of DSIZE field. */
#define USBD_DMASTATE_DSIZE_Msk (0x3UL << USBD_DMASTATE_DSIZE_Pos) /*!< Bit mask of DSIZE field. */
#define USBD_DMASTATE_DSIZE_8Bit (0x0UL) /*!< 8-bit transfers */
#define USBD_DMASTATE_DSIZE_16Bit (0x1UL) /*!< 16-bit transfers */
#define USBD_DMASTATE_DSIZE_32Bit (0x2UL) /*!< 32-bit transfers */

/* Register: USBD_BMREQUESTTYPE */
/* Description: SETUP data, byte 0, bmRequestType */

/* Bit 7 : Data transfer direction */
#define USBD_BMREQUESTTYPE_DIRECTION_Pos (7UL) /*!< Position of DIRECTION field. */
#define USBD_BMREQUESTTYPE_DIRECTION_Msk (0x1UL << USBD_BMREQUESTTYPE_DIRECTION_Pos) /*!< Bit mask of DIRECTION field. */
#define USBD_BMREQUESTTYPE_DIRECTION_HostToDevice (0x0UL) /*!< Host-to-device */
#define USBD_BMREQUESTTYPE_DIRECTION_DeviceToHost (0x1UL) /*!< Device-to-host */

/* Bits 6..5 : Data transfer type */
#define USBD_BMREQUESTTYPE_TYPE_Pos (5UL) /*!< Position of TYPE field. */
#define USBD_BMREQUESTTYPE_TYPE_Msk (0x3UL << USBD_BMREQUESTTYPE_TYPE_Pos) /*!< Bit mask of TYPE field. */
#define USBD_BMREQUESTTYPE_TYPE_Standard (0x0UL) /*!< Standard */
#define USBD_BMREQUESTTYPE_TYPE_Class (0x1UL) /*!< Class */
#define USBD_BMREQUESTTYPE_TYPE_Vendor (0x2UL) /*!< Vendor */

/* Bits 4..0 : Data transfer type */
#define USBD_BMREQUESTTYPE_RECIPIENT_Pos (0UL) /*!< Position of RECIPIENT field. */
#define USBD_BMREQUESTTYPE_RECIPIENT_Msk (0x1FUL << USBD_BMREQUESTTYPE_RECIPIENT_Pos) /*!< Bit mask of RECIPIENT field. */
#define USBD_BMREQUESTTYPE_RECIPIENT_Device (0x00UL) /*!< Device */
#define USBD_BMREQUESTTYPE_RECIPIENT_Interface (0x01UL) /*!< Interface */
#define USBD_BMREQUESTTYPE_RECIPIENT_Endpoint (0x02UL) /*!< Endpoint */
#define USBD_BMREQUESTTYPE_RECIPIENT_Other (0x03UL) /*!< Other */

/* Register: USBD_BREQUEST */
/* Description: SETUP data, byte 1, bRequest */

/* Bits 7..0 : SETUP data, byte 1, bRequest. Values provided for standard requests only, user must implement class and vendor values. */
#define USBD_BREQUEST_BREQUEST_Pos (0UL) /*!< Position of BREQUEST field. */
#define USBD_BREQUEST_BREQUEST_Msk (0xFFUL << USBD_BREQUEST_BREQUEST_Pos) /*!< Bit mask of BREQUEST field. */
#define USBD_BREQUEST_BREQUEST_STD_GET_STATUS (0x00UL) /*!< Standard request GET_STATUS */
#define USBD_BREQUEST_BREQUEST_STD_CLEAR_FEATURE (0x01UL) /*!< Standard request CLEAR_FEATURE */
#define USBD_BREQUEST_BREQUEST_STD_SET_FEATURE (0x03UL) /*!< Standard request SET_FEATURE */
#define USBD_BREQUEST_BREQUEST_STD_SET_ADDRESS (0x05UL) /*!< Standard request SET_ADDRESS */
#define USBD_BREQUEST_BREQUEST_STD_GET_DESCRIPTOR (0x06UL) /*!< Standard request GET_DESCRIPTOR */
#define USBD_BREQUEST_BREQUEST_STD_SET_DESCRIPTOR (0x07UL) /*!< Standard request SET_DESCRIPTOR */
#define USBD_BREQUEST_BREQUEST_STD_GET_CONFIGURATION (0x08UL) /*!< Standard request GET_CONFIGURATION */
#define USBD_BREQUEST_BREQUEST_STD_SET_CONFIGURATION (0x09UL) /*!< Standard request SET_CONFIGURATION */
#define USBD_BREQUEST_BREQUEST_STD_GET_INTERFACE (0x0AUL) /*!< Standard request GET_INTERFACE */
#define USBD_BREQUEST_BREQUEST_STD_SET_INTERFACE (0x0BUL) /*!< Standard request SET_INTERFACE */
#define USBD_BREQUEST_BREQUEST_STD_SYNCH_FRAME (0x0CUL) /*!< Standard request SYNCH_FRAME */

/* Register: USBD_WVALUEL */
/* Description: SETUP data, byte 2, LSB of wValue */

/* Bits 7..0 : SETUP data, byte 2, LSB of wValue */
#define USBD_WVALUEL_WVALUEL_Pos (0UL) /*!< Position of WVALUEL field. */
#define USBD_WVALUEL_WVALUEL_Msk (0xFFUL << USBD_WVALUEL_WVALUEL_Pos) /*!< Bit mask of WVALUEL field. */

/* Register: USBD_WVALUEH */
/* Description: SETUP data, byte 3, MSB of wValue */

/* Bits 7..0 : SETUP data, byte 3, MSB of wValue */
#define USBD_WVALUEH_WVALUEH_Pos (0UL) /*!< Position of WVALUEH field. */
#define USBD_WVALUEH_WVALUEH_Msk (0xFFUL << USBD_WVALUEH_WVALUEH_Pos) /*!< Bit mask of WVALUEH field. */

/* Register: USBD_WINDEXL */
/* Description: SETUP data, byte 4, LSB of wIndex */

/* Bits 7..0 : SETUP data, byte 4, LSB of wIndex */
#define USBD_WINDEXL_WINDEXL_Pos (0UL) /*!< Position of WINDEXL field. */
#define USBD_WINDEXL_WINDEXL_Msk (0xFFUL << USBD_WINDEXL_WINDEXL_Pos) /*!< Bit mask of WINDEXL field. */

/* Register: USBD_WINDEXH */
/* Description: SETUP data, byte 5, MSB of wIndex */

/* Bits 7..0 : SETUP data, byte 5, MSB of wIndex */
#define USBD_WINDEXH_WINDEXH_Pos (0UL) /*!< Position of WINDEXH field. */
#define USBD_WINDEXH_WINDEXH_Msk (0xFFUL << USBD_WINDEXH_WINDEXH_Pos) /*!< Bit mask of WINDEXH field. */

/* Register: USBD_WLENGTHL */
/* Description: SETUP data, byte 6, LSB of wLength */

/* Bits 7..0 : SETUP data, byte 6, LSB of wLength */
#define USBD_WLENGTHL_WLENGTHL_Pos (0UL) /*!< Position of WLENGTHL field. */
#define USBD_WLENGTHL_WLENGTHL_Msk (0xFFUL << USBD_WLENGTHL_WLENGTHL_Pos) /*!< Bit mask of WLENGTHL field. */

/* Register: USBD_WLENGTHH */
/* Description: SETUP data, byte 7, MSB of wLength */

/* Bits 7..0 : SETUP data, byte 7, MSB of wLength */
#define USBD_WLENGTHH_WLENGTHH_Pos (0UL) /*!< Position of WLENGTHH field. */
#define USBD_WLENGTHH_WLENGTHH_Msk (0xFFUL << USBD_WLENGTHH_WLENGTHH_Pos) /*!< Bit mask of WLENGTHH field. */

/* Register: USBD_SIZE_EPOUT */
/* Description: Description collection: Number of bytes received last in the data stage of this OUT endpoint */

/* Bits 6..0 : Number of bytes received last in the data stage of this OUT endpoint */
#define USBD_SIZE_EPOUT_SIZE_Pos (0UL) /*!< Position of SIZE field. */
#define USBD_SIZE_EPOUT_SIZE_Msk (0x7FUL << USBD_SIZE_EPOUT_SIZE_Pos) /*!< Bit mask of SIZE field. */

/* Register: USBD_SIZE_ISOOUT */
/* Description: Number of bytes received last on this ISO OUT data endpoint */

/* Bit 16 : Zero-length data packet received */
#define USBD_SIZE_ISOOUT_ZERO_Pos (16UL) /*!< Position of ZERO field. */
#define USBD_SIZE_ISOOUT_ZERO_Msk (0x1UL << USBD_SIZE_ISOOUT_ZERO_Pos) /*!< Bit mask of ZERO field. */
#define USBD_SIZE_ISOOUT_ZERO_Normal (0x0UL) /*!< No zero-length data received, use value in SIZE */
#define USBD_SIZE_ISOOUT_ZERO_ZeroData (0x1UL) /*!< Zero-length data received, ignore value in SIZE */

/* Bits 9..0 : Number of bytes received last on this ISO OUT data endpoint */
#define USBD_SIZE_ISOOUT_SIZE_Pos (0UL) /*!< Position of SIZE field. */
#define USBD_SIZE_ISOOUT_SIZE_Msk (0x3FFUL << USBD_SIZE_ISOOUT_SIZE_Pos) /*!< Bit mask of SIZE field. */

/* Register: USBD_ENABLE */
/* Description: Enable USB */

/* Bits 1..0 : Enable USB */
#define USBD_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define USBD_ENABLE_ENABLE_Msk (0x3UL << USBD_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define USBD_ENABLE_ENABLE_Disabled (0x0UL) /*!< USB peripheral is disabled */
#define USBD_ENABLE_ENABLE_Enabled (0x1UL) /*!< USB peripheral is enabled */

/* Register: USBD_USBPULLUP */
/* Description: Control of the USB pull-up */

/* Bit 0 : Control of the USB pull-up on the D+ line */
#define USBD_USBPULLUP_CONNECT_Pos (0UL) /*!< Position of CONNECT field. */
#define USBD_USBPULLUP_CONNECT_Msk (0x1UL << USBD_USBPULLUP_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define USBD_USBPULLUP_CONNECT_Disabled (0x0UL) /*!< Pull-up is disconnected */
#define USBD_USBPULLUP_CONNECT_Enabled (0x1UL) /*!< Pull-up is connected to D+ */

/* Register: USBD_DPDMVALUE */
/* Description: State D+ and D- lines will be forced into by the DPDMDRIVE task. The DPDMNODRIVE task reverts the control of the lines to MAC IP (no forcing). */

/* Bits 4..0 : State D+ and D- lines will be forced into by the DPDMDRIVE task */
#define USBD_DPDMVALUE_STATE_Pos (0UL) /*!< Position of STATE field. */
#define USBD_DPDMVALUE_STATE_Msk (0x1FUL << USBD_DPDMVALUE_STATE_Pos) /*!< Bit mask of STATE field. */
#define USBD_DPDMVALUE_STATE_Resume (0x01UL) /*!< D+ forced low, D- forced high (K state) for a timing preset in hardware (50 us or 5 ms, depending on bus state) */
#define USBD_DPDMVALUE_STATE_J (0x02UL) /*!< D+ forced high, D- forced low (J state) */
#define USBD_DPDMVALUE_STATE_K (0x04UL) /*!< D+ forced low, D- forced high (K state) */

/* Register: USBD_DTOGGLE */
/* Description: Data toggle control and status */

/* Bits 9..8 : Data toggle value */
#define USBD_DTOGGLE_VALUE_Pos (8UL) /*!< Position of VALUE field. */
#define USBD_DTOGGLE_VALUE_Msk (0x3UL << USBD_DTOGGLE_VALUE_Pos) /*!< Bit mask of VALUE field. */
#define USBD_DTOGGLE_VALUE_Nop (0x0UL) /*!< No action on data toggle when writing the register with this value */
#define USBD_DTOGGLE_VALUE_Data0 (0x1UL) /*!< Data toggle is DATA0 on endpoint set by EP and IO */
#define USBD_DTOGGLE_VALUE_Data1 (0x2UL) /*!< Data toggle is DATA1 on endpoint set by EP and IO */

/* Bit 7 : Selects IN or OUT endpoint */
#define USBD_DTOGGLE_IO_Pos (7UL) /*!< Position of IO field. */
#define USBD_DTOGGLE_IO_Msk (0x1UL << USBD_DTOGGLE_IO_Pos) /*!< Bit mask of IO field. */
#define USBD_DTOGGLE_IO_Out (0x0UL) /*!< Selects OUT endpoint */
#define USBD_DTOGGLE_IO_In (0x1UL) /*!< Selects IN endpoint */

/* Bits 2..0 : Select bulk endpoint number */
#define USBD_DTOGGLE_EP_Pos (0UL) /*!< Position of EP field. */
#define USBD_DTOGGLE_EP_Msk (0x7UL << USBD_DTOGGLE_EP_Pos) /*!< Bit mask of EP field. */

/* Register: USBD_EPINEN */
/* Description: Endpoint IN enable */

/* Bit 8 : Enable ISO IN endpoint */
#define USBD_EPINEN_ISOIN_Pos (8UL) /*!< Position of ISOIN field. */
#define USBD_EPINEN_ISOIN_Msk (0x1UL << USBD_EPINEN_ISOIN_Pos) /*!< Bit mask of ISOIN field. */
#define USBD_EPINEN_ISOIN_Disable (0x0UL) /*!< Disable ISO IN endpoint 8 */
#define USBD_EPINEN_ISOIN_Enable (0x1UL) /*!< Enable ISO IN endpoint 8 */

/* Bit 7 : Enable IN endpoint 7 */
#define USBD_EPINEN_IN7_Pos (7UL) /*!< Position of IN7 field. */
#define USBD_EPINEN_IN7_Msk (0x1UL << USBD_EPINEN_IN7_Pos) /*!< Bit mask of IN7 field. */
#define USBD_EPINEN_IN7_Disable (0x0UL) /*!< Disable endpoint IN 7 (no response to IN tokens) */
#define USBD_EPINEN_IN7_Enable (0x1UL) /*!< Enable endpoint IN 7 (response to IN tokens) */

/* Bit 6 : Enable IN endpoint 6 */
#define USBD_EPINEN_IN6_Pos (6UL) /*!< Position of IN6 field. */
#define USBD_EPINEN_IN6_Msk (0x1UL << USBD_EPINEN_IN6_Pos) /*!< Bit mask of IN6 field. */
#define USBD_EPINEN_IN6_Disable (0x0UL) /*!< Disable endpoint IN 6 (no response to IN tokens) */
#define USBD_EPINEN_IN6_Enable (0x1UL) /*!< Enable endpoint IN 6 (response to IN tokens) */

/* Bit 5 : Enable IN endpoint 5 */
#define USBD_EPINEN_IN5_Pos (5UL) /*!< Position of IN5 field. */
#define USBD_EPINEN_IN5_Msk (0x1UL << USBD_EPINEN_IN5_Pos) /*!< Bit mask of IN5 field. */
#define USBD_EPINEN_IN5_Disable (0x0UL) /*!< Disable endpoint IN 5 (no response to IN tokens) */
#define USBD_EPINEN_IN5_Enable (0x1UL) /*!< Enable endpoint IN 5 (response to IN tokens) */

/* Bit 4 : Enable IN endpoint 4 */
#define USBD_EPINEN_IN4_Pos (4UL) /*!< Position of IN4 field. */
#define USBD_EPINEN_IN4_Msk (0x1UL << USBD_EPINEN_IN4_Pos) /*!< Bit mask of IN4 field. */
#define USBD_EPINEN_IN4_Disable (0x0UL) /*!< Disable endpoint IN 4 (no response to IN tokens) */
#define USBD_EPINEN_IN4_Enable (0x1UL) /*!< Enable endpoint IN 4 (response to IN tokens) */

/* Bit 3 : Enable IN endpoint 3 */
#define USBD_EPINEN_IN3_Pos (3UL) /*!< Position of IN3 field. */
#define USBD_EPINEN_IN3_Msk (0x1UL << USBD_EPINEN_IN3_Pos) /*!< Bit mask of IN3 field. */
#define USBD_EPINEN_IN3_Disable (0x0UL) /*!< Disable endpoint IN 3 (no response to IN tokens) */
#define USBD_EPINEN_IN3_Enable (0x1UL) /*!< Enable endpoint IN 3 (response to IN tokens) */

/* Bit 2 : Enable IN endpoint 2 */
#define USBD_EPINEN_IN2_Pos (2UL) /*!< Position of IN2 field. */
#define USBD_EPINEN_IN2_Msk (0x1UL << USBD_EPINEN_IN2_Pos) /*!< Bit mask of IN2 field. */
#define USBD_EPINEN_IN2_Disable (0x0UL) /*!< Disable endpoint IN 2 (no response to IN tokens) */
#define USBD_EPINEN_IN2_Enable (0x1UL) /*!< Enable endpoint IN 2 (response to IN tokens) */

/* Bit 1 : Enable IN endpoint 1 */
#define USBD_EPINEN_IN1_Pos (1UL) /*!< Position of IN1 field. */
#define USBD_EPINEN_IN1_Msk (0x1UL << USBD_EPINEN_IN1_Pos) /*!< Bit mask of IN1 field. */
#define USBD_EPINEN_IN1_Disable (0x0UL) /*!< Disable endpoint IN 1 (no response to IN tokens) */
#define USBD_EPINEN_IN1_Enable (0x1UL) /*!< Enable endpoint IN 1 (response to IN tokens) */

/* Bit 0 : Enable IN endpoint 0 */
#define USBD_EPINEN_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define USBD_EPINEN_IN0_Msk (0x1UL << USBD_EPINEN_IN0_Pos) /*!< Bit mask of IN0 field. */
#define USBD_EPINEN_IN0_Disable (0x0UL) /*!< Disable endpoint IN 0 (no response to IN tokens) */
#define USBD_EPINEN_IN0_Enable (0x1UL) /*!< Enable endpoint IN 0 (response to IN tokens) */

/* Register: USBD_EPOUTEN */
/* Description: Endpoint OUT enable */

/* Bit 8 : Enable ISO OUT endpoint 8 */
#define USBD_EPOUTEN_ISOOUT_Pos (8UL) /*!< Position of ISOOUT field. */
#define USBD_EPOUTEN_ISOOUT_Msk (0x1UL << USBD_EPOUTEN_ISOOUT_Pos) /*!< Bit mask of ISOOUT field. */
#define USBD_EPOUTEN_ISOOUT_Disable (0x0UL) /*!< Disable ISO OUT endpoint 8 */
#define USBD_EPOUTEN_ISOOUT_Enable (0x1UL) /*!< Enable ISO OUT endpoint 8 */

/* Bit 7 : Enable OUT endpoint 7 */
#define USBD_EPOUTEN_OUT7_Pos (7UL) /*!< Position of OUT7 field. */
#define USBD_EPOUTEN_OUT7_Msk (0x1UL << USBD_EPOUTEN_OUT7_Pos) /*!< Bit mask of OUT7 field. */
#define USBD_EPOUTEN_OUT7_Disable (0x0UL) /*!< Disable endpoint OUT 7 (no response to OUT tokens) */
#define USBD_EPOUTEN_OUT7_Enable (0x1UL) /*!< Enable endpoint OUT 7 (response to OUT tokens) */

/* Bit 6 : Enable OUT endpoint 6 */
#define USBD_EPOUTEN_OUT6_Pos (6UL) /*!< Position of OUT6 field. */
#define USBD_EPOUTEN_OUT6_Msk (0x1UL << USBD_EPOUTEN_OUT6_Pos) /*!< Bit mask of OUT6 field. */
#define USBD_EPOUTEN_OUT6_Disable (0x0UL) /*!< Disable endpoint OUT 6 (no response to OUT tokens) */
#define USBD_EPOUTEN_OUT6_Enable (0x1UL) /*!< Enable endpoint OUT 6 (response to OUT tokens) */

/* Bit 5 : Enable OUT endpoint 5 */
#define USBD_EPOUTEN_OUT5_Pos (5UL) /*!< Position of OUT5 field. */
#define USBD_EPOUTEN_OUT5_Msk (0x1UL << USBD_EPOUTEN_OUT5_Pos) /*!< Bit mask of OUT5 field. */
#define USBD_EPOUTEN_OUT5_Disable (0x0UL) /*!< Disable endpoint OUT 5 (no response to OUT tokens) */
#define USBD_EPOUTEN_OUT5_Enable (0x1UL) /*!< Enable endpoint OUT 5 (response to OUT tokens) */

/* Bit 4 : Enable OUT endpoint 4 */
#define USBD_EPOUTEN_OUT4_Pos (4UL) /*!< Position of OUT4 field. */
#define USBD_EPOUTEN_OUT4_Msk (0x1UL << USBD_EPOUTEN_OUT4_Pos) /*!< Bit mask of OUT4 field. */
#define USBD_EPOUTEN_OUT4_Disable (0x0UL) /*!< Disable endpoint OUT 4 (no response to OUT tokens) */
#define USBD_EPOUTEN_OUT4_Enable (0x1UL) /*!< Enable endpoint OUT 4 (response to OUT tokens) */

/* Bit 3 : Enable OUT endpoint 3 */
#define USBD_EPOUTEN_OUT3_Pos (3UL) /*!< Position of OUT3 field. */
#define USBD_EPOUTEN_OUT3_Msk (0x1UL << USBD_EPOUTEN_OUT3_Pos) /*!< Bit mask of OUT3 field. */
#define USBD_EPOUTEN_OUT3_Disable (0x0UL) /*!< Disable endpoint OUT 3 (no response to OUT tokens) */
#define USBD_EPOUTEN_OUT3_Enable (0x1UL) /*!< Enable endpoint OUT 3 (response to OUT tokens) */

/* Bit 2 : Enable OUT endpoint 2 */
#define USBD_EPOUTEN_OUT2_Pos (2UL) /*!< Position of OUT2 field. */
#define USBD_EPOUTEN_OUT2_Msk (0x1UL << USBD_EPOUTEN_OUT2_Pos) /*!< Bit mask of OUT2 field. */
#define USBD_EPOUTEN_OUT2_Disable (0x0UL) /*!< Disable endpoint OUT 2 (no response to OUT tokens) */
#define USBD_EPOUTEN_OUT2_Enable (0x1UL) /*!< Enable endpoint OUT 2 (response to OUT tokens) */

/* Bit 1 : Enable OUT endpoint 1 */
#define USBD_EPOUTEN_OUT1_Pos (1UL) /*!< Position of OUT1 field. */
#define USBD_EPOUTEN_OUT1_Msk (0x1UL << USBD_EPOUTEN_OUT1_Pos) /*!< Bit mask of OUT1 field. */
#define USBD_EPOUTEN_OUT1_Disable (0x0UL) /*!< Disable endpoint OUT 1 (no response to OUT tokens) */
#define USBD_EPOUTEN_OUT1_Enable (0x1UL) /*!< Enable endpoint OUT 1 (response to OUT tokens) */

/* Bit 0 : Enable OUT endpoint 0 */
#define USBD_EPOUTEN_OUT0_Pos (0UL) /*!< Position of OUT0 field. */
#define USBD_EPOUTEN_OUT0_Msk (0x1UL << USBD_EPOUTEN_OUT0_Pos) /*!< Bit mask of OUT0 field. */
#define USBD_EPOUTEN_OUT0_Disable (0x0UL) /*!< Disable endpoint OUT 0 (no response to OUT tokens) */
#define USBD_EPOUTEN_OUT0_Enable (0x1UL) /*!< Enable endpoint OUT 0 (response to OUT tokens) */

/* Register: USBD_EPSTALL */
/* Description: STALL endpoints */

/* Bit 8 : Stall selected endpoint */
#define USBD_EPSTALL_STALL_Pos (8UL) /*!< Position of STALL field. */
#define USBD_EPSTALL_STALL_Msk (0x1UL << USBD_EPSTALL_STALL_Pos) /*!< Bit mask of STALL field. */
#define USBD_EPSTALL_STALL_UnStall (0x0UL) /*!< Don't stall selected endpoint */
#define USBD_EPSTALL_STALL_Stall (0x1UL) /*!< Stall selected endpoint */

/* Bit 7 : Selects IN or OUT endpoint */
#define USBD_EPSTALL_IO_Pos (7UL) /*!< Position of IO field. */
#define USBD_EPSTALL_IO_Msk (0x1UL << USBD_EPSTALL_IO_Pos) /*!< Bit mask of IO field. */
#define USBD_EPSTALL_IO_Out (0x0UL) /*!< Selects OUT endpoint */
#define USBD_EPSTALL_IO_In (0x1UL) /*!< Selects IN endpoint */

/* Bits 2..0 : Select endpoint number */
#define USBD_EPSTALL_EP_Pos (0UL) /*!< Position of EP field. */
#define USBD_EPSTALL_EP_Msk (0x7UL << USBD_EPSTALL_EP_Pos) /*!< Bit mask of EP field. */

/* Register: USBD_ISOSPLIT */
/* Description: Controls the split of ISO buffers */

/* Bits 15..0 : Controls the split of ISO buffers */
#define USBD_ISOSPLIT_SPLIT_Pos (0UL) /*!< Position of SPLIT field. */
#define USBD_ISOSPLIT_SPLIT_Msk (0xFFFFUL << USBD_ISOSPLIT_SPLIT_Pos) /*!< Bit mask of SPLIT field. */
#define USBD_ISOSPLIT_SPLIT_OneDir (0x0000UL) /*!< Full buffer dedicated to either iso IN or OUT */
#define USBD_ISOSPLIT_SPLIT_QuartIN (0x0040UL) /*!< Lower 25 percent for IN, upper 75 percent for OUT */
#define USBD_ISOSPLIT_SPLIT_HalfIN (0x0080UL) /*!< Lower half for IN, upper half for OUT */
#define USBD_ISOSPLIT_SPLIT_QuartOUT (0x4000UL) /*!< Lower 25 percent for OUT, upper 75 percent for IN */
#define USBD_ISOSPLIT_SPLIT_HalfOUT (0x8000UL) /*!< Lower half for OUT, upper half for IN */

/* Register: USBD_FRAMECNTR */
/* Description: Returns the current value of the start of frame counter */

/* Bits 10..0 : Returns the current value of the start of frame counter */
#define USBD_FRAMECNTR_FRAMECNTR_Pos (0UL) /*!< Position of FRAMECNTR field. */
#define USBD_FRAMECNTR_FRAMECNTR_Msk (0x7FFUL << USBD_FRAMECNTR_FRAMECNTR_Pos) /*!< Bit mask of FRAMECNTR field. */

/* Register: USBD_TESTUSBPULLUP */
/* Description: Control of the USB pull-up value, for test purposes */

/* Bits 1..0 : Control of the value of USB pull-up on the D+ line (for test mode) */
#define USBD_TESTUSBPULLUP_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define USBD_TESTUSBPULLUP_VALUE_Msk (0x3UL << USBD_TESTUSBPULLUP_VALUE_Pos) /*!< Bit mask of VALUE field. */
#define USBD_TESTUSBPULLUP_VALUE_Auto (0x0UL) /*!< MAC controls the value of the pull-up (no override) */
#define USBD_TESTUSBPULLUP_VALUE_BusActive (0x2UL) /*!< Pull-up value is 1425 to 3090 Ohm */
#define USBD_TESTUSBPULLUP_VALUE_BusIdle (0x3UL) /*!< Pull-up is Resume in 900 to 1575 Ohm */

/* Register: USBD_TSEL */
/* Description: Trim value for ramTSEL[1:0] on the RamBist interface */

/* Bits 1..0 : Trim value for ramTSEL[1:0] on the RamBist interface (tSelInUsb lines). This register shall only get written while USBD is not enabled. */
#define USBD_TSEL_RAMTSEL_Pos (0UL) /*!< Position of RAMTSEL field. */
#define USBD_TSEL_RAMTSEL_Msk (0x3UL << USBD_TSEL_RAMTSEL_Pos) /*!< Bit mask of RAMTSEL field. */

/* Register: USBD_LOWPOWER */
/* Description: Controls USBD peripheral low power mode during USB suspend */

/* Bit 0 : Controls USBD peripheral low-power mode during USB suspend */
#define USBD_LOWPOWER_LOWPOWER_Pos (0UL) /*!< Position of LOWPOWER field. */
#define USBD_LOWPOWER_LOWPOWER_Msk (0x1UL << USBD_LOWPOWER_LOWPOWER_Pos) /*!< Bit mask of LOWPOWER field. */
#define USBD_LOWPOWER_LOWPOWER_ForceNormal (0x0UL) /*!< Software must write this value to exit low power mode and before performing a remote wake-up */
#define USBD_LOWPOWER_LOWPOWER_LowPower (0x1UL) /*!< Software must write this value to enter low power mode after DMA and software have finished interacting with the USB peripheral */

/* Register: USBD_ISOINCONFIG */
/* Description: Controls the response of the ISO IN endpoint to an IN token when no data is ready to be sent */

/* Bit 0 : Controls the response of the ISO IN endpoint to an IN token when no data is ready to be sent */
#define USBD_ISOINCONFIG_RESPONSE_Pos (0UL) /*!< Position of RESPONSE field. */
#define USBD_ISOINCONFIG_RESPONSE_Msk (0x1UL << USBD_ISOINCONFIG_RESPONSE_Pos) /*!< Bit mask of RESPONSE field. */
#define USBD_ISOINCONFIG_RESPONSE_NoResp (0x0UL) /*!< Endpoint does not respond in that case */
#define USBD_ISOINCONFIG_RESPONSE_ZeroData (0x1UL) /*!< Endpoint responds with a zero-length data packet in that case */

/* Register: USBD_EPIN_PTR */
/* Description: Description cluster: Data pointer */

/* Bits 31..0 : Data pointer */
#define USBD_EPIN_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define USBD_EPIN_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_EPIN_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: USBD_EPIN_MAXCNT */
/* Description: Description cluster: Maximum number of bytes to transfer */

/* Bits 15..0 : Maximum number of bytes to transfer */
#define USBD_EPIN_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define USBD_EPIN_MAXCNT_MAXCNT_Msk (0xFFFFUL << USBD_EPIN_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: USBD_EPIN_AMOUNT */
/* Description: Description cluster: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction */
#define USBD_EPIN_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define USBD_EPIN_AMOUNT_AMOUNT_Msk (0xFFFFUL << USBD_EPIN_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: USBD_EPIN_CONFIG */
/* Description: Description cluster: Endpoint EasyDMA configuration */

/* Bits 1..0 : DMA transfer size */
#define USBD_EPIN_CONFIG_DMASIZE_Pos (0UL) /*!< Position of DMASIZE field. */
#define USBD_EPIN_CONFIG_DMASIZE_Msk (0x3UL << USBD_EPIN_CONFIG_DMASIZE_Pos) /*!< Bit mask of DMASIZE field. */
#define USBD_EPIN_CONFIG_DMASIZE_Byte (0x0UL) /*!< DMA transfer size is 8 bits */
#define USBD_EPIN_CONFIG_DMASIZE_Short (0x1UL) /*!< DMA transfer size is 16 bits (buffer must be aligned accordingly) */
#define USBD_EPIN_CONFIG_DMASIZE_Long (0x2UL) /*!< DMA transfer size is 32 bits (buffer must be aligned accordingly) */

/* Register: USBD_EPIN_LIST */
/* Description: Description cluster: EasyDMA list type */

/* Bits 2..0 : List type */
#define USBD_EPIN_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define USBD_EPIN_LIST_LIST_Msk (0x7UL << USBD_EPIN_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define USBD_EPIN_LIST_LIST_Disabled (0x0UL) /*!< Normal EasyDMA operation */
#define USBD_EPIN_LIST_LIST_ArrayList (0x1UL) /*!< Use array list (auto-increment of .PTR) */

/* Register: USBD_ISOIN_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define USBD_ISOIN_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define USBD_ISOIN_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_ISOIN_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: USBD_ISOIN_MAXCNT */
/* Description: Maximum number of bytes to transfer */

/* Bits 15..0 : Maximum number of bytes to transfer */
#define USBD_ISOIN_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define USBD_ISOIN_MAXCNT_MAXCNT_Msk (0xFFFFUL << USBD_ISOIN_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: USBD_ISOIN_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction */
#define USBD_ISOIN_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define USBD_ISOIN_AMOUNT_AMOUNT_Msk (0xFFFFUL << USBD_ISOIN_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: USBD_ISOIN_CONFIG */
/* Description: Isochronous endpoint EasyDMA configuration */

/* Bits 1..0 : DMA transfer size */
#define USBD_ISOIN_CONFIG_DMASIZE_Pos (0UL) /*!< Position of DMASIZE field. */
#define USBD_ISOIN_CONFIG_DMASIZE_Msk (0x3UL << USBD_ISOIN_CONFIG_DMASIZE_Pos) /*!< Bit mask of DMASIZE field. */
#define USBD_ISOIN_CONFIG_DMASIZE_Byte (0x0UL) /*!< DMA transfer size is 8 bits */
#define USBD_ISOIN_CONFIG_DMASIZE_Short (0x1UL) /*!< DMA transfer size is 16 bits (buffer must be aligned accordingly) */
#define USBD_ISOIN_CONFIG_DMASIZE_Long (0x2UL) /*!< DMA transfer size is 32 bits (buffer must be aligned accordingly) */

/* Register: USBD_EPOUT_PTR */
/* Description: Description cluster: Data pointer */

/* Bits 31..0 : Data pointer */
#define USBD_EPOUT_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define USBD_EPOUT_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_EPOUT_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: USBD_EPOUT_MAXCNT */
/* Description: Description cluster: Maximum number of bytes to transfer */

/* Bits 15..0 : Maximum number of bytes to transfer */
#define USBD_EPOUT_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define USBD_EPOUT_MAXCNT_MAXCNT_Msk (0xFFFFUL << USBD_EPOUT_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: USBD_EPOUT_AMOUNT */
/* Description: Description cluster: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction */
#define USBD_EPOUT_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define USBD_EPOUT_AMOUNT_AMOUNT_Msk (0xFFFFUL << USBD_EPOUT_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: USBD_EPOUT_CONFIG */
/* Description: Description cluster: Endpoint EasyDMA configuration */

/* Bits 1..0 : DMA transfer size */
#define USBD_EPOUT_CONFIG_DMASIZE_Pos (0UL) /*!< Position of DMASIZE field. */
#define USBD_EPOUT_CONFIG_DMASIZE_Msk (0x3UL << USBD_EPOUT_CONFIG_DMASIZE_Pos) /*!< Bit mask of DMASIZE field. */
#define USBD_EPOUT_CONFIG_DMASIZE_Byte (0x0UL) /*!< DMA transfer size is 8 bit */
#define USBD_EPOUT_CONFIG_DMASIZE_Short (0x1UL) /*!< DMA transfer size is 16 bit (buffer must be aligned accordingly) */
#define USBD_EPOUT_CONFIG_DMASIZE_Long (0x2UL) /*!< DMA transfer size is 32 bit (buffer must be aligned accordingly) */

/* Register: USBD_EPOUT_LIST */
/* Description: Description cluster: EasyDMA list type */

/* Bits 2..0 : List type */
#define USBD_EPOUT_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define USBD_EPOUT_LIST_LIST_Msk (0x7UL << USBD_EPOUT_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define USBD_EPOUT_LIST_LIST_Disabled (0x0UL) /*!< Normal EasyDMA operation */
#define USBD_EPOUT_LIST_LIST_ArrayList (0x1UL) /*!< Use array list (auto-increment of .PTR) */

/* Register: USBD_ISOOUT_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define USBD_ISOOUT_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define USBD_ISOOUT_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_ISOOUT_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: USBD_ISOOUT_MAXCNT */
/* Description: Maximum number of bytes to transfer */

/* Bits 15..0 : Maximum number of bytes to transfer */
#define USBD_ISOOUT_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define USBD_ISOOUT_MAXCNT_MAXCNT_Msk (0xFFFFUL << USBD_ISOOUT_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: USBD_ISOOUT_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction */
#define USBD_ISOOUT_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define USBD_ISOOUT_AMOUNT_AMOUNT_Msk (0xFFFFUL << USBD_ISOOUT_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: USBD_ISOOUT_CONFIG */
/* Description: Isochronous endpoint EasyDMA configuration */

/* Bits 1..0 : DMA transfer size */
#define USBD_ISOOUT_CONFIG_DMASIZE_Pos (0UL) /*!< Position of DMASIZE field. */
#define USBD_ISOOUT_CONFIG_DMASIZE_Msk (0x3UL << USBD_ISOOUT_CONFIG_DMASIZE_Pos) /*!< Bit mask of DMASIZE field. */
#define USBD_ISOOUT_CONFIG_DMASIZE_Byte (0x0UL) /*!< DMA transfer size is 8 bits */
#define USBD_ISOOUT_CONFIG_DMASIZE_Short (0x1UL) /*!< DMA transfer size is 16 bits (buffer must be aligned accordingly) */
#define USBD_ISOOUT_CONFIG_DMASIZE_Long (0x2UL) /*!< DMA transfer size is 32 bits (buffer must be aligned accordingly) */

/* Register: USBD_RAWADDR */
/* Description: Address to be used for accessing the MAC IP4000 */

/* Bits 10..0 : IP4000 address space */
#define USBD_RAWADDR_ADDR_Pos (0UL) /*!< Position of ADDR field. */
#define USBD_RAWADDR_ADDR_Msk (0x7FFUL << USBD_RAWADDR_ADDR_Pos) /*!< Bit mask of ADDR field. */

/* Register: USBD_RAWDATA */
/* Description: Actual read or write access to the raw IP, using RAWADDR address */

/* Bits 7..0 : data */
#define USBD_RAWDATA_DATA_Pos (0UL) /*!< Position of DATA field. */
#define USBD_RAWDATA_DATA_Msk (0xFFUL << USBD_RAWDATA_DATA_Pos) /*!< Bit mask of DATA field. */

/* Register: USBD_PENALTY_DIG */
/* Description: Description collection: PcgcSlaveDig */

/* Bits 31..2 : Unused bits, always reads as ones */
#define USBD_PENALTY_DIG_UNUSED_Pos (2UL) /*!< Position of UNUSED field. */
#define USBD_PENALTY_DIG_UNUSED_Msk (0x3FFFFFFFUL << USBD_PENALTY_DIG_UNUSED_Pos) /*!< Bit mask of UNUSED field. */

/* Bits 1..0 :   */
#define USBD_PENALTY_DIG_PENALTY_DIG_Pos (0UL) /*!< Position of PENALTY_DIG field. */
#define USBD_PENALTY_DIG_PENALTY_DIG_Msk (0x3UL << USBD_PENALTY_DIG_PENALTY_DIG_Pos) /*!< Bit mask of PENALTY_DIG field. */
#define USBD_PENALTY_DIG_PENALTY_DIG_AUTO0 (0x0UL) /*!< Full penalty: Power core, Power switch, Clock core, Clock buffer and Clock switch can turn off */
#define USBD_PENALTY_DIG_PENALTY_DIG_AUTO1 (0x1UL) /*!< Clock core, Clock buffer and Clock switch can turn off, Power core and Power switch are kept on */
#define USBD_PENALTY_DIG_PENALTY_DIG_AUTO2 (0x2UL) /*!< Clock buffer and Clock switch can turn off, Power core, Power switch and Clock core are kept on */
#define USBD_PENALTY_DIG_PENALTY_DIG_AUTO3 (0x3UL) /*!< Zero penalty: Clock switch can turn off, Power core, Power switch, Clock core and Clock buffer are kept on */

/* Register: USBD_PENALTY_MAIN0 */
/* Description: Description collection: PcgcSlaveMain */

/* Bits 31..2 : Unused bits, always reads as ones */
#define USBD_PENALTY_MAIN0_UNUSED_Pos (2UL) /*!< Position of UNUSED field. */
#define USBD_PENALTY_MAIN0_UNUSED_Msk (0x3FFFFFFFUL << USBD_PENALTY_MAIN0_UNUSED_Pos) /*!< Bit mask of UNUSED field. */

/* Bits 1..0 :   */
#define USBD_PENALTY_MAIN0_PENALTY_DIG1_Pos (0UL) /*!< Position of PENALTY_DIG1 field. */
#define USBD_PENALTY_MAIN0_PENALTY_DIG1_Msk (0x3UL << USBD_PENALTY_MAIN0_PENALTY_DIG1_Pos) /*!< Bit mask of PENALTY_DIG1 field. */
#define USBD_PENALTY_MAIN0_PENALTY_DIG1_AUTO0 (0x0UL) /*!< Full penalty: Power core, Power switch, Clock core, Clock buffer and Clock switch can turn off */
#define USBD_PENALTY_MAIN0_PENALTY_DIG1_AUTO1 (0x1UL) /*!< Clock core, Clock buffer and Clock switch can turn off, Power core and Power switch are kept on */
#define USBD_PENALTY_MAIN0_PENALTY_DIG1_AUTO2 (0x2UL) /*!< Clock buffer and Clock switch can turn off, Power core, Power switch and Clock core are kept on */
#define USBD_PENALTY_MAIN0_PENALTY_DIG1_AUTO3 (0x3UL) /*!< Zero penalty: Clock switch can turn off, Power core, Power switch, Clock core and Clock buffer are kept on */

/* Register: USBD_FORCE_OVERRIDE_DIG */
/* Description: Description collection: Clock and power request override register for PCPn in PcgcSlaveDig */

/* Bit 15 :   */
#define USBD_FORCE_OVERRIDE_DIG_DOFORCEPOWER_Pos (15UL) /*!< Position of DOFORCEPOWER field. */
#define USBD_FORCE_OVERRIDE_DIG_DOFORCEPOWER_Msk (0x1UL << USBD_FORCE_OVERRIDE_DIG_DOFORCEPOWER_Pos) /*!< Bit mask of DOFORCEPOWER field. */
#define USBD_FORCE_OVERRIDE_DIG_DOFORCEPOWER_Disable (0x0UL) /*!< Disable forcing of the power request signals */
#define USBD_FORCE_OVERRIDE_DIG_DOFORCEPOWER_Enable (0x1UL) /*!< Enable forcing of the power request signals */

/* Bit 9 : Force powerRequest[n].core if doForcePower is set. If doForcePower is not set, powerRequest[n].core is not overridden. */
#define USBD_FORCE_OVERRIDE_DIG_POWERFORCINGCORE_Pos (9UL) /*!< Position of POWERFORCINGCORE field. */
#define USBD_FORCE_OVERRIDE_DIG_POWERFORCINGCORE_Msk (0x1UL << USBD_FORCE_OVERRIDE_DIG_POWERFORCINGCORE_Pos) /*!< Bit mask of POWERFORCINGCORE field. */
#define USBD_FORCE_OVERRIDE_DIG_POWERFORCINGCORE_ForceLow (0x0UL) /*!< Forces powerRequest[n].core is overridden to 0. */
#define USBD_FORCE_OVERRIDE_DIG_POWERFORCINGCORE_ForceHigh (0x1UL) /*!< Forces powerRequest[n].core is overridden to 1. */

/* Bit 8 : Force powerRequest[n].switch If doForcePower is set. If doForcePower is not set, powerRequest[n].switch is not overridden. */
#define USBD_FORCE_OVERRIDE_DIG_POWERFORCINGSWITCH_Pos (8UL) /*!< Position of POWERFORCINGSWITCH field. */
#define USBD_FORCE_OVERRIDE_DIG_POWERFORCINGSWITCH_Msk (0x1UL << USBD_FORCE_OVERRIDE_DIG_POWERFORCINGSWITCH_Pos) /*!< Bit mask of POWERFORCINGSWITCH field. */
#define USBD_FORCE_OVERRIDE_DIG_POWERFORCINGSWITCH_ForceLow (0x0UL) /*!< Forces powerRequest[n].switch is overridden to 0. */
#define USBD_FORCE_OVERRIDE_DIG_POWERFORCINGSWITCH_ForceHigh (0x1UL) /*!< Forces powerRequest[n].switch is overridden to 1. */

/* Bit 7 : Enable or disable the forcing of clock request signals */
#define USBD_FORCE_OVERRIDE_DIG_DOFORCECLOCK_Pos (7UL) /*!< Position of DOFORCECLOCK field. */
#define USBD_FORCE_OVERRIDE_DIG_DOFORCECLOCK_Msk (0x1UL << USBD_FORCE_OVERRIDE_DIG_DOFORCECLOCK_Pos) /*!< Bit mask of DOFORCECLOCK field. */
#define USBD_FORCE_OVERRIDE_DIG_DOFORCECLOCK_Disable (0x0UL) /*!< Disable forcing of the clock request signals */
#define USBD_FORCE_OVERRIDE_DIG_DOFORCECLOCK_Enable (0x1UL) /*!< Enable forcing of the clock request signals */

/* Bit 3 : Force clockRequest[n].core if doForceClock is set. If doForceClock is not set, clockRequest[n].core is not overridden. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGCORE_Pos (3UL) /*!< Position of CLOCKFORCINGCORE field. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGCORE_Msk (0x1UL << USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGCORE_Pos) /*!< Bit mask of CLOCKFORCINGCORE field. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGCORE_ForceLow (0x0UL) /*!< Forces clockRequest[n].core is overridden to 0. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGCORE_ForceHigh (0x1UL) /*!< Forces clockRequest[n].core is overridden to 1. */

/* Bit 2 : Force clockRequest[n].buff if doForceClock is set. If doForceClock is not set, clockRequest[n].buff is not overridden. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGBUFF_Pos (2UL) /*!< Position of CLOCKFORCINGBUFF field. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGBUFF_Msk (0x1UL << USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGBUFF_Pos) /*!< Bit mask of CLOCKFORCINGBUFF field. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGBUFF_ForceLow (0x0UL) /*!< Forces clockRequest[n].buff is overridden to 0. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGBUFF_ForceHigh (0x1UL) /*!< Forces clockRequest[n].buff is overridden to 1. */

/* Bit 1 : Force clockRequest[n].switch if doForceClock is set. If doForceClock is not set, clockRequest[n].switch is not overridden. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGSWITCH_Pos (1UL) /*!< Position of CLOCKFORCINGSWITCH field. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGSWITCH_Msk (0x1UL << USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGSWITCH_Pos) /*!< Bit mask of CLOCKFORCINGSWITCH field. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGSWITCH_ForceLow (0x0UL) /*!< Forces clockRequest[n].switch is overridden to 0. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGSWITCH_ForceHigh (0x1UL) /*!< Forces clockRequest[n].switch is overridden to 1. */

/* Bit 0 : Force clockRequest[n].switch_a if doForceClock is set. If doForceClock is not set, clockRequest[n].switch_a is not overridden. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGSWITCH_A_Pos (0UL) /*!< Position of CLOCKFORCINGSWITCH_A field. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGSWITCH_A_Msk (0x1UL << USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGSWITCH_A_Pos) /*!< Bit mask of CLOCKFORCINGSWITCH_A field. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGSWITCH_A_ForceLow (0x0UL) /*!< Forces clockRequest[n].switch_a is overridden to 0. */
#define USBD_FORCE_OVERRIDE_DIG_CLOCKFORCINGSWITCH_A_ForceHigh (0x1UL) /*!< Forces clockRequest[n].switch_a is overridden to 1. */

/* Register: USBD_TURN_OFF_AUTO_CLOCKSOURCE_REQ */
/* Description: Unused */

/* Bits 31..0 : Always reads as zero */
#define USBD_TURN_OFF_AUTO_CLOCKSOURCE_REQ_UNUSED_Pos (0UL) /*!< Position of UNUSED field. */
#define USBD_TURN_OFF_AUTO_CLOCKSOURCE_REQ_UNUSED_Msk (0xFFFFFFFFUL << USBD_TURN_OFF_AUTO_CLOCKSOURCE_REQ_UNUSED_Pos) /*!< Bit mask of UNUSED field. */


/* Peripheral: VMC */
/* Description: Volatile Memory controller */

/* Register: VMC_RAM_POWER */
/* Description: Description cluster: RAM[n] power control register */

/* Bit 17 : Keep retention on RAM section S1 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S1RETENTION_Pos (17UL) /*!< Position of S1RETENTION field. */
#define VMC_RAM_POWER_S1RETENTION_Msk (0x1UL << VMC_RAM_POWER_S1RETENTION_Pos) /*!< Bit mask of S1RETENTION field. */
#define VMC_RAM_POWER_S1RETENTION_Off (0x0UL) /*!< Off */
#define VMC_RAM_POWER_S1RETENTION_On (0x1UL) /*!< On */

/* Bit 16 : Keep retention on RAM section S0 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWER_S0RETENTION_Pos (16UL) /*!< Position of S0RETENTION field. */
#define VMC_RAM_POWER_S0RETENTION_Msk (0x1UL << VMC_RAM_POWER_S0RETENTION_Pos) /*!< Bit mask of S0RETENTION field. */
#define VMC_RAM_POWER_S0RETENTION_Off (0x0UL) /*!< Off */
#define VMC_RAM_POWER_S0RETENTION_On (0x1UL) /*!< On */

/* Bit 1 : Keep RAM section S1 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S1POWER_Pos (1UL) /*!< Position of S1POWER field. */
#define VMC_RAM_POWER_S1POWER_Msk (0x1UL << VMC_RAM_POWER_S1POWER_Pos) /*!< Bit mask of S1POWER field. */
#define VMC_RAM_POWER_S1POWER_Off (0x0UL) /*!< Off */
#define VMC_RAM_POWER_S1POWER_On (0x1UL) /*!< On */

/* Bit 0 : Keep RAM section S0 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWER_S0POWER_Pos (0UL) /*!< Position of S0POWER field. */
#define VMC_RAM_POWER_S0POWER_Msk (0x1UL << VMC_RAM_POWER_S0POWER_Pos) /*!< Bit mask of S0POWER field. */
#define VMC_RAM_POWER_S0POWER_Off (0x0UL) /*!< Off */
#define VMC_RAM_POWER_S0POWER_On (0x1UL) /*!< On */

/* Register: VMC_RAM_POWERSET */
/* Description: Description cluster: RAM[n] power control set register */

/* Bit 17 : Keep retention on RAM section S1 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S1RETENTION_Pos (17UL) /*!< Position of S1RETENTION field. */
#define VMC_RAM_POWERSET_S1RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S1RETENTION_Pos) /*!< Bit mask of S1RETENTION field. */
#define VMC_RAM_POWERSET_S1RETENTION_On (0x1UL) /*!< On */

/* Bit 16 : Keep retention on RAM section S0 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERSET_S0RETENTION_Pos (16UL) /*!< Position of S0RETENTION field. */
#define VMC_RAM_POWERSET_S0RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S0RETENTION_Pos) /*!< Bit mask of S0RETENTION field. */
#define VMC_RAM_POWERSET_S0RETENTION_On (0x1UL) /*!< On */

/* Bit 1 : Keep RAM section S1 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S1POWER_Pos (1UL) /*!< Position of S1POWER field. */
#define VMC_RAM_POWERSET_S1POWER_Msk (0x1UL << VMC_RAM_POWERSET_S1POWER_Pos) /*!< Bit mask of S1POWER field. */
#define VMC_RAM_POWERSET_S1POWER_On (0x1UL) /*!< On */

/* Bit 0 : Keep RAM section S0 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERSET_S0POWER_Pos (0UL) /*!< Position of S0POWER field. */
#define VMC_RAM_POWERSET_S0POWER_Msk (0x1UL << VMC_RAM_POWERSET_S0POWER_Pos) /*!< Bit mask of S0POWER field. */
#define VMC_RAM_POWERSET_S0POWER_On (0x1UL) /*!< On */

/* Register: VMC_RAM_POWERCLR */
/* Description: Description cluster: RAM[n] power control clear register */

/* Bit 17 : Keep retention on RAM section S1 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S1RETENTION_Pos (17UL) /*!< Position of S1RETENTION field. */
#define VMC_RAM_POWERCLR_S1RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S1RETENTION_Pos) /*!< Bit mask of S1RETENTION field. */
#define VMC_RAM_POWERCLR_S1RETENTION_Off (0x1UL) /*!< Off */

/* Bit 16 : Keep retention on RAM section S0 of RAM[n] when RAM section is switched off */
#define VMC_RAM_POWERCLR_S0RETENTION_Pos (16UL) /*!< Position of S0RETENTION field. */
#define VMC_RAM_POWERCLR_S0RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S0RETENTION_Pos) /*!< Bit mask of S0RETENTION field. */
#define VMC_RAM_POWERCLR_S0RETENTION_Off (0x1UL) /*!< Off */

/* Bit 1 : Keep RAM section S1 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S1POWER_Pos (1UL) /*!< Position of S1POWER field. */
#define VMC_RAM_POWERCLR_S1POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S1POWER_Pos) /*!< Bit mask of S1POWER field. */
#define VMC_RAM_POWERCLR_S1POWER_Off (0x1UL) /*!< Off */

/* Bit 0 : Keep RAM section S0 of RAM[n] on or off in System ON mode */
#define VMC_RAM_POWERCLR_S0POWER_Pos (0UL) /*!< Position of S0POWER field. */
#define VMC_RAM_POWERCLR_S0POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S0POWER_Pos) /*!< Bit mask of S0POWER field. */
#define VMC_RAM_POWERCLR_S0POWER_Off (0x1UL) /*!< Off */


/* Peripheral: WDT */
/* Description: Watchdog Timer */

/* Register: WDT_TASKS_START */
/* Description: Start the watchdog */

/* Bit 0 : Start the watchdog */
#define WDT_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define WDT_TASKS_START_TASKS_START_Msk (0x1UL << WDT_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define WDT_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: WDT_TASKS_STOP */
/* Description: Stop the watchdog timer. */

/* Bit 0 : Stop the watchdog timer. */
#define WDT_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define WDT_TASKS_STOP_TASKS_STOP_Msk (0x1UL << WDT_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define WDT_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: WDT_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define WDT_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define WDT_SUBSCRIBE_START_EN_Msk (0x1UL << WDT_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define WDT_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define WDT_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define WDT_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define WDT_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << WDT_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: WDT_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define WDT_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define WDT_SUBSCRIBE_STOP_EN_Msk (0x1UL << WDT_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define WDT_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define WDT_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define WDT_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define WDT_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << WDT_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: WDT_EVENTS_TIMEOUT */
/* Description: Watchdog timeout */

/* Bit 0 : Watchdog timeout */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos (0UL) /*!< Position of EVENTS_TIMEOUT field. */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Msk (0x1UL << WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos) /*!< Bit mask of EVENTS_TIMEOUT field. */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_NotGenerated (0x0UL) /*!< Event not generated */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Generated (0x1UL) /*!< Event generated */

/* Register: WDT_EVENTS_STOPPED */
/* Description: Watchdog stopped */

/* Bit 0 : Watchdog stopped */
#define WDT_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define WDT_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << WDT_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */
#define WDT_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL) /*!< Event not generated */
#define WDT_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL) /*!< Event generated */

/* Register: WDT_PUBLISH_TIMEOUT */
/* Description: Publish configuration for event TIMEOUT */

/* Bit 31 :   */
#define WDT_PUBLISH_TIMEOUT_EN_Pos (31UL) /*!< Position of EN field. */
#define WDT_PUBLISH_TIMEOUT_EN_Msk (0x1UL << WDT_PUBLISH_TIMEOUT_EN_Pos) /*!< Bit mask of EN field. */
#define WDT_PUBLISH_TIMEOUT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define WDT_PUBLISH_TIMEOUT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event TIMEOUT will publish to */
#define WDT_PUBLISH_TIMEOUT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define WDT_PUBLISH_TIMEOUT_CHIDX_Msk (0xFFUL << WDT_PUBLISH_TIMEOUT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: WDT_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define WDT_PUBLISH_STOPPED_EN_Pos (31UL) /*!< Position of EN field. */
#define WDT_PUBLISH_STOPPED_EN_Msk (0x1UL << WDT_PUBLISH_STOPPED_EN_Pos) /*!< Bit mask of EN field. */
#define WDT_PUBLISH_STOPPED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define WDT_PUBLISH_STOPPED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define WDT_PUBLISH_STOPPED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define WDT_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << WDT_PUBLISH_STOPPED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: WDT_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define WDT_INTENSET_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define WDT_INTENSET_STOPPED_Msk (0x1UL << WDT_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define WDT_INTENSET_STOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define WDT_INTENSET_STOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define WDT_INTENSET_STOPPED_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event TIMEOUT */
#define WDT_INTENSET_TIMEOUT_Pos (0UL) /*!< Position of TIMEOUT field. */
#define WDT_INTENSET_TIMEOUT_Msk (0x1UL << WDT_INTENSET_TIMEOUT_Pos) /*!< Bit mask of TIMEOUT field. */
#define WDT_INTENSET_TIMEOUT_Disabled (0x0UL) /*!< Read: Disabled */
#define WDT_INTENSET_TIMEOUT_Enabled (0x1UL) /*!< Read: Enabled */
#define WDT_INTENSET_TIMEOUT_Set (0x1UL) /*!< Enable */

/* Register: WDT_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
#define WDT_INTENCLR_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define WDT_INTENCLR_STOPPED_Msk (0x1UL << WDT_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define WDT_INTENCLR_STOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define WDT_INTENCLR_STOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define WDT_INTENCLR_STOPPED_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event TIMEOUT */
#define WDT_INTENCLR_TIMEOUT_Pos (0UL) /*!< Position of TIMEOUT field. */
#define WDT_INTENCLR_TIMEOUT_Msk (0x1UL << WDT_INTENCLR_TIMEOUT_Pos) /*!< Bit mask of TIMEOUT field. */
#define WDT_INTENCLR_TIMEOUT_Disabled (0x0UL) /*!< Read: Disabled */
#define WDT_INTENCLR_TIMEOUT_Enabled (0x1UL) /*!< Read: Enabled */
#define WDT_INTENCLR_TIMEOUT_Clear (0x1UL) /*!< Disable */

/* Register: WDT_RUNSTATUS */
/* Description: Run status */

/* Bit 1 : Indicates whether or not the timer is running */
#define WDT_RUNSTATUS_RUNSTATUSTIMER_Pos (1UL) /*!< Position of RUNSTATUSTIMER field. */
#define WDT_RUNSTATUS_RUNSTATUSTIMER_Msk (0x1UL << WDT_RUNSTATUS_RUNSTATUSTIMER_Pos) /*!< Bit mask of RUNSTATUSTIMER field. */
#define WDT_RUNSTATUS_RUNSTATUSTIMER_NotRunning (0x0UL) /*!< Timer not running */
#define WDT_RUNSTATUS_RUNSTATUSTIMER_Running (0x1UL) /*!< Timer is running */

/* Bit 0 : Indicates whether or not the watchdog is running */
#define WDT_RUNSTATUS_RUNSTATUSWDT_Pos (0UL) /*!< Position of RUNSTATUSWDT field. */
#define WDT_RUNSTATUS_RUNSTATUSWDT_Msk (0x1UL << WDT_RUNSTATUS_RUNSTATUSWDT_Pos) /*!< Bit mask of RUNSTATUSWDT field. */
#define WDT_RUNSTATUS_RUNSTATUSWDT_NotRunning (0x0UL) /*!< Watchdog not running */
#define WDT_RUNSTATUS_RUNSTATUSWDT_Running (0x1UL) /*!< Watchdog is running */

/* Register: WDT_REQSTATUS */
/* Description: Request status */

/* Bit 7 : Request status for RR[7] register */
#define WDT_REQSTATUS_RR7_Pos (7UL) /*!< Position of RR7 field. */
#define WDT_REQSTATUS_RR7_Msk (0x1UL << WDT_REQSTATUS_RR7_Pos) /*!< Bit mask of RR7 field. */
#define WDT_REQSTATUS_RR7_DisabledOrRequested (0x0UL) /*!< RR[7] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR7_EnabledAndUnrequested (0x1UL) /*!< RR[7] register is enabled, and are not yet requesting reload */

/* Bit 6 : Request status for RR[6] register */
#define WDT_REQSTATUS_RR6_Pos (6UL) /*!< Position of RR6 field. */
#define WDT_REQSTATUS_RR6_Msk (0x1UL << WDT_REQSTATUS_RR6_Pos) /*!< Bit mask of RR6 field. */
#define WDT_REQSTATUS_RR6_DisabledOrRequested (0x0UL) /*!< RR[6] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR6_EnabledAndUnrequested (0x1UL) /*!< RR[6] register is enabled, and are not yet requesting reload */

/* Bit 5 : Request status for RR[5] register */
#define WDT_REQSTATUS_RR5_Pos (5UL) /*!< Position of RR5 field. */
#define WDT_REQSTATUS_RR5_Msk (0x1UL << WDT_REQSTATUS_RR5_Pos) /*!< Bit mask of RR5 field. */
#define WDT_REQSTATUS_RR5_DisabledOrRequested (0x0UL) /*!< RR[5] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR5_EnabledAndUnrequested (0x1UL) /*!< RR[5] register is enabled, and are not yet requesting reload */

/* Bit 4 : Request status for RR[4] register */
#define WDT_REQSTATUS_RR4_Pos (4UL) /*!< Position of RR4 field. */
#define WDT_REQSTATUS_RR4_Msk (0x1UL << WDT_REQSTATUS_RR4_Pos) /*!< Bit mask of RR4 field. */
#define WDT_REQSTATUS_RR4_DisabledOrRequested (0x0UL) /*!< RR[4] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR4_EnabledAndUnrequested (0x1UL) /*!< RR[4] register is enabled, and are not yet requesting reload */

/* Bit 3 : Request status for RR[3] register */
#define WDT_REQSTATUS_RR3_Pos (3UL) /*!< Position of RR3 field. */
#define WDT_REQSTATUS_RR3_Msk (0x1UL << WDT_REQSTATUS_RR3_Pos) /*!< Bit mask of RR3 field. */
#define WDT_REQSTATUS_RR3_DisabledOrRequested (0x0UL) /*!< RR[3] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR3_EnabledAndUnrequested (0x1UL) /*!< RR[3] register is enabled, and are not yet requesting reload */

/* Bit 2 : Request status for RR[2] register */
#define WDT_REQSTATUS_RR2_Pos (2UL) /*!< Position of RR2 field. */
#define WDT_REQSTATUS_RR2_Msk (0x1UL << WDT_REQSTATUS_RR2_Pos) /*!< Bit mask of RR2 field. */
#define WDT_REQSTATUS_RR2_DisabledOrRequested (0x0UL) /*!< RR[2] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR2_EnabledAndUnrequested (0x1UL) /*!< RR[2] register is enabled, and are not yet requesting reload */

/* Bit 1 : Request status for RR[1] register */
#define WDT_REQSTATUS_RR1_Pos (1UL) /*!< Position of RR1 field. */
#define WDT_REQSTATUS_RR1_Msk (0x1UL << WDT_REQSTATUS_RR1_Pos) /*!< Bit mask of RR1 field. */
#define WDT_REQSTATUS_RR1_DisabledOrRequested (0x0UL) /*!< RR[1] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR1_EnabledAndUnrequested (0x1UL) /*!< RR[1] register is enabled, and are not yet requesting reload */

/* Bit 0 : Request status for RR[0] register */
#define WDT_REQSTATUS_RR0_Pos (0UL) /*!< Position of RR0 field. */
#define WDT_REQSTATUS_RR0_Msk (0x1UL << WDT_REQSTATUS_RR0_Pos) /*!< Bit mask of RR0 field. */
#define WDT_REQSTATUS_RR0_DisabledOrRequested (0x0UL) /*!< RR[0] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR0_EnabledAndUnrequested (0x1UL) /*!< RR[0] register is enabled, and are not yet requesting reload */

/* Register: WDT_RCNT */
/* Description: Reload count */

/* Bits 1..0 : Reload count, number of times the watchdog has been reloaded (kicked) */
#define WDT_RCNT_RCNT_Pos (0UL) /*!< Position of RCNT field. */
#define WDT_RCNT_RCNT_Msk (0x3UL << WDT_RCNT_RCNT_Pos) /*!< Bit mask of RCNT field. */

/* Register: WDT_CRV */
/* Description: Counter reload value */

/* Bits 31..0 : Counter reload value in number of cycles of the 32.768 kHz clock */
#define WDT_CRV_CRV_Pos (0UL) /*!< Position of CRV field. */
#define WDT_CRV_CRV_Msk (0xFFFFFFFFUL << WDT_CRV_CRV_Pos) /*!< Bit mask of CRV field. */

/* Register: WDT_RREN */
/* Description: Enable register for reload request registers */

/* Bit 7 : Enable or disable RR[7] register */
#define WDT_RREN_RR7_Pos (7UL) /*!< Position of RR7 field. */
#define WDT_RREN_RR7_Msk (0x1UL << WDT_RREN_RR7_Pos) /*!< Bit mask of RR7 field. */
#define WDT_RREN_RR7_Disabled (0x0UL) /*!< Disable RR[7] register */
#define WDT_RREN_RR7_Enabled (0x1UL) /*!< Enable RR[7] register */

/* Bit 6 : Enable or disable RR[6] register */
#define WDT_RREN_RR6_Pos (6UL) /*!< Position of RR6 field. */
#define WDT_RREN_RR6_Msk (0x1UL << WDT_RREN_RR6_Pos) /*!< Bit mask of RR6 field. */
#define WDT_RREN_RR6_Disabled (0x0UL) /*!< Disable RR[6] register */
#define WDT_RREN_RR6_Enabled (0x1UL) /*!< Enable RR[6] register */

/* Bit 5 : Enable or disable RR[5] register */
#define WDT_RREN_RR5_Pos (5UL) /*!< Position of RR5 field. */
#define WDT_RREN_RR5_Msk (0x1UL << WDT_RREN_RR5_Pos) /*!< Bit mask of RR5 field. */
#define WDT_RREN_RR5_Disabled (0x0UL) /*!< Disable RR[5] register */
#define WDT_RREN_RR5_Enabled (0x1UL) /*!< Enable RR[5] register */

/* Bit 4 : Enable or disable RR[4] register */
#define WDT_RREN_RR4_Pos (4UL) /*!< Position of RR4 field. */
#define WDT_RREN_RR4_Msk (0x1UL << WDT_RREN_RR4_Pos) /*!< Bit mask of RR4 field. */
#define WDT_RREN_RR4_Disabled (0x0UL) /*!< Disable RR[4] register */
#define WDT_RREN_RR4_Enabled (0x1UL) /*!< Enable RR[4] register */

/* Bit 3 : Enable or disable RR[3] register */
#define WDT_RREN_RR3_Pos (3UL) /*!< Position of RR3 field. */
#define WDT_RREN_RR3_Msk (0x1UL << WDT_RREN_RR3_Pos) /*!< Bit mask of RR3 field. */
#define WDT_RREN_RR3_Disabled (0x0UL) /*!< Disable RR[3] register */
#define WDT_RREN_RR3_Enabled (0x1UL) /*!< Enable RR[3] register */

/* Bit 2 : Enable or disable RR[2] register */
#define WDT_RREN_RR2_Pos (2UL) /*!< Position of RR2 field. */
#define WDT_RREN_RR2_Msk (0x1UL << WDT_RREN_RR2_Pos) /*!< Bit mask of RR2 field. */
#define WDT_RREN_RR2_Disabled (0x0UL) /*!< Disable RR[2] register */
#define WDT_RREN_RR2_Enabled (0x1UL) /*!< Enable RR[2] register */

/* Bit 1 : Enable or disable RR[1] register */
#define WDT_RREN_RR1_Pos (1UL) /*!< Position of RR1 field. */
#define WDT_RREN_RR1_Msk (0x1UL << WDT_RREN_RR1_Pos) /*!< Bit mask of RR1 field. */
#define WDT_RREN_RR1_Disabled (0x0UL) /*!< Disable RR[1] register */
#define WDT_RREN_RR1_Enabled (0x1UL) /*!< Enable RR[1] register */

/* Bit 0 : Enable or disable RR[0] register */
#define WDT_RREN_RR0_Pos (0UL) /*!< Position of RR0 field. */
#define WDT_RREN_RR0_Msk (0x1UL << WDT_RREN_RR0_Pos) /*!< Bit mask of RR0 field. */
#define WDT_RREN_RR0_Disabled (0x0UL) /*!< Disable RR[0] register */
#define WDT_RREN_RR0_Enabled (0x1UL) /*!< Enable RR[0] register */

/* Register: WDT_CONFIG */
/* Description: Configuration register */

/* Bit 5 : Enable or disable possibility to reload the watchdog counter between TIMEOUT and watchdog reset */
#define WDT_CONFIG_RELOAD_Pos (5UL) /*!< Position of RELOAD field. */
#define WDT_CONFIG_RELOAD_Msk (0x1UL << WDT_CONFIG_RELOAD_Pos) /*!< Bit mask of RELOAD field. */
#define WDT_CONFIG_RELOAD_Disabled (0x0UL) /*!< Disable */
#define WDT_CONFIG_RELOAD_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Watchdog operation mode */
#define WDT_CONFIG_MODE_Pos (4UL) /*!< Position of MODE field. */
#define WDT_CONFIG_MODE_Msk (0x1UL << WDT_CONFIG_MODE_Pos) /*!< Bit mask of MODE field. */
#define WDT_CONFIG_MODE_Watchdog (0x0UL) /*!< Use the watchdog timer as a watchdog */
#define WDT_CONFIG_MODE_Timer (0x1UL) /*!< Use the watchdog timer as a timer */

/* Bit 3 : Configure the watchdog to either be paused, or kept running, while the CPU is halted by the debugger */
#define WDT_CONFIG_HALT_Pos (3UL) /*!< Position of HALT field. */
#define WDT_CONFIG_HALT_Msk (0x1UL << WDT_CONFIG_HALT_Pos) /*!< Bit mask of HALT field. */
#define WDT_CONFIG_HALT_Pause (0x0UL) /*!< Pause watchdog while the CPU is halted by the debugger */
#define WDT_CONFIG_HALT_Run (0x1UL) /*!< Keep the watchdog running while the CPU is halted by the debugger */

/* Bit 1 : Enable or disable override of system OFF mode */
#define WDT_CONFIG_OFF_Pos (1UL) /*!< Position of OFF field. */
#define WDT_CONFIG_OFF_Msk (0x1UL << WDT_CONFIG_OFF_Pos) /*!< Bit mask of OFF field. */
#define WDT_CONFIG_OFF_Disabled (0x0UL) /*!< No impact on system OFF mode */
#define WDT_CONFIG_OFF_Enabled (0x1UL) /*!< Prevent system OFF mode when watchdog is running */

/* Bit 0 : Configure the watchdog to either be paused, or kept running, while the CPU is sleeping */
#define WDT_CONFIG_SLEEP_Pos (0UL) /*!< Position of SLEEP field. */
#define WDT_CONFIG_SLEEP_Msk (0x1UL << WDT_CONFIG_SLEEP_Pos) /*!< Bit mask of SLEEP field. */
#define WDT_CONFIG_SLEEP_Pause (0x0UL) /*!< Pause watchdog while the CPU is sleeping */
#define WDT_CONFIG_SLEEP_Run (0x1UL) /*!< Keep the watchdog running while the CPU is sleeping */

/* Register: WDT_RRKEY */
/* Description: Reload request key */

/* Bits 31..0 : Reload request key */
#define WDT_RRKEY_RRKEY_Pos (0UL) /*!< Position of RRKEY field. */
#define WDT_RRKEY_RRKEY_Msk (0xFFFFFFFFUL << WDT_RRKEY_RRKEY_Pos) /*!< Bit mask of RRKEY field. */

/* Register: WDT_RR */
/* Description: Description collection: Reload request n */

/* Bits 31..0 : Reload request register */
#define WDT_RR_RR_Pos (0UL) /*!< Position of RR field. */
#define WDT_RR_RR_Msk (0xFFFFFFFFUL << WDT_RR_RR_Pos) /*!< Bit mask of RR field. */
#define WDT_RR_RR_Reload (0x6E524635UL) /*!< Value to request a reload of the watchdog timer */


/*lint --flb "Leave library region" */
#endif
