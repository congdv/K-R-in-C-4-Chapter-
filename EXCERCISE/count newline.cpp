
 # include <stdio.h>
 main ()
{

int c,lastc;
lastc=0;
while ((c=getchar()) != EOF)
    if (((c==' ')+ (lastc==' '))<2)
        putchar(c), lastc=c;
 }
/*#include <stdio.h>
main()
{
	int c,nl;
	nl=0;
	while((c=getchar())!=EOF)
	    if(c=='\n')
	    ++nl;
	printf("%d\n",nl);

}*/
