
#include <stdio.h>
#include <stdbool.h>



bool redacted(const char *doc1, const char *doc2)
{

    printf("doc1:%s\n",doc1);
    printf("doc2:%s\n",doc2);

    int i;
    i = 0;
    
    while(doc1[i] != '\0' && doc2[i] != '\0'){
      
      if(doc1[i] != doc2[i]){
        if(doc1[i] != 'X' || doc2[i] == '\n'){
          return false;
        }
      }
      
      i++;
    }
    
    if(doc1[i] == '\0' && doc2[i] != '\0'){
      return false;
    }
    if(doc2[i] == '\0' && doc1[i] != '\0'){
      return false;
    }
    
    return true;
}



    

int main(){
    
    redacted(" \n\n\nLine1\nXXXXX\n"," Line1\nLine2\n\n");
    
    
    return 0;
    
}


