#include<stdio.h>

int main(){

    int n = 0,i = 1;
    printf("Enter n = ");
    scanf("%d",&n);
    while(i<=10){
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
    }
    
    return 0;
}