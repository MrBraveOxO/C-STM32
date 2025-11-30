#include <stdio.h>
#include <stdlib.h>
#include "Header1.h"

const char* grade_str[] = {
	"一","二","三","四"
};

void printStudent(Student s) {
	printf("學生資料:\n");
	printf("姓名:%s\n",s.name);
	printf("年齡:%d\n",s.age);
	printf("年級:大%s\n",grade_str[s.grade-1]);
	printf("成績:%.1f\n",s.score);

}