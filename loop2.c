#include<stdio.h>
int main()
{   // find even number between 1 to 50 
   
    for (int i = 1; i <= 50; i++)
    {
        if (i%2==0)
        {
            printf("even number is:%d\n",i);
        }
        
    }
    //find odd number between 1 to 50
    
    for (int i = 1; i <= 50; i++)
    {
        if (i%2!=0)
        {
            printf("odd number is:%d\n",i);
        }
    }
    return 0;
    
}