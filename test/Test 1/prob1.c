#include<stdio.h>

int main(){
    int has_horn = 0;
    int can_fly = 0;
    printf("Enter (0 or 1) for Animal has horn and can fly : ");
    scanf("%d %d",&has_horn,&can_fly);
    if(has_horn == 0){
        if(can_fly == 1){
            printf("Pegasus");
        }
        else{
            printf("Horse");
        }
    }
    else if(has_horn==1){
        if(can_fly==1){
            printf("Alicorn");
        }
        else{
            printf("Unicorn");
        }
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}