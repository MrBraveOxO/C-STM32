#include <stdio.h>
#include <stdlib.h>

void printArrayByPointer(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ",*(arr+i));
	}
}