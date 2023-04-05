#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5]; // 5개의 정수를 담을 수 있는 배열 선언
    int *plist[5]; // 5개의 포인터 배열 plist 선언

    list[0] = 10; // list의 첫 번째 원소에 10 대입
    list[1] = 11; // list의 두 번째 원소에 11 대입
    
    plist[0] = (int*)malloc(sizeof(int)); // 동적메모리 할당으로 plist에 int형 변수 크기만큼의 공간 할당

    printf("list[0] \t= %d\n", list[0]); // list[0]의 값 10 출력
    printf("list \t\t= %p\n", list); // list의 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); // list[0]의 주소 출력 = 시작 주소와 같음 
    printf("list + 0 \t= %p\n", list+0); // list의 시작 주소 출력 = list[0]과 같음
    printf("list + 1 \t= %p\n", list+1); // list+1의 주소 출력 = list[1]과 같음
    printf("list + 2 \t= %p\n", list+2); // list+2의 주소 출력 = list[2]과 같음
    printf("list + 3 \t= %p\n", list+3); // list+3의 주소 출력 = list[3]과 같음
    printf("list + 4 \t= %p\n", list+4); // list+4의 주소 출력 = list[4]과 같음
    printf("&list[4] \t= %p\n", &list[4]); // list[4]의 주소 출력
    
    free(plist[0]); // 동적 할당된 메모리 해제
    printf("[----- [Taehyung Kim] [2020039024] -----]");
}
