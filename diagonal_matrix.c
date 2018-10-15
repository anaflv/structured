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


int semente; // declare a semente como variável global do programa


int rand2() {
    int lim = 99999;
    semente = (semente * 32719 + 3) % 32749;
    return ((semente % lim) + 1);
}

int main(){
    
    return 0;
    
}