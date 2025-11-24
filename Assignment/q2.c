#include<stdio.h>

int main(){
    int n=0,m=0;
    int row=0,col=0;
    int sum = 0,smallest = 0,largest=0;
    int mul = 1;
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
    printf("Sum of all the elements in the 0th row : ");
    for(col=0;col<n;col++){
        sum += A[0][col];
    }
    printf("%d\n",sum);
    printf("Multiplication of all elements in the 1st column : ");
    for(row=0;row<n;row++){
        mul *= A[row][1];
    }
    printf("%d\n",mul);
    sum = 0;
    printf("Sum of all the elements anti-diagonal : ");
    for(int i=0;i<n;i++){
        sum += A[i][n-1-i];
    }
    printf("%d\n",sum);

    sum = 0;
    printf("Sum of all elements in the matrix : ");
    for(row=0;row<n;row++){
        for(col=0;col<m;col++){
            sum += A[row][col];
        }
    }
    printf("%d\n",sum);

    largest = smallest = A[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] > largest)
                largest = A[i][j];
            if (A[i][j] < smallest)
                smallest = A[i][j];
        }
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    int largestDg = A[0][0], smallestDg = A[0][0];
    for (int i = 0; i < n; i++) {
        if (A[i][i] > largestDg)
            largestDg = A[i][i];
        if (A[i][i] < smallestDg)
            smallestDg = A[i][i];
    }
    printf("Largest element diagonal: %d\n", largestDg);
    printf("Smallest element diagonal: %d\n", smallestDg);

    int rows;
    printf("\nEnter row index to print (0 to %d): ", n - 1);
    scanf("%d", &rows);
    if (rows >= 0 && rows < n) {
        printf("Row %d: ", rows);
        for (int j = 0; j < n; j++)
            printf("%d ", A[rows][j]);
        printf("\n");
    } else {
        printf("Invalid row index!\n");
    }
    int cols;
    printf("Enter column index to print (0 to %d): ", n - 1);
    scanf("%d", &cols);
    if (cols >= 0 && cols < n) {
        printf("Column %d: ", cols);
        for (int i = 0; i < n; i++)
            printf("%d ", A[i][cols]);
        printf("\n");
    } else {
        printf("Invalid column index!\n");
    }

    return 0;

}
