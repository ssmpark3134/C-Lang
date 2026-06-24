#include <stdio.h>

int my_print();

int main(){
    int result=my_print();
    printf("%d\n",result);
    return 0;
}

int my_print(){
    printf("Hello world~!\n");
    return 777;
}
