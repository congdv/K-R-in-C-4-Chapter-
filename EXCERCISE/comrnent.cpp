#include <stdio.h>

#define MAXLENGTH 1000

void removec(char code[],int length);

int main()
{
    int i, c;
    char line[MAXLENGTH];


    for(i=0; (c = getchar()) != EOF; i++)
        line[i] = c;

    removec(line, i);
return 0;
}

void removec(char line[], int l)
{
    int i;

    for(i=0; i < l; i++){
        //printf("%c", line[i]);
        if(line[i] == '/' && line[i+1] == '/'){
            while(i != '\n'){
                line[i] = ' ';
                ++i;
            }
        }
        else if(line[i] == '/' && line[i+1] == '*'){
            while((line[i] != '*') && (line[i+1] != '/')){
                line[i] = ' ';
                ++i;
            }
        }

    }
    printf("%s", line);
}
