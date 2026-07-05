#include<stdio.h>
#include<string.h>

struct student{   
    int roll;
    float cgpa;
    char name[100];
    };
    void printinfo(struct student s1);
    int main(){
 /*   struct student s1={66};
    printf("%d",s1.roll);
    struct student *ptr =&s1;
    printf("%d",ptr->roll);
     printf("%d",(*ptr).roll);
*/struct student s1={66,7.7,"AKASH"};
printinfo (s1);
  }

  void printinfo( struct student s1)
  { //struct student s1={66};
    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    printf("%s\n",s1.name);
    //struct student *ptr =&s1;
   // printf("%d",ptr->roll);
   //  printf("%d",(*ptr).roll);
  }
