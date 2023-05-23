#include <stdio.h>
int main()
{
	int n,x,y;
	scanf("%d",&n);
	x=n%10000;
	y=x/1000;
	printf("%d",y);
}
