#include <stdio.h>

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);

    int a[101]; // N <= 100
    for (int i = 1; i <= N; i++) a[i] = i;

    for (int k = 0; k < M; k++) {
        int i, j;
        scanf("%d %d", &i, &j);

        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

    for (int i = 1; i <= N; i++) {
        printf("%d", a[i]);
        if (i < N) printf(" ");
    }
    printf("\n");
    return 0;
}