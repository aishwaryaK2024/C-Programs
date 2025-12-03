#include<stdio.h>

int main(){
    int i=0,j=0;
    printf("Multiplication Tables from 1 to 10\n");
    for(i=2;i<=10;i++){
        printf("Multiplication Table of %d :\n",i);
        for(j=1;j<=10;j++){
            printf("%d X %d = %d\n",j,i,j*i);
        }
    } 
    return 0;
}