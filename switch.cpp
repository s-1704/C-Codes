#include <stdio.h>
#include <conio.h>

int main() {
  int day;
  
  printf("enter the day number\n");
  
  scanf("%d", &day);
  
  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
      default:
      	printf(" enter valid input");
  }
    
  return 0;
}
