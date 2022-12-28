#include<stdio.h>
int SumEvenN(int n)
{
  int s=0;
  if(n>0)
  s=n*2+SumEvenN(n-1);
  return s;
}
int main()
{
	int n;
	printf("How many Evev natural numbers you want to add\n");
	scanf("%d",&n);
	printf("Sum = %d",SumEvenN(n));
	return 0;
}
