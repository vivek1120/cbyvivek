    #include<stdio.h>
    int main()
    {
        const int a = 10;
         int *aptr = &a;
        int b = 15;
        *aptr = *aptr + 10;

        const char *c = (a > b) ? "a is greater then": "b is greater then";
        printf("%s\n",c);
        return 0;

        printf("%d\n",*aptr);
        printf("%d",a);
    }