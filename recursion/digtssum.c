#include<stdio.h>
void sumofthefigit(int a)

{
    if(a==-1)
    return ;
    sumofthefigit(a-1);
    printf("%d",a);
}
int main()
{
    int a;
    scanf("%d",&a);
    
    sumofthefigit(a);
    
}