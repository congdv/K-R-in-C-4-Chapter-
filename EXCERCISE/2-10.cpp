#include <stdio.h>

int lower(int c);
main()
{
	int c,i=0;
	char s[1000];
	
	while((c=getchar())!=EOF)
		s[i++]=c;
	s[i-1]='\0';
	printf("%s\n",s);
	for(i=0;s[i]!='\0';i++)
		s[i]=lower(s[i]);
	printf("%s",s);
	return 0;
}
int lower(int c)
{
	return ((c>='A'&&c<='Z')?(c+'a'-'A'):c);
}
