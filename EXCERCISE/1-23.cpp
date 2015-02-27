#include <stdio.h>
#define MAXLINE 1000

int getline(char line[],int lim);
int remove(char line[],int len);
main()
{
	int len;
	char line[MAXLINE];
	
	while ((len=getline(line,MAXLINE))>0)
	{
		remove(line,len);
		printf("%s",line);
	}
		
	return 0;
}
int getline(char line[],int lim)
{
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF && c!='\n';++i)
		line[i]=c;
	if(c=='\n')
	{
		line[i]=c;
		++i;
	}
	line[i]='\0';
	return i;
}
int remove(char line[],int len)
{
	int i;
	for(i=0;i<len;++i)
	{
		if(line[i]=='/' && line[i+1]=='/')
		line[i]='\0';
		if(line[i]=='/' && line[i+1]=='*')
		{
			line[i]=line[i+1]=' ';
			i=i+2;
			while(line[i]!='*' || line[i+1]!='/')
			{
				line[i]=' ';
				++i;
			}
			line[i+1]=line[i]=' ';
		}
    }
	return 0;
}
