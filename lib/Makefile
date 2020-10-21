mathcalc : calc.o add.o substract.o multiply.o divide.o
	gcc -o mathcalc calc.o add.o substract.o multiply.o divide.o

calc.o : calc.c
	gcc -c calc.c

add.o : add.c
	gcc -c add.c

substract.o : substract.c
	gcc -c substract.c

multiply.o : multiply.c
	gcc -c multiply.c

divide.o : divide.c
	gcc -c divide.c

clean :
	rm -f mathcalc calc.o add.o substract.o multiply.o divide.o
