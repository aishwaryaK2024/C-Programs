#include<stdio.h>

int main(){
    int i = 0,n = 0;
    int flag = 1;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int A[n];
    int j = n - 1;
    printf("Enter array elements: ");
    for(int i=0;i<n;++i){
        scanf("%d",&A[i]);
    }
    printf("Your Array : \n");
    for(int i=0;i<n;++i){
        printf("%d ",A[i]);
    }
    while(i<j){
        if(A[i]!=A[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag==1){
        printf("Array is Palindrome");
    }
    else if(flag==0){
        printf("Not Palindrome"); 
    }   
    return 0;
}