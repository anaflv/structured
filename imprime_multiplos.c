/*

Faça uma função recursiva que imprima, em
ordem crescente, os n primeiros múltiplos de
um número b.
void imprime_multiplos(int b, int n);

*/



#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void imprime_multiplos(int b, int n){
    
    if(n == 1){
        printf("%d\n",b);
        return;
    }
    
    imprime_multiplos(b,n-1); 
    printf("%d\n",b*n);
}



int main(){

  int b = 6;
  imprime_multiplos(b,4);
  return 0;
    
}