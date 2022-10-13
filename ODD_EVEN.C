#include <stdio.h>
#include <conio.h>
void main()
{
int n1;
int n2,i;
clrscr();
printf("enter the first number of the range:\n");
scanf("\n %d",& n1);
  printf("enter the last number\n");
  scanf("%d",&n2);
for(i=n1;i<=n2;i++)
{
if(i%2==0)
{
printf("%d is an even number \n",i);
}
else
{
printf("%d is an odd number \n",i);
}
}
getch();
}