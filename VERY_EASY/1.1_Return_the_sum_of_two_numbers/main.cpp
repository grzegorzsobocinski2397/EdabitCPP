#include <iostream>
using namespace std;
 
int addition(int a, int b) {
     return a + b;
 }
 
int main() {
    cout << addition(5, 10) << " should equal to: " << 15 << endl;
    cout << addition(25, 10) << " should equal to: " << 35 << endl;
    cout << addition(-5, 10) << " should equal to: " << 5 << endl;
    
    return 0;
 }
