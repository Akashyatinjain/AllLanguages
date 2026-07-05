#include<stdio.h>
void main(){
   /* int age =22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%p\n",&age);
    printf("%p\n",*ptr);
    printf("%d\n",*(&age));//value

int *ptr;
int x;
ptr=&x;
*ptr=0;//inderctly store the value of x =0
printf("%d",x);
*ptr =*ptr +5;//adding 5 to x 
printf("%d",x);
(*ptr)++;//increment the value of x
printf("%d",x);
*/

float price =1000;
float *ptr =&price;
float **pptr = &ptr;
printf("%p",*ptr);
printf("%p",**(pptr));
}