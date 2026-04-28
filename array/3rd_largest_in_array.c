#include<stdio.h>
#include<limits.h>
void a3rd_larggest(int *p)
{
    int st=INT_MIN,nd=INT_MIN,rd=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(p[i]>st)
        {
            rd=nd;
            nd=st;
            st=p[i];
        }
        else if(p[i]!=st&&p[i]>nd)
        {
           
            rd=nd;
             nd=p[i];
        }
        else if(p[i]!=st&&p[i]!=nd&&p[i]>rd)
        {
            rd=p[i];
        
        }
    }
    printf("%d",rd);
    
}
int main()
{
    int *ptr;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);

    }
    a3rd_larggest(ptr);
}