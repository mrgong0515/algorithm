#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int j = n / 10;
    int total = 12000 * n + 2000 * k - 2000 * j;
    
    return total;
}