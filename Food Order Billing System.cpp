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

	//Input
	cout << "\nPlease enter the number of the item you want to order (1-6): ";
	cin >> menuChoice;

	cout << "\nPlease enter the quantity: ";
	cin >> quantity;

	//Switch case to determine price based on menu choice
	switch (menuChoice)
	{
		case 1:
			price = PASTA_PRICE;
			break;
		case 2:
			price = BURGER_PRICE;
			break;
		case 3:
			price = PIZZA_PRICE;
			break;
		case 4:
			price = SANDWICH_PRICE;
			break;
		case 5:
			price = FRIES_PRICE;
			break;
		case 6:
			price = DRINK_PRICE;
			break;
		default:
			cout << "Invalid choice. Please select a valid menu item." << endl;
			return 1; //Exit the program if invalid choice
	}

	//Calculate total
	total = price * quantity;

	//Apply discount if price is above R200
	double finalTotal = (total >= 200) ? total * 0.9 : total;

	//Output
	cout << fixed << setprecision(2);
	cout << "\nYour order summary:" << endl;
	cout << "----------------------------------------" << endl;
	cout << "Item: " << (menuChoice == 1 ? "Pasta" : menuChoice == 2 ? "Burger" : menuChoice == 3 ? "Pizza" : menuChoice == 4 ? "Sandwich" : menuChoice == 5 ? "Fries" : "Drink") << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Price per item: R" << price << endl;
	cout << "Total before discount: R" << total << endl;
	cout << "Discount applied: " << (total >= 200 ? "10%" : "0%") << endl;
	cout << "Final total: R" << finalTotal << endl;
	cout << "----------------------------------------" << endl;
	cout << "Thank you for your order!" << endl;
    
    return 0;
}
