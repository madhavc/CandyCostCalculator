//Madhav Chhura
//CS256
//01-12-2014

//This program helps calculate the total cost of candy including tax.
//The user enter the unit price of the pack of candy and total how many
//packs purchased then the program calculates the total cost including 
//the sales tax of 8.5%. 


	#include <iostream>
	#include <cstdio>
	using namespace std;
	
	int main()
	{
		const double SALES_TAX = 0.085;
		double candyCost, subTotal, totalCost, taxTotal;
		int unit;

		cout << "What is the price for a pack of candy? (in dollars)\n";
		cin >> candyCost;
		
		cout << "How many packs you'd buy?\n";
		cin >> unit;
		
		subTotal = candyCost * unit;
		taxTotal = subTotal * SALES_TAX;
		totalCost = subTotal + taxTotal;
		
		cout << "Here's your cost.\n" ;
		cout <<	"Subtotal:        $";
		printf("%.2f\n", subTotal);
		cout <<	"Tax:             $";
		printf("%.2f\n", taxTotal);
		cout << "Total            $";
		printf("%.2f\n", totalCost);
	}
	
