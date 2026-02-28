#include <stdio.h>

int solution(int array[], size_t array_len) {
    
    for (int i = 0; i < array_len - 1; i++) {
        int min_idx = i;
        
        for (int j = i + 1; j < array_len; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        
        int temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }

    return array[array_len / 2];
}