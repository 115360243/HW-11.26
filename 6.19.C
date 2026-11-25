#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    system("chcp 65001>nal");
    int a,b;
    int dice[11]={0};      
    srand(time(NULL));

    for(int i=0;i<36000;i++)
    {
        a=1+rand()%6;
        b=1+rand()%6;
        if(a+b==2)
        {
            dice[0]++;
        }
        if(a+b==3)
        {
            dice[1]++;
        }
        if(a+b==4)
        {
            dice[2]++;
        }
        if(a+b==5)
        {
            dice[3]++;
        }
        if(a+b==6)
        {
            dice[4]++;
        }
        if(a+b==7)
        {
            dice[5]++;
        }
        if(a+b==8)
        {
            dice[6]++;
        }
        if(a+b==9)
        {
            dice[7]++;
        }
        if(a+b==10)
        {
            dice[8]++;
        }
        if(a+b==11)
        {
            dice[9]++;
        }
        if(a+b==12)
        {
            dice[10]++;
        }
    }
    for(int i=0;i<11;i++)
    {
        printf("%d點出現次數為:%d次\n",i+2,dice[i]);
    }

    return 0;
}