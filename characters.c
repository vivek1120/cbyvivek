#include <stdio.h>
int main() 
{
char ch,s[8], sen[15];
scanf("%c\n%s\n%[^\n]s", &ch,s,sen);
printf("%c\n%s\n%s", ch,s,sen);
}