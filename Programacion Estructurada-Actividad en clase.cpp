#include <stdio.h>

int main()
{
	char caracter='|';
	int largo=15, alto=20;
	printf("\n");
	
	for(int alto_actual=0;alto_actual<alto;alto_actual=alto_actual+1){
		for(int posicion_actual=0;posicion_actual<largo;posicion_actual=posicion_actual+1){
			printf("%c",caracter);
		}
		printf("\n");
	}
	return 0;
}
