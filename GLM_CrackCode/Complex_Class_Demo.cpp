// CPP example to illustrate the reflection of a point about a line 
#include <iostream> 
#include <complex> 
  
using namespace std; 
  
//typedef complex<double> point; 
//#define x real() 
//#define y imag() 
  

  
// Function used to display X and Y coordinates of a point 
void displayPoint(complex<int> P) 
{ 
    cout << "(" << real(P) << ", " << imag(P) << ")" << endl; 
} 
  
// Function for Reflection of P about line AB 

  
int main() 
{ 
    // Rotate P about line AB 
    complex<int> P(4.0, 7.0); 
    complex<int> A(1.0, 1.0); 
    complex<int> B(3.0, 3.0); 

    
    displayPoint(P);
    displayPoint(A);
  
    return 0; 
} 
