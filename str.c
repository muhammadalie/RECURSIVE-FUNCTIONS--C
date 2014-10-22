#include <stdio.h>
#include <string.h>
void reverse(char [], int);
int main()
{
    char str1[20]="hello";
    int size;
   // printf("Enter a string to reverse: ");
    //scanf("%s", str1);
    size = strlen(str1);
    reverse(str1,size-1);
    printf("The string after reversing is: %s\n", str1);
    //return 0;
}

void reverse(char *s, int l)

{	//printf("l is %d and s is %c\n",l,*s);
	if(*(s)=='\0') return;
	char temp;
    	temp = *s;
	*s = *(s+l);
    	*(s+l) = temp;
	printf("l is %d and s is %c\n",l,*s);

	//return;
	//printf("111%c",*(s));
	//if(*(s+l/2)==*s) return;
	 //return;
    	return reverse((s+1),l+1);
	//return;

}
