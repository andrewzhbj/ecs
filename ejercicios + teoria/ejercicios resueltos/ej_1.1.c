#include <stdio.h>

int main()
{
    int num = 0;
    float promedio = 0;
    for(int x=0; x<5; x++)
    {
        scanf("%d", &num);
        prom += num;
    }
    printf("%.2f", prom/5);
    return 0;
}
