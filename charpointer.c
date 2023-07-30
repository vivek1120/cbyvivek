#include<stdio.h>
int main()
{
    char arr[] = {"vivek"};
    char *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("%d",i);
        printf("address :%p and value :%c\n",&ptr[i],ptr[i]);
    }
    
}