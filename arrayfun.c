#include <stdio.h>

#define SIZE 5

void printArray(int value[], int size);


int main(){
   int value[SIZE]={5,10,7,19,222};
   int numbers[10]={100,200,300,400,500,400,300,200,100,0};

   printArray(value,SIZE);
   printArray(numbers,10);

   return 0;
}

void printArray(int value[], int size){
   int index;

   for(index=0;index<size;index++){
      printf("%3d\n",value[index]);
   }

}

