#include<stdio.h>

int main(){
    int n = 0;
    int a = 0,b = 1,c = 0,i = 0;
    printf("Enter n Terms = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}