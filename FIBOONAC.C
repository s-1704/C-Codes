#include <stdio.h>
#include <conio.h>
void main()
{
int N,i;
int a1=0,a2=1;
int a3=a1+a2;
clrscr();
printf("enter number N");
scanf("%d", & N);
for(i=0;i<=N-2;++i)
{
printf("%d	", a3);
a1=a2;
a2=a3;
a3=a1+a2;
}
getch();
}
