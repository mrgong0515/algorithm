#include <stdio.h>
#include <string.h>

int main()
{
    char S[101];
    int alphabet[26];
    
    for(int i = 0; i < 26; i++)
    {
        alphabet[i] = -1;
    }
    
    scanf("%s", S);
    
    int len = strlen(S);
    
    for(int i = 0; i < len; i++)
    {
        int idx = S[i] - 'a';
        
        if(alphabet[idx] == -1)
            alphabet[idx] = i;
    }
    
    for(int i = 0; i < 26; i++)
        printf("%d ", alphabet[i]);
    
    return 0;
}