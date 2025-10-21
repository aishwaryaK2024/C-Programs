#include<stdio.h>

int main(){
    int n = 0,sum = 0,i=1;
    printf("Enter n = ");
    scanf("%d",&n);
    while(i<=n){
        sum = sum + i;
        i++;
    }
    printf("Sum of 1 to %d integers = %d",n,sum);
    return 0;
}