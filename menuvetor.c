
// Ana Flávia de Araujo
//11024513

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


//todo: change all function names to english
//to compile: gcc -Wall menuvetor.c -o menuvetor -lm



void le(double *v, int n){
    int i;
    for(i=0; i<n; i++){
        scanf("%lf",&v[i]);
    }
    
}

bool check(double *v, int a, int b){
    
    if(a >= b){
        return true;
    } else if(v[a] != v[b]){
        return false;
    } else {
        check(v, a+1, b-1);
    }
    
    return true;
}


void imprime(double  *v, int n){
    
    int i;
    for(i=0; i<n-1; i++){
        printf("%0.1lf ", v[i]);
    }
    printf("%0.1lf\n",v[n-1]);
}


double euclidean(double *v, int n){
    
    double b;
    double s = 0;
    int i;
    i =0;
    
    
    for(i = 0; i<n/2; i++){
        b = v[i] - v[n/2 + i];
        s += b*b;
    }
    
     
    s = sqrt (s);
    return s;
}



void invert(double *v, int a, int b){
    
    if(a < b){
        double i;
        i = v[a];
        v[a] = v[b];
        v[b] = i;
        invert(v, a + 1, b -1);
    }
}


void sum_inverted(double *v, int n){
    
    
    invert(v, n/2, n-1);
    
    int i;
    for (i = 0; i < n/2 - 1; i++){
        printf("%0.1lf ", v[i] + v[n/2 + i]);
    }
    
    printf("%0.1lf\n",v[i] +  v[n/2 + i]);
    
    invert(v, n/2, n-1);
    
}


int main(){
    
    int n, next;
    scanf("%d",&n);
    
    double *v;
    v = malloc (n * sizeof (double));
    le(v,n);
    
    printf("Operacao? ");
    scanf("%d",&next);
    
    
    while (next != 0){
        
        if(next == 1){
            
            if(check(v,0,n-1) == true) {
                printf("SIM\n");
            } else printf("NAO\n");
        }
        
        else if(next == 2){
            
            if(n % 2 != 0){
                printf("ERRO\n");
            } else {
                double e = euclidean(v, n);
                printf("%0.1lf\n",e);
            }
        }
        
        else if (next == 3){
            
            if(n % 2 != 0){
                printf("ERRO\n");
            } else {
                sum_inverted(v, n);
            }
        }
        else if (next == 4){
            imprime(v, n);
        }

        printf("Operacao? ");
        scanf("%d",&next);
    }
    
        
    printf("FIM\n");
    
    return 0;
}



