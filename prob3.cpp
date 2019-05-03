#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>

using namespace std;
int main()
{
	int x, y;
	const float z = 2.5;
	float V;
	
	cout << "Input x value: "; cin >> x;
	cout << "Input y value: "; cin >> y;
	
	switch(x)
	{
		case 1: 
		  if (1 < y < 5)
		  (V = x * y * z);
		
		  if (y >= 5)
		  (V = x + y / z);
		break;
		
		case 2:
		  if (y <= 5)
		  (V = (fabs(x - y / z)));
		  
		  if (y > 5)
		  (V = x - (sqrt(y + z)));
		break;
	    
	    default:
	      (V = x + y + z);
	    break;
	}
	
	cout << "V = " << setw(10) << fixed << setprecision(2) << V;
	
	_getch();
	return 0;
	
}
