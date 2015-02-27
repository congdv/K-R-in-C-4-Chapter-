#include <stdio.h>
#include <string.h>

void reverse(char s[]);

main()
{
	char s[]="i go to mall";
	
	reverse(s);
	printf("%s",s);
	
	return 0;
}
void reverse(char s[])
{
	int c,j,i;
	for(i=0,j=strlen(s)-1;j>i;j--,i++)
	{
		c=s[i];
		s[i]=s[j];
		s[j]=c;
	}
}
