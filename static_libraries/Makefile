CC = gcc
A = ar
RC = rc
SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)
RM = rm

%.o:%.c
	$(CC) -c $< -o $@

all:$(OBJ)

library:$(OBJ)
	$(A) $(RC) libmy.a $(OBJ)

clean:
	$(RM) -f $(OBJ)
