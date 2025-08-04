#include<stdio.h>

int main(){

    int i =0,x = 0,y = 0,t = 0;
    printf("Enter x and y for x^y = ");
    scanf("%d %d",&x,&y);
    t = x;
    for(i=1;i<y;i++){
        t = (t*x);
        //printf("%d\n",t);
    }
    printf("%d",t);
}