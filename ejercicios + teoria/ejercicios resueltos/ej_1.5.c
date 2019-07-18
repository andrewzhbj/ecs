#include <stdio.h>

/* forma trucha */
int main()
{
    char caracter;
    int x = 0;
	char letra[5] = {'a', 'e', 'i', 'o', 'u'};
	int cantidad[5] = {0, 0, 0, 0, 0};
    
    for(x=0; x<5; x++){
    	scanf("%c", &caracter);
    	if(caracter == 'a' || caracter == 'A') cantidad[0]++;
    	if(caracter == 'e' || caracter == 'E') cantidad[1]++;
    	if(caracter == 'i' || caracter == 'I') cantidad[2]++;
    	if(caracter == 'o' || caracter == 'O') cantidad[3]++;
    	if(caracter == 'u' || caracter == 'U') cantidad[4]++;
	}
	for(x=0; x<5; x++){
		printf("%c:%d\n", letra[x], cantidad[x]);
	}
    return 0;
}
