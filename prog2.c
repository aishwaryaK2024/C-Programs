#include<stdio.h>
struct student
{
    int rollNo;
    char name[50];
    int contactNo;
    int class;
    char address[200];
    char email[40];
    double marks[5];
};

int main(){

    struct student Alice;
    Alice.rollNo = 1;
    Alice.name = "Alice";
    Alice.contactNo = 1234567896;
    Alice.class = 10;
    Alice.address = "nagar";
    Alice.marks[0] = 89;
    Alice.marks[1] = 98;
    

    printf("Student Details : ");
    printf("%d ",Alice.contactNo);
    return 0;

}


