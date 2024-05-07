/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2022 Intel Corporation
 */

#ifndef _XE_GUC_ADS_TYPES_H_
#define _XE_GUC_ADS_TYPES_H_

#include <linux/types.h>

struct xe_bo;

/**
 * struct xe_guc_ads - GuC additional data structures (ADS)
 */
struct xe_guc_ads {
	/** @bo: XE BO for GuC ads blob */
	struct xe_bo *bo;
	/** @golden_lrc_size: golden LRC size */
	size_t golden_lrc_size;
	/** @regset_size: size of register set passed to GuC for save/restore */
	u32 regset_size;
};

#endif
