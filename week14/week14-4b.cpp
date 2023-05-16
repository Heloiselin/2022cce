#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m=1;
	scanf("%d",&n);

	printf("Enter the number of values to be processed: ");

	for(int i=0;i<n;i++){
			printf("Enter a value: ");
	int x;
	scanf("%d",&x);
	m=m*x;
	}
	printf("Product of the %d values is %d",n,m);
}
