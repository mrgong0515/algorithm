#include <stdio.h>
#include <string.h>

int main()
{
    int A, B, C;
    int count[10] = {0}; // 0부터 9까지의 개수를 저장할 배열 (0으로 초기화 필수)
    
    scanf("%d %d %d", &A, &B, &C);
    int result = (A * B * C);
    
    // 자릿수 분리 및 카운팅
    // 나머지(%)와 나누기(/) 활용 : 숫자를 하나씩 분리할 때는 10으로 나눈 나머지를 구하면
    // 일의 자리를 얻을 수 있다
    
    while(result > 0)
    {
        int i = result % 10; // 마지막 자릿수 추출
        count[i]++;          // 해당 숫자의 카운트 증가
        result /= 10;
    }
    
    // 결과 출력
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", count[i]);
    }
    
    return 0;
}