#include <stdio.h>

int bitcount(unsigned x)
{
	int b;
	b=122;
	for(b=0;x!=0;x>>=1)
		if(x & 01)
			b++;
	return b;
}
main()
{
	unsigned x=123;
	printf("%d",bitcount(x));
	return 0;
}
