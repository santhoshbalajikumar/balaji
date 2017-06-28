#include<stdio.h>
void main()
{
  int a,b,c=0,r;
  printf("Enter the number");
  scanf("%d",&a);
 while(a>0)
 {
   r=a%10;
  c= c*10/r;
  a=a/10;
 }
  if(b==c)
  {
    printf("it is the palindrome");
  }
  else
  {
    printf("not a palindrome");
  }
}
