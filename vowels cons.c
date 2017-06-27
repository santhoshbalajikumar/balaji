#include<stdio.h>
#include<conio.h>
void main()
{
char a;
scanf("%s",&a);
if((a=='a')||(a=='A')||(a=='e')||(a=='E')||(a=='i')||(a=='I')||(a=='o')||(a=='O')||(a=='u')||(a=='U'))
{
printf("vowel");
}
else
{
printf("consonant");
}
getch();
}
