#include <stdio.h>
#include <limits.h>
#include <float.h>
main()
{
	float f,g;
	while(f>=g)
	f=(f+g)-g;
	printf("%f",f);
	printf("\n%f",FLT_MAX);
}
