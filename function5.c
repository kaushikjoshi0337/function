#include<stdio.h>

 void cube(){
 int fibo;
 int num1=0;
 int num2=1;

 for(int n=1; n<=10; n++){
   fibo=num1+num2;
   num1=num2;
   num2=fibo;
   printf("%d\n",num1);
   }
}

 int main(){
   cube();
 }
