#include<stdio.h>

int main(){
    int n = 3;
    int row=0,col=0;
    int A[n][n];
    printf("Enter row elements : \n");
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
    printf("Upper Trianguler Elements of Matrix : \n");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            if(col>row){
                printf("%d ",A[row][col]);
            }
        }
    }
    return 0;
}