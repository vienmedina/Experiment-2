#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int r, c;
	bool z = false;

do 
{
		
	cout << "How many rows?: "; cin >> r;
	cout << "How many columns?: "; cin >> c;
    	
    	if (r < 0 || c < 0)
    	
			{
				cout << "Invalid input! \n\n";
				break;
			}
			
		else
		
			{
   		 	for (int a = 0; a < r; a++) 
    			{
   		 		cout << "\n*";
 					for (int b = 1; b < c; b++) 
    				{
    				cout << "*";
					}
				}
			}
		
		cout << "\n\n";
		
} 
	while (!z);
    
    _getch();
    return 0;
}
