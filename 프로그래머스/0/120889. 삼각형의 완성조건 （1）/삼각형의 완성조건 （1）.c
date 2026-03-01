#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int sides[], size_t sides_len) {
    int a = sides[0];
    int b = sides[1];
    int c = sides[2];
    
    int max = 0;
    
    if(a >= b && a >= c)
        max = a;
    else if(b >= a && b >= c)
        max = b;
    else
        max = c;
    
    if(max < (a + b + c - max))
        return 1;
    else
        return 2;
}