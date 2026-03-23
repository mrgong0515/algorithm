#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int clap = 0;
    
    while (order > 0) {
        int digit = order % 10; 
        
        if (digit == 3 || digit == 6 || digit == 9) {
            clap++;
        }
        
        order /= 10; 
    }
    
    return clap;
}