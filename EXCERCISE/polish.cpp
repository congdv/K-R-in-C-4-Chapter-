#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include <ctype.h>

#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */
#define MAXVAL 100 /* maximum depth of val stack */

int getop(char []);
void push(double);
double pop(void);
void print_top(void);

int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */

/* reverse Polish calculator */
main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type= getop(s)) != EOF) {

        static int pass = 0;
        int i, check;
        i = check = 0;

        switch (type) {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push (pop() + pop()) ;
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: zero divisor\n");
            break;
        case '\n':
            print_top();
            check = 1;
            break;
        default:
            printf("error: unknown command %s\n", s);
            break;
        }
        if(!check) {
            printf("pass #%d\n",pass++);
            while(val[i] != '\0') {
                printf("val[%d]: %.2f\n",i,val[i]);
                ++i;
            }
        }
    }
    system("Pause");
    return 0;
}

/* push: push f onto value stack */
void push(double f)
{
    if ( sp < MAXVAL) {
        while (val[sp] != '\0')
            ++sp;
        val[sp++] = f;
    }
    else
        printf("error: stack full. can't push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void)
{
    if (sp > 0) {
        double temp = val[--sp];
        val[sp] = '\0';
        return temp;
    }
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

int getch(void);
void ungetch(int);

/* getop: get next operator or numeric operand */
int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c; /* not a number */
    i = 0;
    if (isdigit(c)) /*collect integer part*/
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.') /*collect fraction part*/
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */

int getch(void) /* get a (possibly pushed back) character */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /* push character back on input */
{
    if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

void print_top(void)
{
    int i = 0;
    while( val[i] != '\0' )
        ++i;
    --i;
    printf("\t%.8g\n",val[i]);
}
