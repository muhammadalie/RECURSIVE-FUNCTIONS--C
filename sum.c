#include<stdio.h>
int sumsr(int a ,int b)
{
	if(a>=b) return   ;
	return a+sumsr(a+1,b);
}

main()
{
 printf("%d\n",sumsr(1,3));
}

