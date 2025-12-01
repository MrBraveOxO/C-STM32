#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header1.h"



int main() {
    Student *s = createStudent();
    //inputStudent(&s);
    printStudent(*s);
    free(s);
    return 0;
   
}