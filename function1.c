#include<stdio.h>
int max_four(int a , int b, int c , int d)
{
    int max = a;
    if (b>max)
    {
        max=b;
    }
    if (c>max)
    {
        max=c;
    }
    if (d>max)
    {
       max = d;
    }
    return max;
}
int main()
{
int a,b,c,d;
printf("enter a number four number for find maximum:\n ");
scanf("%d %d %d %d",&a,&b,&c,&d);


int result = max_four(a,b,c,d);
printf("the maximum of four number is:%d\n",result);

return 0;

}


    

