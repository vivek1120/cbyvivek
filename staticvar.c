#include<stdio.h>
int add()
{
    int i = 0;
    i = i + 1;
    return i;
}
int main()
{
for (int i = 1; i < 9; i++)
{
    printf("%d %d\n",i,add());
}

}