FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}/:"

SRC_URI_append += "\
    file://0005-support-drpai.h.patch \
"
FILESEXTRAPATHS_prepend := "${THISDIR}/../linux/linux-renesas:"