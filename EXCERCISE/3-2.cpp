#include <stdio.h>
#include <string.h>

void escapse(char s[],char t[]);

main()
{
	char t[]="My name \t \n cong";
	char s[1000];
	
	printf(t);
	printf("\n");
	escapse(s,t);
	return 0;
}
void escapse(char s[],char t[])
{
	int n,i;
	
	n=strlen(t);
	for(i=0;i<n;i++)
	{
		switch (t[i])
		{
			case '\t':
				s[i]='\\';//hiden // is /
				s[++i]='t';
				break;
			case '\n':
				s[i]='\\';
				s[++i]='n';
				break;
			default:
				s[i]=t[i];
				break;
		}
	}
	s[i]='\0';
	printf(s);
}
