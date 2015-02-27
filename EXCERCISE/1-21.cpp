#include <stdio.h>

#define TAB 8
#define MAX 100
#define BLANK '_'

int getl(char *);
int entab(char *);

int
main(void)
{
    char array[MAX];
    int c;

    while ((c = getl(array)) > 0)
        entab(array);
    return 0;
}

int 
getl(char *s)
{
    int c, d;

    for (d = 0; d < MAX-1 && ((c = getchar()) != EOF) &&
            c != '\n'; ++d)
        s[d] = c;
    if (c == '\n')
        s[d++] = c;
    s[d] = '\0';

    return d;
}

int
entab(char *s)
{
    int c, d, rep, check = 1;
    int blanks = 0;

    c = d = rep = 0;
    while (s[c]) {
        if (s[c] == BLANK) {
            check = 0;
            if (++blanks == (d = TAB - d)) {
                blanks = 0;
                s[rep++] = '\t';
                check = 1;
            }

            if (blanks > 0 && check == 0) s[rep++] = BLANK;
        } else if (s[c] == '\n') {
            s[rep] = '\0';
            printf("%s\n", s);
            d = rep = c = 0;
            check = 1;
        } else {
            ++d;
            s[rep++] = s[c];
        }
        ++c;
    }

    return 0;
}
