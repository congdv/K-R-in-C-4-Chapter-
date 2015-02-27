#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXWORD 30
/*Print histogram lengt of word*/
main()
{
	int c,state,cw=0;
	int wl[MAXWORD];
	int MAXLENGHT;
	state=OUT;
	for(int i=0;i<MAXWORD;++i)
		wl[i]=0;
	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='\n'||c=='\t')
			state=OUT;
		else if (state==OUT)
			state=IN,++cw;
		if (state==IN)
			++wl[cw-1];
	}
	MAXLENGHT=wl[0];
	for(int i=1;i<cw;++i)
		if(wl[i]>MAXLENGHT)
			MAXLENGHT=wl[i];
	for(int i=0;i<cw;++i)
	{
		for(int j=0;j<MAXLENGHT-wl[i];++j)
			printf(" ");
		for(int j=MAXLENGHT-wl[i];j<MAXLENGHT;++j)
			printf("X");
		printf("\n");
	}
}
