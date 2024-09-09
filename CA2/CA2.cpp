/*
output:
total sales
state tax (dollars)
county tax (dollars)
tax paid (dollars)
*/

#include <iostream>
using namespace std;

int main()
{
	double NetProfit = 95000;
	double STaxRate = 0.4;
	double CTaxRate = 0.2;
	double TotalTax, TotalSTax, TotalCTax, TotalProfit = NetProfit;

	TotalSTax = NetProfit * STaxRate;
	TotalCTax = NetProfit * CTaxRate;
	TotalTax = TotalCTax + TotalSTax;
	TotalProfit -= TotalTax;

	cout << "Your net profit: +$" << NetProfit << endl;
	cout << "Taxes owed to state:  -$" << TotalSTax << endl;
	cout << "Taxes owed to county: -$" << TotalCTax << endl;
	cout << "--------------------- " << endl;
	cout << "Your total profit: =$" << TotalProfit << endl;
}

/*
output:
Your net profit: +$95000
Taxes owed to state:  -$38000
Taxes owed to county: -$19000
---------------------
Your total profit: =$38000
*/
