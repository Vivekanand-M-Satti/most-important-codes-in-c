#include<stdio.h>
int main()
{
    int decimal =0,i=0,arr[32],num;
    scanf("%d",&num);

    for(;num!=0;)
    {
    arr[i++]=num%2;
    num=num/2;
    }
    int j=i-1;
    while(j!=-1)
    {
        printf("%d",arr[j]);
        j--;
    }
    printf("\n");
    j++;
    while(j!=i)
    {
        printf("%d",arr[j]);
        j++;
    }
     printf("\n");
    for(int k=0;k<i;k++)
    {
        decimal=decimal*2+arr[k];
    }
    printf("%d",decimal);

}