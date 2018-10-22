
#include <stdio.h>


//Unfinished!!

void hex_conversion(int n){
    
    int a;
    if(a % 16 == 0){
        printf("%i",a);
    } else {
        printf("%i",a % 16);
        hex_conversion(a % 16);
    }
}

    

int main(){
    
    
    hex_conversion(333);
    
    return 0;
    
}


