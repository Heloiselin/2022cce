#include <stdio.h>
int main()
{
    int a, b;
    printf("輸入兩個數字:");
    scanf("%d%d", &a, &b);

    printf("%d + %d 是 %d\n", a, b, a+b);
    printf("%d - 5555%d 是 %d\n", a, b, a-b);
    printf("%d * %d 是 %d\n", a, b, a*b);
    printf("%d / %d 是 %d\n", a, b, a/b);
    printf("%d 除法 %d 的餘數是 %d\n", a, b, a%b);
}
