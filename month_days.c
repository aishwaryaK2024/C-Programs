//15.Input month number and display the number of days in the month (consider leap years for February).

#include<stdio.h>

int main(){

    int year = 0, month = 0,days = 0;
    printf("Enter Year = ");
    scanf("%d",&year);
    printf("Enter Month Number(1-12) = ");
    scanf("%d",&month);

    if(month%2==0){
        if(month==2){
            days = ((year%4==0 && year%100!=0)||(year%400==0)) ? 29:28;
            printf("%d Days in month %d",days,month);
        }
        else if(month>=8 && month%2==0){
            days = 31;
            printf("%d Days in month %d",days,month);
        }
        else{
            days = 30;
            printf("%d Days in month %d",days,month);
        }
    }
    else if(month%2!=0){
        days = month>=9?30:31;
        printf("%d Days in month %d",days,month);
    }
    return 0;
}
