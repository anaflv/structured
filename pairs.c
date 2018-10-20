/*

• Faça uma função recursiva que receba um
vetor de inteiros e retorne quantos números
são pares.
int conta_pares(int v[], int n);
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>




int conta_pares(int v[], int n){
    
    int a;
    a = v[n] % 2 == 0 ? 1 : 0;
    
    if(n <= 0){
        return a;
    }
    
    return a + conta_pares(v,n - 1);
}



int main(){
    
    srand(time(NULL));  
    
    int n = 6;
    int v[n];
    
    int i;
    int r;
    
    for(i=0; i<n; i++){
        r = rand() % 10;
        v[i] = r;
        printf("%d ",v[i]);
    }
    
    int p = conta_pares(v,n-1);
    printf("\n%d",p);

    
    return 0;
    
}