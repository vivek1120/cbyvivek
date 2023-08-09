//difference between malloc and calloc 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 5;
    int *p;
    int *pt;

    p = (char*) malloc(57*sizeof(int));
    pt = (int*) calloc(5,sizeof(int));

    for (int i = 0; i < 5; i++)
    {
            printf("%d\t",*p);

    }
     for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*pt);

    }
    


}