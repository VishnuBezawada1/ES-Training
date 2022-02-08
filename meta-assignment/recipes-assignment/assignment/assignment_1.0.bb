DESCRIPTION = "Assignment-5 recipe"
SECTION = "Mywork"
LICENSE="CLOSED"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"
SRC_URI = "file://assignment.c"
S = "${WORKDIR}"
TARGET_CC_ARCH += "${LDFLAGS}"
do_compile() {
         ${CC} assignment.c -o assignment
}
do_install() {
         install -d ${D}${bindir}
         install -m 0755 assignment ${D}${bindir}
}
