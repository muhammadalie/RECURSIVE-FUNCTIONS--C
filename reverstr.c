#include<stdio.h>
#include<string.h>

char rever(char a[])
{
	if(strlen(a)==1) return *a;
	rever(a+1);
}
main()
{
//char c[4]="aaaa";
char a[4]="he\0";
char b[3];
b=rever(a);
printf("%s\n",b);
}
