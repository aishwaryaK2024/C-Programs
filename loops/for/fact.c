#include<stdio.h>

int main(){

    int n = 0,i = 0,f = 1;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        f=f*i;
    }
    printf("%d! = %d",n,f);
    return 0;
}