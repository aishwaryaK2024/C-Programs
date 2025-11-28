#include<stdio.h>

int main(){

    int n = 0,i = 0,f = 1;
    printf("Enter n = ");
    scanf("%d",&n);
    i=n;
    while(i>0){
        f=f*i;
        i--;
    }
    printf("%d! = %d",n,f);
    return 0;
}