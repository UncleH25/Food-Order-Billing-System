#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Variables
	const double PASTA_PRICE = 54.50;
	const double BURGER_PRICE = 45.00;
	const double PIZZA_PRICE = 60.00;
	const double SANDWICH_PRICE = 30.00;
	const double FRIES_PRICE = 20.00;
	const double DRINK_PRICE = 15.00;

	int menuChoice;
	int quantity;
	double price = 0.0;
	double total = 0.0;

	//Display menu
	cout << "Welcome to the Food Order Billing System!" << endl;
	cout << "Our Menu" << endl;
	cout << "----------------------------------------" << endl;
	cout << "1. Pasta - R" << fixed << setprecision(2) << PASTA_PRICE << endl;
	cout << "2. Burger - R" << fixed << setprecision(2) << BURGER_PRICE << endl;
	cout << "3. Pizza - R" << fixed << setprecision(2) << PIZZA_PRICE << endl;
	cout << "4. Sandwich - R" << fixed << setprecision(2) << SANDWICH_PRICE << endl;
	cout << "5. Fries - R" << fixed << setprecision(2) << FRIES_PRICE << endl;
	cout << "6. Drink - R" << fixed << setprecision(2) << DRINK_PRICE << endl;
    
    return 0;
}
