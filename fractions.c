#include<stdio.h>
struct fraction
{
	int numerator;
	int denominator;
};
struct fractions
{
	struct fraction z[2];
};
struct fractions input()
{
	struct fractions q;
	printf("input numerator and denominator\n");
	for (int i = 0; i < 2; i++)
	{
		scanf("%d",&q.z[i].numerator);
		scanf("%d",&q.z[i].denominator);	
	}
	return q;
}
int same_denominator(struct fractions q)
{ 
	int sum;
	if (q.z[0].denominator == q.z[1].denominator)
	{
		sum=q.z[0].numerator+q.z[1].numerator;
	}
	return sum;
}
void output(struct fractions q , int sum)
{
	printf("%d\n" , sum/q.z[0].denominator);	
}
void main()
{
	struct fractions q;
	int sum;
	q=input();
	sum=same_denominator(q);
	output(q,sum);
}
