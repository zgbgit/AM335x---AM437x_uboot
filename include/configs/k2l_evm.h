/*
 * Configuration header file for TI's k2l-evm
 *
 * (C) Copyright 2012-2014
 *     Texas Instruments Incorporated, <www.ti.com>
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef __CONFIG_K2L_EVM_H
#define __CONFIG_K2L_EVM_H

/* Platform type */
#define CONFIG_SOC_K2L
#define CONFIG_K2L_EVM

/* U-Boot general configuration */
#define CONFIG_EXTRA_ENV_KS2_BOARD_SETTINGS				\
	DEFAULT_FW_INITRAMFS_BOOT_ENV					\
	"addr_mon=0x0c140000\0"						\
	"args_ubi=setenv bootargs ${bootargs} rootfstype=ubifs "	\
	"root=ubi0:rootfs rootflags=sync rw ubi.mtd=ubifs,4096\0"	\
	"name_fdt=k2l-evm.dtb\0"					\
	"name_mon=skern-k2l.bin\0"					\
	"name_ubi=k2l-evm-ubifs.ubi\0"					\
	"name_uboot=u-boot-spi-k2l-evm.gph\0"				\
	"name_fs=arago-console-image-k2l-evm.cpio.gz\0"

/* AEMIF */
#define CONFIG_TI_AEMIF
#define CONFIG_AEMIF_CNTRL_BASE		KS2_AEMIF_CNTRL_BASE
/* Keystone2 Emif16 errata config */
#define K2_AEMIF_PERF_DEGRADE_ERRATA_FIX

/* NAND Configuration */
#define CONFIG_SYS_NAND_PAGE_4K
#define CONFIG_NAND_DAVINCI
#define CONFIG_KEYSTONE_RBL_NAND
#define CONFIG_KEYSTONE_NAND_MAX_RBL_SIZE	CONFIG_ENV_OFFSET
#define CONFIG_SYS_NAND_MASK_CLE		0x4000
#define CONFIG_SYS_NAND_MASK_ALE		0x2000
#define CONFIG_SYS_NAND_CS			2
#define CONFIG_SYS_NAND_4BIT_HW_ECC_OOBFIRST
#define CONFIG_SYS_NAND_LARGEPAGE

#include <configs/ti_armv7_keystone2.h>

/* SPL SPI Loader Configuration */
#define CONFIG_SPL_TEXT_BASE		0x0c100000

/* Network */
#define CONFIG_KSNET_NETCP_V1_5
#define CONFIG_KSNET_CPSW_NUM_PORTS	5
#define CONFIG_PHY_MARVELL

#endif /* __CONFIG_K2L_EVM_H */
