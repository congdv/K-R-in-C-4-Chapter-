#include <stdio.h>

int any(char s1[],char s2[]);

main()
{
	char s1[]="this is my function";
	char s2[]="imun";
	int p;
	
	printf("%s\n",s1);
	printf("%s\n",s2);
	p=any(s1,s2);
	printf("%d",p+1);
	return 0;
} 
int any(char s1[],char s2[])
{
	int i,j;
	
	for(i=0;s1[i]!='\0';i++)
		for(j=0;s2[j]!='\0';j++)
			if(s1[i]==s2[j])
				return i;
	return -1;
}
