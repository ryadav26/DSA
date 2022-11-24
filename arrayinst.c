// C program for Array insertion

#include <stdio.h>
#include <string.h>

void display(int intArray[], int length){
   int i=0;
   printf("Array : [");
   for(i = 0; i < length; i++) {

      printf(" %d ", intArray[i]);
   }
   printf(" ]\n ");   
}

int main() {
   int i = 0;
   int intArray[9];          
   for ( i = 0; i < 9; i++ ) {
      intArray[ i ] = 0; 
   }
   printf("Array with default data.");
   display(intArray,9);     
   for(i = 0; i < 9; i++) {
      printf("Adding %d at index %d\n",i,i);
      intArray[i] = i;
   }
   printf("\n");
   printf("Array after adding data. ");
   display(intArray,9);
   int index = 7;
   intArray[index] = 10;

   printf("Array after updating element at index %d.\n",index);
   display(intArray,9);
   printf("Data at index %d:%d\n" ,index,intArray[index]);
   int value = 5;
   for(i = 0; i < 9; i++) {
      if(intArray[i] == value ){
         printf("value %d Found at index %d \n", intArray[i],i);
         break;
      }
   }
   return 0;
}
