#include <stdio.h>
struct student1 { // 3개의 변수를 갖는 student1 구조체 선언
    char lastName;
    int studentId;
    char grade;
};

typedef struct { // typedef를 이용한 student2 구조체 선언
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    struct student1 st1 = {'A', 100, 'A'}; // 구조체 변수 st1의 기본값을 A,100,A로 초기화
    
    printf("st1.lastName = %c\n", st1.lastName); // st1 구조체에서 lateName인 A 출력
    printf("st1.studentId = %d\n", st1.studentId); // st1 구조체에서 studentId인 100 출력
    printf("st1.grade = %c\n", st1.grade); // st1 구조체에서 grade인 A 출력

    student2 st2 = {'B', 200, 'B'}; // 구조체 변수 st2의 기본값을 B,200,B 로 초기화
 
    printf("\nst2.lastName = %c\n", st2.lastName); // st2 구조체에서 lastName인 B 출력
    printf("st2.studentId = %d\n", st2.studentId); // st2 구조체에서 studentId인 200 출력
    printf("st2.grade = %c\n", st2.grade); // st2 구조체에서 grade인 B 출력

    student2 st3; // 구조체 변수 st3을 선언한다
    
    st3 = st2; // st3에 st2값을 대입
    
    printf("\nst3.lastName = %c\n", st3.lastName); // st3 구조체에서 lastName은 st2와 동일한 B를 출력
    printf("st3.studentId = %d\n", st3.studentId); // st3 구조체에서 studentId는 st2와 동일한 200 출력
    printf("st3.grade = %c\n", st3.grade); // st3 구조체에서 grade는 st2와 동일한 B를 출력
    
    /* equality test */
    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade)
       /* not working */
      // st2와 st3은 구조체 이므로 구조체 간에 비교는 성립하지 않는다. 구조체에서 같은 멤버의 값을 각각 비교해줘서 모두 같다면   

        printf("equal\n"); // equal 출력
    else
        printf("not equal\n"); // 다르다면 not equal 출력
    printf("[----- [Taehyung Kim] [2020039024] -----]");
    return 0;
}
