

#include <stdio.h>
#include <string.h>
 
void main()
{
   char a[100];
 
   printf("Enter a string to reverse\n");
   gets(a);
 
   strrev(a);
 
   printf("Reverse of entered string is \n%s\n",a);
 
}
