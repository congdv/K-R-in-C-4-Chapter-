#include <stdio.h>
main()
{
	int c;
	
	while(c)
	{
		c=(getchar()!=EOF);
		printf("%d\n",c);
		
	}
}
