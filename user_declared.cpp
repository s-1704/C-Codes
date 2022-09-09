#include<stdio.h>
#include <conio.h>

void M(char *A, int age)
{
	
		printf("hello %s you are %d years old.", A , age);	
	}
int main()
{
	char A[10];
	int age;
   printf("enter your name");
	scanf("%s", &A);
	printf("enter age");
	scanf("%d", & age);
	M(A,age);
}
//this program is done by taking user input ofstring with scanf() function, otherwise, gats() can also be used.

