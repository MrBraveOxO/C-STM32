#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
	printf("swap\n a = %d \n b = %d\n", *a, *b);
	
}