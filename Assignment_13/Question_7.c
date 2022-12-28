#include<stdio.h>
int HCF(int a,int b)
{
	if(a==b)
	  return a;
    else if(a%b==0)
        return b;
    else if(b%a==0)
        return a;
    if(a>b)
      return HCF(a%b,b);
    else
    return HCF(a,b%a);
}
int main()
{
	int x,y;
	printf("Enter two numbers\n");
	scanf("%d%d",&x,&y);
	printf("HCF = %d",HCF(x,y));
	return 0;
}

