#include <stdio.h>
#include <conio.h>
void main()
{
int n,rev=0,remainder;
clrscr();
printf("enter number");
scanf("%d",&n);
clrscr();
	while(n!=0)
	{
	remainder=n%10;
	rev=rev*10+remainder;
	n=n/10;
	}
	printf("rev num is :%d",rev);
	getch();
}