#ifndef Header1_h
#define Header1_h

typedef enum GRADE {
	FRESHMAN = 1,   // 大一
	SOPHOMORE,      // 大二
	JUNIOR,         // 大三
	SENIOR          // 大四
}Grade;

typedef struct STUDENT {
	char name[30];
	int age;
	Grade grade;
	float score;
}Student;

Student* createStudent();
void inputStudent(Student* s);
void printStudent(Student s);
#endif
