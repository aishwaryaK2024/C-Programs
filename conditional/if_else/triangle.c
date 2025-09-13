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

