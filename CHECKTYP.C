  #include <stdio.h>
  #include <conio.h>
  void main()
  {
  char v;
  int a;
  clrscr();
  printf("ENTER VALUE");
  scanf("%s",&v);   // '%s'is taken so that it acts as string(group of chars)
  printf("ENTER CASE");
  scanf("%d",& a);
  clrscr();
 switch(a)
 {
 case 1:   // in the conditions, alphabets nd digits are in single quote as it acts as a character
{
 if(v>='a' && v<='z'|| v>='A' && v<='Z')
 {
 printf("\n value entered is an alphabet");
 }
 else if(v>='0' && v<='9')
 {
 printf("\n value is digit");
 }
 else
 {
 printf("\n value is a special char");
 }
 break;
 }
 default:

 printf("invalid");

 }
  getch();
  }