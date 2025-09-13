#include<stdio.h>

int main(){
    int n = 0,flag = 0,i = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        printf("%d is Composite",n);
    }
    else{
        printf("%d is Prime",n);
    }
}