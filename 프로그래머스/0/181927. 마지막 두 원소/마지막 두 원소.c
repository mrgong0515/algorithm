#include <stdio.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) 
{
    int* answer = (int*)malloc(sizeof(int) * (num_list_len + 1));
    
    for (size_t i = 0; i < num_list_len; i++)
    {
        answer[i] = num_list[i];
    }
    
    int last = num_list[num_list_len - 1];
    int prev = num_list[num_list_len - 2];
    
    if (last > prev) 
    {
        answer[num_list_len] = last - prev;
    } 
    else 
    {
        answer[num_list_len] = last * 2;
    }
    
    return answer;
}