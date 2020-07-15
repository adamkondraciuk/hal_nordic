/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRF_RESET_H__
#define NRF_RESET_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_reset_hal RESET HAL
 * @{
 * @ingroup nrf_reset
 * @brief   Hardware access layer for managing the RESET peripheral.
 */

/** @brief Reset reason bit masks. */
typedef enum
{
    NRF_RESET_RESETREAS_RESETPIN_MASK  = RESET_RESETREAS_RESETPIN_Msk,  ///< Bit mask of RESETPIN field.
    NRF_RESET_RESETREAS_DOG0_MASK      = RESET_RESETREAS_DOG0_Msk,      ///< Bit mask of DOG0 field.
    NRF_RESET_RESETREAS_CTRLAP_MASK    = RESET_RESETREAS_CTRLAP_Msk,    ///< Bit mask of CTRLAP field.
    NRF_RESET_RESETREAS_SREQ_MASK      = RESET_RESETREAS_SREQ_Msk,      ///< Bit mask of SREQ field.
    NRF_RESET_RESETREAS_LOCKUP_MASK    = RESET_RESETREAS_LOCKUP_Msk,    ///< Bit mask of LOCKUP field.
    NRF_RESET_RESETREAS_OFF_MASK       = RESET_RESETREAS_OFF_Msk,       ///< Bit mask of OFF field.
    NRF_RESET_RESETREAS_LPCOMP_MASK    = RESET_RESETREAS_LPCOMP_Msk,    ///< Bit mask of LPCOMP field.
    NRF_RESET_RESETREAS_DIF_MASK       = RESET_RESETREAS_DIF_Msk,       ///< Bit mask of DIF field.
#if defined(RESET_RESETREAS_LSREQ_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RESET_RESETREAS_LSREQ_MASK     = RESET_RESETREAS_LSREQ_Msk,     ///< Bit mask of LSREQ field.
#endif
#if defined(RESET_RESETREAS_LLOCKUP_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RESET_RESETREAS_LLOCKUP_MASK   = RESET_RESETREAS_LLOCKUP_Msk,   ///< Bit mask of LLOCKUP field.
#endif
#if defined(RESET_RESETREAS_LDOG_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RESET_RESETREAS_LDOG_MASK      = RESET_RESETREAS_LDOG_Msk,      ///< Bit mask of LDOG field.
#endif
#if defined(RESET_RESETREAS_MFORCEOFF_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RESET_RESETREAS_MFORCEOFF_MASK = RESET_RESETREAS_MFORCEOFF_Msk, ///< Bit mask of MFORCEOFF field.
#endif
    NRF_RESET_RESETREAS_NFC_MASK       = RESET_RESETREAS_NFC_Msk,       ///< Bit mask of NFC field.
    NRF_RESET_RESETREAS_DOG1_MASK      = RESET_RESETREAS_DOG1_Msk,      ///< Bit mask of DOG1 field.
    NRF_RESET_RESETREAS_VBUS_MASK      = RESET_RESETREAS_VBUS_Msk,      ///< Bit mask of VBUS field.
#if defined(RESET_RESETREAS_LCTRLAP_Msk) || defined(__NRFX_DOXYGEN__)
    NRF_RESET_RESETREAS_LCTRLAP_MASK   = RESET_RESETREAS_LCTRLAP_Msk,   ///< Bit mask of LCTRLAP field.
#endif
} nrf_reset_resetreas_mask_t;

/**
 * @brief Function for getting the reset reason bitmask.
 *
 * This function returns the reset reason bitmask.
 * Unless cleared, the RESETREAS register is cumulative.
 * If none of the reset sources is flagged, the chip was reset from the on-chip reset generator.
 * This indicates a power-on-reset or a brown out reset.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The mask of reset reasons constructed with @ref nrf_reset_resetreas_mask_t.
 */
NRF_STATIC_INLINE uint32_t nrf_reset_resetreas_get(NRF_RESET_Type const * p_reg);

/**
 * @brief Function for clearing the selected reset reason field.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  The mask constructed from @ref nrf_reset_resetreas_mask_t enumerator values.
 */
NRF_STATIC_INLINE void nrf_reset_resetreas_clear(NRF_RESET_Type * p_reg, uint32_t mask);

#if defined(RESET_NETWORK_FORCEOFF_FORCEOFF_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting the force off signal for the Network core.
 *
 * A force off will reset the Network core and switch off its power and clocks.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] hold  True if the force off signal is to be held.
 *                  False if the force off signal is to be released.
 */
NRF_STATIC_INLINE void nrf_reset_network_force_off(NRF_RESET_Type * p_reg, bool hold);
#endif

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint32_t nrf_reset_resetreas_get(NRF_RESET_Type const * p_reg)
{
    return p_reg->RESETREAS;
}

NRF_STATIC_INLINE void nrf_reset_resetreas_clear(NRF_RESET_Type * p_reg, uint32_t mask)
{
    p_reg->RESETREAS = mask;
}

#if defined(RESET_NETWORK_FORCEOFF_FORCEOFF_Msk) || defined(__NRFX_DOXYGEN__)
NRF_STATIC_INLINE void nrf_reset_network_force_off(NRF_RESET_Type * p_reg, bool hold)
{
    p_reg->NETWORK.FORCEOFF = (hold ? RESET_NETWORK_FORCEOFF_FORCEOFF_Hold :
                                      RESET_NETWORK_FORCEOFF_FORCEOFF_Release);
}
#endif

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_RESET_H__
