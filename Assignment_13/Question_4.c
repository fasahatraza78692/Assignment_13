#include<stdio.h>
int Nsquare_Sum(int n)
{
  int s=0;
  if(n>0)
  s=n*n+Nsquare_Sum(n-1);
  return s;
}
int main()
{
	int n;
	printf("How many natural number's square you want to add\n");
	scanf("%d",&n);
	printf("Sum = %d",Nsquare_Sum(n));
	return 0;
}
