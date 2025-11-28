#include <stdio.h>
#include <stdlib.h>
#include "Header1.h"
const char* gender_classic[] = {"男","女","其他"};

void printPerson(person p) {
	printf("Name:	%s\n", p.name);
	printf("Gender:	%s\n", gender_classic[p.gender]);
	printf("Age:	%d\n", p.age);
	printf("Height:	%.1f\n", p.height);
}