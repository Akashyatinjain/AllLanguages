#include<stdio.h>
/*int printnum(int arr[],int n );
int main(){
    int arr[] = { 1,2,3,4,5,6};
printnum(arr,6);
return 0;
}
int printnum( int arr[],int n){
    for(int i=0;i<n;i++){
    printf("the no are %d\t",arr[i]);
    }
    return 0;
}*/
int main(){
int arr[2][3];
arr[0][0]=99;
arr[0][1]=58;
arr[0][2]=99;
arr[1][0]=99;
arr[1][1]=99;
arr[1][2]=99;
printf("%d %d %d\t\n%d %d %d\t ",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2]);

}
