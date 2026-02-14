#include<stdio.h>
int main(void)
{
    int H, M;
    scanf("%d %d", &H, &M);
    
    int A = (H * 60) + M;
        A -= 45;
    
    if(A < 0)
    {
      A += 60 * 24;
    }
    
    printf("%d %d\n", A / 60, A % 60);
    
    return 0;
}