#include <stdio.h>

int main()
{
    int num = -1;
    while(num != 0){
    	scanf("%d", &num);
    	if(num > 0) 
			printf("Es positivo\n");
    	else 
			printf("Es negativo\n");
    }
    return 0;
}
