TARGET = libcalc

SRC = diff.c div.c facto.c mul.c sroot.c sum.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rc $(TARGET).a $(OBJ)
	ranlib $(TARGET).a

%.o : %.c
	gcc $(FLAGS) -c $<

clean:
	test -z $(TARGET) || rm -f $(TARGET)
	rm -f $(OBJ)

