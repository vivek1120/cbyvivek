#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct navin
{
    char name[10];
    int age;
    float height;
    char sex;
};
union naveen
{
    char name[10];
    int age;
    float height;
    char sex;
};
int main()
{
    struct navin dussu1;
    char comp_name[]="naviny";

    int name_compar = strcmp(dussu1.name,comp_name);
if (1)
{   printf("enter a deatials about navin");
    printf("enter your name: ");
    scanf(" %s",dussu1.name);
    
    

}
else if (name_compar==0)
{
    printf("enter your age: ");
}
else
{

    printf("does not match");
}



}

