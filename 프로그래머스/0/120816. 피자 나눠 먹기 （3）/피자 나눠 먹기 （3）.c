#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int pizza = 0;
    int pieces = 0;

    while(pieces < n) {
        pizza++;
        pieces += slice;
    }

    return pizza;
}