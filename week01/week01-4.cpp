#include <stdio.h>
#include <string.h>///有很多字串的工具，像strlen()字串長度
int main()///任務：讀入資料(很多字母)
{
    char c;
    char line[30];///陣列，字母的陣列，叫字串

    printf("請輸入一個字串,不要太長：");///不要超過29
    scanf("%s", line);///讀入整個字串，沒有&
    ///會以空格斷字
    printf("你輸入：%s\n", line);

    int N = strlen(line);
    for(int i=0; i<N; i++)
    {
        if(line[i]=='2')
        {
            printf("找到2\n");
        }
    }
}
