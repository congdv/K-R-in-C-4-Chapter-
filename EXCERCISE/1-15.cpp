#include <stdio.h>
float fahrtocelsius(float fahr, float celsius);
main()
{
	float fahr,celsius;
	float lower,upper,step;
	lower=0;
	upper=300;
	step=20;
	fahr=lower;
	while(fahr<=upper)
	{
		printf("%3.0f\t%6.1f\n",fahr,fahrtocelsius(fahr,celsius));
		fahr=fahr+step;
	}
	return 0;
}
float fahrtocelsius(float fahr, float celsius)
{
	celsius=(5.0/9.0)*(fahr-32.0);
	return celsius;
}
