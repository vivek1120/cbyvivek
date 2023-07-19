//learning about nested loop 
#include<stdio.h>
int main()
{
    int v =5, a=3;
    for (int v = 1; v < 5; v++)
    {
            printf("i am from parant loop:%d\n",v);
           for (int a = 1; a < 3; a++)
           {
            printf("i am from chile loop:%d\n",a);
           }
           
            
    }
    
}