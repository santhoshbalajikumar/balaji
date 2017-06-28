#include<stdio.h>
void main()
{
int i,n;
printf("print the even number");
sacnf("%d",&n);
i=0;
while(i<=n)
{
if(i%2==0)
{
printf("%d ",i);
}
i++;
}
}
