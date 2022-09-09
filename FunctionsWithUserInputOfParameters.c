#include <stdio.h>
#include<conio.h>

void displayAgeName(char *str,  int age){
	printf("Hey %s, you are %d years old.", str, age);
}
void main()
{
	char str[20];
	int age;
   printf("enter your name: ");
	gets(str);
	printf("enter age");
	scanf("%d", & age);
	
	displayAgeName(str, age);
	getch() ;
}
// here, a function is created with two parametes and the user gives the input of parameters then these arguments are printed.
// Also note, ges(str) is used to get input of string.

