#include<iostream>
#include <conio.h>
#include <cmath>
using namespace std;


int main()

{	
	int a,b,c, BillA,BillB,BillC, TotalAmtA,TotalAmtB,TotalAmtC;
	char choice;
	cout << "Welcome to the fastest internet service in the Philippines! \n";
	
	cout << "Please choose your preferred package: \n";
	cout << "Package A:For P995/mo 10 hrs of access are provided. Additional hours are P20/hr. \n";
	cout << "Package B:For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr. \n";
	cout << "Package C:For P1995/mo of unlimited access is provided. \n";
	
	cin >> choice;
	
	switch (choice)
	{
	case 'A':
	case 'a':
		BillA = 995;
		cout << "You've purchased Package A. \n "; 
		cout<< "Enter number of hours: "; cin>> a;
					
			if (a < 10)
			(TotalAmtA = ((10-a)*20) - BillA);
						
			if (a > 10)
		   	(TotalAmtA = ((a-10)*20) + BillA);
							
			if (TotalAmtA < BillA )
			cout << "TOTAL AMOUNT DUE: " << BillA << endl; 
			if (TotalAmtA > BillA )
			cout << "TOTAL AMOUNT DUE: " << TotalAmtA << endl;
						
			cout << "The total amount of hours: " << a<< endl;
			cout << "Thank you for trusting our company! \n";
			break; 
				
				
	case 'B':
	case 'b':
		BillB = 1495;
		cout << "You've purchased Package B. \n "; 
		cout<< "Enter number of hours: "; cin>> b;
					
			if (b > 20)
			(TotalAmtB = ((b-20)*10) + BillB);
						
			if (b < 20)
			(TotalAmtB = ((20-b)*10) - BillB);
								
			if (TotalAmtB < BillB )
			cout << "TOTAL AMOUNT DUE: " << BillB << endl; 
			if (TotalAmtB > BillB )
			cout << "TOTAL AMOUNT DUE: " << TotalAmtB << endl;
						
		    cout << "The total amount of hours: " << b<< endl;
			cout << "Thank you for trusting our company! \n";
			break; 
				
	case 'C':
	case 'c':
		BillC = 1995;
		cout << "You've purchased Package C. \n "; 
		cout<< "Enter number of hours: "; cin>> c;
					
			if (c > 1)			
			(TotalAmtC = BillC);
			cout <<"TOTAL AMOUNT DUE: "<< TotalAmtC << endl;
				
			cout << "The total amount of hours: " << c<< endl;
			cout << "Thank you for trusting our company! \n";
			break; 
				
	}
		return 0;
		
}
