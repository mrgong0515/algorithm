#include <stdio.h>

int main() {
    // 1. 체스 피스의 표준 개수 설정 (킹 1, 퀸 1, 룩 2, 비숍 2, 나이트 2, 폰 8)
    int chess[6] = {1, 1, 2, 2, 2, 8};
    int input[6];

    // 2. 현재 가지고 있는 피스의 개수 입력 받기
    for (int i = 0; i < 6; i++) {
        scanf("%d", &input[i]);
    }

    // 3. 표준 개수에서 입력받은 개수를 뺀 결과 출력하기
    for (int i = 0; i < 6; i++) {
        printf("%d ", chess[i] - input[i]);
    }

    return 0;
}
