#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void PrintExcel(Student* student, int stu_amount) {
    
    int grade[4] = { 0 }, j[4] = { 0 };
    int* grade_student = malloc(stu_amount * sizeof(int));
    for (int i = 0; i < stu_amount; i++){
        switch (student[i].grade) {
            case 1:
                grade[0]++;//大一人數
                break;
            case 2:
                grade[1]++;//大二人數
                break;
            case 3:
                grade[2]++;
                break;
            case 4:
                grade[3]++;
                break;
            default: break;
        }
    }
    j[0] = 0;
    j[1] = grade[0];
    j[2] = grade[0] + grade[1];
    j[3] = grade[0] + grade[1] + grade[2];

    for (int i = 0; i < stu_amount; i++) {
        switch (student[i].grade) {
        case 1: 
            grade_student[j[0]] = i;
            j[0]++;
            break;
        case 2:
            grade_student[j[1]] = i;
            j[1]++;
            break;
        case 3:
            grade_student[j[2]] = i;
            j[2]++;
            break;
        case 4:
            grade_student[j[3]] = i;
            j[3]++;
            break;
        }
    }
    
    bubbleSort(student,grade_student, grade[0]);
    bubbleSort(student, &grade_student[grade[0]], grade[1]);
    bubbleSort(student, &grade_student[grade[0] + grade[1]], grade[2]);
    bubbleSort(student, &grade_student[grade[0] + grade[1] + grade[2]], grade[3]);
    for (int i = 0; i < stu_amount; i++) {
        printf("%d ", grade_student[i]);
    }
    FILE* fp = fopen("student.csv", "w");
    if (!fp) {
        perror("fopen 失敗");
        free(grade_student);
        return;
    }

    fprintf(fp, "排名,年級,姓名,年齡,成績\n");

    for (int i = 0; i < stu_amount; i++) {
        fprintf(fp, "%d,大%s,%s,%d,%.1f\n",
            i + 1,
            grade_str[student[grade_student[i]].grade - 1],
            (const char*)student[grade_student[i]].name,
            student[grade_student[i]].age,
            student[grade_student[i]].score
        );
    }

    fclose(fp);
 /*   FILE* fp = fopen("test.csv", "w");
    if (!fp) {
        perror("fopen 失敗");
        free(grade_student);
        return;
    }
    fprintf(fp, "排名,年級,姓名,年齡,成績\n");
    for (int i = 1; i < stu_amount + 1; i++) {
        fprintf("%d,大%s,%s,%d,%.1f\n",
            i,
            grade_str[student[grade_student[i-1]].grade-1],
            student[grade_student[i-1]].name,
            student[grade_student[i - 1]].age,
            student[grade_student[i - 1]].score
            );
    }
    fclose(fp);*/
    free(grade_student);
    
}
void bubbleSort(Student* student,int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (student[arr[j]].score < student[arr[j + 1]].score) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Read(Student** student, int* stu_amount) {
    FILE* fp = fopen("student.csv", "r");
    if (!fp) {
        perror("fopen 失敗");
        *student = NULL;
        *stu_amount = 0;
        return;
    }

    char line[256];

    // 讀掉 CSV 標題列
    if (!fgets(line, sizeof(line), fp)) {
        fclose(fp);
        *student = NULL;
        *stu_amount = 0;
        return;
    }

    // 先計算學生數量
    int count = 0;
    while (fgets(line, sizeof(line), fp)) count++;
    rewind(fp);
    fgets(line, sizeof(line), fp); // 再跳過標題列

    *stu_amount = count;
    *student = malloc(count * sizeof(Student));
    if (!(*student)) {
        perror("malloc 失敗");
        fclose(fp);
        *stu_amount = 0;
        return;
    }

    int i = 0;
    while (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\r\n")] = 0;

        // 格式：排名,大年級,姓名,年齡,成績
        char grade_buf[10], name_buf[50];
        int rank, age;
        float score;

        if (sscanf_s(line, "%d,大%[^,],%[^,],%d,%f",
            &rank,
            grade_buf, (unsigned)_countof(grade_buf),
            name_buf, (unsigned)_countof(name_buf),
            &age,
            &score) == 5) {

            // 年級中文轉數字
            int grade = 0;
            if (strcmp(grade_buf, "一") == 0) grade = 1;
            else if (strcmp(grade_buf, "二") == 0) grade = 2;
            else if (strcmp(grade_buf, "三") == 0) grade = 3;
            else if (strcmp(grade_buf, "四") == 0) grade = 4;

            (*student)[i].age = age;
            (*student)[i].score = score;
            (*student)[i].grade = grade;

            // 安全拷貝姓名
            strncpy_s((*student)[i].name, sizeof((*student)[i].name), name_buf, _TRUNCATE);

            i++;
        }
        else {
            printf("解析錯誤: %s\n", line);
        }
    }

    fclose(fp);
    printf("讀取成功!\n\n");
}