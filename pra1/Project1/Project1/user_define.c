#include <stdio.h>
#include <stdlib.h>

int header(){
	int i;
	int j = 0;
	int mode;
	while (j==0){
		printf("½Ð¿é¤Jmode:");
		scanf_s("%d", &mode);
		i = 0;
		switch (mode) {
		case 0 :
			j = 1;
			break;
		case 1:
			i = 1;
			while (i<=10) {
				printf("%d\n", i);
				i++;
			}
			break;
		case 2:
			i = 2;
			while (i <= 20) {
				printf("%d\n", i);
				i+=2;
			}
			break;
		default:
			i = 10;
			while (i >= 1) {
				printf("%d\n", i);
				i--;
			}
			break;
		}
		/*
		if (mode == 0) {
			break;
		}
		else if (mode == 1) {
			for (i = 1; i <= 10; i++){
				printf("%d\n", i);
			}
		}
		else if (mode == 2) {
			for (i = 2; i <= 20; i += 2){
				printf("%d\n", i);
			}
		}
		else {
			for (i = 10; i >= 1; i--){
				printf("%d\n", i);
			}
		}	
		*/
	}
	return 0;
}