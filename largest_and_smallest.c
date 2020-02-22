#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no.of integers\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
/*	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}*/
	printf("The two smallest numbers are:%d\n%d\n",arr[0],arr[1]);
	printf("The two largest numbers are:%d\n%d\n",arr[n-2],arr[n-1]);
}