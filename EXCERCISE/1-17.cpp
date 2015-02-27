#include <stdio.h>
#define MAXLINE 1000
#define MAX_CHARACTERS 80

int getline(char s[],int lim);
void copy(char to[], char from[],int i);
main()
{
	int len,lenback;
	lenback=0;
	char line[MAXLINE];
	char longer[MAXLINE];
	while((len=getline(line,MAXLINE))>0)
		if(len>MAX_CHARACTERS)
		{
			copy(longer,line,lenback);
			lenback=len;//save positon array for next copy
		}
	printf("The line are longer than 80 character\n");
	printf("%s",longer);
}

int getline(char s[],int lim)
{
	int i,c;
	for(i=0;i<lim-1 &&(c=getchar())!=EOF && c!='\n';++i)
		s[i]=c;
	if(c=='\n')
	{
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}
void copy(char to[],char from[],int i)
{
	int j=0;
	while((to[j+i]=from[j])!='\0')
		++j;
}
