#include <stdio.h>

void parameters( char name[], int age){
	printf("the name is %s and the age is %d \n ",name, age);
	
}
main(){
	parameters("Harry",18);
		parameters("Mamta",18);
			parameters("Sia",8);
				parameters("Usha",10);
				return 0;
}
//parameters are name and age
//arguments are Harry,18 ...Usha,10
//Info is passed in function as parameters and when parameters is passed when the function is called, it is arguments.
