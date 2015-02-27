#include <stdio.h>
#define OUT 0 //out word
#define IN 1//in word
/*Print one word per line*/
main()
{
	int c,nw,state,lastc;
	state=OUT;nw=0;lastc=0;
	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='\t'||c=='\n')
			state=OUT,putchar('\n');
		else if(state==OUT)
			state=IN,putchar(c);
		else if(state==IN)
			putchar(c); 
		
			
	}
}
