#include <stdio.h>

void strcat(char s[],char t[]);
void squeeze(char s[],int c);
main()
{
	char s[100],t[100];
	char c;
	gets(s);
	gets(t);
	strcat(s,t);
	printf("%s",s);
	scanf("%c",&c);
	squeeze(s,c);
	printf("%s",s);
	return 0;
}
void strcat(char s[],char t[])
{
	int i,j;
	
	i=j=0;
	while(s[i]!='\0')
		i++;
	while((s[i++]=t[j++])!='\0');
}
void squeeze(char s[],int c)
{
	int i,j;
	
	for(i=j=0;s[i]!='\0';i++)
		if(s[i]!=c)
			s[j++]=s[i];
	s[j]='\0';
}
