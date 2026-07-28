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
