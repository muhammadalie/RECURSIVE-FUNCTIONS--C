#include<stdio.h>
int gcd(int a , int b)
{
	if(b%a==0) return a;
	return gcd(b,a%b);
}
main()
{
printf("%d",gcd(28,12));
}
