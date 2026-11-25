#include<stdio.h>
#include<stdlib.h>

const int b[]={0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50};
int BS(int b[],int size,int key);

int main()
{
    system("chcp 65001>nal");
    const int key;
    int size=sizeof(b)/sizeof(b[0]);
    printf("請輸入目標數字(0~50):");
    scanf("%d",&key);
    int r=BS(b,size,key);
    
    if(r!=-1)
    {
        printf("找到目標%d，位於索引位置:%d\n",key,r);
    }
    else
    {
        printf("未找到目標%d",key);
    }
    
    return 0;
}

int BS(int b[],int size,int key)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(b[mid]==key)
        {
            return mid;
        }
        else if(b[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}