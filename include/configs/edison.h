/*
 * Copyright (c) 2015 Google, Inc
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <configs/x86-common.h>

#define CONFIG_INTEL_MID
#define CONFIG_SFI

#undef CONFIG_CMD_SF_TEST

#undef CONFIG_TPM_TIS_BASE_ADDRESS

#undef CONFIG_CMD_IMLS

#undef CONFIG_SYS_NS16550
#undef CONFIG_X86_SERIAL
#undef CONFIG_ENV_IS_IN_SPI_FLASH
#define CONFIG_ENV_IS_NOWHERE
#undef CONFIG_VIDEO
#undef CONFIG_CFB_CONSOLE
#undef CONFIG_SCSI_AHCI
#undef CONFIG_CMD_SCSI
#undef CONFIG_INTEL_ICH6_GPIO
#define CONFIG_CMD_MMC
#define CONFIG_USB_DWC3
#define CONFIG_USB_DWC3_GADGET
#define CONFIG_USB_GADGET
#define CONFIG_USB_GADGET_DOWNLOAD
#define CONFIG_USB_GADGET_DUALSPEED
#define CONFIG_USB_GADGET_VBUS_DRAW 2
#define CONFIG_G_DNL_MANUFACTURER "Intel"
#define CONFIG_G_DNL_VENDOR_NUM 0x8087
#define CONFIG_G_DNL_PRODUCT_NUM 0x0a99
#define CONFIG_SYS_CACHELINE_SIZE 64
#define CONFIG_GENERIC_MMC
#define CONFIG_SDHCI
#define CONFIG_WATCHDOG

#define CONFIG_STD_DEVICES_SETTINGS	"stdin=serial\0" \
					"stdout=serial\0" \
					"stderr=serial\0"

#endif