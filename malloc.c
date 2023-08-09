#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;

    printf("enter the size of array: ");
    scanf("%d",&a);


    int *ptr = (int*) malloc(a*sizeof(int));
    printf("size of:%d\n",sizeof(*ptr));

    

    //this for loop for getting value from user
    printf("enter a value for array:");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&ptr[i]);
    }
    // this for loop for print the value stored in array
    printf("value in array:");
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",ptr[i]);
    }
    printf("addres of prt %p\n",ptr);
    printf("value of prt %d\n",*ptr);
    printf("addres of prt %p\n",&ptr[0]);
    printf("value of index 0 %d\n",ptr[0]);
    printf("addres of prt %p\n",&ptr[1]);
    printf("value of index1 %d\n",ptr[1]);
    printf("addres of prt %p\n",&ptr[2]);
    printf("value of index2 %d\n",ptr[2]);
    

    
}