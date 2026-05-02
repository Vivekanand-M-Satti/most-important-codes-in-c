#include<stdio.h>
int main()
{
    int n,pos,num;
    scanf("%d%d%d",&num,&pos,&n);
    printf("%d",((((((1<<n)-1)<<(pos-n+1))&(num)))>>(pos-n+1)));
    
}