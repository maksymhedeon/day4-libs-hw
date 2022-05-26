TARGET = main

SRC = main.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: libcalc-all libconvert-install $(TARGET)

libcalc-all:
	make -C libcalc

libcalc-clean:
	make clean -C libcalc

libconvert-all:
	make -C libconvert

libconvert-clean:
	make clean -C libconvert

libconvert-install:
	make install -C libconvert

libconvert-uninstall:
	make uninstall -C libconvert

$(TARGET): $(OBJ)
	ldconfig
	unset LD_LIBRARY_PATH
	gcc $(OBJ) -L libcalc -lcalc -lm -lconvert -o $(TARGET)

%.o : %.c
	gcc $(FLAGS) -c $<

clean: libcalc-clean libconvert-uninstall
	test -z $(TARGET) || rm -f $(TARGET)
	rm -f $(OBJ)

