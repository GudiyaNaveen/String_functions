#include<stdio.h>

void Mystrrev(char s[]);

int main()
{
	char s[100];
	printf("Enter a string: ");
	scanf("%[^\n]s",s);
	Mystrrev(s);
	return 0;
}

void Mystrrev(char str[])
{
	char temp;
	int i=0,j=0,l=0;
	while(str[i]!='\0')
	{
		l++;
	}
	for(i=0,j=l-1;i<l/2;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;	
	}
	printf("Reverse of string: %s\n",str);
}
