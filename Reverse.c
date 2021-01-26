#include <stdio.h> 
#include <string.h>

void FirstReverse(char str[]) {
    char inverted[strlen(str)];
    int j = 0;
  for(int i = strlen(str) -1; i >= 0; i--){
    inverted[j] = str[i];
    j++;
  }
  inverted[j] = '\0';
  printf("%s", inverted); 
}

int main(void) { 
  
  // keep this function call here
  FirstReverse(gets(stdin));
  return 0;
    
}