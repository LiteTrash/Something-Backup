#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
	FILE *pf = fopen (argv[2],"w");//名字 
	fprintf (pf,"%s\n%s",argv[1],argv[3]);//类型&数据 
}
