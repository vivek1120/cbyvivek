#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp = fopen("newfila.txt","w");
    if (fp == NULL) {
        perror("Error opening the file");
        return 1;
    }
    char a[30];
    printf("enter a string:");
    scanf("%[^\n]",a);
    if (fp != NULL)
    {
        fputs(a,fp);
        fclose(fp);
    }else
    {
        printf("error opening the file");
    }
    
    
}