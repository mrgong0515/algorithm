#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int fact = 1; 
    int i = 1;
    
    while (true) {
        fact *= i;     
        if (fact > n) {
            answer = i - 1;
            break;
        } else if (fact == n) {
            answer = i;
            break;
        }
        
        i++;
    }

    return answer;
}
