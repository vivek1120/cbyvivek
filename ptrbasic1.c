#include<stdio.h>
int main()
{
   int var = 5;
   int *pointer;
    pointer = &var;
   printf("address of :%p\n",pointer);
   printf("address of :%p\n",&var);
   printf("*pointer  :%d\n",*pointer);



   printf("value of variable: %d\n",var);

   *pointer = *pointer + 5;
   printf("value of variable: %d\n",var);

   *pointer = *pointer -5;
   printf("value of variable: %d\n",var);
}