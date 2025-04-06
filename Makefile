CC = gcc
CFLAGS = -Wall -Wextra -I.
SRC = main.c
OBJ = $(SRC:.c=.o)
TARGET = my_amazed

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean