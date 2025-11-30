#include <stdio.h>
#include <stdlib.h>
#include "Header1.h"
const char* type_str[] = {"SEDAN","SUV","TRUCK"};
void printCar(car c) {
	printf("\nPlate:	%s\n",c.plate);
	printf("CC:	%d\n",c.cc);
	printf("Type:	%s\n\n",type_str[c.type]);
}