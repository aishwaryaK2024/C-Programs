#include<stdio.h>

int main(){

    int n = 0,ans = 0;
    int n1 = 0,r = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    n1 = n;
    for(;n>0;){
        r = n%10;
        ans = (ans*10) + r;
        n = n/10;
    }
    if(n1==ans){
        printf("%d is Palindrome\n",n1);
    }
    else{
        printf("%d is not a Palindrome\n",n1);
    }
    return 0;
}