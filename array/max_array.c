#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter N :");
    scanf("%d",&n);
    int *A = (int*)malloc(sizeof(int)*n);
    printf("Enetr array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int max = A[0];
    printf("Enetred array elements \n");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    printf("Max = %d",max);
    free(A);
    return 0;
}