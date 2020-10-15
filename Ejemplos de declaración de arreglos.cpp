#include <stdio.h>

 int main()
 {
     int arreglo[5];
     arreglo[0] = 10;
     arreglo[1] = 20;
     arreglo[2] = 30;
     arreglo[3] = 40;
     arreglo[4] = 50;

     printf("Primer arreglo\n");
     for(int indice = 0; indice <5; indice++){
         printf("%d\n", arreglo[indice]);
     }
     int arreglo2[] = {11,22,33,44,55};
     printf("segundo arreglo\n");
     for(int indice = 0; indice <5; indice++){
         printf("%d\n", arreglo2[indice]);
     }
     char arreglo3[] = {'h','o','l','a'};
     printf("tercer arreglo\n");
     for(int indice = 0; indice <4; indice++){
         printf("%c", arreglo3[indice]);
     }
     printf("\n");
     int maximo = 10;
     int arreglo4[maximo];
     printf("cuarto arreglo\n");
     for(int indice = 0; indice < maximo; indice++){
         arreglo4[indice] = 9 - indice;
     }
     for(int indice = 0; indice < maximo; indice++){
         printf("%d\n", arreglo4[indice]);
     }
     return 0;
 }
