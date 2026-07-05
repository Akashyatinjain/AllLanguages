#include<stdio.h>
#include<string.h>
void newpass(char password[]);
int main(){
    char password[100];
//printf("enter the password");
scanf("%s",password);
newpass(password);

}
void newpass(char password[]){
    char salt[] ="123";
    char newpassword[200];
    strcpy(newpassword,password);//copy the password in newpassword
    strcat(newpassword,salt);//newpassowrd +salt
    puts(newpassword);
}