#include<stdio.h>

int main(){
    int row=0,col=0;
    int n = 3;
    int A[n][n];
    printf("Enter Matrix Elements : ");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            scanf("%d",&A[row][col]);
        }
    }
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }
    //printing Diagonal elements 
    printf("Diagonal Elements of the matrix : ");
    for(int i=0;i<n;i++){
        printf("%d ",A[i][i]);
    }
    printf("\n");
    printf("Anti-Diagonal Elements of the matrix : ");
    for(int i=0;i<n;i++){
        printf("%d ",A[i][n-1-i]);
    }
    return 0;
}