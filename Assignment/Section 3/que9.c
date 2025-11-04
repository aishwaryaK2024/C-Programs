#include<stdio.h>

int main(){
    int a = 0;
    printf("Enter integer = ");
    scanf("%d",&a);
    if(a%5==0 && a%7==0){
        printf("Hello World");
    }
    else{
        printf("Bye");
    }
    return 0;
}