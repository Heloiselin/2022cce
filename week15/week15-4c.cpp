
#include <stdio.h>
int main()
{
	int x, y, a[10];
	for(int i=0; i<=9; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int j=9; j>=0; j--)
	{
		printf("%d ", a[j]);
	}
	return 0;
}