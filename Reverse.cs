using System;

class MainClass {
  public static string FirstReverse(string str) { 
  
    // code goes here  
    /* Note: In C# the return type of a function and the 
       parameter types being passed are defined, so this return 
       call must match the return type of the function.
       You are free to modify the return type. */
    
    string sol = "";
    foreach(char c in str){
        sol = c + sol;
        
    }
    
    return sol;
            
  }

  static void Main() {  
    // keep this function call here
    Console.WriteLine(FirstReverse(Console.ReadLine()));
  } 
   
}