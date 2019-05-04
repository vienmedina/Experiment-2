#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, y, z = 0;
do
{
    cout << "Enter a positive integer: ";
    cin >> y;
    z = 0;
    
    
    if (y <= 0) {
    cout << "Thank you!\n";
	break;
	}
    
    
    else {
    	for (x = 1; x <= y; x++) { 
        z += x; 
       }    
   }
        cout << "The sum of all whole numbers from 1 to "<< y << " is "<< z << "." << "\n\n";
        
} while (y>0);

    _getch();
    return 0;

