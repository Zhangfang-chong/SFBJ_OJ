//6-7½âÃÜ
#include<stdio.h>
int main()
{
	char arr[100];
	int i=0;
	gets(arr);
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]>='a'&&arr[i]<='z')
		{
			arr[i]='a'+'z'-arr[i];
		}
		else if(arr[i]>='A'&&arr[i]<='Z')
		{
			arr[i]='A'+'Z'-arr[i]; 
		}
	}
	puts(arr);
	
	return 0;
} 
