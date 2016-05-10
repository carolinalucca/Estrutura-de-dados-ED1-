#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float **Alocar_matriz_dinamica(int l, int c);
float **Liberar_matriz_dinamica(int l, float **v);

float **Alocar_matriz_dinamica(int l, int c){
  float **matriz;
  matriz = (float**) malloc(l * sizeof(float));
  
  int i;
  for (i=0; i<l; i++){
    matriz[i] = (float *) malloc(l * sizeof(float));
  }
    
  int j;
  for (i=0; i<l; i++){
    for (j=0; j<c; j++){
      printf ("Informe o valor para a posição [%d][%d] da matriz: ", i+1, j+1);
      scanf ("%f", &(*(*(matriz+i)+j)));
    } 
  }
return matriz;  
}

float **Liberar_matriz_dinamica(int l, float **v){
  if (v == NULL){
    return (NULL);
  }else if (l < 1){
    printf ("QUANTIDADE DE LINHAS INCORRETA!");
    return (v);
  }
  
  int i;
  float **matriz = v;
  
  for (i=0; i<1; i++){
    free (matriz[i]);
  }
return v;
}
