#include <stdio.h>
#include <string.h>
#define MAXLINES 5000 //max no of lines to be sorted 
char *lineptr[MAXLINES]; //pointers to text lines 
int readlines(char *lineptr[],int nlines);
void writelines(char *lineptr[],int nlines);

void qsort(void *lineptr[],int left,int right,int (*comp)(void *,void *));
int numcmp(char *,char *);

//sort n lines 
main(int argc,int *argv[])
{
	int nlines;
	int numeric=0;
	if(argc > 1 && strcmp(argv[1], "-n") == 0)
	numeric=1;
	if((nlines = readlines(lineptr, MAXLINES)) >= 0)
		{
		qsort((void **) lineptr, 0, nlines-1,(int (*)(void *,void *))(numeric ? numcmp : strcmp ));
		writelines(lineptr,nlines);
		return 0;
		}
	else
		{
		printf("input too big");
		return 1;
		}
}

