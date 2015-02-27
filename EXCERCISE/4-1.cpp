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
		if (strindex(line,pattern) >= 0)
			printf("%d",strindex(line,pattern));
	printf("%d",strlen(pattern));
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
	int i,j, k;
	
	for (i = strlen(s) - 1 ; i != 0; i--) {
		for(k = strlen(t) - 1,j = i; j != 0 && t[k] == s[j]; j--, k--)
			;
		if (j == 0 )
			return (strlen(s) - strlen(t) - 1);// vi chuoi s them ki tu \n
	}
	return -1;		
}
