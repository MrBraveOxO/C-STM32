#ifndef Header1_h
#define Header1_h



typedef enum Act_Status {
    act_exit = 0, add, del, show, revise, printexcel, read_data
}act_s;

typedef struct STUDENT {
    char name[30];
    int age;
    int grade;
    float score;
} Student;

void menu(Student** student, int* stu_amount);
void CreateStudent(Student **student, int *stu_amount);
void DelStudent(Student **student, int *stu_amount);
void ReviseStudent(Student **student,int stu_amount);
void ShowStudent(Student* student, int stu_amount);
void PrintExcel(Student* student, int stu_amount);
void bubbleSort(Student* student, int* arr, int n);
void Read(Student** student, int* stu_amount);
#endif
