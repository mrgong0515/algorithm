#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int num1 = 0;
    int num2 = 0;
    
    for(size_t i = 0; i < numbers_len; i++)
    {
        if(numbers[i] > num1)
        {
            num2 = num1;
            num1 = numbers[i];
        }
            else if(numbers[i] > num2)
            {
                num2 = numbers[i];
            }
    }
    
    return num1 * num2;
}