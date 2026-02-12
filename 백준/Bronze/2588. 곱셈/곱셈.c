#include<stdio.h>

int main(void)
{
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    
    int one = B % 10;
    int ten = (B / 10) % 10;
    int hun = B / 100;
    
        printf("%d\n", A * one);
        printf("%d\n", A * ten);
        printf("%d\n", A * hun);
        printf("%d\n", A * B);
    
    return 0;
}