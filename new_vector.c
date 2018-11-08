#include <stdio.h>
#include <stdlib.h>



void adiciona_ordenado(int* dest, int *inicial, int n, int novo_num){


    
    int a = 0;
    int i;
    
    for(i = 0; i < n+1; i++){
        
        if((novo_num < inicial[a] && a == i) || (a == n)){
            dest[i] = novo_num;
            i++;
        } 

        dest[i] = inicial[a++];
        
    }
    
    
}


int main(){
    
    
    int novo;
    
    int *inicial;
    int *dest;
    
    
    inicial = malloc(5 * sizeof(int));
    dest = malloc((5 + 1) * sizeof(int));
    
    int i;
    
    for(i=0;i<5;i++){
        scanf("%d",&inicial[i]);
        
    }
    
    adiciona_ordenado(dest, inicial, 5, 500);

    
    for(i=0;i<6;i++){
        printf("%d ",dest[i]);
        
    }
    
    
    return 0;
    
}