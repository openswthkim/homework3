#include <stdio.h>

void print_one(int *ptr, int rows); // 포인터 변수와 int형 변수 선언

int main()
{
    int one[] = {0, 1, 2, 3, 4}; // 5개의 인자를 갖는 배열 선언
    printf("one = %p\n", one); // 배열 one의 시작 주소 출력
    printf("&one = %p\n", &one); // 배열 one의 시작 주소 출력
    printf("&one[0] = %p\n", &one[0]); // 배열 one[0]의 주소 출력 = 시작 주소와 같다
    printf("\n");
    
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n"); // 출력
    printf("------------------------------------\n");
    print_one(&one[0], 5); // one[0]의 주소와 행의 개수를 print_one 함수로 받는다
    
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n"); // 출력
    printf("------------------------------------\n");
    print_one(one, 5); // one의 시작 주소와 행의 개수를 print_one 함수로 받는다, &one[0]과 one이 같으므로 출력 값은 같다
    printf("[----- [Taehyung Kim] [2020039024] -----]");
    return 0;
}

void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */

    int i;
    printf ("Address \t Contents\n"); 
    for (i = 0; i < rows; i++) // i가 0부터 rows-1까지 반복한다
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // ptr+i의 주소와 값을 출력한다
    printf("\n");
}
