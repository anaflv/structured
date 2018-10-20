/*

1. Lê quatro inteiros:
1. Semente: para o gerador de número aleatório;
2. Mínimo e máximo: faixa de valores para ser usada na geração de
números aleatórios;
3. Lado: tamanho dos lados da matriz quadrada a ser gerada.
2. Após isso, o programa gera uma matriz aleatória, seguindo as especificações
dos valores lidos (semente, mínimo e máximo);
3. Assim que a matriz for gerada, o programa fica lendo códigos de operação (até
que a operação de código zero seja recebida, quando o programa é encerrado):

*/
#include <stdio.h>


int semente; 


int rand2() {
    int lim = 99999;
    semente = (semente * 32719 + 3) % 32749;
    return ((semente % lim) + 1);
}

void printm(int m[][lado], int lado){
    
    int i,j;
    for(i=0; i<lado; i++){
        for(j=0; j<lado; j++){
            printf("%d ",v[i][j]);
        }  
        printf("\n");
    }
}

int main(){
    
    int a;
    int min,max,lado;
    
    semente = 200;
    min = 2;
    max = 10;
    lado = 3;

    
    int i;
    for (i=0; i<10; i++){
        printf("%d\n",min + rand2() % (max - min + 1));
    }
    
    //fazer matriz
    
    //calcular diagonal
    
    //encerra program
    
    
    
    
    
    return 0;
    
}