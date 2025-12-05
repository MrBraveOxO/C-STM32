#include <stdio.h>
#include <stdlib.h>
#include "Header1.h"
const char* grade_str[] = { "一","二","三","四" };


void ShowStudent(Student* student,int stu_amount) {
    printf("目前共有 %d 名學生：\n", stu_amount);
    for (int i = 0; i < stu_amount; i++) {
        printf("%d. %s %d歲 grade:大%s score:%.2f\n\n",
            i + 1,
            student[i].name,
            student[i].age,
            grade_str[student[i].grade - 1],
            student[i].score
        );
    };
}
