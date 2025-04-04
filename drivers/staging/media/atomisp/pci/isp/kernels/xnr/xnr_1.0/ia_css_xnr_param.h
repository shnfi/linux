/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 */

#ifndef __IA_CSS_XNR_PARAM_H
#define __IA_CSS_XNR_PARAM_H

#include "type_support.h"
#include <system_global.h>

#ifndef PIPE_GENERATION
#define SH_CSS_ISP_XNR_TABLE_SIZE_LOG2       IA_CSS_VAMEM_2_XNR_TABLE_SIZE_LOG2
#define SH_CSS_ISP_XNR_TABLE_SIZE            IA_CSS_VAMEM_2_XNR_TABLE_SIZE

#else
/* For pipe generation, the size is not relevant */
#define SH_CSS_ISP_XNR_TABLE_SIZE 0
#endif

/* This should be vamem_data_t, but that breaks the pipe generator */
struct sh_css_isp_xnr_vamem_params {
	u16 xnr[SH_CSS_ISP_XNR_TABLE_SIZE];
};

struct sh_css_isp_xnr_params {
	/* XNR threshold.
	 * type:u0.16 but actual valid range is:[0,255]
	 * valid range is dependent on SH_CSS_ISP_YUV_BITS (currently 8bits)
	 * default: 25 */
	u16 threshold;
};

#endif /* __IA_CSS_XNR_PARAM_H */
