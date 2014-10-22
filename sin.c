//sin(x) = x - x3/3! + x5/5! - x7/7! + x9/9!
#include<stdio.h>
int power(int x,int y)
{
        if(y==0) return 1;
        return x*power(x,y-1);

}
float fact(int m)
{       if(m<2) return m;
        return m*fact(m-1);
}
float sinx(int x,int n)
{	if(n<1) return;
	if(n==7||n==3) return power(-x,n)/fact(n)+sinx(x,n-2);
	//printf("%f",power(x,n)/fact(n));
	else return power(x,n)/fact(n)+sinx(x,n-2);
}
main()
{
printf("%f",sinx(3,9));
}
