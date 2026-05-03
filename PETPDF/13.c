#if 0
#include<stdio.h>
int main()
{
int arr[5][5]={0};

for(int i = 0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
       scanf("%d",&arr[i][j]);
    }
}
for(int i = 0;i<5;i++)
{
    for(int j=5-1;j>=0;j--)
    {
        printf("%d ",arr[j][i]);
    } 
    printf("\n");
}
21 16 11 6 1 
22 17 12 7 2 
23 18 13 8 3 
24 19 14 9 4 
25 20 15 10 5 
}
#endif