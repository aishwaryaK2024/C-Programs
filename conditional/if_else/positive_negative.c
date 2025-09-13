//Read an integer and determine whether it is positive, negative, or zero. 

#include<stdio.h>

int main(){

    int num;
    printf("Enter a Number = ");
    scanf("%d",&num);

    if(num>0){
        printf("%d is Positive Number.",num);
    }
    else if(num<0){
        printf("%d is Negative Number.",num);
    }
    else{
        printf("Zero");
    }
    return 0;
}
