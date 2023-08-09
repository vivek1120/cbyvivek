#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp =fopen("array.c","r");
    char ch;
    if (fp == NULL)
    {
        printf("file does not exist");
        exit(1);
    }else
    {
        while (1)
        {
            ch = fgetc(fp);
            if (ch == EOF)
            {
                break;
            }else
            {
                printf("%c",ch);
            }    
        }
        fclose(fp);
        
    }
    
    
}