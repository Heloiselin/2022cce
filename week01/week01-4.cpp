#include <stdio.h>
#include <string.h>///���ܦh�r�ꪺ�u��A��strlen()�r�����
int main()///���ȡGŪ�J���(�ܦh�r��)
{
    char c;
    char line[30];///�}�C�A�r�����}�C�A�s�r��

    printf("�п�J�@�Ӧr��,���n�Ӫ��G");///���n�W�L29
    scanf("%s", line);///Ū�J��Ӧr��A�S��&
    ///�|�H�Ů��_�r
    printf("�A��J�G%s\n", line);

    int N = strlen(line);
    for(int i=0; i<N; i++)
    {
        if(line[i]=='2')
        {
            printf("���2\n");
        }
    }
}
