#include <stdio.h>
/*count digits,white space,others*/
main()
{
	int c,i,nwhite,nother;
	int ndigit[10];
	nwhite=nother=0;
	for(i=0;i<10;++i)
		ndigit[i]=0;//it initialize position of digit from 0->9
	while((c=getchar())!=EOF)
		if(c>='0'&&c<='9')
			++ndigit[c-'0'];// use to know if it is position's digit , increment one point
		else if(c==' '||c=='\n'||c=='\t')
			++nwhite;
		else
			++nother;
	printf("digits =");
	for(i=0;i<10;++i)
		printf(" %d",ndigit[i]);
	printf(" , white space = %d, other = %d",nwhite,nother);
}
