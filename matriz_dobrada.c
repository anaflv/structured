
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void imprimir(int n1, int n2, int v[n1][n2]){
    
    
    int i,j;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("%02d ",v[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
}


int main(){

    srand(time(NULL));  
    
    int r = 1;
    while(r % 2 != 0){
        r = rand() % 10;
    }


    
    printf("%d\n",r);
    int v[r][r];
    
    
    int i,j;
    for(i=0; i<r; i++){
        for(j=0; j<r; j++){
            v[i][j] = rand() % 10;
        }
    }
    
    imprimir(r, r, v);
    
    int v2[r][r/2];
    
    
    for(i = 0; i<r; i++){
        for(j=0; j<r/2; j++){
            v2[i][j] = v[i][j] + v[i][r - j - 1];
        }
    }
    
    
    imprimir(r, r/2, v2);
    
    
    int v3[r/2][r/2];
    

    for(i = 0; i<r/2; i++){
        for(j=0; j<r/2; j++){
            v3[i][j] = v2[r - i - 1][j] + v2[i][j];
        }
    }
    
    
    imprimir(r/2, r/2, v3);
    
    printf("\n");
    
    
    return 0;
    
}