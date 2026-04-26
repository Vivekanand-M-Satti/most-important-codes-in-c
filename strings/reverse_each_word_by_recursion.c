#include<stdio.h>
void print(int strt,int end,char *str)
{
    if(strt==end)
    return;

    printf("%c",str[end]);

    print(strt,end-1,str);
}
int main()
{
    char str[90];
    int strt=0;
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
        print(strt-1,i-1,str);
            printf(" ");
        strt=i+1;
    }
    if(str[i+1]=='\0')
    {
        print(strt-1,i,str);
    }
        

    }
}