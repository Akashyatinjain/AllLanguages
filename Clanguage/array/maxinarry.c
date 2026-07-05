#include<stdio.h>
#include<string.h>
int main(){
    int array[7]={2,3,4,5,6,7,8};
    /*for(int i=0;i<=7;i++){
        if(array[i]>array[i+1]){
            printf("the greatest no is %d",array[i]);
        }
    }*/
    array[7]=9;

   printf("%d%d%d%d%d%d%d%d\t",array[0],array[1],array[2],array[3],array[4],array[5],array[6],array[7]);
   

}