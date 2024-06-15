#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	if(argc!=3)
	{
		printf("usage: ./a.out char char\n");
		return 0;
	}
	FILE *fp = fopen(argv[2],"r"); 
	if(fp==NULL)
	{
		printf("file does not exist\n");
		return 0;
	}
	char ch;
	int big_line=0,count=0;
	while((ch=fgetc(fp))!=EOF)
	{
		count++;
		if(ch=='\n')
		{
			if(big_line < count)
			big_line = count;
			count = 0;
		}
	}
	rewind(fp);
	char*p=(char*)malloc(big_line*sizeof(char));
	
	while(fgets(p,big_line,fp)!=NULL)
	{
		if(strstr(p,argv[1])!=NULL)
			printf("%s\n",p);
	}
}
