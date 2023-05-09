#include <stdio.h>
int main()
{
	int n, m=0;
	scanf("%d", &n);
	for(int i=2; i<=n; i++)
	{
		m+=i*(i-1);
	}
	printf("%d\n", m);
}
