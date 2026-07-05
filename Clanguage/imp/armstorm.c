 #include<stdio.h>\

 int main(){
int a=9;
int sum=0;
int n=a;
for(int i=0;i<3;i++){
int rem=a%10;
sum+=rem*rem*rem;
a/=10;
}
if (sum == n) {
printf("%d is an Armstrong number.\n", n);
} else {
printf("%d is not an Armstrong number.\n", n);
}
return 0;
}