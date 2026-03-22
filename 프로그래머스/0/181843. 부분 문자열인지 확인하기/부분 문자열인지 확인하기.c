#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* target) {
    int n = strlen(my_string);
    int m = strlen(target);

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (my_string[i + j] != target[j]) {
                break; 
            }
        }
        
        if (j == m) {
            return 1;
        }
    }

    return 0;
}