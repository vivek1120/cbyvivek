// if program for finding even number
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    if (n%2 == 0)
    {
        printf("given number is even: %d", n);
    }
    else
    {
        printf("given number odd or zero %d", n);
    }
    return 0;
}
