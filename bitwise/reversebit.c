#if 0
#include<stdio.h>
int main()
{
    unsigned short int  num;
    int mask,sum=0;
    scanf("%hhu",&num);
    for(int i=7;i>=0;i--)
    {
        printf("%d ",(num>>i)&1);
    }
    printf("\n");
    for(int i=0;i<8;i++)
    {
        mask=num>>i&1;
        sum+=mask<<7-i;
        mask=0;
        
    }

    for(int i=7;i>=0;i--)
    {
        printf("%d ",(sum>>i)&1);
    }
}

#endif