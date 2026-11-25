#include<stdio.h>
#include<stdlib.h>
void SR(const char s[]);

int main()
{
    system("chcp 65001>nal");
    char s[]="Death";
    printf("原字串:%s\n",s);
    printf("反向印出:");
    SR(s);

    return 0;
}

void SR(const char s[])
{
    if(s[0]=='\0')
    {
        return;
    }
    SR(s+1);
    printf("%c",s[0]);
}