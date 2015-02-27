#include <stdio.h>
#include <iostream>

using namespace std;

void dectobin(int n){
     if (n > 0){
        dectobin(n/2);
        cout <<n%2;
     }
}
unsigned getbits(unsigned x,int p,int n);
main() {
    int x=123;
    dectobin(x);
    printf("\n");
	int y;
	y=getbits(x,3,4);// n>p 2 lan thi se dan den chuyen so bit la am do p+1-n 
	dectobin(y);
	printf("\n");
	dectobin(y);
    return 0;
}
unsigned getbits(unsigned x,int p,int n)
{
	return (x>>(p+1-n)& ~(~0<<n));
}
