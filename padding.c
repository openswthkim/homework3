#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main()
{
    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student)); 
    // student 구조체의 크기를 출력한다, 13+4+2=19바이트 이지만 Visual Studio에서는 8바이트 단위로 정렬하기 때문에 나머지 5바이트가 패딩으로 채워져서 24를 출력한다.
    printf("size of int = %ld\n", sizeof(int)); // int형의 크기 4를 출력한다
    printf("size of short = %ld\n", sizeof(short)); // short형의 크기 2를 출력한다
    printf("[----- [Taehyung Kim] [2020039024] -----]");
    return 0;
}