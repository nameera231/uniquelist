CC := clang
CFLAGS := -g -Wall -Werror

all: uniquelist-test

clean:
	rm -f uniquelist-test

uniquelist-test: main.c uniquelist.c uniquelist.h
	$(CC) $(CFLAGS) -o uniquelist-test main.c uniquelist.c
