#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    while(1){
        c = a%b;
        printf("�Ѥj�G%d �ѤG�G%d �ѤT�G%d\n", a, b, c);
        if( c==0 )break;
        a=b;
        b=c;
    }
    printf("����b�G%d ", b);
}
