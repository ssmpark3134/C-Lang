// #include <stdio.h>

// int main()
// {
//     int ary[3]={10, 20, 30};
//     int *pa = ary;
//     int i;

//     printf("배열의 값 : ");
//     for(i=0; i<3; i++){
//         printf("%d ", *pa);
//         pa++;
//     }
//     printf("\n");
//     return 0;
// }

#include <stdio.h>
void print_result(int* pa){
    for(int i=0; i<3; i++){
        printf("%d ", *pa);
        pa++;
    }
    printf("\n");

}
int main(){
    int ary[3]={10, 20, 30};

    print_result(ary);
    


    return 0;
}