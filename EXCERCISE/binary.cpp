#include <stdio.h>

void dectobin(int n){
     if (n > 0){
        dectobin(n/2);
        printf("%d",n%2);
     }
}
unsigned getbits(unsigned x,int p,int n);
main()
{
	unsigned x,y,z;
	dectobin(123);
	y=getbits(123,5,3);
	x=getbits(123,2,3);
	printf("\n");
	dectobin(x);
	printf("\n");
	dectobin(y);
	printf("\n");
	y=y<<3;
	dectobin(y);
	printf("\n");
	z=y|x;
	dectobin(z);
	x=123>>5;
	printf("\n");
	dectobin(x);
	x=x<<5;
	printf("\n");
	z=z|x;
	dectobin(z);
	return 0;
}
unsigned getbits(unsigned x,int p,int n)
{
	return (x>>(p+1-n)& ~(~0<<n));
}
