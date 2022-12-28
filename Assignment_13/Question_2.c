#include<stdio.h>
int SumOddN(int n)
{
  int s=0;
  if(n>0)
  s=n*2-1+SumOddN(n-1);
  return s;
}
int main()
{
	int n;
	printf("How many Odd natural numbers you want to add\n");
	scanf("%d",&n);
	printf("Sum = %d",SumOddN(n));
	return 0;
}
