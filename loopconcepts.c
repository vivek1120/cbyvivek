#include<stdio.h>

int main()
{
   int a = 1;
   int range;
   printf("enter a range: ");
   scanf("%d",&range);


   //using do while loop 
    do
    {
      printf("this is from do while loop: %d\n",a);
      a = a+1;  
    } while (a <=range);
    printf("\n");


    //using while loop
    a=1;// reseting a =1
    while (a <= range)
    {
        printf("this is from while loop:%d\n",a);
        a = a+1;
    }
    printf("\n");
   

    //using for loop
    for (int a = 1; a <= range; a++)
    {
        printf("this is from for loop: %d\n",a);
    }
    
    return 0;
}