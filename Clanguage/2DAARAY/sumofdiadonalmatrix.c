#include<stdio.h>
int main(){
  int arra[10][10],m,n,i,j;
  int sum=0;
  printf("enter the elements");
  scanf("%d %d",&m,&n);
 // if(i==j){
    printf("enter the elememts of matrix\n");
    for(i=0;i<n;++i){
      for(j=0;j<m;j++){
scanf("%d",&arra[i][j]);
      }
     // printf("\n");
    }
    printf("the matrix is \n");
    for (i=0;i<n;++i){
      for(j=0;j<m;++j){
      printf("|%d\t|",arra[i][j]);
      }
       printf("\n");
    }
    for(i=0;i<n;++i){
      for(j=0;j<m;++j){
      if(i==j){
      sum =sum+arra[i][j];
    }
      }
    }
      printf("the sum of diagonal elemnet is: %d",sum);
}