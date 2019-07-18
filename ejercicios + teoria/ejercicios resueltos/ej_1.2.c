#include <stdio.h>

int main()
{
    int num = 0, pares = 0, menoresCero = 0;
    for(int x=0; x<10; x++)
    {
        scanf("%d", &num);
        if(num < 0)
            menoresCero++;
        if(num%2 == 0)
            pares++;
    }
    printf("%d pares, %d menores a cero", pares, menoresCero);
    return 0;
}
