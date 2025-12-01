#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header1.h"
void inputStudent(Student* s) {
    printf("請輸入姓名:");
    scanf("%s", s->name);
    printf("請輸入年齡:");
    scanf("%d", &s->age);
    printf("請輸入年級:");
    scanf("%d", &s->grade);
    printf("請輸入分數:");
    scanf("%f", &s->score);
    printf("\n");
}
Student* createStudent() {
    Student *s = malloc(sizeof(Student)*1);
    printf("請輸入姓名:");
    scanf("%s", s->name);
    printf("請輸入年齡:");
    scanf("%d", &s->age);
    printf("請輸入年級:");
    scanf("%d", &s->grade);
    printf("請輸入分數:");
    scanf("%f", &s->score);
    printf("\n");
    return s;
}