#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[100];
    int a;
    
    scanf("%s %d", s1, &a);
    
    for(int i = 0; i < a; i++)
    {
        printf("%s", s1);
    }
    
    return 0;
}