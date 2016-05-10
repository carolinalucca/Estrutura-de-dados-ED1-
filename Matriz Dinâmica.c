#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float **Alocar_matriz_dinamica(int l, int c);
float **Liberar_matriz_dinamica(int l, float **v);

int main(){
  
  setlocale(LC_ALL, "portuguese");
  
  printf ("MATRIZ 1\n");
    float **matriz1 = Alocar_matriz_dinamica(4,3);
    printf ("\n");
    
  printf ("MATRIZ 2\n");
    float **matriz2 = Alocar_matriz_dinamica(4,3);
    printf("\n\n");
    
  float **aux1 = matriz1;
  float **aux2 = matriz2;
  int i, j;
  
  for (i=0; i<4; i++){
    for (j=0; j<3; j++){
      printf ("Matriz 1 + Matriz 2 = %.2f \t", (*(*(aux1+i)+j) + *(*(aux2+i)+j)));
    }
  printf ("\n");
  }
  
  Liberar_matriz_dinamica (4, matriz1);
  Liberar_matriz_dinamica (4, matriz2);
  
  printf ("\n\n");
  
system ("pause");
return 0;
}


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
    printf ("**ERRO: MEMÓRIA INSUFICIENTE**")
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
