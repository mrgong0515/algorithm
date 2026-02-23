#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    char str[20];
    sprintf(str, "%d%d", a, b);
    int cal_val = atoi(str);
    
    int mul_val = 2 * a * b;
    
    if(cal_val >= mul_val)
        return cal_val;
    else
        return mul_val;
}