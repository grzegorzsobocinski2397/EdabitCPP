#include <iostream>
using namespace std;

int addition(int a) {
	return a + 1;
}

int main(){
    cout << addition(5) << " should equal to: " << 6 << endl;
    cout << addition(25) << " should equal to: " << 26 << endl;
    cout << addition(-5) << " should equal to: " << -4 << endl;
    
	return 0;
}
