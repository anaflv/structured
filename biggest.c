
// Faça uma função recursiva que receba um
// vetor de double e retorne qual é o maior valor
// neste vetor:


#include <stdio.h>
#include <stdlib.h>



int max(int a, int b) {
    return a > b ? a : b;
}


int max_array(int *p, size_t size)
{
    if (size > 1)   return max(p[size-1], max_array(p, size-1));
    else            return *p;
}


int main(){
    

    int *p;
    p = malloc (5 * sizeof(int));
    
    int d = max_array(p, 5);
    
    
    printf("\n%d",d);
    
    return 0;
    
}


