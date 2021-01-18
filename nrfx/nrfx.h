/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_H__
#define NRFX_H__

#include <nrfx_config.h>
#include <drivers/nrfx_common.h>
#include <nrfx_glue.h>
#include <drivers/nrfx_errors.h>

#if NRFX_CHECK(NRFX_PM_ENABLED)
#include <helpers/include/nrfx_pm.h>
#endif

#endif // NRFX_H__
