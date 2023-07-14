//We will understand how different logical operators in C like AND, OR, NOT work
/*Logical operators:
     AND op:  &&   ex: a&&b
     OR op:   ||   ex: a||b
     NOT op:   !   ex:  !(a<b)
*/
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter a number for logic operation: ");
    scanf("%d%d",&a,&b);
    printf("a&&b = %d\n",a&&b);
    printf("a || b = %d\n",a||b);
    printf("!(a<b) = %d\n",!(a<b));
}

