// C program for Selection sort

#include<stdio.h>
void main() 
{
   int arr[50], i,j,n,tmp;
   printf("enter the no of elements in the list:");
   scanf("%d", &n);
   printf("enter the elements:\n");
   for(i=0; i<n; i++)
   {
      scanf ("%d", &arr[i]);
   }
   for(i = 1; i <= n - 1; i++)
   {
      for(j=i; j > 0 && arr[j - 1] > arr[j]; j--)
      {
         tmp = arr[j];
         arr[j] = arr[j - 1];
         arr[j - 1] = tmp;
      }
   }
   printf ("after insertion sorting the elements are:");
   for (i=0; i<n; i++)
   {
      printf("%d\t", arr[i]);
   }
}
