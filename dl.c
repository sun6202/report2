#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char **argv){

void *handle;
int (*add)(int,int),(*substract)(int,int),(*multiply)(int,int),(*divide)(int,int);
char *error;
int x = 420;
int y = 5;

handle = dlopen("./libcalcso.so", RTLD_LAZY);
if(!handle){
	fputs(dlerror(), stderr);
	_Exit;
}
add = dlsym(handle, "add");
if((error = dlerror()) != NULL){
	fprintf (stderr, "%s", error);
	_Exit;
}

substract = dlsym(handle, "substract");
if((error = dlerror()) != NULL){
	fprintf (stderr, "%s", error);
	_Exit;
}

multiply = dlsym(handle, "multiply");
if((error = dlerror()) != NULL){
	fprintf (stderr, "%s", error);
	_Exit;
}

divide = dlsym(handle, "divide");
if((error = dlerror()) != NULL){
	fprintf (stderr, "%s", error);
	_Exit;
}

	printf("%d + %d = %d\n", x, y, add(x,y));
	printf("%d - %d = %d\n", x, y, substract(x,y));
	printf("%d * %d = %d\n", x, y, multiply(x,y));
	printf("%d / %d = %d\n", x, y, divide(x,y));
}
