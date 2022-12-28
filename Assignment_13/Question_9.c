#include<stdio.h>
int count_digit(int n)
{
	int static count;
	if(n>0)
		{
		  count++;
		  count_digit(n/10);
		}
	return count;
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Numbers = %d",count_digit(n));
	return 0;
}
