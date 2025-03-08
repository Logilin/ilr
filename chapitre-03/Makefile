##############################################################################
## Exemple de la formation "Temps-reel sous Linux"
##
## Christophe Blaess 2010-2025
## http://christophe.blaess.fr
## Licence GPLv2
##############################################################################

APPLICATIONS:=      \
  exemple-III-01    \
  exemple-III-02    \
  exemple-III-03    \
  exemple-III-04    \
  exemple-III-07    \
  exemple-III-08    \
  exemple-III-09    \
  exemple-III-10    \
  exemple-III-11    \
  exemple-III-12    \


ifneq ($(KERNELRELEASE),)

  obj-m += exemple-III-05.o
  obj-m += exemple-III-06.o


else

CFLAGS=-Wall -g -pthread
LDFLAGS=-pthread
LOADLIBES=-lrt

CROSS_COMPILE ?=
ARCH          ?=
KERNEL_DIR    ?= /lib/modules/$(shell uname -r)/build
MODULE_DIR    := $(shell pwd)

CC = $(CROSS_COMPILE)gcc
AS = $(CROSS_COMPILE)as
LD = $(CROSS_COMPILE)gcc


.PHONY: all
all: $(APPLICATIONS)

.PHONY: modules
modules:
	$(MAKE) arch=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERNEL_DIR) M=$(MODULE_DIR)  modules

.PHONY: clean
clean:
	rm -f $(APPLICATIONS) *.o *~
	rm -f *.o *.ko *.mod.c modules.order Module.symvers
	rm -rf .tmp_versions .*.cmd

endif
