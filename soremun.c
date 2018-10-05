
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
    
    char* n;
    int x, lowest;
    
    scanf("%s",n);
    
    
    int *v;
    v = malloc (10 * sizeof (int));
    
    char *a;
    a = malloc(4 * sizeof (char));
    
    
    printf("%c",a[0]);

    
    
    return 0;
}



