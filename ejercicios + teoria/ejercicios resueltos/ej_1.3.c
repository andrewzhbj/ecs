#include <stdio.h>

int main()
{
    int num = -1;
    while(num != 0){
        scanf("%d", &num);
        if(num < 0)
            printf("Error");
        else
            printf("Numero: %d Cuadrado: %d Cubo: %d\n", num, num*num, num*num*num);
    }
    return 0;
}
