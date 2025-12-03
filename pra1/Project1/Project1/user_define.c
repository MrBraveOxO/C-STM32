#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header1.h"

Student* CreateStudent(Student* student,int stu_amount) {
	Student* new_student = realloc(student, sizeof(Student) * (stu_amount));
	printf("輸入新增學生姓名:");
	scanf("%s",new_student[stu_amount-1].name);
	printf("輸入新增學生年齡:");
	scanf("%d",&new_student[stu_amount - 1].age);
	printf("輸入新增學生成績:");
	scanf("%f", &new_student[stu_amount - 1].score);
	printf("輸入新增學生年級:");
	scanf("%d", &new_student[stu_amount - 1].grade);

	return new_student;
}