#include <stdio.h>
#define MAXLINE 5    /* A SMALL NUMBER FOR TESTING */

int  getline(char line[], int maxline);
void reverse(char line[]);

main()
{
    int c;
    char line[MAXLINE];

    while (getline(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s\n", line);
    }

    printf("\nEND OF PROGRAM\n");
    return 0;
}

/* GETLINE: READ A LINE INTO S, RETURN LENGTH */
/*    MODIFIED FROM EX1-16 TO PROCEED TO END OF EXTRA LONG LINES */
/*    DO NOT SAVE NEWLINE CHAR OF ANY LINE                       */
int  getline(char s[], int lim)
{
    int c, i;

    i = 0;
    while ((c = getchar()) != EOF && c != '\n')
        if (i < lim - 1) {
            s[i] = c;
            ++i;
        }

    s[i] = '\0';
    return i;
}

/* REVERSE: REVERSE A CHARACTER STRING */
void reverse(char s[])
{
    int i, j;
    char hold;

    i = 0;
    while (s[i] != '\0')
        ++i;

    j = i - 1;
    for (i = 0; i < j; ++i) {
        hold = s[i];
        s[i] = s[j];
        s[j] = hold;
        --j;
    }
}
