#include <stdio.h>

int main()
{
    int num = 0;
    while(num != 0){
        scanf("%d", &num);
        if(num < 0)
            printf("Error");
        else
            printf("Numero: %d Cuadrado: %d Cubo: %d", num, num*num, num*num*num);
    }
    return 0;
}
