/*delete character of squeeze(s1,s2)*/
#include <stdio.h>

#define MAXLINE 1000
#define YES 1
#define NO 0

void getline(char s[],int lim);
void squeeze(char s1[],char s2[]);
main()
{
	char s1[MAXLINE],s2[MAXLINE];
	
	getline(s1,MAXLINE);
	getline(s2,MAXLINE);
	squeeze(s1,s2);
	printf("%s",s1);
	return 0;
}	
void getline(char s[],int lim)
{
	int c;
	int i;
	
	for(i=0;i<lim-1&&(c=getchar())!=EOF;++i)
		s[i]=c;
	s[i-1]='\0';
}
void squeeze(char s1[],char s2[])
{
	int i,j,p;
	int found;
	
	p=0;
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=0;s2[j]!='\0';j++)
			if(s1[i]==s2[j])
				found=YES;
			else
				found=NO;
		if(found==NO)
			s1[p++]=s1[i];
    }
		s1[p]='\0';
}

