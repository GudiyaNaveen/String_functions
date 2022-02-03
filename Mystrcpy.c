#include<stdio.h>

void Mystrcpy(char str2[],char str1[]);

int main()
{
	char str1[100],str2[100];
	printf("Enter a string1: ");
	scanf("%[^\n]s",str1);
	Mystrcpy(str2,str1);
	return 0;
}

void Mystrcpy(char str2[],char str1[])
{
	int i=0;
	while((str2[i]=str1[i])!='\0')
	{
		i++;
	}
	printf("String copy from str2[]<--str1[]: %s\n",str2);
}
