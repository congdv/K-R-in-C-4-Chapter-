#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLINE 1000

int atoi(char s[]);
int htoi(char s[],int lenght);
int power(int base, int n);

main()
{
	int c,i;
	char hex[MAXLINE];
	printf("Enter a string of hexadecimal 0x or 0X: ");
	for(i=0;(c=getchar())!=EOF;++i)
		hex[i]=c;
	printf("hex into int: %d",htoi(hex,i-1));
	return 0;
}
int htoi(char s[],int lenght)
{
	int n,temp,d;
	n=0;d=lenght-1;
	
	for(int i=0;i<lenght;++i)
	{
		if(isdigit(s[i]))
			temp=s[i]-'0';
		if(s[i]>='a'&&s[i]<='z')
			temp=s[i]-'a'+10;
		if(s[i]>='A'&&s[i]<='Z')
			temp=s[i]-'A' + 10;
		n=n+temp*power(16,d);
		--d;
			
	}	
	return n;
}

int power(int base,int n)
{
	int p=1;
	for(int i=1;i<=n;++i)
		p=p*base;
	return p;
}
