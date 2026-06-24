#include <stdio.h>
// void print_max(int array[]){
//     int max=array[0];
//     for (int i=1; i<7; i++){
//         if(max<array[i]){
//             max=array[i];
//         }
//     }
//     printf("가장 큰 값 : %d\n", max);
// }



int main()
{
    int array[7]={4,5,8,1,2,3,7};
    int min = array[0];

    //코딩하세요. 가장 작은 값을 출력해 봐라.
    for(int i=1; i<7; i++){
        if(min>array[i]){
            min=array[i];
        }
    }
    printf("가장 작은 값 : %d\n", min);
    return 0;
}