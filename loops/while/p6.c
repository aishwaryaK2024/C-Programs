#include<stdio.h>

int main(){
    int n = 0,i = 1,j = 0;
    printf("Enter n : ");
    scanf("%d",&n);
    i = n;
    while(i>0){
        j = 1;
        while(j<=i){
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;

}
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2 
//1
