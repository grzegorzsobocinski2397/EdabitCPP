#include <iostream>
using namespace std;

int findPerimeter(int length, int width) {
	return length * 2 + width * 2;
}

int main()
{
    cout << findPerimeter(6, 7) << " should equal to: " << 26 << endl;
    cout << findPerimeter(20, 10) << " should equal to: " << 60 << endl;
    cout << findPerimeter(2, 9) << " should equal to: " << 22 << endl;
    
    return 0;
}
