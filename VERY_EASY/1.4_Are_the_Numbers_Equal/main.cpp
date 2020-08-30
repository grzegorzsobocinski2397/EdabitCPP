#include <iostream>
using namespace std;

bool isEqual(int num1, int num2) {
	return num1 == num2;
}

int main(){
    cout << boolalpha;
    cout << isEqual(10, 10) << " should equal to: " << true << endl;
    cout << isEqual(25, 4) << " should equal to: " << false << endl;
    
	return 0;
}
