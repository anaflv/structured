
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
double factorial(double n){
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

void read_vector(int *b, int n){
  
  
  if (n == 0){
    scanf("%d",&b[n]);
    return;
  }
  
  read_vector(b, n-1);
  scanf("%d",&b[n]);
  
}

//doubles the vector
void doubles(int *vector, int n){
  
  vector[n] = vector[n] * 2;
  
  if(n == 0){
    return;
  }
  
  doubles(vector, n-1);
  
}



double power(double n, int p){
  
  if (p == 0) {
    return 1;
  }
  
  if(p == 1){
    return n;
  }
   
  return n * power(n, p-1);
}


double taylor(double x, double m){
  
  
  double a = power(-1,m) / factorial(2 * m + 1) * power(x, 2 * m + 1);
  //printf("%lf\n",a);
  
  if (m == 0){
    return a;
  }
  
  return a + taylor(x, m-1);
  
}



int main() {
  inicia_menu(NULL, 0);
  
  int *vector;
  vector = malloc(5 * sizeof(int));
  
  int i;
  for (i=0; i<5; i++){
    vector[i] = i+1;
  }
  
  print_vector(vector, 4);
  printf("\n");
  
  doubles(vector, 4);
  
  print_vector(vector, 4);
  
  
  
  printf("%lf",taylor(1.5708, 8));
  
  free(vector);
  
  // int  *b;
  // b = malloc(5 * sizeof(int));
  
  //read_vector(b,4);
  //print_vector(b, 4);
  

  return 0;
}


void inicia_menu(int *vetor, int n) {
 // Implementacao da funcao
 
 
  
  
  
 
  
}