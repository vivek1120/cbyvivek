//Functions with Parameters or input and No Return Value (void):
#include<stdio.h>
int multi_table();
int main()
{
    multi_table(13);
    return 0;
}

int multi_table(int n)
{
    for (int i = 0; i <= 20; i++)
    {
        printf("%d  *  %d = %d\n",i,n,i*n);
    }
    return 0;
}