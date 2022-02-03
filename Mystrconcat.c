#include<stdio.h>

void Mystrconcat(char str1[],char str2[]);

int main()
{
	char str1[500],str2[100];
	printf("Enter a string1: ");
	scanf("%[^\n]s",str1);
	printf("Enter a string2: ");
	scanf("\n%[^\n]s",str2);
	Mystrconcat(str1,str2);
	return 0;
}

void Mystrconcat(char str1[],char str2[])
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while((str1[i]=str2[j])!='\0')
	{
		i++;
		j++;
	}
	printf("String Concatination str1[]<--str2[]: %s\n",str1);
}

