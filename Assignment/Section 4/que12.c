#include<stdio.h>

int main(){
    int i=0,n=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2!=0)
            continue;
        printf("%d\n",i);    
    }
    return 0;
}