#include <stdio.h>
main()
{
	int c;
	int cnl=0,ct=0,cb=0;
	int nl,t,b;
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		   ++cnl;
		if(c==' ')
		   ++cb;
		if(c=='\t')
		   ++ct;
	}
	printf("%d\t%d\t%d",cnl,cb,ct);
}
