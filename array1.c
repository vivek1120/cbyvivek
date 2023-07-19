// "User Input Array Display"
#include<stdio.h>
int main()
{
    int array[50],max;
    printf("enter the maximum num: ");
    scanf("%d",&max);
    printf("enter the value of array: ");
    for (int i = 0; i < max; i++)
    {
        scanf("%d",&array[i]);
        
    }

       printf("the given values are: ");
       for (int i = 0; i < max; i++)
       {
        printf("%d\t",array[i]);
       }
    
}