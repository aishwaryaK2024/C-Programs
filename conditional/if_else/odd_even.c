//Read a number from user and check it is odd or even 
#include<stdio.h>

int main(){
    int a = 0;
    printf("Enter a Number : ");
    scanf("%d",&a);

    if(a%2==0){
        printf("%d is Even Number",a);
    }
    else{
        printf("%d is Odd Number",a);
    }
    return 0;
}