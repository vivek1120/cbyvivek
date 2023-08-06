//function with parameter and return value
#include<stdio.h>

int addition(int a ,int b)
{
    return a*b;
}


int main()
{
    int a , b ;
    printf("Enter a two values for multiplication:");
    scanf("%d %d",&a, &b);

    // printf("%d",addition(a,b));

    int result = addition(a,b);

    printf("output with add 10 :%d",result+10);


     
}