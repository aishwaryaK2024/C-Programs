#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=0,i=0,j=0;
    int pcount=0,ncount=0,zcount=0;
    printf("Enter n : ");
    scanf("%d",&n);
    int *A = (int *)malloc(sizeof(int)*n);
    printf("Enter array Elemnts \n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]==0){
            zcount++;
        }
        else if(A[i]>0){
            pcount++;
        }
        else if(A[i]<0){
            ncount++;
        }
    }
    printf("Positive Count = %d\n",pcount);
    printf("Negative Count = %d\n",ncount);
    printf("Zero Count = %d\n",zcount);
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            if(A[i] + A[j] >0){
                printf("(%d,%d)\n",A[i],A[j]);
            }
        }
    }

    return 0;
}