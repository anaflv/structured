
/*

Faça um programa da seguinte forma:
1. Lê um código de operação;
2. Executa a operação correspondente;
3. Volta ao passo 1 para ler outro código de operação.


*/

#include <stdlib.h>
#include <stdio.h>


void inicia_menu(int *vetor, int n);


//returns factorial
int factorial(int n){
  if (n == 1){
    return 1;
  }
  
  return n * factorial(n-1);
}


void print_vector(int *vector, int n){
  

  if (n == 0){
    printf("%d ",vector[n]);
    return;
  }
  
  
  print_vector(vector, n-1);
  printf("%d ",vector[n]);

}




int main() {
  inicia_menu(NULL, 0);
  
  printf("%d\n",factorial(5));
  
  int *vector;
  vector = malloc(5 * sizeof(int));
  
  int i;
  for (i=0; i<5; i++){
    vector[i] = i+1;
  }
  
  print_vector(vector, 4);
  
  
  
  return 0;
}


void inicia_menu(int *vetor, int n) {
 // Implementacao da funcao
 
  
}