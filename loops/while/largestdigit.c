#include<stdio.h>

int main(){
    int n = 0,t = 0;
    printf("Enter n :");
    scanf("%d",&n);
    int max = n%10;
    while(n>0){
        n = n/10;
        t = n%10;
        if(t>max){
            max = t;
        }
    }
    printf("max = %d",max);
    return 0;
}