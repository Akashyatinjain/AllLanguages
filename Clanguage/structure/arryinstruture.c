#include<stdio.h>
#include<string.h>

struct student 
{   int roll;
    float cgpa;
    char name[100];};
    int main(){
 /* struct student ECE[0];{
    ECE[0].roll=45;
    ECE[0].cgpa=45;
    printf("%d",ECE[0].roll);}*/
    struct student s1={66};
    printf("%d",s1.roll);
    struct student *ptr =&s1;
    printf("%d",ptr->roll);
     printf("%d",(*ptr).roll);

  }  
