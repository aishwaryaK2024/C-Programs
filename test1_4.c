#include<stdio.h>

int main(){
    int i=1,n=0,j=0;
    int crn=0;
    printf("Enter n for nXn Checkboard: ");
    scanf("%d",&n);
    while(i<=n){
        for(j=1;j<=n;j++){
            if((i+j)%2==0){
                crn++;
                printf("%d",crn);
            }
            else{
                printf(" _ ");
            }
            
        }
        printf("\n");
        i++;
    }
    return 0;
}