#include<stdio.h>

int main(){
    int a=0,b=0,max=0;
    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);
    max = a>b?a:b;
    printf("The maximum number is: %d\n", max);
    return 0;
}