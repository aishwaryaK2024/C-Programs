#include<stdio.h>

int main(){
    int a = 0,b = 1,i = 1,c = 0;
    int n = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
       // printf("%d , %d\n",a,b);
        c = a+b;
       // printf("%d + %d = %d\n",a,b,c);
        a = b;
        b = c;
        printf("%d , %d\n",a,b);
        
    }
    printf("%d",c);
    return 0;
}
