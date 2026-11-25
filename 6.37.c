#include<stdio.h>
#include<stdlib.h>

int M(const int a[],int size);

int main()
{
    system("chcp 65001>nal");
    int a[]={44,84,64,4,24,54,74,34,14,94};
    int size=sizeof a/sizeof a[0];
    printf("最大值為:%d",M(a,size));

    return 0;
}

int M(const int a[],int size)
{
    if(size==1)
    {
        return a[0];
    }
    int MN=M(a+1,size-1);//因呼叫之結果不符回傳類型，所以會一直呼叫直到size=1回傳一整數
    if(a[0]>MN)
    {
        return a[0];
    }
    else
    {
        return MN;
    }
}