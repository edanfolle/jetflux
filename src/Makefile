SRCS = main.c \
			 server.c

OBJS = $(SRCS:.c=.o)
TARGET = app

CC = gcc
CFLAGS = -O3
LDFLAGS = -lpthread

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(LDFLAGS) $^

clean:
	$(RM) $(OBJS) $(TARGET)
