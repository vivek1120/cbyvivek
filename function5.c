//no parameters with return value 
#include<stdio.h>

int addition()
{
    int a , b ;
    printf("Enter a two values for multiplication:");
    scanf("%d %d",&a, &b);

    return a*b;

}

int main()
{
     printf("%d",addition());
}