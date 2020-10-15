#include <stdio.h>

int main()
{
	char caracter = 'Z';
	int valor_ascii = int (caracter);
	
	if(valor_ascii >= 48 && valor_ascii <=57){
	printf("El valor %c es un digito", caracter);
	}
	else{
		if(valor_ascii >= 65 && valor_ascii <= 90){
			printf("El caracter %c es mayuscula", caracter);
		}
		else{
			if(valor_ascii >= 97 && valor_ascii <= 122){
				printf("El caracter %c es una minuscula", caracter);
			}
			else{
				printf("El caracter %c es un caracter especial", caracter);
			}
		}
	}
	return 0;
}
