#include <stdio.h>
#define MAXLINE 20

int getline(char s[],int lim);
void reverse(char s[]);
main()
{
	int len;
	char line[MAXLINE];
	while((len=getline(line,MAXLINE))>0)
	{
		reverse(line);
		printf("%s\n",line);
	}
	return 0;
}
int getline(char s[],int lim)
{
	int i,c;
	for(i=0;i<lim-1 && (c=getchar())!= EOF && c!='\n';++i)
		s[i]=c;
	if(c=='\n')
	{
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}
void reverse(char s[])
{
	int i,j;
	char temp;
	i=j=0;
	while(s[i]!='\0')
		++i;
	--i;/*hoac la --j vi neu khong giam 1 thi vi tri dau tien laf NULL do vayj ko co ki tu
	     *nen giam di 1 o i con neu giam o vi tri tu 0 xuong -1 thi ki tu null o o -1 do do ko anh huong*/
	while(i>j)// xet dieu kien truoc sau gap nhau tai diem giua
	{
		temp=s[j];
		s[j]=s[i];
		s[i]=temp;
		--i;++j;
	}
	
}
