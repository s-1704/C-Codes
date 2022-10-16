#include <stdio.h>
#include <conio.h>
void main()
{
int n, temp, rev=0, remainder;
printf("enter n");
scanf("%d",&n);
temp=n;
clrscr();

while(n!=0)
{
remainder=n%10;
rev=rev*10+remainder;
n=n/10;
}
if(rev==temp)
{
printf("palindrme");
}

else
{
printf("non palindrome");
}
getch();
}
