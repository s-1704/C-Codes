#include <stdio.h>
#include <conio.h>
//largest number.
void main()
{
int a,b,c;
clrscr();
printf("enter num1,num2 and num3\n");
scanf("\n %d \n %d \n %d", &a,&b, &c);
clrscr();
printf("THE variable with largest value is as follows");
printf("\n");
printf("\t___________________________________________\t");
if (a>b && a>c)
{
printf("\n\ta is largest with value %d",a);
}
else if(a==b && a==c)
{
printf("\n\tall 3 numbers have equal value:%d",a);
}
else if(c>b)
{
printf("\n\tc is largest with value:%d", c);
}
else
{
printf("\n\tb is largest with value %d",b);
}
printf("\n \t_______________________________________________\t");
getch();
}