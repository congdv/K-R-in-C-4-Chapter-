#include <stdio.h>
#include <stdlib.h>/*for atof()*/

#define MAXOP 100 /*max size of operand or operator*/
#define NUMBER '0'/*signal that a number was found*/

int getop(char []);
void push(double);/*push number into value array*/
double pop(void);/*calculator number*/
/*reverse Polish calculator*/

main()
{
	int type;
	double op2;
	char s[MAXOP];
	
	while((type = getop(s))!= EOF){
		switch (type){
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop()+pop());
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
					push(pop()/op2);
				else
					printf("error:zero division\n");
				break;
			case '\n':
				printf("\t%.8g\n",pop());
				break;
			default:
				printf("error: unknown comand %s\n",s);
				break;
			}
	}
	return 0;
}

#define MAXVAL 100 /*maximum depth of val stack*/
int sp = 0 ;/*next free stack position*/
double val[MAXVAL];

/*push f onto value value stack*/
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g",f);
}

/*pop: pop and return top value from*/

double pop(void)
{
	if (sp > 0)
		return val[--sp];//return numeric not operator
	else {
		printf ("error: stack empty");
		return 0.0;
	}
}

#include <ctype.h>

int getch(void);/*input charactor is a numeric*/
void ungetch(int);

/*getop: get next character or numeric operand*/
int getop(char s[])
{
	int i,c;
	
	while((s[0] = c = getch()) == ' '||c == '\t')
		;
	s[1]='\0';/*delete space character in start point*/
	if(!isdigit(c) && c!= '.')
		return c; /*not number, maybe numeric operand*/
	i = 0;
	if(isdigit(c)) /*collect interger part*/
		while(isdigit(s[++i] = c = getch()))
			;
	if(c == '.') /*collect fraction part*/
		while(isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if(c != EOF)
		ungetch(c);
	return NUMBER;
}
#define BUFSIZE 100
char buf[BUFSIZE]; /*buffer for getch*/
int bufp = 0; /*next free position in buf*/

int getch(void)/*get a (possibly pushed-back) charactet*/
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /*push character back on input*/
{
	if(bufp > BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}
