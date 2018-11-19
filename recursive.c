
/*

Faça um programa da seguinte forma:
1. Lê um código de operação;
2. Executa a operação correspondente;
3. Volta ao passo 1 para ler outro código de operação.


Ana Flávia de Araujo
11024513


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


void print_vetor(int *vetor, int n){
  
  if (n == 0){
    printf("%d ",vetor[n]);
    return;
  }
  
  print_vetor(vetor, n-1);
  printf("%d ",vetor[n]);

}

void read_vetor(int *b, int n){
  
  if (n == 0){
    scanf("%d",&b[n]);
    return;
  }
  
  read_vetor(b, n-1);
  scanf("%d",&b[n]);
  
}

//doubles the vetor
void doubles(int *vetor, int n){
  
  vetor[n] = vetor[n] * 2;
  
  if(n == 0){
    return;
  }
  
  doubles(vetor, n-1);
  
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
  
  if (m == 0){
    return a;
  }
  
  return a + taylor(x, m-1);
  
}



int main() {
  
  inicia_menu(NULL, 0);

  return 0;
}


void inicia_menu(int *vetor, int n) {
 // Implementacao da funcao
 
  
  printf("Cod: ");
  
  int input;
  scanf("%d",&input);
  
  
  if (input == 0){
    free(vetor);
    return;
  }
  
  //Reads factorial of a number
  else if (input == 1){
    double a;
    scanf("%lf",&a);
    printf("%.0lf\n",factorial(a));
  }
  
  else if (input == 2){
    double x,m;
    scanf("%lf",&x);
    scanf("%lf",&m);
    
    printf("%.2lf\n",taylor(x,m));
  }
  
  //adds numbers to array
  else if (input == 3){
    scanf("%d",&n);
    vetor = malloc(n * sizeof(int));
    read_vetor(vetor,n-1);
  }
  
  //prints current array
  else if (input == 4){
    print_vetor(vetor, n-1);
    printf("\n");
  }
  
  //doubles numbers in array
  else if (input == 5){
    doubles(vetor, n);
  }
  
  
  inicia_menu(vetor, n);
  
}