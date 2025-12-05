#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header1.h"

void CreateStudent(Student** student,int* stu_amount) {
	(*stu_amount)++;
	*student = realloc(*student, sizeof(Student) * (*stu_amount));
	printf("輸入新增學生姓名:");
	scanf("%s",(*student)[*stu_amount-1].name);
	printf("輸入新增學生年齡:");
	scanf("%d", &(*student)[*stu_amount - 1].age);
	printf("輸入新增學生成績:");
	scanf("%f", &(*student)[*stu_amount - 1].score);
	printf("輸入新增學生年級:");
	scanf("%d", &(*student)[*stu_amount - 1].grade);
	printf("\n");
	printf("新增成功\n\n");
}
void DelStudent(Student** student, int* stu_amount) {
	int del;
	Student* new_stu = 0;
	if ((*stu_amount) == 0) {
		printf("已無學生資料可刪除!\n\n");
		return;
	}
	printf("請問要刪除第幾位學生的資料?\n");
	scanf("%d", &del);
	if (del == 0) {
		printf("已取消!\n\n");
	}
	else {
		(*stu_amount)--;
		del--;
		new_stu = malloc(sizeof(Student) * (*stu_amount));
		int i = 0;
		int j = del;
		while (i < del) {
			new_stu[i] = (*student)[i];
			i++;
		}
		for (int j = del; j < *stu_amount;j++)	new_stu[j] = (*student)[j + 1];
		free(*student);
		*student = new_stu;
		printf("刪除成功\n\n");

	}
	
}

void ReviseStudent(Student** student, int stu_amount) {
	printf("請問想更改哪一位學生的資料?\n");
	int stu;
	scanf("%d", &stu);
	if (stu == 0) {
		printf("已取消修改!\n\n");
		return;
	}
	else {
		printf("請問想修改哪項呢? 1.姓名 2.年齡 3.年級 4.成績\n");
		int revise;
		scanf("%d", &revise);
		switch (revise) {
			case 1:
				scanf("%s", (*student)[stu - 1].name);
				break;
			case 2:
				scanf("%d",&(*student)[stu - 1].age);
				break;
			case 3: 
				scanf("%d", &(*student)[stu - 1].grade);
				break;
			case 4:
				scanf("%f", &(*student)[stu - 1].score);
				break;
			default: 
				printf("輸入錯誤，修改失敗!\n\n");
				return;
				break;
		};
		printf("修改成功!\n\n");
	}
}
