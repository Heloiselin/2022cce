///step1:Input & Output OK (with while-loop)
#include <stdio.h>
#include <string.h>
int testMirror(char line[50])//�Ψ禡�ѨM���D
{
	return 0;
}
int testPalindrome(char line[50])
{
	int N = strlen(line);
	int yes = 0;
	for(int i=0; i<N; i++)
    {
        if(line[i]==line[N-1-i]) yes++;
    }
    if(yes==N) return 1; //printf("������yes�����A�O�j��\n");
    else return 0; //printf("���O������yes�A�N���O�j��\n");
}
int main()
{
    char line [50];

    while(scanf("%s", line)==1)
    {
        printf("%s -- ", line);

        int p = testPalindrome(line);//�Ψ禡�ѨM���D
        int m = testMirror(line);//�Ψ禡�ѨM���D
        if(p==0 && m==0) printf("is not a palindrome.\n\n");
        if(p==1 && m==0) printf("is a regular palindrome.\n\n");
        if(p==0 && m==1) printf("is a mirrored string.\n\n");
        if(p==1 && m==1) printf("is a mirrored palindrome.\n\n");
    }
}
