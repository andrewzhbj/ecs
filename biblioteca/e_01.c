#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, *p;

	p = &i;		/* creo puntero a i*/
	*p = 0;		/* establece i a 0 */

	printf("i: %d\n", i);
	printf("*p: %d\n", *p);

	*p += 1;	/* incrementa el apuntador (i++) */
	printf("i: %d\n", i);

	(*p)++;		/* devuelta, sin () no se puede aplicar ++*/
	printf(" x is %d\n", i);

	exit(EXIT_SUCCESS);
}
