#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    float a[r][c];
    for (int i = 0; i < r; i++)
    {
        scanf("%f", &a[i][j]);
    }
}
float sum = 0;
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        printf("%.2f", a[i][j]);
        sum += a[i][j];
    }
}
printf("sum is %.2f", sum);
return 0;
