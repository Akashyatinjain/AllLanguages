#include<stdio.h>
#include<math.h>
float areaofsquare( float side);
float areaofcircle(float rad);
int areaofrectangle(int a,int b);
int main(){
    float side,rad;
    int a,b;
    printf("enter 4 no ");
    scanf("%f%f%d%d",&side,&rad,&a,&b);
    printf("%f",areaofcircle(rad));
   // areaofrectangle(a,b);
    //areaofsquare(side);
    return 0;

}
float areaofsquare(float side ){
    return side*side;
}
   float areaofcircle(float rad ){
    return 2*3.14*rad;
}  
   int areaofrectangle(int a,int b ){
    return a*b;
}
      
