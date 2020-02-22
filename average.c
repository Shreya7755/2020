#include <stdio.h>
#include<stdlib.h>

struct avg 
{
	int n;
	int *arr;
 	float average;
};
struct avg input()
{
	struct avg q;
	printf("enter the size of array\n");
	scanf("%d",&q.n);
	printf("enter the elements of array\n");
	q.arr = (int*)malloc(q.n*sizeof(int));
	for (int i = 0; i < q.n; ++i)
	{
		scanf("%d",q.arr+i);
	}
	return q;
}
struct avg compute(struct avg q)
{
	int sum=0;
  	for (int i = 0; i < q.n; ++i)
  	{
		sum=sum+*q.arr+i;	
  	}
  	q.average=sum/q.n;
	return q;
}
void output(struct avg q)
{
	printf("average of n elements\n");
 	printf("%f\n",q.average);
}
void main()
{
	struct avg q=input();
	q=compute(q);
	output(q);
}