#include<stdio.h>
int fibonacci(int n);
int main(){
printf("the fibonaaci seris is %d",fibonacci(6))
return 0;
}
int fibonacci(int n){
    if (n==0||n==1){
        if(n==0){
            return 0;
        }if (n==1){
            return 1;
        }
    }
int fibnum1=fibonacci(n-1);
int fibnum2=fibonacci(n-2);
int fibN= fibnum1+fibnum2;
//printf("%d%d\n",n,fibN);
return fibN;
}