#include <stdio.h>


enum { SZ = 11 };

unsigned int htoi(const char *s);


int main()
{

  char buff[SZ];  //Max 11 char: 0x XX XX XX XX '\0' (2 + 8 + 1)

  while(fscanf(stdin, "%s", buff) != EOF)
    printf("%X\n", htoi(buff) ); 

  return 0;
}


unsigned int htoi(const char *s)
{
  unsigned int i, r = 0;

  for(i = (s[1] == 'x') ? 2 : 0; s[i] != '\0'; i++)
    r = ( r << 4 ) +  ( (s[i] > '9') ? 0x9 : 0x0 ) + ( s[i] & 0xF );

  return r;
}
