
#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	e=(a-c)*(b-d);
	if(e<0) printf("%d", -e);
	if(e>0) printf("%d", e);

	return 0;
}
