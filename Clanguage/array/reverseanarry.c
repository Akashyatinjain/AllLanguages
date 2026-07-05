#include<stdio.h>
/*int countodd(int arr[],int n);
int main(){
int arr[]={3,4,5,6,7,8,9,2,1};
countodd(arr,9);
}

int countodd(int arr[], int n)
{
    for(int i=0;i<9;i++){
        if(arr[i]%2!=0){
            printf("%d",arr[i]);
                    }
    }
    return 0;
}*/

int reverseanarry(int arr[],int n);
void printarr(int arr[],int n);
int main(){
int arr[]={ 1,2,3,4,5,6,7};
reverseanarry(arr,7);
printarr(arr,7);
}
int reverseanarry(int arr[], int n)
{
    for(int i=0;i<n/2;i++){
        int first=arr[i];
        int second=arr[n-i-1];
        arr[i]=second;
       arr[n-i-1] = first;
      
    }
    return 0;
}

void printarr(int arr[], int n)
{
    for(int i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
