#include<stdio.h>
#include<math.h>
struct myComplex
{
    double real;
    double img;
};


int main(){
    struct myComplex C1,C2;
    struct myComplex add,sub,mul,conjugate;
    double norm;
    C1.real = 10;
    C1.img = 20;
    printf("%.2f + %.2fi \n",C1.real,C1.img);
    C2.real = 5;
    C2.img = 2;
    printf("%.2f + %.2fi \n",C2.real,C2.img);
    printf("Addition : \n");
    add.real = C1.real + C2.real;
    add.img = C1.img + C2.img;
    printf("%.2f + %.2fi \n",add.real,add.img);
    printf("Subtractio : \n");
    sub.real = C1.real - C2.real;
    sub.img = C1.img - C2.img;
    printf("%.2f + %.2fi \n",sub.real,sub.img);
    printf("Multiplication : \n");
    mul.real = (C1.real*C2.real) - ( C1.img*C2.img);
    mul.img = (C1.real*C2.img) + ( C1.img*C2.real);
    printf("%.2f + %.2fi \n",mul.real,mul.img);

    // printf("Complex Conjugate : \n");
    // sub.real = C1.real - C2.real;
    // sub.img = C1.img - C2.img;
    // printf("%lf + %lfi \n",sub.real,sub.img);

    printf("Norm : \n");
    norm  = sqrt(pow(C1.real,2) + pow(C1.img,2));
    printf("%.2f + %.2fi  norm  %lf\n",C1.real,C1.img,norm);
    norm  = sqrt(pow(C2.real,2) + pow(C2.img,2));
    printf("%.2f + %.2fi  norm %lf\n",C2.real,C2.img,norm);

    return 0;
}