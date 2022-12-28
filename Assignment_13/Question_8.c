#include<stdio.h>
void N_fibonacci(int n)
{
	int static a=-1,b=1,c;
	if(n>0)
	 {
	 	c=a+b;
	 	printf("%d ",c);
	 	a=b;
	 	b=c;
	 	N_fibonacci(n-1);
	 }
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Fibonacci Series till %d terms\n",n);
	N_fibonacci(n);
	return 0;
}
