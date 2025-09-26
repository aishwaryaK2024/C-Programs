#include<stdio.h>

int main(){
    int n=0,i=0;
    printf("enter n = ");
    scanf("%d",&n);
    for(i=n;i>0;--i){
        if(i%10==4)
            continue;
        else
            printf("%d\n",i);    
    }
    return 0;
}