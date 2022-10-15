#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, cubeRoot;
    
    
    cout << "Enter a number to find cube root: ";
    cin >> n;
    
   
    cubeRoot = pow(n, 1.0/3.0);
    
    
    cout << "Cube root of " << n << " is: " << cubeRoot;
    return 0;
}
