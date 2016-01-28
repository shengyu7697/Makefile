TARGET = a.out

CC = gcc
CFLAGS = -O0 -g # for Debug
#CFLAGS = -W -Wall -O3 # for Release
LDFLAGS =
RM = rm -rf
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

LIBS =
ifneq ($(LIBS),)
CFLAGS += $(shell pkg-config --cflags $(LIBS))
LDFLAGS += $(shell pkg-config --libs $(LIBS))
endif

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	$(RM) *.o $(TARGET)

