#include<stdio.h>

int main(){
    int n = 0,i = 1,j = 0;
    printf("Enter n : ");
    scanf("%d",&n);
    int s = n;
    while(i<=n){
        int t_s = 0;
        while(t_s<s){
           printf(" ");
           t_s++;
        }
        j = 1;
        while(j<=i){
            printf("%d ",j);
            j++;
        }
        printf("\n");
        s--;
        i++;
    }
    return 0;

}
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
