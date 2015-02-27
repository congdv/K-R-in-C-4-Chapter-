// convert string to floating_point
#include <stdio.h>
#include <ctype.h>
#define MAXLINE 1000

double atof_p(char s[]);
int getline(char s[],int lim);
int power_(int n);

main()
{
	char line[MAXLINE];
	
	while((getline(line,MAXLINE)) > 0)
		printf ("\t%f\n",atof_p(line));
	return 0;
}
int getline(char s[], int lim)
{
	int i,c;
	
	i = 0;
	while(--lim && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}
double atof_p(char s[])
{
	double val,power,float_point,power_fp;
	int i,sign,sign_fp;
	
	for(i = 0; isspace(s[i]);i++)
		;
	sign = (s[i] == '-')?-1:1;
	if(s[i] == '-' || s[i] == '+')
		i++;
	for(val = 0.0; isdigit(s[i]); i++)
		val = val * 10.0 + (s[i] - '0');
	if(s[i] == '.')
		i++;
	for(power = 1.0; isdigit(s[i]); i++) {
		val = val * 10.0 + (s[i] - '0');
		power *= 10.0;
	}
	if(s[i] == 'e' || s[i] == 'E')
		i++;
	sign_fp = (s[i] == '-')?-1:1;
	if(s[i] == '-' || s[i] == '+')
		i++;
	for(power_fp = 1.0; isdigit(s[i]);i++)
		power_fp *= power_(s[i] - '0');
	if(sign_fp == -1)
	 	return (val * sign) / (power * power_fp);
	return (val * sign * power_fp) / power; 
}
int power_(int n)
{
	int sum = 1,i;
	for (i = 0; i < n; i++)
		sum *= 10;
	return sum;
}
