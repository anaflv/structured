
// Ana Flávia de Araujo
//11024513


#include <stdio.h>
#include <string.h>

#include <stdlib.h>


char* reverse(char* n, int a, int b){
    
    if(b <= a){
        return n;
    }
    
    char c = n[a];
    n[a] = n[b];
    n[b] = c;
    reverse(n, a+1, b-1);
}


int main(){
    
    
    char* n;
    n = malloc(5 * (sizeof (char)));
    
    scanf("%s",n);
    int i = strlen(n);
    
    n = reverse(n, 0, strlen(n) - 1);
    printf("%s",n);
    
    free(n);
    
    return 0;
}



