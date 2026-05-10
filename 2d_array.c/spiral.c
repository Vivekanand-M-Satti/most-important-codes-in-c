#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    int num = 1;

    while (top <= bottom && left <= right)
    {
        // Left to Right
        for (int i = left; i <= right; i++)
        {
            arr[top][i] = num++;
        }
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++)
        {
            arr[i][right] = num++;
        }
        right--;

        // Right to Left
        for (int i = right; i >= left; i--)
        {
            arr[bottom][i] = num++;
        }
        bottom--;

        // Bottom to Top
        for (int i = bottom; i >= top; i--)
        {
            arr[i][left] = num++;
        }
        left++;
    }

    printf("\nMatrix:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}