#include<stdio.h>

int main(){

    char op = ' ';
    int num1, num2;
    printf("Enter a Operator (+,-,*,/) = ");
    scanf("%c",&op);
    printf("Enter two Numbers = ");
    scanf("%d %d",&num1,&num2);
    double t;
    switch(op){
        case '+':
            t = num1 + num2;
            break;
        case '-':
            t = num1 - num2;
            break;
        case '*':
            t = num1*num2;
            break;
        case '/':
            t = num2!=0?num1/num2:0;
            break;
        default:
            printf("Invalid Entry");        
    }

    printf("%d %c %d = %f",num1,op,num2,t);
    return 0;
}
