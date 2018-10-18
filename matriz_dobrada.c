
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void imprimir(int n, int v[n][n]){
    
    
}


int main(){

    srand(time(NULL));  
    
    int r = 1;
    while(r % 2 != 0){
        r = rand() % 10;
    }


    r = 4;
    
    printf("%d\n",r);
    int v[r][r];
    
    
    int i,j;
    for(i=0; i<r; i++){
        for(j=0; j<r; j++){
            v[i][j] = rand() % 10;
        }
    }
    
    
    for(i=0; i<r; i++){
        for(j=0; j<r; j++){
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    int v2[r][r/2];
    
    
    for(i = 0; i<r; i++){
        for(j=0; j<r/2; j++){
            v2[i][j] = v[i][j] + v[i][r - j - 1];
        }
    }
    
    
    for(i=0; i<r; i++){
        for(j=0; j<r/2; j++){
            printf("%d ",v2[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    int v3[r/2][r/2];
    

    for(i = 0; i<r/2; i++){
        for(j=0; j<r/2; j++){
            v3[i][j] = v2[r - i - 1][j] + v2[i][j];
        }
    }
    
    
    for(i=0; i<r/2; i++){
        for(j=0; j<r/2; j++){
            printf("%d ",v3[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\n");
    
    
    
    
    
    
    return 0;
    
}