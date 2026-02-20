#include <stdio.h>
#define LEN_INPUT 11

int main(void)
{
    char str[11];
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}
