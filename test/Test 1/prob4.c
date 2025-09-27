#include<stdio.h>

int main(){
    int i=0,n=0,j=0;
    int cnt = 0;
    printf("Enter n for nxn check box : \n");
    scanf("%d",&n);
    while(i<=n){
        for(j=1;j<=n;++j){
            if((i+j)%2==0){
                cnt++;
                printf("%d ",cnt);
            }
            else{
                printf("_ ");
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}