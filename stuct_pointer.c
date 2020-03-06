#include <stdio.h>
#include <stdlib.h>
struct add
{
	int a;
	int b;
	int sum;
};
struct add *input(struct add *z)
{
	printf("Enter the two values");
	scanf("%d %d",&z->a,&z->b);
	return z;
}
struct add *compute(struct add *z) 
{
	z->sum = z->a + z->b;
	return z;
}
void output(struct add *z)
{
	printf("The sum of %d and %d is %d\n", z->a , z->b , z->sum);
}
int main()
{
	struct add *z;
	z=(struct add*)malloc(sizeof(struct add));
	z=input(z);
	z=compute(z);
	output(z);
}
