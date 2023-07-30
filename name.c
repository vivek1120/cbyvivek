#include<stdio.h>
int main()
{
    char name[10];
    printf("enter a name: ");
    scanf("%[^\t]",name);
    printf("%s",name);
}