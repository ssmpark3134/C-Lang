#include <stdio.h>
#include <stdlib.h> // atoi 함수를 사용하기 위해 필요
#include <string.h> // strchr 함수 등을 사용하기 위해 필요

int main()
{
    int age;
    char age_buf[20]; // 나이를 문자열로 임시 저장할 버퍼
    char name[20];

    // 1. 나이를 문자열로 안전하게 입력받기
    printf("나이 입력 : ");
    fgets(age_buf, sizeof(age_buf), stdin);
    
    // 2. 입력받은 문자열을 정수(int)로 변환
    age = atoi(age_buf); 


    // 3. 이름 입력받기 (버퍼가 비어있으므로 버그 없이 정상 작동)
    printf("이름 입력 : ");
    fgets(name, sizeof(name), stdin);

    // [선택 사항] 이름 뒤에 붙은 개행 문자('\n') 제거로 출력 깔끔하게 만들기
    // 이 처리를 안 하면 이름 출력 후 강제로 줄바꿈이 일어납니다.
    name[strcspn(name, "\n")] = '\0';


    // 4. 최종 출력
    printf("나이 : %d, 이름 : %s\n", age, name);

    return 0;
}