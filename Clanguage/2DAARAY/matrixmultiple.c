#include<stdio.h>
int main(){
    int arr[10][10],n,m,i,j,i1,j1;
    int arra[10][10];
        printf("enter the rows and columns");
        scanf("%d %d",&m,&n);
        //matrix 1
    for(i=0;i<n;++i){
        for(j=0;j<m;++j){
            printf("Enter the elements for matrix");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix is \n");
    for(i=0;i<n;++i){
        for(j=0;j<m;++j){
            printf("%d",arr[i][j]) ;
        }
            printf("\n");
    }
    //matrix 2 
     for(  i1=0;i1<n;++i1){
        for( j1=0;j1<m;++j1){
            printf("Enter the elements for matrix");
            scanf("%d",&arra[i1][j1]);
        }
    }
    printf("the matrix is \n");
    for( i1=0;i1<n;++i1){
        for( j1=0;j1<m;++j1){
            printf("%d",arra[i1][j1]);
        }
            printf("\n");
    }
    int result[10][10] = {0};
    for(i=0;i<n;++i){
        for(j=0;j<m;++j){
            for(i1=0;i1<n;++i1){
                result[i][j] += arr[i][i1] * arra[i1][j];
            }
        }
    }
    printf("The resultant matrix is \n");
    for(i=0;i<n;++i){
        for(j=0;j<m;++j){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
   
}    