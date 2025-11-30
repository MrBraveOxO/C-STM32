#ifndef Header1_h
#define Header1_h
typedef enum CarType {SEDAN,SUV,TRUCK} cartype;

typedef struct Car {
	char plate[20];
	int cc;
	cartype type;
}car;

void initCar(car* c, char* plate, int cc, cartype type);
void setCC(car* c, int newCC);
void printCar(car c);
#endif 
