#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header1.h"

typedef enum Act_Status {
    act_exit = 0 ,add,del,show,revise
}act_s;


int main() {
    Student* student = 0;
    int stu_amount = 0;
    while (1) {
        printf("請選擇功能:\n");
        printf("0.離開程式\n");
        printf("1.新增學生\n");
        printf("2.刪除學生\n");
        printf("3.顯示學生資料\n");
        printf("4.修改學生資料\n\n");
        act_s act;
        scanf("%d",&act);
        if (act == act_exit) break;

        switch (act) {
        case add: 
            CreateStudent(&student,&stu_amount);
            break;
        case del:
            ShowStudent(student, stu_amount);
            DelStudent(&student,&stu_amount);
            break;
        case show:
            ShowStudent(student,stu_amount);
            break;
        case revise:
            ShowStudent(student, stu_amount);
            ReviseStudent(&student,stu_amount);
        default:
            printf("輸入錯誤，請重新選擇功能\n\n");
            break;
        };
    }
    
    return 0;
   
}