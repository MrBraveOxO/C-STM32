#include <stdio.h>
#include <stdlib.h>
#include "Header1.h"



void setGender(person *p, int g) {
	switch (g) {
		case 0:
			p->gender = MALE;
			break;
		case 1:
			p->gender = FEMALE;
			break;
		default:
			p->gender = OTHER;
			break;
	}
}