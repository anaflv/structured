
// Faça uma função recursiva que receba um
// vetor de double e retorne qual é o maior valor
// neste vetor:


#include <stdio.h>
#include <stdlib.h>

//finish!!!

int s(char* c, int n){
    
    if(c[n] == '\0'){
        return 0;
    }
    
    return 1 + s(c, n-1);
}


int main(){

    char* m;
    m = malloc(100 * sizeof(char));
    
    
    scanf("%s",m);    
    
    
    int size = s(m, 4);
    printf("%d",size);

    return 0;
    
}


