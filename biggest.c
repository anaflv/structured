
#include <stdio.h>
#include <time.h>


int semente; // declare a semente como variável global do programa


int rand2() {
    int lim = 99999;
    
    semente = (semente * 32719 + 3) % 32749;
    return ((semente % lim) + 1);
}

int main(){
    
    int r = rand() % 20;
    
    n = 4;
    int m[n][n];
    
    return 0;
    
}