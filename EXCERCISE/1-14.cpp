#include <stdio.h>
#define NUM_CHAR 95
main()
{
	int c;
	int fc[NUM_CHAR];
	int pc[NUM_CHAR];
	int cr=0;
	for(int i=0;i<NUM_CHAR;++i)
		fc[i]=0;
	while((c=getchar())!=EOF)
	{
		++fc[c-32];
		pc[cr++]=c;
	}
	for(int i=0;i<NUM_CHAR;++i)
		printf("%c\t%d\t%d\n",i+32,i+32,fc[i]);
	int p;
	for(int i=0;i<cr;++i)
	{
		p=pc[i];
		printf("%c	",p);
		for(int j=0;j<fc[p-32];++j)
		printf("*");
		printf("\n");
	}
}
