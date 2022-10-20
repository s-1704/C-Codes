#include<stdio.h>
#include<conio.h>
void main()
{
char a,b,i;
clrscr();
printf("enter character range");
scanf("%c %c", &a, &b);
for(i =a; i<=b; i++)
{
printf("%c", i);
}
getch();
}