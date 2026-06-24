#include <stdio.h>

struct hero
{
    int id;
    char name[20];
    double grade;
};

int main()
{
    struct hero h1={315, "홍길동", 2.4},
                h2={316, "이순신", 3.7},
                h3={317,"세종대왕",4.4};

    struct hero max;

    max=h1;
    if(h2.grade>max.grade) max=h2;
    if(h3.grade>max.grade) max=h3;

    printf("학번 : %d\n", max.id);
    printf("이름 : %s\n", max.name);
    printf("학점 : %.lf\n", max.grade);
    return 0;
}