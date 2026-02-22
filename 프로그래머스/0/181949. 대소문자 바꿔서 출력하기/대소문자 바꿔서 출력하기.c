#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s1[21];
    scanf("%s", s1);

    for (int i = 0; s1[i] != '\0'; i++) {
        if (islower(s1[i]))
            s1[i] = toupper(s1[i]);
        else if (isupper(s1[i]))
            s1[i] = tolower(s1[i]);
    }

    printf("%s", s1);
}
