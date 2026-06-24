#include <stdio.h>

struct student{
    int num;
    double grade;
};

int main()
{
    struct student s1; //구조체 변수 선언

    s1.num=2;  //구조체 변수 초기화
    s1.grade=2.7;  //구조체 변수 초기화
    printf("학번 : %d\n", s1.num);  //출력
    printf("학점 : %.1lf\n", s1.grade); //출력

    return 0;
}