void print(int a,int b)
{
	if(a==b) return ;
	printf("%d",a);
	print(a+1,b);
}
main()
{
print(4,9);
}

