#
# \brief  Framebuffer driver specific for OMAP44xx systems
# \author Martin Stein
# \date   2012-05-02
#

TARGET   = omap4_fb_drv
REQUIRES = omap4
SRC_CC   = main.cc
LIBS     = cxx env server signal
INC_DIR += $(PRG_DIR)

vpath main.cc $(PRG_DIR)

