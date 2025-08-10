#include<stdio.h>

int main(){

    int n = 0,ans = 0,r = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    while(n>0){
        r = n%10;
        ans = (ans*10) + r;
        n = n/10;
    }
    printf("%d\n",ans);
    return 0;
}