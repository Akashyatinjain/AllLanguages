#include<stdio.h>
//funstion ko declare
void  printnamste();
void  printbonjour();



int main(){//function ko call
 printf("enter f for french & i for indian");
 char ch;
 scanf("%c",&ch);
 if(ch=='i'){
  printnamste();
 }
 else{
  printbonjour();
 }
  return 0;
}

void printnamste(){
 
  printf("namste\n");}
  
 void printbonjour(){
 
  printf("bonjour\n");
 }