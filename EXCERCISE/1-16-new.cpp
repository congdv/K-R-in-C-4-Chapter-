#include <stdio.h>
#define MAXLINE 20

int getline (char s[],int lim);
void copy(char to[],char from[]);
main()
{
	int len,max,c;
	max=0;
	char longest[MAXLINE];
	char line[MAXLINE];
	while((len=getline(line,MAXLINE))>0)
	{
		while((c=getchar())!=EOF && c!='\n')
			++len;
		if(len>max)
		{
			max=len;
			copy(longest,line);
		}
		
	}
	if (max>0)
		printf("Max lenght is %d\n",max);
		printf("Posible of text %s",longest);
	return 0;
}
int getline(char s[],int lim)
{
	int i,c;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
		s[i]=c;
	if(c=='\n')
	{
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}
void copy(char to[],char from[])
{
	int i;
	i=0;
	while((to[i]=from[i])!='\0')
	++i;
}
