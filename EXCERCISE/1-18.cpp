#include <stdio.h>
#define MAXLINE 1000

int getline(char s[],int lim);
main()
{
	int len,lenback;
	lenback=0;
	char line[MAXLINE];
	char newline[MAXLINE];
	while((len=getline(line,MAXLINE))>0)
	{
		printf("%s",line);
	}
	return 0;
}
int getline(char s[],int lim)
{
	int c,i=0;
	while (i<lim-1 && (c=getchar())!=EOF && c!='\n')
		if(c!=' '&&c!='\t')
			s[i]=c,++i;
	if(c='\n')
	{
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;	
}
