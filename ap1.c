#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5]; // 5개의 정수를 담을 수 있는 배열 선언
    int *plist[5] = {NULL,}; // 5개의 포인터 배열 plist 선언 및 초기화 

    plist[0] = (int *)malloc(sizeof(int)); // plist[0]에 int크기만큼의 동적 메모리 공간 할당
    
    list[0] = 1; // list[0]에 1 대입
    list[1] = 100; // list[1]에 100 대입
    
    *plist[0] = 200; // plist[0]이 가리키는 공간에 200 대입
    
    printf("list[0] = %d\n", list[0]); // list[0] 값 출력
    printf("&list[0] = %p\n", &list[0]); // list[0]의 주소 출력
    printf("list = %p\n", list); // list 배열이 가리키는 주소 출력
    printf("&list = %p\n", &list); // list 배열의 주소 출력
    
    printf("----------------------------------------\n\n");
    
    printf("list[1] = %d\n", list[1]); // list[1] 값 출력
    printf("&list[1] = %p\n", &list[1]); // list[1]의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); // *(list+1)는 list의 두번쨰 값을 출력한다
    printf("list+1 = %p\n", list+1); // list+1의 주소를 출력, list[1]의 주소와 같다
    
    printf("----------------------------------------\n\n");
    
    printf("*plist[0] = %d\n", *plist[0]); // *plist[0]이 가리키는 값 200 출력
    printf("&plist[0] = %p\n", &plist[0]); // plist[0]의 주소를 출력
    printf("&plist = %p\n", &plist); // plist 배열의 주소 출력
    printf("plist = %p\n", plist); // plist 배열이 가리키는 주소 출력
    printf("plist[0] = %p\n", plist[0]); // plist[0]이 가리키는 주소 출력
    printf("plist[1] = %p\n", plist[1]); // plist[1]이 가리키는 주소 출력
    printf("plist[2] = %p\n", plist[2]); // plist[2]이 가리키는 주소 출력
    printf("plist[3] = %p\n", plist[3]); // plist[3]이 가리키는 주소 출력
    printf("plist[4] = %p\n", plist[4]); // plist[4]이 가리키는 주소 출력, plist[1,2,3,4] 는 가리키는 주소가 없어서 0이 나온다
    
    free(plist[0]); // 동적 할당된 메모리 해제

    printf("[----- [Taehyung Kim] [2020039024] -----]");

}