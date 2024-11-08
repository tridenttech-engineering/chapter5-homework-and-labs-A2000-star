//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double DISCOUNT_RATE = 0.5;
 	double  ITEM1 = 0.00;
	double  ITEM2 = 0.00;
	double  TOTAL = 0.00;
	

	cout << "enter cost for item 1: ";
	cin >> ITEM1;
	cout << "enter cost for item 2: ";
	cin >> ITEM2;

	
if (ITEM1 < ITEM2) 
	TOTAL = ITEM2 + (ITEM1 * DISCOUNT_RATE);
else 
	TOTAL = ITEM1 + (ITEM2 * DISCOUNT_RATE);
	

cout << fixed << setprecision(2);
cout << "TOTAL:  " << TOTAL << endl;
return 0;
}	//end of main function