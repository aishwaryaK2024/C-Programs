#include<stdio.h>

int main(){
    int A[3][3];
    int row = 0,col = 0;
    printf("Enter Matrix Elements");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&A[row][col]);
        }
    }
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }

    
    return 0;
}