#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 0;
    printf("Enter  number : ");
    scanf("%d",&n);
    int *A = (int*)malloc(sizeof(int)*n);
    if(A==NULL){
        printf("\nMemory Allocation Failed");
        exit(-1);
    } 
    printf("Enter array elements : ");
    for(int i = 0;i<n;++i){
        scanf("%d",&A[i]);
    }
    for(int i = 0;i<n;++i){
        printf("%d ",A[i]);
    }
    int sum = 0;
    for(int i = 0;i<n;++i){
        sum += A[i];
    }
    printf("\n Sum : %d",sum);
    double avg = sum/n;
    printf("\n Average : %f\n",avg);
    free(A);
    return 0;
}