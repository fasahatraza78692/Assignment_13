#include<stdio.h>
int sum_digit(int n)
{
	int static sum;
	if(n>0)
		sum=(n%10)+sum_digit(n/10);
	return sum;
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Sum = %d",sum_digit(n));
	return 0;
}
