#include<stdio.h>

int main(){
    int n = 0,i=1;
    printf("Enter number = ");
    scanf("%d",&n);
    printf("Multiplication Table of %d\n",n);
    while(i<=10){
        printf("%d X %d = %d\n",i,n,i*n);
        i++;
    }
    return 0;
}