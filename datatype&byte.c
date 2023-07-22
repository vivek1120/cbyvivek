// this program for to print the memory address of the variables.  
//to konw the byte size of the integer datatypes.
#include<stdio.h>
#include<unistd.h>
#include<limits.h>
int main()
{

    int a = 2147483647;
    unsigned int b = 9;
    int c = 2;
    int d = 5;
    printf("PID : %d\n",getpid());
    printf("value of a:%d\n",a);
    printf("maximum and minimum value of integer:%d %d\n",INT_MAX , INT_MIN);


    printf("address of if a:%p\n",&a);
    printf("address of if b:%u\n",&b);
    printf("address of if c:%p\n",&c);
    printf("address of if d:%p\n",&d);
    printf("* you see the variable address is difference 4 bytes\n* because integer datatype take 4 bytes to store a integer value\n");
    
    
    printf("byte size of int: %d byte\n",sizeof(a));
    printf("byte size of short int: %d byte\n",sizeof(short int));
    printf("byte size of unsigned int: %dbyte\n",sizeof(unsigned int));
    printf("byte size of long long int: %d byte\n",sizeof(long long int));



    char x = 'v';
    char y = 'b';
    char h = 'c';
    char k = 'd';

    printf("value of char x= %c\n",x);
    printf("size of char x= %d byte\n",sizeof(x));

    printf("address of if x:%p\n",&x);
    printf("address of if y:%p\n",&y);
    printf("address of if h:%p\n",&h);
    printf("address of if k:%p\n",&k);






    float v = 4.5;
    float i = 5.7;
    float e = 8.0;
    float m = 6.4;
    float g = 3.6;
    float n = 7.9;


    printf("addess of float v :%p\n",&v);
    printf("addess of float i :%p\n",&i);
    printf("addess of float e :%p\n",&e);
    printf("addess of float m :%p\n",&m);
    printf("addess of float g :%p\n",&g);
    printf("addess of float n :%p\n",&n);


    printf("size of float: %d byte\n",sizeof(v));
    printf("size of double float: %d byte\n",sizeof(double));
    printf("size of long double float: %d byte\n",sizeof(long double));




    


}