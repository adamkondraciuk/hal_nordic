/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRFX_PM_DRIVER_H__
#define NRFX_PM_DRIVER_H__

#include <helpers/include/nrfx_pm.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_pm Power Management
 * @{
 * @ingroup nrfx
 * @brief   Power Management interface.
 */


typedef enum {
    NRFX_PM_STATE_OFF,
    NRFX_PM_STATE_WAKING_UP,
    NRFX_PM_STATE_ON,
    NRFX_PM_STATE_POWERING_DOWN,
} nrfx_pm_state_t;

typedef enum {
    NRFX_PM_OPERATION_TURN_OFF,
    NRFX_PM_OPERATION_TURN_ON,
} nrfx_pm_operation_t;

typedef nrfx_err_t (*nrfx_pm_transition_handler_t)(nrfx_pm_operation_t operation);

typedef struct
{
    nrfx_pm_transition_handler_t transition_handler;
    nrfx_pm_event_handler_t      event_handler;
    nrfx_pm_state_t              current_state;
    nrfx_pm_state_t              required_state;
    bool                         peripheral_busy;
} nrfx_pm_t;


/**
 * @brief Power Management default configuration.
 * This configuration must be used internally in the drivers.
 *
 * @param[in] _transition_handler Transition handler provided by driver.
 */
#define NRFX_PM_DEFAULT_CONFIG(_transition_handler) \
    {                                               \
        .transition_handler = _transition_handler,  \
        .event_handler      = NULL,                 \
        .current_state      = NRFX_PM_STATE_OFF,    \
        .required_state     = NRFX_PM_STATE_OFF,    \
        .peripheral_busy    = false                 \
    }

/**
 * @brief Function has to be called when power up or power down procedure is finished.
 *
 * @param p_pm Pointer to the driver power management instance structure.
 */
void nrfx_pm_notify(nrfx_pm_t * p_pm);

/**
 * @brief This function should be used inside the driver to check if peripheral is powered on.
 *
 * @param p_pm Pointer to the driver power management instance structure.
 *
 * @retval true  Peripheral instance is powered on.
 * @retval false Peripheral instance is powered off.
 */
bool nrfx_pm_is_powered(nrfx_pm_t * p_pm);

/**
 * @brief This funciton should be used by driver to let PM know that something very important is processing now.
 * Ofc power down procedure with force flag omits it.
 *
 * @param p_pm    Pointer to the driver power management instance structure.
 * @param is_busy Flag to be set by driver.
 */
void nrfx_pm_busy_set(nrfx_pm_t * p_pm, bool is_busy);

/**
 * @brief This function has to be called by driver when initialization is done and peripheral is configured.
 *
 * @param p_pm    Pointer to the driver power management instance structure.
 */
void nrfx_pm_powered_set(nrfx_pm_t * p_pm);

#ifdef __cplusplus
}
#endif

#endif // NRFX_PM_DRIVER_H__
