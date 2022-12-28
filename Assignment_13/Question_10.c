#include<stdio.h>
int power(int a,int b)
{
	int static x=1;
	if((a==0&&b==0)||(a==0&&b!=0))
	   return 0;
	else if(b==0)
	   return 1;
         else
	      {
	       x=x*a;
	       power(a,b-1);
	      }
	 return x;
}
int main()
{
	int x,y;
	printf("Enter a number\n");
	scanf("%d",&x);
	printf("Enter it's power\n");
	scanf("%d",&y);
	printf("%d^%d is = %d ",x,y,power(x,y));
	return 0;
}
