#include<stdio.h>

int main(){
    int n = 0,cnt = 0;
    int cur = 0;
    printf("enter array size : ");
    scanf("%d",&n);
    int A[n];
    printf("Enter Array Elements : \n");
    for(int i=0;i<n;++i){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;j++){
            if(A[i]==A[j]){
                cnt = cnt + 1;
                break;
            }
        }
    }
    printf("count = %d",cnt);
    return 0;
}