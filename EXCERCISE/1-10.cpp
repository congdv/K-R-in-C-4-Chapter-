#include <stdio.h>
main()
{
	int c;
	while((c=getchar())!=EOF)
	{
		int p=1;
		if(c=='\t')
		putchar('\\'),putchar('t'),p=0;
		if(c=='\b')
		putchar('\\'),putchar('b'),p=0;
		if(c=='\\')
		putchar('\\'),putchar('\\'),p=0;
		if(p)
		putchar(c);
	}
}
