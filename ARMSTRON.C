#include <stdio.h>
#include <conio.h>
void main()
{
int n,temp,rem,output=0;
printf("enter n");
scanf("%d",&n);
clrscr();
temp=n;
while(temp!=0)
{
rem=temp%10;
output=output+rem*rem*rem;
temp=temp/10;
}
if(output==n)
{
printf("%d is armstrong",n);
}
else
{
printf("%d is not armstrong",n);
}
getch();
}