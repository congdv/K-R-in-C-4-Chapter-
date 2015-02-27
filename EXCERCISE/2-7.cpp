#include <stdio.h>

void dectobin(int n){
	if(n>0)
	{
		dectobin(n/2);
		printf("%d",n%2);
	}
}
unsigned invert(unsigned x,int p,int n);
main()
{
	unsigned x,y;
	int p,n;	
	x=171;p=5;n=3;
	dectobin(x);
	y=invert(x,p,n);
	dectobin(y);
	return 0;
}
unsigned invert(unsigned x,int p,int n)
{
	unsigned x1,x2,x3;
	
	x1=x>>(p+1-n)&~(~0<<n);
	x1=~x1;
	x2=x&~(~0<<(p+1-n));
	x3=x3>>p+1;
	x3=x3<<p+1;
	return (x1|x2|x3);
}
