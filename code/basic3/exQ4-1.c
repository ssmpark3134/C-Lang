#include <stdio.h>
int main(){
    for(int i=9; i>1; i--){
        printf("%d단 -----------\n",i);
        for(int j=9; j>1; j--){
            int k=i*j;
            printf("%d*%d=%d\n",i,j,k);
        }
    }

    return 0;
}