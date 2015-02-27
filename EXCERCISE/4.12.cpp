#include <stdio.h>
#include <math.h>

char *itoa(int n,char *s)
{
	//char *p = s;
	if(n/10)
		s = itoa(n/10,s);
	else if (n < 0)
		*s++ = '-';
	*s++ = abs(n%10) + '0';
	*s = '\0';
	return s;
}
main()
{
	char *s;
	itoa(-1234,s);
	printf("%s",s);
}
