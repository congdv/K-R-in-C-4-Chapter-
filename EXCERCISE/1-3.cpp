#include <stdio.h>
main()
{
	float fahr,celsius;
	float lower,upper,step;
	lower=0;
	step=50;
	upper=800;
	fahr=lower;
	while(fahr<=upper)
	{
		celsius=(5.0/9.0)*(fahr-32.0);
		printf("%3.0f %6.1f\n",fahr,celsius);
		fahr=fahr+step;
	}

}
