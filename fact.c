#include<stdio.h>
int fact(int m)
{	if(m<2) return m;
	return m*fact(m-1);
}
main()
{
printf("%d\n",fact(5));
}

