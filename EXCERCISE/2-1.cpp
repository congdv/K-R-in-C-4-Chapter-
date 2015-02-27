#include <stdio.h>
#include <float.h>
#include <limits.h>

main()
{
	signed char s_char_a,s_char_b;
	unsigned char u_char_a,u_char_b;
	
	signed short int s_short_int_a,s_short_int_b;
	unsigned short int u_short_int_a,u_short_int_b;
	
	signed long int s_long_int_a,s_long_int_b;
	unsigned long int u_long_int_a,u_long_int_b;
	
	unsigned int u_int_a,u_int_b;
	
	
	printf("<limits.h> max char: %d OR %d \n",SCHAR_MAX,UCHAR_MAX);
	s_char_a=s_char_b=1;
	while(s_char_a>0)
	{
		s_char_a=s_char_a*2;
		if(s_char_a>0)
		s_char_b=s_char_a;
	}
	s_char_b=s_char_b+(s_char_b-1);
	printf("COMPUTED: max signed char: %d \n",s_char_b);
	u_char_a=u_char_b=1;
	while(u_char_a>0)
	{
		u_char_a=u_char_a*2;
		if(u_char_a>0)
		u_char_b=u_char_a;
	}
	u_char_b=u_char_b+(u_char_b-1);
	printf("COMPUTED: max unsigned char: %d \n",u_char_b);
	printf("<limits.h> min char: %d or %d\n",CHAR_MIN,SCHAR_MIN);
	u_char_a=u_char_b=-1;
	while(u_char_a<0)
	{
		u_char_a=u_char_a*2;
		if(u_char_a<0)
			u_char_b=u_char_a;
	     printf(" %d \n",u_char_a);
	}
	printf("COMPUTED: min unsigned char: %d \n",u_char_b);
	s_char_a=s_char_b=-1;
	while(s_char_a<0)
	{
		s_char_a=s_char_a*2;
		if(s_char_a<0)
			s_char_b=s_char_a;
	}
	printf("COMPUTED: min signed char: %d \n",s_char_b);
	
	
	
	printf("<limits.h> max signed INT: %d \n",SHRT_MAX);
	s_short_int_a=s_short_int_b=1;
	while(s_short_int_a>0)
	{
		s_short_int_a=s_short_int_a*2;
		if(s_short_int_a>0)
			s_short_int_b=s_short_int_a;
	}
	s_short_int_b=s_short_int_b+(s_short_int_b-1);
	printf("COMPUTED: MAX SIGNED INT: %d\n",s_short_int_b);
	printf("<limits.h> max signed INT: %d \n",SHRT_MIN);
	s_short_int_a=s_short_int_b=-1;
	while(s_short_int_a<0)
	{
		s_short_int_a=s_short_int_a*2;
		if(s_short_int_a<0)
			s_short_int_b=s_short_int_a;
	}
	printf("COMPUTED: MIN SIGNED INT: %d\n",s_short_int_b);
	
	printf("<limits.h> max unsigned int: %d\n",USHRT_MAX);
	u_short_int_a=u_short_int_b=1;
	while(u_short_int_a>0)
	{
		u_short_int_a=u_short_int_a*2;
		if(u_short_int_a>0)
			u_short_int_b=u_short_int_a;
	}
	u_short_int_b=u_short_int_b+(u_short_int_b-1);
	printf("COMPUTED: UNSIGNED SHORT INT %d\n",u_short_int_b);
	
	printf("<limits.h> max signed long: %d\n",LONG_MAX);
	s_long_int_a=s_long_int_b=1;
	while(s_long_int_a>0)
	{
		s_long_int_a=s_long_int_a*2;
		if(s_long_int_a>0)
		s_long_int_b=s_long_int_a;
	}
	s_long_int_b=s_long_int_b+(s_long_int_b-1);
	printf("COMPUTED: SIGNED long INT %d\n",s_long_int_b);
	printf("<limits.h> min signed long: %d\n",LONG_MIN);
	s_long_int_a=s_long_int_b=-1;
	while(s_long_int_a<0)
	{
		s_long_int_a=s_long_int_a*2;
		if(s_long_int_a<0)
			s_long_int_b=s_long_int_a;
	}
	printf("COMPUTED: MIN SIGNED INT: %d\n",s_long_int_b);
	
	printf("<limits.h> max unsigned long: %lu\n",ULONG_MAX);
	u_long_int_a=u_long_int_b=1;
	while(u_long_int_a>0)
	{
		u_long_int_a=u_long_int_a*2;
		if(u_long_int_a>0)
		u_long_int_b=u_long_int_a;
	}
	u_long_int_b=u_long_int_b+(u_long_int_b-1);
	printf("COMPUTED: unSIGNED long INT %lu\n",u_long_int_b);
}
