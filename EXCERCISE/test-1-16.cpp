/*nhap vao mot day co do dai toi da la 20 khi do nhap vao getchar() chi dung o 20 nhung nhap lon hon thi in ra do dai ngang 20 nhung phai dem xem do dai do bao nhieu*/
#include <stdio.h>
#define MAXLINE 20    /* A SMALL NUMBER FOR TESTING */

int  getline(char line[], int maxline);
void copy(char to[], char from[]);

/* PRINT LONGEST INPUT LINE */
main()
{
    int len, c;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (line[len - 1] != '\n') {                      /****** SGL ******/
            while ((c = getchar()) != EOF && c != '\n')   /* COUNT CHARS   */
                ++len;                                    /* IN EXTRA      */
            if (c == '\n')                                /* LONG LINES    */
                ++len;                                    /*               */
        }                                                 /****** SGL ******/
        if (len > max) {
            max = len;
            copy(longest, line); 
        }
    }
    if (max > 0) {   /* THERE WAS A LINE */
        printf("# CHARACTERS IN LONGEST LINE: %d\n", max);
        printf("%s", longest);
    }
    printf("\nEND OF PROGRAM\n");
    return 0;
}

/* GETLINE: READ A LINE INTO S, RETURN LENGTH */
int  getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* COPY: COPY 'FROM' INTO 'TO'; ASSUME 'TO' IS BIG ENOUGH */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
