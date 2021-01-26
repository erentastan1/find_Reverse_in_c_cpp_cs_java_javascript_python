#include <iostream>
using namespace std;

string FirstReverse(string str) { 

  // code goes here   
  for(int i=0,j=str.length()-1;i<str.length()/2;i++,j--)
  {
    str[i]^=str[j]^=str[i]^=str[j];
  }
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << FirstReverse(gets(stdin));
  return 0;
    
}