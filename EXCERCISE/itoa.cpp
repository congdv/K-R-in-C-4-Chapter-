#include <stdio.h>
#include <math.h>

int itoa(int n, char s[])
{
	int i = 0;
	if (n / 10)
		i = itoa (n/10,s);
	else if (n < 0)
		s[i++] = '-';
	s[i++] = abs(n%10) + '0';
	s[i] = '\0';
	return i;
}
main()
{
	char s[100];
	itoa(-124,s);
	printf("%s",s);
}
