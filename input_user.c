#include<stdio.h>
int main()
{	
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	float input[n];
	for(int i=0;i<n;i++)
	{
		scanf("%f",&input[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%f\n",input[i]);
	}
}