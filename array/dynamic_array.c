#include<stdio.h>
#include<stdlib.h>

int main(){
    int i = 0;
    while(i<15){
        int *A = (int*)malloc(sizeof(int)*15);
        i++;
    }
    return 0;

}
