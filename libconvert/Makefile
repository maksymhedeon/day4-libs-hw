TARGET = libconvert

LIB = $(TARGET).so

SRC = upper.c lower.c

INC = convert.h

LIB_PATH = /usr/lib

INC_PATH = /usr/include

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror -fpic

all: $(TARGET)

$(TARGET): $(OBJ)
	gcc -shared $(OBJ) -o $(LIB)

%.o : %.c
	gcc $(FLAGS) -c $<

clean:
	test -z $(LIB) || rm -f $(LIB)
	rm -f $(OBJ)

install:
	cp $(LIB) $(LIB_PATH)/
	chmod 0755 $(LIB_PATH)/$(LIB)
	cp $(INC) $(INC_PATH)/

uninstall:
	test -z $(LIB_PATH)/$(LIB) || rm $(LIB_PATH)/$(LIB)
	test -z $(INC_PATH)/$(INC) || rm $(INC_PATH)/$(INC)

