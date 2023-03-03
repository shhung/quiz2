CC = gcc
CFLAGS = -Wall -Wextra

SRCS = $(wildcard *.c)
EXES = $(SRCS:.c=)

all: $(EXES)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
