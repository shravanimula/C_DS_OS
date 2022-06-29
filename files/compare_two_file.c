#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	char ch1,ch2;
	fp1=fopen("text.txt","r");
	if(fp1==NULL)
	{
		printf("text file is not open successfully\n");
		exit(1);
	}
	fp2=fopen("file2.txt","r");
	if(fp2==NULL)
	{
		printf("file2 is not open successfully\n");
		exit(1);
	}
	else
	{
		ch1=fgetc(fp1);
		ch2=fgetc(fp2);
	}
	while((ch1!=EOF) && (ch2!=EOF) && (ch1==ch2))
	{
		ch1=fgetc(fp1);
		ch2=fgetc(fp2);
	}
	if(ch1==ch2)
	{
		printf("file1 and file2 are both same\n");
	}
	else if(ch1!=ch2)
	{
		printf("file1 and file2 are not same\n");

	}
	fclose(fp1);
	fclose(fp2);
}

