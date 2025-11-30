#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header1.h"
void initCar(car* c, char* plate, int cc, cartype type) {
	strcpy(c->plate,plate);
	c->cc = cc;
	c->type = type;
}
void setCC(car* c, int newCC) {
	c->cc = newCC;
}