#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0;
	char caracteres[20];
	
	int letraA = 0;
	
	for(x=0;x<20;x++){
		scanf("%c", caracteres[x]);
		if(caracteres[x] == 'a' || caracteres[x] == 'A'){
			letraA++;	
		}	
	}
}
