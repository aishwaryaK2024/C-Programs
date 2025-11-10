#include<stdio.h>

int main(){
    int n = 0,i = 1;
    printf("Enter n = ");
    scanf("%d",&n);

    while(i<=n){
        if(i%2==0)
            printf("%d\n",i);
        i++;
    }
    return 0;
}