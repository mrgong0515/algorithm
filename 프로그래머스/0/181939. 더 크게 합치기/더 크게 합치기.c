#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    char str1[20];
    sprintf(str1, "%d%d", a, b);
    int cal_val_1 = atoi(str1);
    
    char str2[20];
    sprintf(str2,"%d%d", b, a);
    int cal_val_2 = atoi(str2);
    
    if(cal_val_1 >= cal_val_2)
        return cal_val_1;
    else
        return cal_val_2;
}