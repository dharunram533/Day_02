QUESTION:
Write a program to accept a single character from the keyboard and determine whether it is an uppercase letter, lowercase letter, digit, or special symbol.

CODE:
# include <stdio.h>
int main()
{
 char n;
 printf("Enter:");
 scanf("%c",&n);
 if (n>='A' && n<='Z')
 {
  printf("%d is uppercase",n);
 }
 else if(n>='a' && n<='z')
 {
  printf("%d is lowercase",n);
 }
 else if(n>=0 && n<=9)
 {
  printf("%d is digit",n);
 }
 else
 {
  printf(" special character");
 }
return 0;
}

OUTPUT:
Enter a character: A
It is an Uppercase letter


Enter a character: a
It is a Lowercase letter


Enter a character: 7
It is a Digit


Enter a character: @
It is a Special Symbol

