#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    printf("value of argc :%d\n",argc);

    for (int  i = 0; i < argc; i++)
    {
        printf("index of :%d:%s\n",i,argv[i]);
    }
    
}