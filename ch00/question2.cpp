#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // pointer str points to const string literal "Hello". 
    // No need to declare size. 
    const char* str1 = "This is GeeksForGeeks"; 
  
    cout << str1 << endl; 
  
    int size = 30; 
  
    // can allocate size dynamically. 
    const char* str2 = (char*)malloc(sizeof(char) * size); 
  
    str2 = "GeeksForGeeks For Everyone"; 
  
    cout << str2<<endl; 
    
    str2 = "ABC";
    cout<< str2 << endl;
  
    return 0; 
} 
