#include<stdio.h>
int SumN(int n)
{
  int s=0;
  if(n>0)
  s=n+SumN(n-1);
  return s;
}
int main()
{
	int n;
	printf("How many natural numbers you want to add\n");
	scanf("%d",&n);
	printf("Sum = %d",SumN(n));
	return 0;
}

