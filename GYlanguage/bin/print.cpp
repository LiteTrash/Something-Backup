#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc,char *argv[]) {
	for (int i = 1; i <= argc; ++i) {
		FILE *pf = fopen(argv[i],"r");
		char a[31]= {0};
		char b[10001]= {0};
		fscanf (pf,"%s%s",&a,&b);
		printf ("%s\n",b);
		fclose(pf);
	}
}
