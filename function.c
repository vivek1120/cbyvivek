/* Declaring and calling a function in C:
there are two ways to declare  a function
        *with decleration 
        *without decleration

*/ 
#include<stdio.h>
int add(int a,int b); // this is called function prototype
       
int main()
{
        printf("%d",add(6,7));
}
int add(int a,int b){
        int c= a + b;
        return c;

}