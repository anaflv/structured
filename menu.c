
// Ana Flávia de Araujo
//11024513


#include <stdlib.h>
#include <stdio.h>



int sum1(){
    int i,j,r;
    
    scanf("%d %d",&i,&j);
    r = i+j;
    printf("%d",r);
    
    return r;
}

int sum2(){
    int a,b,c,r;
    scanf("%d %d %d",&a, &b, &c);
    r = a+b+c;
    printf("%d",r);
    
    return r;
}

int mult(){
    int a,b,r;
    scanf("%d %d",&a, &b);
    
    r = a*b;
    printf("%d",r);
    return r;
}




int main(){
    
    int n, x, lowest;
    
    printf("Operacao? ");
    scanf("%d",&n);
    
    
    lowest = 10000;
    
    while(n!=0){
        
        if(n == 1){
            x = sum1();
            if (x < lowest) lowest = x;
            
        } else if (n == 2){
            x = sum2();
            if(x < lowest) lowest = x;
            
        } else if (n == 3){
            x = mult();
            if(x < lowest) lowest = x;
            
        }
        
        printf("\nOperacao? ");
        scanf("%d",&n);
    }
    
    printf("%d\n",lowest);
    
    return 0;
}



