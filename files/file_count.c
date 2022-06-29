#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int character=0,lines=0,words=0;
	char ch;
	fp=fopen("text.txt","r");
	if(fp==NULL)
	{
		printf("file not open successfully\n");
		exit(1);
	}
	else
	{
		printf("file open successfully\n");
		while((ch=fgetc(fp))!=EOF)
		{
			character++;
			if(ch=='\n' || ch=='\0')
				lines++;
			if(ch=='\n' || ch=='\0' || ch== ' ' ||ch=='\t')
				words++;
		}
		printf("count the no.of character in a file=%d\n",character);
		printf("count the no.of words in a file=%d\n",words);
		printf("count the no.of lines in a file=%d\n",lines);
	}
	fclose(fp);
}

