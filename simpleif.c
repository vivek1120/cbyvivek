//Using the modulo operator to check if a number is even or odd
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
