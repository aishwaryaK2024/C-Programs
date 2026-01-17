#include<stdio.h>

int main(){
    int n1 = 0,n2 = 0,i = 0,j = 0;
    int ans_n1 = 0,ans_n2 = 0;
    printf("Enter n1 and n2 : ");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=(n1/2);++i){
        if(n1%i==0){
            //printf("%d\n",i);
            ans_n1 = ans_n1 + i;
        }
    }
    //printf("%d\n",ans_n1);
    for(j=1;j<=(n2/2);++j){
        if(n2%j==0){
            //printf("%d\n",j);
            ans_n2 = ans_n2 + j;
        }
    }
    //printf("%d\n",ans_n2);
    if((n1==ans_n2)&&(n2==ans_n1))
        printf("%d and %d are Amicable",n1,n2);
    else
        printf("%d and %d are not Amicable",n1,n2);
    return 0;    
}
