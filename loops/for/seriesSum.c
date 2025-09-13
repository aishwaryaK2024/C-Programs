#include<stdio.h>

int main(){
    double ans = 0,i = 1;
    int n = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=1;i<n;++i){
        ans = ans + (1/i);
        //printf("%d\n",ans);
    }
    printf("%f",ans);
    return 0;
}