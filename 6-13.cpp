//6--13×Ö·û´®±È½Ï
#include<stdio.h>
int main()
{
	char arr1[10];
	char arr2[10];
	gets(arr1);
	gets(arr2);
	int sum=0;
	for(int i=0;arr1[i]!='\0'&&arr2[i]!='\0';i++)
	{
		int ret=0;
		if(arr1[i]==arr2[i])
		{
			ret=0;
		}
		else
		{
			ret=arr1[i]-arr2[i];
		}
		sum+=ret;
	}
	printf("%d",sum);
	return 0;
} 
