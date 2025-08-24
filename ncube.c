#include<stdio.h>

int main(){
    int j=0,i=0,n=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        int c=i;
        for(j=1;j<3;++j){
            c=c*i;
        }
        printf("%d = %d\n",i,c);
    }
    return 0;
}