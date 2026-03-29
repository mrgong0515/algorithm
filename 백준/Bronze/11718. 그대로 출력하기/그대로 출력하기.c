#include <stdio.h>

int main()
{
    char S[101];
    
    while(fgets(S, sizeof(S), stdin) != NULL)
    {
        printf("%s", S);
    }
    
    return 0;
}