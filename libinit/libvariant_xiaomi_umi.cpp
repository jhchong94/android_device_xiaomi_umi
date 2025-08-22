/*
 * Copyright (C) 2021-2025 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libvariant.h>

static const variant_info umi_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "umi",
    .marketname = "",
    .model = "Mi 10",
    .build_fingerprint = "Xiaomi/umi_global/umi:11/RKQ1.200826.002/V12.5.2.0.RJBMIXM:user/release-keys",

    .nfc = true,
};

const std::vector<variant_info> variants = {
    umi_info,
};
