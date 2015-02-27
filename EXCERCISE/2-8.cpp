#include <stdio.h>

void dectobin(int n){
	if(n>0)
	{
		dectobin(n/2);
		printf("%d",n%2);
	}
}
unsigned rightrot(unsigned x,int n);
main()
{
	unsigned x,y;
	
	int p,n,s,i=0;	

	x=037;p=5;n=3;
	s=x;
	while(s>0)
	{
		s/=2;
		i++;
	}
	printf("%d\n",i);
	dectobin(x);
	printf("\n");
	y=rightrot(x,n);
	dectobin(y);
	return 0;
}
unsigned rightrot(unsigned int x,int n)
{
	int s,i=0;
	
	s=x;
	while(s>0)
	{
		s/=2;
		i++;
	}
	return (x>>n | (x&~(~0<<n))<<i-n);// lay n so can rightrot sau do them i-n so 0 sau, con x thi lefshift n so dda tach ra
	
}
