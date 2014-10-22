#include<stdio.h>
int mypower(int x,int y)
{
	if(y==0) return 1;
	return x*mypower(x,y-1);

}
main()
{
int a,b;
printf("\ttype x and y (x^y):\n");
scanf("%d",&a);

scanf("%d",&b);

printf(" \t %d^%d  =  %d \n",a,b,mypower(a,b));
}
