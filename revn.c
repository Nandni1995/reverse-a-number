#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
clrscr();
printf("Enter the number:");
scanf("%s",a);
strrev(a);
printf("After Reverse:%s",a);
getch();
}
