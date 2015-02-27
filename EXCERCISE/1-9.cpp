#include <stdio.h>
/*A program to copy its input to its output, replacing each string of one or more lanks by a single blank*/
main()
{
	int c,lastc;
	lastc=0;
	while((c=getchar())!=EOF)
		if(((c==' ')+ (lastc==' '))<2)//{}
		putchar(c),lastc=c;	          
}


