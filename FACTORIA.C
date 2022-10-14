#include <stdio.h>
#include <conio.h>
void main()
{
int n,i,f=1;
clrscr();
printf("enter number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("%d",f);
getch();
}