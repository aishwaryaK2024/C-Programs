#include<stdio.h>

int main(){
    int n = 0,cnt = 0,r = 0,n1 = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    n1 = n;
    for(;n>0;){
        r = n%10;
        ++cnt;
        n = n/10;
    }
    printf("Number of Digits in %d = %d",n1,cnt);
    return 0;
}