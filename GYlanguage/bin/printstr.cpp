#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
	for (int i = 1;i <= argc-1;++i)
	{
		int len = strlen(argv[i]);
		for (int j = 0;j <= len;++j)
			if (argv[i][j]=='\\')
			{
				if (argv[i][j+1]=='n')
					printf ("\n");
				if (argv[i][j+1]=='t')
					printf ("\t");
				if (argv[i][j+1]=='\\')
					printf ("\\");
				j++;
			}
			else printf ("%c",argv[i][j]);
		printf (" ");
	}
	printf ("\n");
}
