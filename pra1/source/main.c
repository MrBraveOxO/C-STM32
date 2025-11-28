#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header1.h"



int main() {
    person p;
    int gen;
    printf("請輸入姓名：");
    scanf("%20s",p.name);
    printf("請輸入性別(男=0，女=1)：");
    scanf("%d",&gen);
    setGender(&p , gen);
    printf("請輸入年齡：");
    scanf("%d",&p.age);
    printf("請輸入身高：");
    scanf("%f",&p.height);
    printPerson(p); 
    return 0;
   
}