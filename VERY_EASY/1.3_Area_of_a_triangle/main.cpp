#include <iostream>
using namespace std;

int triArea(int base, int height) {
	return (base * height) / 2;
}

int main()
{
    cout << triArea(5, 10) << " should equal to: " << 25 << endl;
    cout << triArea(25, 4) << " should equal to: " << 50 << endl;
    
	return 0;
}
