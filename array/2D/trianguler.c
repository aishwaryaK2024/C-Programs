#include<stdio.h>

int main(){
    int r = 3,c = 4;
    int row = 0,col = 0;
    int A[r][c];
    printf("Enter Elements of matrix \n");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&A[row][col]);
        }
    }
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }
    for(row=0;row<r;row++){
        int pivot = A[r][r];
        for(col=0;col<c;col++){
            A[r][col] = A[r][col] / pivot;
        }
        for(int k = 1;k<r;k++){
            int ele = A[r][k];
            for(col = 0;col<c;col++){
                A[k][col] = A[k][col] - (ele*A[r][col]);
            }
        }
    }
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }
    return 0;

}