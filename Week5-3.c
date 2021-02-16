//메모리 이동 함수 memmove 코드 구현
#include<string.h>
#include<stdio.h>
 
int main(void)
{
    char src[] = "BlockDMask";
    char dest1[] = "fffffdddddzzzzz";
    char dest2[] = "fffffdddddzzzzz";
    char dest3[] = "fffffdddddzzzzz";
 
    // 메모리 복사1 : src 길이만큼만 복사
    memmove(dest1, src, sizeof(char) * 10);
 
    // 메모리 복사2 : src 길이 + 1 만큼 복사
    memmove(dest2, src, sizeof(char) * 10 + 1);
 
    // 메모리 복사3 : 메모리 일부 복사
    memmove(dest3 + 10, src, sizeof(char) * 3);
 
    // source
    printf("src  : %s\n", src);
 
    // destination
    printf("dest1 : %s\n", dest1);
    printf("dest2 : %s\n", dest2);
    printf("dest3 : %s\n", dest3);
 
    return 0;
}