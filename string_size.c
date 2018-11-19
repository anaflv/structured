

#include <stdio.h>
#include <stdlib.h>


int s(char* c, int n){
    

    if(c[n] == '\0'){
        return 0;
    }
    
    return 1 + s(c, n+1);
}


int main(){

    char* m;
    m = malloc(100 * sizeof(char));
    scanf("%s",m);    
    
    int size = s(m, 0);
    printf("%d",size);

    return 0;
    
}


