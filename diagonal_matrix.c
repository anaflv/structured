/*

Ana Flávia de Araujo
11024513

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

void print_m(int lado,int m[][lado]){
    
    int i,j;
    for(i=0; i<lado; i++){
        for(j=0; j<lado; j++){
            printf("%d ",m[i][j]);
        }  
        printf("\n");
    }
    printf("\n");
}

void row_diagonal(int lado, int m[][lado]){
    
    int i,j;
    int sum_others;
    
    for(i=0; i < lado; i++){
        sum_others = 0;
        for(j =0; j < lado; j++){
            if(j != i){
                sum_others = sum_others + m[i][j];
            }
        }
        
        m[i][i] = m[i][i] > sum_others ? m[i][i] : (sum_others + 1);
    }
    
}

void column_diagonal(int lado, int m[][lado]){
    
    int i,j, a;
    int sum_others;
    
    for(j=0; j <lado; j++){
        sum_others = 0;
        for(i =0;  i<lado; i++){
            if(i != j){
                a = m[i][j] >= 0 ? m[i][j] : (0 - m[i][j]);
                sum_others = sum_others + a;
            }
        }
        m[j][j] = m[j][j] > sum_others ? m[j][j] : (sum_others + 1);
    }
    
    
}




int main(){
    
    int a;
    int min,max,lado;
    
    scanf("%d",&semente);
    scanf("%d",&min);
    scanf("%d",&max);
    scanf("%d",&lado);
    
    
    int m[lado][lado];
    int i, j;
    
    int input;
    
    for (i=0; i<lado; i++){
        for(j=0; j<lado; j++){
            m[i][j] = min + rand2() % (max - min + 1);
        }
    }
    
    scanf("%d",&input);
    
    while(input != 0){
        if(input == 1){
            print_m(lado, m);
        }
        else if (input == 2){
            row_diagonal(lado, m);
        }
        else if (input == 3){
            column_diagonal(lado, m);
        }
        
        scanf("%d",&input);
    }
    
    
    return 0;
    
}