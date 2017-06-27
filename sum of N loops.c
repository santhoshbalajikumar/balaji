#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,sum=0;
clrscr();
scanf("%d",&a);
for(i=0;i<=a;i++)
{
sum=sum+i;
printf("%d",sum);
}
getch();
}
