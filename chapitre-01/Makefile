##############################################################################
## Exemple de la formation "Temps-reel sous Linux"
##
## Christophe Blaess 2010-2023
## http://christophe.blaess.fr
## Licence GPLv2
##############################################################################


CROSS_COMPILE ?=

CC = $(CROSS_COMPILE)gcc
AS = $(CROSS_COMPILE)as
LD = $(CROSS_COMPILE)gcc

CFLAGS=-Wall -g -pthread
LDFLAGS=-pthread
LOADLIBES=-lrt


EXE:=                 \
  exemple-I-01        \
  exemple-I-02        \
  exemple-I-03        \
  exemple-I-04        \
  exemple-I-05        \
  exemple-I-06        \
  exemple-I-07        \
  exemple-I-08        \
  exemple-I-09        \
  exemple-I-10        \
  exemple-I-11        \
  exemple-I-12        \


.PHONY: all
all: $(EXE)


.PHONY: clean
clean::
	rm -f $(EXE) *.o *~

