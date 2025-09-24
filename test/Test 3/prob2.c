#include<stdio.h>

int main(){
    int n = 0;
    printf("Enter an integer : ");
    scanf("%d",&n);
    int j =0,i = 0;
    for(i=1;i<=n;++i){
        for(j=1;j<=i;++j){
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}