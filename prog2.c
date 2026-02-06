#include<stdio.h>
struct student
{
    int rollNo;
    char name[50];
    int contactNo;
    int class;
    char address[200];
    char email[50];
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
    Alice.marks[2] = 90;
    Alice.marks[3] = 96;
    Alice.marks[4] = 82;

    printf("Student Details : ");
    printf("%d ",Alice.contactNo);
    return 0;

}


