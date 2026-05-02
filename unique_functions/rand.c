#include<stdio.h>
#include<stdlib.h>
int main()
{
    for(int i=0;i<9;i++)
    {
    int x=rand()%6+1;
    printf("%d\n",x);
    }
}