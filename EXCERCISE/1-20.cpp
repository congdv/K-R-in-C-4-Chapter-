/*Muc dich bai toan la in nhap lam sao khi nhan tab thi tab se dung o moi vi tri sau n cot
 *tuy vao khoang canh ma khi nhan tab thi no toi gan hay xa chu		*/
#include <stdio.h>
#define MAXLINE 1000
#define TABSTOP 4

int detab(char line[],int c,int i);
main()
{
	int c,i;
	char line[MAXLINE];
	
	while((c=getchar())!=EOF)
		i=detab(line,c,i);
	return 0;
}
int detab(char line[],int c,int i)
{
	if(c=='\t')	
	do
		line[i]=' ';
	while((i%TABSTOP)!=0);//GOOD JOD THANK INTERNET
	else
		line[i]=c;
	return i;
}
