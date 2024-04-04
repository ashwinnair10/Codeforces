#include <stdio.h>
int mod(int a)
{
    return a >= 0 ? a : -a;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int n, m, sx, sy, d;
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
        scanf("%d %d %d %d %d", &n, &m, &sx, &sy, &d);
        if (mod(n - sx) + mod(m - sy) == d)
            printf("-1\n");
        else
        {
            for (int i = 1; i <= m; i++)
            {
                if (mod(1 - sx) + mod(i - sy) <= d)
                    c1 = 1;
            }
            for (int i = 1; i <= n; i++)
            {
                if (mod(i - sx) + mod(1 - sy) <= d)
                    c2 = 1;
            }
            for (int i = 1; i <= m; i++)
            {
                if (mod(n - sx) + mod(i - sy) <= d)
                    c3 = 1;
            }
            for (int i = 1; i <= n; i++)
            {
                if (mod(i - sx) + mod(m - sy) <= d)
                    c4 = 1;
            }
            if ((c1 && c2) || (c3 && c4) || (c2 && c4) || (c1 && c3))
                printf("-1\n");
            else
                printf("%d\n", mod(n - 1) + mod(m - 1));
        }
        t--;
    }
}