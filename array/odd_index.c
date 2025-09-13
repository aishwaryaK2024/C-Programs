#include<stdio.h>

int main(){
    int A[6] = {1,3,5,7,9,11};
    for(int i = 0;i<6;++i){
        if(i%2==1){
            printf("%d ",A[i]);
        }
    }
    return 0;
}