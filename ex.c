


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
    scanf("%d",&i &j);
    
    printf("%d\n",i+j);
}

void soma2(){
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    
    
    printf("%d\n",a+b+c);
}




int main(){
    
    int n;
    int *v;
    
    printf("Operação? ");
    scanf("%d",&n);
    
    if(n == 1){
        soma();
    } else if (n == 2){
        soma2();
    }
    

}



