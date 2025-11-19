#include <stdio.h>
#include <stdlib.h>
#include "Header1.h"

void printPerson(person p) {
	printf("Name:	%s\n", p.name);
	printf("Age:	%d\n", p.age);
	printf("Height:	%.1f\n", p.height);
}