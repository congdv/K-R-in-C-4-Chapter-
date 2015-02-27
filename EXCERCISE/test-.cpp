#include <stdio.h>
#include <stdlib.h>

#define FIRST_GRAPHIC_CHAR 32
#define LAST_GRAPHIC_CHAR 126
#define NUM_GRAPHIC_CHARS (LAST_GRAPHIC_CHAR - FIRST_GRAPHIC_CHAR + 1)


int main(void)
{

    int userInput;
    int arrayStuff[NUM_GRAPHIC_CHARS] = {0};
    int i;

    printf("enter a string of characters followed by <return>\n");

    userInput = getchar();
    while( userInput >= FIRST_GRAPHIC_CHAR && userInput <= LAST_GRAPHIC_CHAR )
    {
       ++arrayStuff[(userInput - FIRST_GRAPHIC_CHAR)];
       userInput = getchar();
    }

    printf("Case\t|\tOccurances\n");

    for(i = 0; i < NUM_GRAPHIC_CHARS; ++i)
    {
        if (  i + FIRST_GRAPHIC_CHAR == ' ' )
           printf("<spc>\t|\t%d\n",  arrayStuff[i]);
        else
           printf("%c\t|\t%d\n", (i + FIRST_GRAPHIC_CHAR), arrayStuff[i]);
    }
    return EXIT_SUCCESS;
}
