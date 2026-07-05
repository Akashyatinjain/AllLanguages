#include<stdio.h>
int main(){
    int arr[10][10],n,m,i,j;
        printf("enter the rows and columns");
        scanf("%d %d",&m,&n);
    for(i=0;i<n;++i){
        for(j=0;j<m;++j){
            printf("Enter the elements for matrix");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix is \n");
    for(i=0;i<n;++i){
        for(j=0;j<m;++j){
            printf("%d",arr[i][j]);
        }
            printf("\n");
    }
     for(i=0;i<n;++i){
        for(j=0;j<m;++j){
            if(j>i){
   int temp =arr[i][j];
    arr[i][j] =arr[j][i];
    arr[j][i]=temp;}
        }
    }  
    for(i=0;i<n;++i){
        for(j=0;j<m;++j){
            printf("%d\t",arr[i][j]);
        }
    } 
}    