#include <stdio.h> ///�p��@�C��ƪ��`�M
int main()
{
	int a,sum=0;
	printf("Enter an integer ( 999 to end ): \n");
	scanf("%d",&a);
	while(a!=999)
	{
		sum+=a;
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a);
	}
	printf("The total is: %d",sum);
}








