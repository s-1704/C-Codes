#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,op;
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
printf("enter the operations required.\n 	Press 1 for addition, \n 2 for subtraction, \n 3 for multiplication, \n 4 for division, \n  5 for module.\n");
scanf("%d",& op);
switch (op)
{
case 1:
printf("%d",a+b);
break;

case 2:
if(a>b)
{
printf("sub of two num is %d", a-b);
}
else
{
printf("sub of two num is %d",b-a);
}
break;

case 3:
printf("product of two num is %d", a*b);
break;
case 4:
if(a>b)
{
printf("div of two num is %d", a/b);
}
else
{
printf("div of two num is %d",b/a);
}
break;

   case 5:
if(a>b)
{
printf("module of num1 by num 2 is %d", a%b);
}
else
{
printf("module of  num 2  by num 1 is %d",b%a);
}
break;

default:
printf("invalid op");
}
getch();
}