#include <stdio.h>

#define MAX_SIZE 100

float sum1(float list[], int); // 배열과 int형 변수를 인자로 받음
float sum2(float *list, int); // 포인터형 변수와 int형 변수를 인자로 받음
float sum3(int n, float *list); // int형 변수와 포인터형 변수를 인자로 받음

float input[MAX_SIZE], answer; // MAX_SIZE를 인자로 받는 배열 선언, 전역 변수 선언
int i; // int형 변수 선언
void main(void)
{
    for(i=0; i < MAX_SIZE; i++) // i가 0부터 MAX_SIZE까지 반복
        input[i] = i; // 배열에 i값 저장

    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n"); // 출력
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // 배열의 시작 주소 출력

    answer = sum1(input, MAX_SIZE); // sum1 함수의 호출값을 answer에 저장
    printf("The sum is: %f\n\n", answer); // answer값 출력

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n"); // 출력
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // 배열의 시작 주소 출력
    
    answer = sum2(input, MAX_SIZE); // sum2 함수의 호출값을 answer에 저장
    printf("The sum is: %f\n\n", answer); // answer값 출력

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n"); // 출력
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // 배열의 시작 주소 출력

    answer = sum3(MAX_SIZE, input); // sum3 함수의 호출값을 answer에 저장
    printf("The sum is: %f\n\n", answer); // answer값 출력
    printf("[----- [Taehyung Kim] [2020039024] -----]");

}
float sum1(float list[], int n)  // 배열을 인자로 받는 함수 정의
{
    printf("list \t= %p\n", list); // list 배열의 시작 주소 출력
    printf("&list \t= %p\n\n", &list); // 포인터의 변수의 주소를 출력한다

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++) // i가 0부터 n-1 까지 반복한다
        tempsum += list[i]; // list의 합계를 계산해서 리턴한다
    return tempsum;
}
float sum2(float *list, int n) // 포인터를 인자로 받는 함수 정의
{
    printf("list \t= %p\n", list); // list가 가리키는 배열의 시작 주소 출력
    printf("&list \t= %p\n\n", &list); // list가 가리키는 포인터 변수의 주소를 출력한다

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i); // list의 i번째 값을 계속 더해준다
    return tempsum; // tempsum값 반환
    printf("[----- [Taehyung Kim] [2020039024] -----]");
}

/* stack variable reuse test */
float sum3(int n, float *list) // 배열의 크기를 먼저 받고 포인터 변수를 받음
{

    printf("list \t= %p\n", list); // list가 가리키는 배열의 시작 주소 출력
    printf("&list \t= %p\n\n", &list); // list 포인터 변수의 주소 출력, sum2와 매개변수의 순서가 다르기 때문에 출력 값이 다르다

    int i;
    float tempsum = 0;
    for(i = 0;i < n; i++)
        tempsum += *(list + i); // list 포인터 변수가 가리키는 배열에서의 합계를 구해서 tempsum에 저장
    return tempsum; // tempsum 반환

}
