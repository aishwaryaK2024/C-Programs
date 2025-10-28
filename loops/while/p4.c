#include<stdio.h>

int main(){
    int n = 0,i = 1,j = 0,s=0;
    printf("Enter n : ");
    scanf("%d",&n);
    s = (2*n) - 1;
    while(i<=n){
        int t_s = 0;
        while(t_s<s){
           printf(" ");
           t_s++;
        }
        j = 1;
        while(j<=i){
            printf("%d ",j);
            j++;
        }
        printf("\n");
        s-=2;
        i++;
    }
    return 0;
}