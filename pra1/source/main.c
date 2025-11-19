#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header1.h"


int main() {
    struct person p;
    printf("請輸入姓名：");
    scanf("%20s",p.name);
    printf("請輸入年齡：");
    scanf("%d",&p.age);
    printf("請輸入身高：");
    scanf("%f",&p.height);
    printPerson(p);
    return 0;
}