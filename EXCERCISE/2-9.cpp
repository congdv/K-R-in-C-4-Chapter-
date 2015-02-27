#include <stdio.h>

void detobin(int x)
{
	if(x>0)
	{
		detobin(x/2);
		printf("%d",x%2);
	}
}
void bitcount(unsigned x);
unsigned deleterightmost(unsigned x);
main()
{
	unsigned x,y;
	
	x=122;
	
	detobin(x);
	printf("\n");
	bitcount(x);
	//printf("%d",bitcount(x));
	printf("\n");
	y=deleterightmost(x);
	printf("%u\n",y);
	detobin(y);
	return 0;
}
unsigned deleterightmost(unsigned x)
{
	x&=(x-1);//x - 1 111011-1=1111010 and 1111010&1111011=1111010;
	//neu la so chan thi -1bit thanh tru 2 trong int, do bit cuoi la bit 0
	return x;
}
void bitcount(unsigned x)
{
	int b;
	for(b=0;x!=0;b++)//count 1-bits in binary;
	{
		x&=(x-1);
		detobin(x);
		printf("\n");
	}
	printf("%d",b);
}
