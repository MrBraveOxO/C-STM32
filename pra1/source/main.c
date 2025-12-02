#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header1.h"



int main() {
    int* arr = 0;
    int arr_length = 0;
    

    while (1) {
        int input;
        scanf("%d", &input);
        if (input == 0) break;
        arr = realloc(arr, sizeof(int) * (arr_length + 1));
        arr[arr_length] = input;
        arr_length++;
    };
    for (int j = 0; j < arr_length;j++) printf("%d\n", arr[j]);
    return 0;
   
}