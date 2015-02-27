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
	x=182;p=5;n=3;
	dectobin(x);
	printf("\n");
	y=invert(x,p,n);
	dectobin(y);
	return 0;
}
unsigned invert(unsigned x,int p,int n)
{
	return (x^((~(~0<<n))<<p+1-n));/* cai nay dung xor vi 1-1 la 0 tuc la nghich dao
									* vi vay can mot chuoi bit co dang 111000 voi 111 trung voi n vi tri xuat phat tu p
									dung ^ de tim nghich dao cua n bit can tim*/
}
