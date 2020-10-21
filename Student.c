#include <stdio.h>
#include <stdlib.h>

typedef struct _node* tree;
typedef struct _node node;

struct _node {
	int index;
	char name[100];
	int midterm;
	int lastterm;
};

tree InputIntf(tree dynamicheap, int studentnum) {
	int _ = 0;
	dynamicheap = (tree)malloc(studentnum * sizeof(node));

	if(!dynamicheap)
		exit(1);

	for(_=0; _ < studentnum; _++){
		printf("%d Student \n", _+1);
		printf("Midterm exam Score : ");
		scanf("%d", &dynamicheap[_].midterm);
		printf("Lastterm exam Score : ");
		scanf("%d", &dynamicheap[_].lastterm);
		printf("Name : ");
		scanf("%s", dynamicheap[_].name);

		dynamicheap[_].index = 1+_;
		printf("\n");
	}
	return dynamicheap;
}

void printTree(tree t, int index, int studentnum) {
	if(index == studentnum){
		return;
	}

	else{
		printf("%d Student\n", t[index].index);
		printf("Name : %s\n", t[index].name);
		printf("Midterm exam Score : %d\n", t[index].midterm);
		printf("Lastterm exam Score : %d\n", t[index]. lastterm);
		printTree(t, index+1, studentnum);
	}
}

void main() {
	int studentnum = 0;
	tree dynamicheap = 0;

	printf("Input Number of Student : ");
	scanf("%d", &studentnum);
	dynamicheap = InputIntf(dynamicheap, studentnum);
	printTree(dynamicheap, 0, studentnum);
	free(dynamicheap);
}
