
/*

Write a function called repeatStr which repeats the given string string exactly n times.

*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *repeat_str(int count, const char *src) {
  
  int i,j;
  int c = 0;
  
  while(src[c] != '\0'){
    c++;
  }
  
  char *new_str = calloc(c * sizeof(char) * count);
  
  i = 0;
  while(i<(count*c)){
    for(j=0;j<c;j++){
      new_str[i] = src[j];
      i++;
    }
  }
  
  return new_str;
}


int main(){
    
    printf("%s",repeat_str(34,"*a%%Dv6&8(c&lJpV8HCgCicWjdHJ#$8!"));
    printf("%s",repeat_str(9,"mpGNKC5IO1dIGy0NlLA(oWR1dKtW(jKU"));
}