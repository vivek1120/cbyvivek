/*Operators:
    Arithmetic Operators:
        Addition:   +
        Subtraction: -
        Multiplication: *
        Division: /
        Modulo: %  (reminder of division)*/
#include<stdio.h>
int main ()
{
    int a=5,b=10;
    printf("sum of : %d\n",a+b);
    printf("difference of  : %d\n",a-b);
    printf("multiplication of : %d\n",a*b);
    printf("quotiont of  : %d\n",a/b);
    printf("reminder of  : %d\n",a%b);//int is called modulo operater
    



    int a,b;
    printf("enter a number: ");
    scanf("%d%d",&a,&b);
    printf("%d", a+b,a-b);
}