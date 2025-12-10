#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int A[n];
    int i = n - 1;
    int j = 0;
    printf("Enter array elemnts : ");
    for(int i = 0;i<n;++i){
        scanf("%d",&A[i]);
    }
    printf("Array : ");
    for(int i = 0;i<n;++i){
        printf("%d ",A[i]);
    }
    while(j<i){
        int c;
        c = A[i];
        A[i] = A[j];
        A[j] = c;
        j++;
        i--;
    }
    printf("Reversed Array : \n");
    for(int i = 0;i<n;++i){
        printf("%d ",A[i]);
    }
    return 0;

}
