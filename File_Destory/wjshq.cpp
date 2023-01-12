#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char fname[256]={0};
char oname[256]={0};
int shl;
int main()
{
	srand(time(NULL));
	system("title 文件损坏模拟器 v1.0 by gy314");
	printf ("文件损坏模拟器 v1.0 by gy314\n输入文件名:"); 
	gets(fname);
	printf ("输出文件名:");
	gets(oname);
	printf ("输入损坏率(1/10000):");
	scanf ("%d",&shl);
	freopen (fname,"rb",stdin);
	freopen (oname,"wb",stdout);
	while (feof(stdin)==0)
	{
		char ch = getchar();
		if (rand()%shl==1)
		{
			if (ch>5)
				ch = ch-rand()%5;
			else 
				ch = ch+rand()%2;
		}
		printf ("%c",ch);
	}
}
