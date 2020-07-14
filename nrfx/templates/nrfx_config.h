/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRFX_CONFIG_H__
#define NRFX_CONFIG_H__

#if defined(NRF51)
    #include <nrfx_config_nrf51.h>
#elif defined(NRF52810_XXAA)
    #include <nrfx_config_nrf52810.h>
#elif defined(NRF52811_XXAA)
    #include <nrfx_config_nrf52811.h>
#elif defined(NRF52820_XXAA)
    #include <nrfx_config_nrf52820.h>
#elif defined(NRF52832_XXAA) || defined (NRF52832_XXAB)
    #include <nrfx_config_nrf52832.h>
#elif defined(NRF52833_XXAA)
    #include <nrfx_config_nrf52833.h>
#elif defined(NRF52840_XXAA)
    #include <nrfx_config_nrf52840.h>
#elif defined(NRF5340_XXAA) && defined(NRF_APPLICATION)
    #include <nrfx_config_nrf5340_application.h>
#elif defined(NRF5340_XXAA) && defined(NRF_NETWORK)
    #include <nrfx_config_nrf5340_network.h>
#elif defined(HALTIUM_XXAA) && defined(NRF_APPLICATION)
    #include <nrfx_config_haltium_application.h>
#elif defined(HALTIUM_XXAA) && defined(NRF_NETWORK)
    #include <nrfx_config_haltium_network.h>
#elif defined(HALTIUM_XXAA) && defined(NRF_FLPR)
    #include <nrfx_config_haltium_flpr.h>
#elif defined(HALTIUM_XXAA) && defined(NRF_SYSCTRL)
    #include <nrfx_config_haltium_sysctrl.h>
#elif defined(NRF9160_XXAA)
    #include <nrfx_config_nrf9160.h>
#else
    #error "Unknown device."
#endif

#if defined(HALTIUM_XXAA)
    #include <nrfx_config_haltium_global.h>
#endif

#endif // NRFX_CONFIG_H__
