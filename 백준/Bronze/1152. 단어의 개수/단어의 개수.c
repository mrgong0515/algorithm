#include <stdio.h>
#include <string.h>

char str[1000005]; // 배열의 크기가 너무 크기 때문에 main함수 밖에 지정

int main()
{
    if(scanf("%[^\n]", str) == EOF) // 공백 포함 한 줄을 읽는다
    {
        printf("0\n");
        return 0;
    }
    
    int count = 0; // 단어 개수 바구니 선언
    int i = 0; // 인덱스 값 선언
    int is_word = 0; // "지금 단어가 안에 있는지"를 나타내는 변수 선언
                     // 0과 1로 스위치 처럼 작동 0 = 밖. 1 = 안
    
    while(str[i] != '\0')
    {
        if(str[i] == ' ') //공백을 만난다면 단어 밖으로 나온 상태
        {
             is_word = 0;
        }
        
        else if(is_word == 0) // 공백이 아닌데 str[i] == 0이였다면 새로운 단어가 시작된 시점
        {
            is_word = 1; // 단어 안에 있는 상태
            count++; // 단어 개수 바구니 ++
        }
        i++; // 다음 칸으로 넘어감
    }
    
    printf("%d", count);
    return 0;
}