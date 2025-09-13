#include<stdio.h>

int main(){
    int n=0,i=0,j=0,k=0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=0;i<n;++i){
        int val = 1;
        for(j=0;j<n-i;++j){
            printf(" ");
        }
        for(k=0;k<=i;++k){
            printf("%d ",val);
            val = val*(i-k)/(k+1);
        }
        printf("\n");
    }
    return 0;
}