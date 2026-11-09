#include <stdio.h>

double main(void)
{
    double r;
    scanf("%lf", &r);
    if (r > 0)
    {
        printf("%.2f", r * r * 22.0);
    }
    else
    {
        printf("NG\n");
    }
    return 0;
}
