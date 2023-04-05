#include<stdio.h>
#include<stdlib.h>
void main()
{
        int **x; // 이중포인터 변수 선언
        printf("sizeof(x) = %lu\n", sizeof(x)); // x변수의 크기를 출력한다. int형 이므로 4 출력
        printf("sizeof(*x) = %lu\n", sizeof(*x)); // x가 가리키는 포인터가 int형 이므로 4를 출력한다
        printf("sizeof(**x) = %lu\n", sizeof(**x)); // x가 가리키는 포인터가 참조하는 변수가 int형이므로 4를 출력한다
        printf("[----- [Taehyung Kim] [2020039024] -----]");
}
