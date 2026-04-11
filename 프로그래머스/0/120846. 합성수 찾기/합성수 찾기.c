#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for (int i = 1; i <= n; i++) {
        int divisor_count = 0;
        
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisor_count++;
            }
        }
        
        if (divisor_count >= 3) {
            answer++;
        }
    }
    
    return answer;
}
