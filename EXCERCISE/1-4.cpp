#include <stdio.h>

main()
{
	float fahr,celsius;
	float lower,step,upper;
	lower=0;
	step=20;
	upper=300;
	celsius=lower;
	while(celsius<=upper)
	{
		fahr=(9.0/5.0)*celsius+32.0;
		printf("%3.0f  %6.1f\n",celsius,fahr);
		celsius=celsius+step;
	}
}
