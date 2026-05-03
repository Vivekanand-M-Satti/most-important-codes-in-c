//PASCALS BY USING THE 2D ARRAY
#include <stdio.h>
#if 0

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int val = 1;  // C(i,0) = 1

        for (int j = 0; j <= i; j++) {
            printf("%d ", val);

            // Compute next value using formula:
            // C(i, j+1) = C(i, j) * (i - j) / (j + 1)
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;


    ANS:
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
}
#endif
#if 0
int main()
{
int arr[5][5]={0};

for(int i = 0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        if(i==j||j==0)
        {
            arr[i][j]=1;
        }
        else
        {
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
}
for(int i = 0;i<5;i++)
{
    for(int j=0;j<=i;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
}
#endif