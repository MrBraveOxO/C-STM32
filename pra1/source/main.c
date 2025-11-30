#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header1.h"



int main() {
    car c;
    char plate[20];
    int cc,cc2;
    cartype type;
    printf("块ó进獺......\n");
    printf("ó礟:");
    scanf("%s", plate);
    printf("cc计:");
    scanf("%d", &cc);
    printf("ó蹿:");
    scanf("%d", &type);
    printf("﹍てó进......\n");
    initCar(&c,plate,cc,type);
    printCar(c);
    printf("эcc计......\n");
    printf("эcc计:");
    scanf("%d",&cc2);
    setCC(&c,cc2);
    printCar(c);
    return 0;
   
}