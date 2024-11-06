#include <stdio.h>
#include <string.h>
struct student{
    int rollno;
    char name[20];
    float age;
    char gender;
};
int main() {
    struct student s1;
    printf("Size of student structure is %d", sizeof(s1));
    s1.rollno = 2024112431;
    strcpy(s1.name,"navya sri");
    s1.age = 20;
    s1.gender = 'F';
    
    printf("\nRoll no: %d",s1.rollno);
    printf("\nName: %s",s1.name);
    printf("\nAge: %f",s1.age);
    printf("\nGender: %c",s1.gender);
    return 0;
}
/*/tmp/F9uJ6Z0KQ5.o
Size of student structure is 32
Roll no: 2024112431
Name: navya sri
Age: 20.000000
Gender: F

=== Code Execution Successful ===*/
