#include <stdio.h>


int main(void)
{
   int number[6] = {45, -7, 12, 8, 45, -20};



   for(int counter = 0;counter<5;counter++)
   {
   for (int i = 0; i < 5-counter; i++)
   {
      if (number[i] > number[i + 1])
      {
         int temp =number[i];
         number[i] = number[i + 1]; 
         number[i + 1] =temp ;
      } 
   }
   }



   for (int i = 0; i < 6; i++)
   {

      printf("%d\n", number[i]);
   }

   return 0;
}