FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}/:"

SRC_URI_append += " \
	file://0005-enable-drpai-drv.patch \
	file://0005-support-drpai.h.patch \
"
