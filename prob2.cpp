#include<iostream>
#include <conio.h>
#include <cmath>
using namespace std;


int main()

{	int gallonsused, unpaidbalance;

    cout << "Water Bill Calculator \n";
	cout << "Please input no. of gallons used: "; cin >> gallonsused;
	cout << "Please input (if any, write 0 if none) unpaid balance: "; cin >> unpaidbalance;

	if (unpaidbalance > 0)
	  cout << "TOTAL BILL = " << 35 + (1.10 * gallonsused) + 20 << endl;
	else
	  cout << "TOTAL BILL = " << 35 + (1.10 * gallonsused) << endl;

	return 0;
}
	
	
