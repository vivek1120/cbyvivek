#include<stdio.h>
int add()
{   int j = 10;
    printf("value of j:%d\n",j);
    printf("address of j:%p\n",&j);

    static int i = 1;
    printf("value of i:%d\n",i);
    printf("address of i:%p\n",&i);

    i = i + j;
    printf("value of i:%d\n",i);
    printf("address of i:%p\n",&i);

    return i;
}
int main()
{
for (int i = 0; i < 1; i++)
{
    printf("%d\n",add());
}
return 0;
}