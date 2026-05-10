#include<stdio.h>
int main()
{
    int r=3,c=3;
    int arr[r][c];
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
            if(i==1)
            {
                printf("%d ",arr[c-j-1][i]);
            }
            else{
            printf("%d ",arr[j][i]);
            }
        
        }
        printf("\n");
    }
}