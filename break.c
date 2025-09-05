//2. Program to keep summing until the user enters a negative number, then break the loop and print the sum
#include<stdio.h>

int main(){
    int n,i,j;
    int sum = 0;
    while(1){
        printf("Enter number to sum : ");
        scanf("%d",&n);
        if(n<0){
            break;
        }
        else{
            sum = sum + n;
        }
    }
    printf("Sum = %d",sum);
    return 0;
}
