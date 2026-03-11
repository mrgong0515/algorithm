#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(len + 1);

    for (int i = 0; i < len; i++) {
        if (my_string[i] >= 'A' && my_string[i] <= 'Z') {
            answer[i] = my_string[i] + 32; 
        } else {
            answer[i] = my_string[i] - 32;  
        }
    }

    answer[len] = '\0';
    return answer;
}