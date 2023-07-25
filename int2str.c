#include<stdio.h>
#include<stdlib.h>
int main()
{
    // converting integer to string
    char buffer [6];
    int a = 12345;
    sprintf(buffer, "%d",a);
    printf("converted into string value:%s\n",buffer);
    printf("%d byte\n",sizeof(buffer));
    printf("a size = %dbyte\n",sizeof(a));


    //converting string to integer
    char arr[] = "1120";
    int s;
    s = atoi(arr);
    s = s + 1;
    printf("converted into integer value: %d\n",s);

}