#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int x;
    scanf("%d", &x);
    int mn = x, mx = x;

    for (int i = 1; i < N; i++)
    {
        scanf("%d", &x);
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }

    printf("%d %d\n", mn, mx);
    return 0;
}