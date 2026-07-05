#include<stdio.h>
#include<string.h>
//void printname(char arr[]);

/*int main(){
    char str[50];
    fgets(str,50,stdin);// inputs
    puts(str);//output
   return 0;
} 
int main(){
    char *canchange="akash jain";//   * we can chanfe the vlaue 
    puts(canchange);
    canchange= "akash";
    puts(canchange);
     char cannotchange ="akash jain";// without * we can chANGE THE VALUE
     puts(cannotchange);
     cannotchange ="akash "
     puts(cannotchange);
}
int charlength(char arr[]);
int main (){
    char name[100];
   fgets(name,100,stdin);
   printf("%d",charlength(name));
}

int charlength(char arr[])
{
int count =0;
for (int i=0;arr[i]!='\0';i++){
    count++;}
   return count-1;
}
int main(){
    char name[]="akash ";
    char last[]="jain";
    strcat(name,last);
    puts(name);
}*/
int main(){
    char name[]="akash";//0 = bothb string are equal
    char last[]="jain";//+1 name>last
     printf("%d",strcmp(name,last));//-1 last>name 

    
}
