#include<stdio.h>

int main(){

    int sum = 0,i = 0,n = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + (i*i);
    }
    printf("%d",sum);
    return 0;
}