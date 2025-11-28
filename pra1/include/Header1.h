#ifndef Header1_h
#define Header1_h
typedef enum gender { MALE, FEMALE, OTHER } Gender;

typedef struct person {
    char name[20];
    Gender gender;
    int age;
    float height;
}person;

void setGender(person *p, int g);
void printPerson(person p);

#endif 
