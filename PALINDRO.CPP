#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char s1[10],s2[10];
clrscr();
printf("enter string");
scanf("%s",&s1);
strcpy(s2,s1);
strrev(s1);

if(strcmp(s1,s2)==0)
{
printf("palindrome");
}
else
{
printf("nonpalindrome");
}

getch();
}