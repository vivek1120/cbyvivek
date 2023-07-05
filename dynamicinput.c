#include<stdio.h>
int main()
{
    int x;
    float y;
    char az;
    printf("enter a char value: ");
    scanf("%c",&az);
    printf("enter a int value: ");
    scanf("%d",&x);
    printf("enter a float value: ");
    scanf("%f",&y);
    
    
    printf("given value is int %d\n",x);
    printf(" given value is float %f\n",y);
    printf(" given value is char %c\n",az);


    int a;
    char b;
    float c;
    printf("enter the values: ");
    scanf("%d%c%f", &a,&b,&c);
    printf("int= %d \nchar = %c \nfloat = %.1f\n",a,b,c);
}
