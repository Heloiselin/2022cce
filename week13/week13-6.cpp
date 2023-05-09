#include <stdio.h>
int main()
{
	int n, a[10], b;
	scanf("%d", &n);

	for(int i=1; i<=n; i++)
	{
		scanf("%d", &b);
		a[i]=b*b;
	}
	for(int i=1; i<=n; i++)
	{
		printf("%d,", a[i]);
	}
	printf("\n");
}
