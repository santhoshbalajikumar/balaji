#include<stdio.h>
#include<conio.h>
void main()
{
int c;
scanf("%c",&c);
if((c>='a'&&c<='A')||(c>='A'&&c<='Z'))
{
printf("%c is the alphabet",c);
}
else
{
printf("%c is the not an alphabet",c);\
}
getch();
}
