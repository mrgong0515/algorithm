#include <stdio.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    
    int* answer = (int*)malloc(sizeof(int) * num_list_len);
    
    
    for (size_t i = 0; i < num_list_len; i++) {
        answer[i] = num_list[num_list_len - 1 - i];
    }
    
    return answer;
}