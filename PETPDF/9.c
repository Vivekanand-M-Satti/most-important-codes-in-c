#include<stdio.h>
int pali(int i)
{
    int num=0;
    int temp=i;
    for(;i!=0;)
    {
        num=num*10+i%10;
        i=i/10;
        
    }
    if(num==temp)
    {
    return 1;
     } else
     {
    return 0;
     }


}
int prime(int i)
{
    for(int k=2;k<=i/2;k++)
    {
        if(i%k==0)
        return 0;
    }
    return 1;

}
int main()
{
 
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(pali(i)&&prime(i))
        {
            printf("%d ",i);
        }
    }


    
}