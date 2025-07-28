// 13.Write a program that reads three positive numbers a, b and c which represent the lengths of
// the sides of a triangle. Check if they form a valid triangle and categorize it (equilateral,
// isosceles, scalene).
// a. a+b > c and a+c > b and b+c > a implies a valid triangle
// b. a=b=c => equilateral, a=b or a=c or b=c => isosceles, a!=b!=c => scalene
#include<stdio.h>

int main(){

    int a = 0,b = 0,c = 0;
    printf("Enter Lengths of the Triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        if(a==b==c){
            printf("Equilateral Triangle");
        }
        else if((a==b)||(a==c)||(b==c)){
            printf("Isosceles Triangle");
        }
        else if(a!=b!=c){
            printf("scalene Trinagle");
        }
    }
    else{
        printf("Not valid triangle");
    }

    return 0;
    
}
