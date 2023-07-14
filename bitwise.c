/*Bitwise Operator:
    Bitwise &
    Bitwise |
    Bitwise xor ^
a = 60 Binary value=>  111100
b = 30 Binary value=>  011110
Bitwise AND a&b   =>   011100 (28)

Bitwise OR   a|b  =>   111110 (62)
Bitwise xor  a^b  =>   100010 (34)

*/
/*
Left shift c = 6,  c<<2, 0110 => 11000
Right shift : c=6, 0110, c>>3 => 0001, 
*/


#include<stdio.h>
int main()
{
int a=64, b=30;//100

printf("bitwise &:%d\n", a & b);
printf("bitwise or:%d\n", a | b);
printf("bitwise xor:%d\n", a ^ b);
printf("leftshift: %d",a<<2);
printf("rightshift: %d",a>>4);

return 0; 
}