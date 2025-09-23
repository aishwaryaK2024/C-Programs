#include<stdio.h>

int main(){
    int n = 0;
    printf("Enter negative number : ");
    scanf("%d",&n);

    int i = -1;
    while(i>=n){
        if(i%3==0 && i%5==0){
            printf("%d : Epic Combo!\n",i);
        }
        else if(i%2==0 && i%3==0){
            printf("%d : FizzTwo\n",i);
        }
        else if(i%5==0){
            printf("%d : BuzzDeep\n",i);
        }
        else if(i%3==0){
            printf("%d : Fizz\n",i);
        }
        else{
            printf("%d : Chill\n",i);
        }
        i--;
    }
    return 0;
}