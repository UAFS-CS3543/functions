#include <stdio.h>

//Function Prototype
int calcSum(int num1,int num2,int num3);

int main(){
   int n1=5;
   int n2=10;
   int sum;

   sum = calcSum(n1,n2,n1);
   printf("n1:  %3d\n",n1);
   printf("n2:  %3d\n",n2);
   printf("sum: %3d\n",sum);


   return 0;
}

int calcSum(int num1,int num2,int num3){
   int sum;

   sum = num1 + num2 + num3;
   return sum;
}
