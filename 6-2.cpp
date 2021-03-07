//6-2数组求解Fibonacci数列问题
#include<stdio.h>
int main()
{
	int arr[20]={0};
	arr[0]=1;
	arr[1]=1;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=2;i<20;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	for(i=0;i<20;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
