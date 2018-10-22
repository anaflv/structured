
#include <string.h>
#include <stdlib.h>
#include <stdio.h>



#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *repeat_str(int count, const char *src) {
  
  int i,j;
  int c = 0;
  
  
  
  while(src[c] != '\0'){
    c++;
  }
  printf("%s\n",src);
  printf("c:%d\n",c);
  printf("count:%d\n",count);

  char *new_str = malloc(c * sizeof(char));
  
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
    
    printf("%s",repeat_str(3,"hello "));
}