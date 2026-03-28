#include <stdio.h>
#include <string.h>

int main()
{
    char A[101]; // 단어 선언
    scanf("%s", A);
    
    int word = strlen(A); // 단어 길이 바구니
    
    printf("%d", word);
    
    return 0;
}