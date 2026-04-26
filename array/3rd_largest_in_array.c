#include<stdio.h>
#include<limits.h>
void a3rd_larggest(int *p)
{
    int st=INT_MIN,nd=INT_MIN,rd=INT_MIN;
    for(int i=0;i<sizeof(p);i++)
    {
        if(p[i]>st)
        {
            st=p[i];
            nd=st;
            rd=nd;
        }
    }
    
}
int main()
{
    int *ptr;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);

    }
    a3rd_largest(ptr);
}