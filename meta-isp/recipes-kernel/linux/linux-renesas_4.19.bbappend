#
# Copyright (C) 2020-2021 RenesasElectronics, Co, Ltd.
#
DESCRIPTION = "ISP package with kernel for the RZV2M based board"

FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_r9a09g011gbg += " \
    file://0001-modified-rzv2m-device-tree.patch \
    file://0002-hardirq.h.patch \
    file://0003-smp.c.patch \
    file://0004-uio_pdrv_genirq.c.patch \
    file://0005-add-v4l2-comctl-driver.patch \
"
KERNEL_FEATURES += " openamp_uio.scc"
KERNEL_FEATURES += " strict_devmem.scc"
