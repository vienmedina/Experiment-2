#include <iostream>
using namespace std;

int main()
{
    int n;
    
    for (n = 1; n < 10; n++)
    {
    	cout << n << ",";
	}
    
    for (n = 10; n <= 30; n+=2)
    {
    	cout << n << ",";
	}
    
    cout << "\b ";
    
	return 0;
} 
