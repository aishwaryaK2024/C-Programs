#include<stdio.h>

int main(){

    int arr[10];
    int i = 0;
    for(i=0;i<10;i++){
        arr[i] = (i+1)*2;
    }
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}