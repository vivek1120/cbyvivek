#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int k = 11;

    printf("value of a :%d\n",a);
    printf("address of a :%p\n",&a);
    printf("value of p :%p\n",p);
    printf("value of *p :%d\n",*p);
    printf("address of k :%p\n\n",&k);
    printf("value of k :%d\n",k);

    int *m = &a - 0x1;
    *m = 12;
    printf("value of k :%d\n",k);



    

}