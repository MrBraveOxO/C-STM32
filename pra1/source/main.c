#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header1.h"

int main() {
    int a, b;
    printf("輸入a的值：");
    scanf("%d",&a);
    printf("輸入b的值：");
    scanf("%d",&b);
    swap(&a, &b);
    system("pause");
    return 0;
}