#include<stdio.h>

int main(){
    int n=0,m=0,k=0;
    int row=0,col=0;
    printf("Enter number of row and col (nxm) of matrix : ");
    scanf("%d %d",&n,&m);
    int A[n][m];
    printf("Enter Matrix Elements");
    for(row=0;row<n;row++){
        for(col=0;col<m;col++){
            scanf("%d",&A[row][col]);
        }
    }
    printf("Matrix : \n");
    for(row=0;row<n;row++){
        for(col=0;col<m;col++){
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }
    printf("Enter an integer to multiply with the matrix: ");
    scanf("%d",&k);
    printf("Matrix : \n");
    for(row=0;row<n;row++){
        for(col=0;col<m;col++){
            printf("%d ",k*A[row][col]);
        }
        printf("\n");
    }
    return 0;
}