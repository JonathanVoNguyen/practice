#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("a = %d\nb = %d\n\n",a ,b);

	int c = a;
	a = b;
	b = c;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return(0);
}