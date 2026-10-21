
#include <stdio.h>
int main()
{
 float a;
 float b;
 char ch;

 printf("enter the values");
 scanf("%f %c %f",&a,&ch,&b);
 switch(ch)
 {
  case '+':
  {
   printf("Add=%f",a+b);
   break;
  }
  case '-':
  {
   printf("sub=%f",a-b);
   break;
  }
   case '*':
  {
   printf("multi=%f",a*b);
   break;
  }
  case '/':
  {
   printf("divide=%f",a/b);
   break;
  }
  default:
  {
   printf("invalid value");
  }
 }
 return 0;
}