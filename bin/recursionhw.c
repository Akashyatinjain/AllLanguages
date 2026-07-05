#include<stdio.h>
#include<math.h>
/*int squareroot(float n);
int main(){
    printf("the square root of the number is %d",squareroot(16.0));
    return 0;

}
int squareroot(float n){  
    return sqrt(n);
}


//temperture
int wheather(int n);
int main(){
printf("%d",wheather(32));
}
int wheather(int n){
    if(n<15){
        printf(" to much cold today");}
        else{
            printf(" to much hot today");
        }
}*/


int power(int a,int b);
int main(){
    power(8,9);
return 0;
}
int power(int a ,int b){
    int pow;
    int sum =0;
    for( int i=1;i<=b;i++){
       int pow= a*a;
       sum +=pow;//since it comes 4 naswer storing the value in the sum variable and the loops run for 4 times and the aswer is 4 
       }
       //printf("ther power is %d",pow);
        printf("ther power is %d",sum);
    return 0;
    
}
