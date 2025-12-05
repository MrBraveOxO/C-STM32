#ifndef Header1_h
#define Header1_h

typedef enum GRADE {
    freshman = 1,sophomore,junior,senior
}Grade;



typedef struct STUDENT {
    char name[30];
    int age;
    Grade grade;
    float score;
} Student;


void CreateStudent(Student **student, int *stu_amount);
void DelStudent(Student **student, int *stu_amount);
void ReviseStudent(Student **student,int stu_amount);
void ShowStudent(Student* student, int stu_amount);
#endif
