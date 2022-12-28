#include<stdio.h>
int fact(int n)
{
	int f=1;
	if(n>0)
	 	f=n*fact(n-1);
	return f;
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Factorial = %d",fact(n));
	return 0;
}
