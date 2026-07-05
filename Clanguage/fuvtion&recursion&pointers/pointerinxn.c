#include<stdio.h>
void swap(int a,int b);
void _swap(int *a,int *b);
int main(){
    int x=6;
    int y=9;
    _swap(&x,&y);
    printf("x=%d,y=%d",x,y);


}
//call by value
void swap(int a,int b){
    int t =a;
    a=b;
    b=t;
    printf("a=%d,b=%d",a,b);
}
//call by refernce
 void _swap(int *a ,int *b){
    int t=*a;
    *a=*b;
    *b=t;
  //  printf("a=%d,b=%d",*a,*b);
 }

 