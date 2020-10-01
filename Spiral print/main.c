#include <stdio.h>
#define R 4
#define C 5

void spiralPrint(int m, int n, int p[R][C])
{
    int i, k = 0, l = 0;
    while (k < m && l < n)
        {
        for (i = l; i < n; ++i)
        {
            printf("%d ", p[k][i]);
        }
        k++;
        for (i = k; i < m; ++i)
        {
            printf("%d ", p[i][n - 1]);
        }
        n--;
        if (k < m)
        {
            for (i = n - 1; i >= l; --i)
            {
                printf("%d ", p[m - 1][i]);
            }
            m--;
        }
        if (l < n)
        {
            for (i = m - 1; i >= k; --i)
            {
                printf("%d ", p[i][l]);
            }
            l++;
        }
    }
}

int main()
{
    int p[R][C] = { { 1, 2, 3, 4, 5},
                    { 6, 7, 8, 9, 10},
                    { 11, 12, 13, 14, 15},
                    { 16, 17, 18, 19, 20} };

    spiralPrint(R, C, p);
    return 0;
}
