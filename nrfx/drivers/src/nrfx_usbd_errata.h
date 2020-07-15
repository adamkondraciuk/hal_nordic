/*$$$LICENCE_NORDIC_STANDARD<2016>$$$*/

#ifndef NRFX_USBD_ERRATA_H__
#define NRFX_USBD_ERRATA_H__

#include <nrfx.h>
#include <nrf_erratas.h>

#ifndef NRFX_USBD_ERRATA_ENABLE
/**
 * @brief The constant that informs if errata should be enabled at all.
 *
 * If this constant is set to 0, all the Errata bug fixes will be automatically disabled.
 */
#define NRFX_USBD_ERRATA_ENABLE 1
#endif

/* Errata: ISO double buffering not functional. **/
static inline bool nrfx_usbd_errata_166(void)
{
    return NRFX_USBD_ERRATA_ENABLE && nrf52_errata_166();
}

/* Errata: USBD might not reach its active state. **/
static inline bool nrfx_usbd_errata_171(void)
{
    return NRFX_USBD_ERRATA_ENABLE && nrf52_errata_171();
}

/* Errata: USB cannot be enabled. **/
static inline bool nrfx_usbd_errata_187(void)
{
    return NRFX_USBD_ERRATA_ENABLE && nrf52_errata_187();
}

/* Errata: USBD cannot receive tasks during DMA. **/
static inline bool nrfx_usbd_errata_199(void)
{
    return NRFX_USBD_ERRATA_ENABLE && nrf52_errata_199();
}

#endif // NRFX_USBD_ERRATA_H__
