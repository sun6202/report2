#include <stdio.h>
#include "add.h"
#include "substract.h"
#include "multiply.h"
#include "divide.h"

int main(int argc, char **argv){
int x = 15, y = 60;

printf("%d + %d = %d\n", x, y , add(x,y));
printf("%d - %d = %d\n", x, y , substract(x,y));
printf("%d * %d = %d\n", x, y , multiply(x,y));
printf("%d / %d = %d\n", x, y , divide(x,y));
}
