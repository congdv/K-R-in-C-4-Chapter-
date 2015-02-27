#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int strindex(char s[], char t[]);
int getline(char s[], int lim);

char pattern[] = "hehe";
main()
{
	char line[MAXLINE];
	
	while((getline(line,MAXLINE)) > 0)
		if (strindex(line,pattern) > 0)
			printf("%d\n",strindex(line,pattern));
	return 0;
}
int getline(char s[], int lim)
{
	int c,i;
	
	i = 0;
	
	while(--lim > 0 && (c = getchar())!=EOF && c != '\n')
		s[i++] = c;
		
	if (c == '\n')	{
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}
int  strindex(char s[],char t[])
{
	int i,j;
	
	for (i = strlen(s); i >= 0; i--) {
		for(j = strlen(t); j != 0 && t[j] == s[i]; j--)
			;
		if (j == 0 )
			return (strlen(s) - strlen(t));
	}
	return -1;		
}
