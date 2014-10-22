
#include<stdio.h>
int sum(int a)
{
	if(a/10==0) return a;
	return a%10+sum(a/10);
}
main()
{
	printf("%d",sum(1992));
}


