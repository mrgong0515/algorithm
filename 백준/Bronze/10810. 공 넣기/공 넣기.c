#include <stdio.h>

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    int basket[101] = {0};

    for (int t = 0; t < M; t++)
    {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);

        for (int x = i; x <= j; x++)
            basket[x] = k;
    }

    for (int x = 1; x <= N; x++)
    {
        printf("%d", basket[x]);
        if (x != N) printf(" ");
    }
    printf("\n");

    return 0;
}