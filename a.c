#include<stdio.h>
#include<string.h>
int main()
{
	char source_string[200];
	char pattern_string[20];

	int i,m,n,p,count,j,k;
	printf("enter the source string");
	for(i=0;i<200;i++)
	{  char ch;
		scanf("%c",&ch);
		if(ch!='\n')
		{
			source_string[i]=ch;
		}
		else
		{
			break;
		}
	}
	printf("enter the pattern_string");
	scanf("%s",pattern_string);
	m=strlen(source_string);
	n=strlen(pattern_string);
	for(j=0;j<m;j++)
	{  p=j;
		count=0;
		for(k=0;k<n;k++)
		{ 

			if(source_string[p]==pattern_string[k])
			{
				p++;
				count++;
			}
		}
		if(count==n)
		{
			printf("the positions are %d",j+1);
		}

	} 

	

}