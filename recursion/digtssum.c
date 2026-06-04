#include<stdio.h>
void fibo(int a,int b,int c,int sum)

{
    if(c>=sum&&c<=-sum)
    {
    printf("%d ",c);
    c=a-b;
    fibo(b,c,c,sum);
    }
   
}
int main()
{
    int a;
    scanf("%d",&a);
    
    fibo(1,0,0,a);
    
}