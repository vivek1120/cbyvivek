#include<stdio.h>
int a;
int funcarr(int fnarr[])
{
    for (int i = 0; i <a ; i++)
    {
        printf("index %d element:%d\n",i,fnarr[i]);
    }
    
}

int main()
{
printf("value of a %d",a);

    int arr[a];
    printf("enter a array size: ");
    scanf("%d",&a);

    

    printf("enter the element of array: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }

    funcarr(arr);
    

}