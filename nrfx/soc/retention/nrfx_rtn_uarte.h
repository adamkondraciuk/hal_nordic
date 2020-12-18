/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRFX_RTN_UARTE_H__
#define NRFX_RTN_UARTE_H__

#include <soc/nrfx_rtn_type.h>

#ifdef __cplusplus
extern "C" {
#endif

#define REGS_LIST_FILE             "retention/nrfx_rtn_uarte.regdef"
#define REGS_ITEMS_SPACE_TYPE_NAME nrfx_rtn_uarte_t
#define REGS_ITEMS_CTRL_ARR_NAME   nrfx_rtn_uarte_ctrl_list
#define REGS_ITEMS_DATA_SIZE       nrfx_rtn_uarte_data_size
#include "soc/nrfx_rtn_template.h"

#ifdef __cplusplus
}
#endif

#endif // NRFX_RTN_SAADC_H__
