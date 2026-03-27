int main() {
    int input;
    int remain[42] = {0,};
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        remain[input % 42] = 1;
    }

    for (int i = 0; i < 42; i++) {
        if (remain[i] == 1) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}