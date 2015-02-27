#include <stdio.h>

void dectobin(int n){
     if (n > 0){
        dectobin(n/2);
        printf("%d",n%2);
     }
}
main()
{
	unsigned x;
	x=~(~0<<3);
	dectobin(x);
	x=~0<<3;
	return 0;
}
