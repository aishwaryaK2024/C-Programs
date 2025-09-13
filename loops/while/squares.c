#include<stdio.h>

int main(){

    int n = 0,i = 1,sqr = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    while(i<=n){
        sqr = sqr + (i*i);
        i++;
    }
    printf("%d\n",sqr);
    return 0;
}