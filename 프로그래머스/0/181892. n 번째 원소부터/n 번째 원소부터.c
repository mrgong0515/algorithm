#include <stdio.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    
    int result_len = num_list_len - (n - 1);
    int* answer = (int*)malloc(sizeof(int) * result_len);

    for (int i = 0; i < result_len; i++) 
    {
        answer[i] = num_list[n - 1 + i];
    }

    return answer;
}