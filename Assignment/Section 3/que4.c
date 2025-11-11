#include<stdio.h>

int main(){
    int a = 0,b =0,c=0;
    printf("Enter angles of triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>0 && b > 0 && c > 0 && (a+b+c== 180)){
        printf("Valid Triangle");
    }
    else{
        printf("Not valid Triangle");
    }
    return 0;
}