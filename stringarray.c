// dynamically allocating charactar array and then print the charactar into string 
#include<stdio.h>
int main()
{
    char name[10];
    int i;
    printf("enter  a name: ");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %c",&name[i]);
    }
    printf("the name is: %s",name);
    
}