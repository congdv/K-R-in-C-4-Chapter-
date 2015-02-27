#include <stdio.h>
#include <string.h>
#define MAX_CHAR 1000

void reverse(char s[]);
void itoa(int n, char s[]);
int main()
{
	int n = -123455;
	char s[MAX_CHAR];
	
	itoa(n,s);
	printf("%s",s);
}
void itoa(int n, char s[])
{
	int i,sign;
	
	sign = n;
	if(n < 0)
		n = -n;
	i=0;
	do
	{
		s[i++] = n % 10 + '0'; 
	}while((n/=10)>0);
	if (sign < 0)
		s[i++] = '-';
	s[i]='\0';
	reverse(s);
}
void reverse(char s[])
{
	int i,j,c;
	
	for(i=strlen(s)-1,j=0;i>j;j++,i--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
