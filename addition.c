#include<stdio.h>
struct add
{
	float x;
	float y;
	float sum;
};
struct add input()
{
	struct add a;
	printf("Enter the input\n");
	scanf("%f%f",&a.x,&a.y);
	return a;
}
struct add compute(struct add a)
{
	a.sum=a.x+a.y;
	return a;
}
void output(struct add a)
{
	printf("sum of %.2f and %.2f is %f\n",a.x,a.y,a.sum);
}
void main()
{
	struct add a; 
	a=input();
	a=compute(a);
	output(a);
}
