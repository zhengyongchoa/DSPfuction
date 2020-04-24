.PHONY: all
all: clean libdsp install demo

clean:
	rm -f *.o
	rm -f ./src/*.o
	rm -f *.a
	rm -f ./lib/libdsp.a
	rm -f demo

INC := -I$(PWD)/include/
CFLAGS  := -L$(PWD)/lib/
LIBS	?= -L./lib -ldsp -lm

SRC  := $(wildcard ./src/*.C)
OBJ  := $(SRC:%.C=%.o)

$(OBJ):%.o:%.c
	@echo "--------compileing $@-----------"	
	gcc -Wall -c $(CFLAGS) $(INC) -o $@ $<

libdsp:$(OBJ)
	ar -rcs libdsp.a $(OBJ)

install:
	cp *.a ./lib/

demo :main.o
	gcc -Wall -O2 $(INC) -o $@ $^ $(LIBS)

main.o :main.c
	@echo "--------compileing $@-----------"
	gcc -Wall -c $(CFLAGS) $(INC) -o $@ $<

.PHONY: all
