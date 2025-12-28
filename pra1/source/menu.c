#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header1.h"

void menu(Student** student, int* stu_amount) {
	printf("請選擇功能:\n");
        printf("0.離開程式\n");
        printf("1.新增學生\n");
        printf("2.刪除學生\n");
        printf("3.顯示學生資料\n");
        printf("4.修改學生資料\n");
        printf("5.印出各年級學生成績排行\n");
        printf("6.讀取學生資料\n\n");
        act_s act;
        scanf("%d",&act);
        if (act == act_exit) return;

        switch (act) {
        case add: 
            CreateStudent(student,stu_amount);
            break;
        case del:
            ShowStudent(*student, *stu_amount);
            DelStudent(student,stu_amount);
            break;
        case show:
            ShowStudent(*student,*stu_amount);
            break;
        case revise:
            ShowStudent(*student, *stu_amount);
            ReviseStudent(student,*stu_amount);
            break;
        case printexcel:
            PrintExcel(*student,*stu_amount);
            break;
        case read_data:
           Read(student,stu_amount);
            break;
        default:
            printf("輸入錯誤，請重新選擇功能\n\n");
            break;
        }
}