#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter N :");
    scanf("%d",&n);
    int *A = (int*)malloc(sizeof(int)*n);
    // if(n==NULL){
    //     printf("Memory alloc failed");
    //     exit(-1);
    // }
    printf("Enetr array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int min = A[0];
    printf("Enetred array elements \n");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    for(int i=0;i<n;i++){
        if(A[i]<min){
            min = A[i];
        }
    }
    printf("min = %d",min);
    free(A);
    return 0;
}