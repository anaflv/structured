


#include <stdlib.h>
#include <stdio.h>



void le(int *v, int n){
    int i;
    for(i=0; i<n; i++){
        scanf("%d ",&v[i]);
    }
    
}

void soma(){
    int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
    
    printf("%d\n",i+j);
    
    
}


int main(){
    
    int n;
    int *v;
    
    scanf("%d",&n);
    
    if(n == 1){
        soma();
    }
    

}



