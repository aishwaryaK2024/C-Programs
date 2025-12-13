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
        }
        else if(month>=8 && month%2==0){
            days = 31;
        }
        else{
            days = 30;
        }
    }
    else if(month%2!=0){
        days = month>=9?30:31;
    }
    printf("%d Days in month %d\n",days,month);

    return 0;
}                                                                                                    
