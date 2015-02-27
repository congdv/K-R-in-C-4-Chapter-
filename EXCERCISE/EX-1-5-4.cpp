#include <stdio.h>
#define IN 1
#define OUT 0
/*COUNT WORDS, LINES,CHARACTER IN INPUT*/
main()
{
	int c,nl,nw,nc,state;
	state=OUT;nl=nw=nc=0;
	while((c=getchar())!=EOF)
	{
		++nc;
		if(c=='\n') ++nl;
		if(c==' '||c=='\n'||c=='\t')
			state=OUT;
		else if(state==OUT)
			state=IN,++nw;
	}
	printf("Characters,Lines,words: %d\t%d\t%d",nc,nl,nw);
}
