#include <stdio.h>

void dectobin(int n){
	if(n>0)
	{
		dectobin(n/2);
		printf("%d",n%2);
	}
}
unsigned setbits(unsigned x,int p,int n,unsigned y);
unsigned getbits(unsigned x,int p,int n);
main()
{
	unsigned x,z,p,n,y;
	x=171;p=5;n=3;y=170;
	z=setbits(x,p,n,y);
	dectobin(z);
	return 0;
}
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
	unsigned z;
	y=y& ~(~0<<n);//lay n bit can thay doi o y
	y=y<<(p-n+1);
	z=x& ~(~0<<(p+1-n));//lay n bit cuoi o x
	x=x>>(p+1);
	x=x<<(p+1);//co duoc n bit sau position p;
	return (z|x|y);
}
unsigned getbits(unsigned x,int p,int n)
{
	return (x>>(p+1-n)& ~(~0<<n));
}
