#include<stdio.h>
void mian()
{
int low ,high,i,flagl;
printf("Enter the number of intervels");
scanf("%d%d",&low,&high);
printf("prime number between %d and %d are",low,high);
while(low<high)
{
flag=0;
for(i=2;i<=low/2;++1)
{
if(low%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d",low);
++low;
}
}
