#include<stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
  
    for(int i = 1; i <= T; i++)
    {
        int A, B;
        scanf("%d", &A);
        scanf("%d", &B);
        
        int C = A + B;
        printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
    }
    
    return 0;
}