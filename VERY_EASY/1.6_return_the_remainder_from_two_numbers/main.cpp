#include <iostream>
using namespace std;

int remainder(int x, int y) {
	return x % y;
}

int main()
{
    cout << remainder(1, 3) << " should equal to: " << 1 << endl;
    cout << remainder(3, 4) << " should equal to: " << 3 << endl;
    cout << remainder(-9, 45) << " should equal to: " << -9 << endl;
    cout << remainder(5, 5) << " should equal to: " << 0 << endl;

    return 0;
}
