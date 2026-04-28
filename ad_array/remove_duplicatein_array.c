#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size);

    int arr[size];
    int gone[100]={0};
    

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++)
    {
        if(!gone[arr[i]])
        {
            printf("%d",arr[i]);
            gone[arr[i]]=1;
        }

    }
}