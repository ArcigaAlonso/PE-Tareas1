#include <stdio.h>
int main(){
    int elementos_maximos = 5;
    int matriz_1[elementos_maximos][elementos_maximos];
    int matriz_2[elementos_maximos][elementos_maximos];
    int matriz_resultante[elementos_maximos][elementos_maximos];
    int indice_x;
    int indice_y;
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        matriz_1[indice_y][indice_x] = indice_y;
        matriz_2[indice_y][indice_x] = indice_x;
      }
    }
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        matriz_resultante[indice_y][indice_x] = matriz_1[indice_y][indice_x] + matriz_2[indice_y][indice_x];
      }
    }
    printf("Matriz_1: \n");
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        printf("%d, ", matriz_1[indice_y][indice_x]);
      }
      printf("\n");
    }
    printf("Matriz_2: \n");
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        printf("%d, ", matriz_2[indice_y][indice_x]);
      }
      printf("\n");
    }
    printf("Matriz Resultante: \n");
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        printf("%d, ", matriz_resultante[indice_y][indice_x]);
      }
      printf("\n");
    }
    return 0;
}
 
