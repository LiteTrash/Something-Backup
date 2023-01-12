#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
	for (int i = 1;i <= argc-1;++i)
	{
		FILE *pf = fopen (argv[i],"r");
		char lx[31]={0};
		char num[10001]={0};
		fscanf (pf,"%s",&lx);
		scanf ("%s",&num);
		pf = fopen (argv[i],"w");
		fprintf (pf,"%s\n%s",lx,num);
	}
}
