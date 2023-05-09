#include <stdio.h>
int f(int a)
{
	return a>0 ? a:-a;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
