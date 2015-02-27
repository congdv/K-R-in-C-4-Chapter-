#include <stdio.h>
#include <ctype.h>
#define MAXLINE 1000

//double atof(char s[]);
//int getline(char s[], int lim);

main()
{
	char line[MAXLINE];
	
	double atof(char s[]);
	int getline(char s[], int lim);
	while((getline(line,MAXLINE)) > 0)
		printf ("\t%f\n",atof(line));
	return 0;
}
int getline(char s[],int lim)
{
	double val,power;
	int i,c;
	
	i = 0;
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}
double atof(char s[])
{
	double power,val;
	int i,sign;
	
	for (i = 0; isspace(s[i]);i++);
	
	sign = (s[i] == '-')?-1:1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = val * 10.0 + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for(power = 1.0; isdigit(s[i]);i++)	{
		val = val * 10.0 + (s[i] - '0');
		power *= 10;
	}
	return sign * val / power;
}
