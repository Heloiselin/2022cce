#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m,x=0;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++)
			if(i%3==0)
			x+=i;
		printf("%d",x);
}
