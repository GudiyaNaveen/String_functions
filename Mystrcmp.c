#include<stdio.h>

void Mystrcmp(char s1[],char s2[]);

int main()
{
	char str1[100],str2[100];
	printf("Enter a string1: ");
	scanf("%[^\n]s",str1);
	printf("Enter a string2: ");
	scanf("\n%[^\n]s",str2);
	Mystrcmp(str1,str2);
	return 0;
}

void Mystrcmp(char s1[],char s2[])
{
	int c,i,l1=0,l2=0;
	for(i=0;s1[i]!='\0';i++)
	{
		l1++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		l2++;
	}
	if(l1!=l2)
	{
		printf("Strings are not Equal\n");
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(s1[i]!=s2[i])
				c=1;
				break;
		}
		if(c==1)
		{
			printf("Strings are not equal\n");
		}
		else
		{
			printf("String are Equal\n");
		}
	}
}
