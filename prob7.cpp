#include <iostream>
using namespace std;

int main()
{
    int x, y, z = 0; // x = 1 (increment), y = input, z = 0

    cout << "Enter a positive integer: ";
    cin >> y;

    for (x = 1; x <= y; ++x) // 1 <= input pre-increment 1 (if input 1 = 1, if input 2 = 1 + (1 + 2))
	{ 
        z += x; // 1 = (z = z + x), 2  = (1 + (z = z + x)
    }

    cout << "The sum of all whole numbers from 1 to "<< y << " is "<< z << ".";
    return 0;
}
