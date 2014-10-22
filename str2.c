# include <stdio.h>
 
void reverse(char* s)
{	//printf(" %c ",*(s));
	if(*(s)=='\0') return *s;
	reverse(s+1);
	//return *s;
	printf("%c",*(s));
}


int main()
{
	char *a = "hello";
   	reverse(a);
   	//printf("%s",*b);
}
