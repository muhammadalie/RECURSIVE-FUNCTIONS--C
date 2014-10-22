#include<stdio.h>
int reverse(int a)
{
	if(a/10==0) return;
	printf("aa%d",a/10);
	return a%10*a/()+reverse(a/10);
	//printf("aa%d  ",a%10);
}
main()
{
printf("    %d\n",reverse(413));
//int t=123;
//char a=t;
//printf("%d",a);
}
