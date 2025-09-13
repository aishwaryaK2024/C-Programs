#include<stdio.h>

int main(){
    int n;
    int r = 0;
    printf("Enter Number = ");
    scanf("%d",&n);
    do{
        r=n%10;
        printf("%d\n",r);
        n = n/10;
    }while(n>0);
    return 0;
}
