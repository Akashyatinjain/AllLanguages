#include<stdio.h>
int sum(int *a,int *b);
int product(int *a,int *b);
int avgerage(int *a,int *b);
int main(){
    int soo;
    int x=6;
    int y=6;
   printf("the sum is=%d\n",sum(&x,&y));
   
  printf("the sum is=%d\n",  product(&x,&y));
  printf("the sum is=%d\n",  avgerage(&x,&y));
return 0;
}
int sum(int *a,int *b){
int soo=*a+*b;
}

int product(int *a, int *b)
{
    int prod=(*a)*(*b);
}

int avgerage(int *a, int *b)
{
    int avg=((*a)+(*b))/2;
}
