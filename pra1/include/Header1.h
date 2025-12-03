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

Student* CreateStudent(Student *student, int stu_amount);
#endif
