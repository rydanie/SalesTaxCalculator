//written Ryley Ryley Danielson
#include <iostream> // comes from standard library
#include <iomanip>
#include <string>

using namespace std; //includes std tag for operations from standard library

int main()
{
	
	//tax program variables
	double dblBasePrice = 0.0;
	double dblFinalPrice = 0.0;
	double dblSalesTaxRate = 0.0;
	double dblSalesTax = 0.0;
	string name = "";

	//input
	cout << setprecision(2) << fixed; // Set precision of output decimals
	cout << "Please enter the item name: ";
	getline(cin, name);
	cout << "Please enter the base price of the object: ";
	cin >> dblBasePrice;
	cout << "Please enter an the tax rate (ex: 0.07): ";
	cin >> dblSalesTaxRate;

	//process: Calculate sales tax
	dblSalesTax = dblBasePrice * dblSalesTaxRate;
	dblFinalPrice = dblSalesTax + dblBasePrice;

	//output: Shows name and calculated price to the user
	cout << "\nThe Item: " << name << endl;
	cout << "Cost $" << dblFinalPrice << endl;
	cout << "\nPress ENTER to continue...";
	cin.get();
	cin.get();

	return 0;
}