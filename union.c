#include<stdio.h>
struct dt1
{
    int a;
    char b[30];
};
union dt2
{
    int a;
    char b[5];
};
int main()
{
    struct dt1 var;
    union dt2 var2;
    printf("size of struct: %d\n",sizeof(var));
    printf("size of union: %d",sizeof(var2));
    
}