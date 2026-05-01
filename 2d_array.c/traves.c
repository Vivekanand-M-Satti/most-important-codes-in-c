//----------------------------method one boss
#if 0
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr[3]; 
    for(int i=0;i<3;i++)
    {
        arr[i]=malloc(3*sizeof(int));
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int temp;
     for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
           
        }
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
#endif

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr[3]; 
    for(int i=0;i<3;i++)
    {
        arr[i]=malloc(3*sizeof(int));
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
  
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
    
}