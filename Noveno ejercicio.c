#include "BasicaLib.h"

int strcmp(char,char);
int main(){
	char a, b;
	scanf("%s", &a);
	scanf("%s", &b);
	printf("%d", strcmp(a,b));
	return 0;
}

int strcmp (char d, char s){
	while ('\0' != d) {
		if (d != s) return d - s;
		d++;
		s++;
	}
	return d - s;
}
